// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestTop_L2L3L2.h for the primary calling header

#include "VTestTop_L2L3L2__pch.h"
#include "VTestTop_L2L3L2_SinkC.h"
#include "VTestTop_L2L3L2__Syms.h"

VL_INLINE_OPT void VTestTop_L2L3L2_SinkC___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC__0(VTestTop_L2L3L2_SinkC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_SinkC___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((((IData)(vlSelfRef.__PVT___nextPtrReg_T_1) 
                        & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)) 
                       & (IData)(vlSelfRef.__PVT__counter)) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ (IData)(vlSelfRef.io_resp_respInfo_last))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at SinkC.scala:108 assert(last)\n",0);
    }
    vlSelfRef.__PVT__io_refillBufWrite_data_data_REG 
        = vlSelfRef.io_task_bits_bufIdx;
    vlSelfRef.__PVT__io_refillBufWrite_id_REG = (((
                                                   ((IData)(
                                                            (0U 
                                                             != (IData)(vlSelfRef.__PVT__io_refillBufWrite_id_hi))) 
                                                    << 1U) 
                                                   | (0U 
                                                      != 
                                                      (0xfU 
                                                       & ((IData)(vlSelfRef.__PVT___io_refillBufWrite_id_T_1) 
                                                          >> 4U)))) 
                                                  << 2U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (3U 
                                                               & ((IData)(vlSelfRef.__PVT___io_refillBufWrite_id_T_3) 
                                                                  >> 2U)))) 
                                                     << 1U) 
                                                    | (IData)(
                                                              (0U 
                                                               != 
                                                               (0xaU 
                                                                & (IData)(vlSelfRef.__PVT___io_refillBufWrite_id_T_3))))));
    vlSelfRef.__PVT__io_refillBufWrite_valid_REG = 
        ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
         (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_sinkC_ready) 
           & (IData)(vlSelfRef.io_task_valid)) & ((IData)(vlSelfRef.__PVT___newdataMask_T_79) 
                                                  | ((IData)(vlSelfRef.__PVT___newdataMask_T_74) 
                                                     | ((IData)(vlSelfRef.__PVT___newdataMask_T_69) 
                                                        | ((IData)(vlSelfRef.__PVT___newdataMask_T_64) 
                                                           | ((IData)(vlSelfRef.__PVT___newdataMask_T_59) 
                                                              | ((IData)(vlSelfRef.__PVT___newdataMask_T_54) 
                                                                 | ((IData)(vlSelfRef.__PVT___newdataMask_T_49) 
                                                                    | ((IData)(vlSelfRef.__PVT___newdataMask_T_44) 
                                                                       | (0U 
                                                                          != (IData)(vlSelfRef.__PVT__newdataMask_lo))))))))))));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__taskValids_0 = 0U;
        vlSelfRef.__PVT__taskValids_3 = 0U;
        vlSelfRef.__PVT__taskValids_2 = 0U;
        vlSelfRef.__PVT__taskValids_1 = 0U;
    } else {
        if (vlSelfRef.__PVT___T_22) {
            vlSelfRef.__PVT__taskValids_0 = 0U;
        } else if ((((IData)(vlSelfRef.__PVT___nextPtrReg_T_1) 
                     & (IData)(vlSelfRef.io_resp_respInfo_last)) 
                    & ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_sinkC_ready)) 
                       | (IData)(vlSelfRef.__PVT__taskArb_io_out_valid)))) {
            vlSelfRef.__PVT__taskValids_0 = ((1U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode))
                                              ? (IData)(vlSelfRef.__PVT___GEN_82)
                                              : (IData)(vlSelfRef.__PVT___GEN_202));
        }
        if (vlSelfRef.__PVT___T_25) {
            vlSelfRef.__PVT__taskValids_3 = 0U;
        } else if ((((IData)(vlSelfRef.__PVT___nextPtrReg_T_1) 
                     & (IData)(vlSelfRef.io_resp_respInfo_last)) 
                    & ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_sinkC_ready)) 
                       | (IData)(vlSelfRef.__PVT__taskArb_io_out_valid)))) {
            vlSelfRef.__PVT__taskValids_3 = ((1U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode))
                                              ? (IData)(vlSelfRef.__PVT___GEN_85)
                                              : (IData)(vlSelfRef.__PVT___GEN_205));
        }
        if (vlSelfRef.__PVT___T_24) {
            vlSelfRef.__PVT__taskValids_2 = 0U;
        } else if ((((IData)(vlSelfRef.__PVT___nextPtrReg_T_1) 
                     & (IData)(vlSelfRef.io_resp_respInfo_last)) 
                    & ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_sinkC_ready)) 
                       | (IData)(vlSelfRef.__PVT__taskArb_io_out_valid)))) {
            vlSelfRef.__PVT__taskValids_2 = ((1U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode))
                                              ? (IData)(vlSelfRef.__PVT___GEN_84)
                                              : (IData)(vlSelfRef.__PVT___GEN_204));
        }
        if (vlSelfRef.__PVT___T_23) {
            vlSelfRef.__PVT__taskValids_1 = 0U;
        } else if ((((IData)(vlSelfRef.__PVT___nextPtrReg_T_1) 
                     & (IData)(vlSelfRef.io_resp_respInfo_last)) 
                    & ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_sinkC_ready)) 
                       | (IData)(vlSelfRef.__PVT__taskArb_io_out_valid)))) {
            vlSelfRef.__PVT__taskValids_1 = ((1U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode))
                                              ? (IData)(vlSelfRef.__PVT___GEN_83)
                                              : (IData)(vlSelfRef.__PVT___GEN_203));
        }
    }
    if (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_sinkC_ready) 
         & (IData)(vlSelfRef.__PVT__taskArb_io_out_valid))) {
        vlSelfRef.__PVT__taskArb__DOT__lastGrant = vlSelfRef.__PVT__taskArb_io_chosen;
    }
    vlSelfRef.__PVT__beatValids_1_0 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_bufRead_valid)
                                            ? ((1U 
                                                != (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_bufIdx)) 
                                               && (IData)(vlSelfRef.__PVT___GEN_76))
                                            : (IData)(vlSelfRef.__PVT___GEN_76)));
    vlSelfRef.__PVT__beatValids_1_1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_bufRead_valid)
                                            ? ((1U 
                                                != (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_bufIdx)) 
                                               && (IData)(vlSelfRef.__PVT___GEN_77))
                                            : (IData)(vlSelfRef.__PVT___GEN_77)));
    vlSelfRef.__PVT__beatValids_2_1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_bufRead_valid)
                                            ? ((2U 
                                                != (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_bufIdx)) 
                                               && (IData)(vlSelfRef.__PVT___GEN_79))
                                            : (IData)(vlSelfRef.__PVT___GEN_79)));
    vlSelfRef.__PVT__beatValids_3_1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_bufRead_valid)
                                            ? ((3U 
                                                != (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_bufIdx)) 
                                               && (IData)(vlSelfRef.__PVT___GEN_81))
                                            : (IData)(vlSelfRef.__PVT___GEN_81)));
    vlSelfRef.__PVT__beatValids_0_0 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_bufRead_valid)
                                            ? ((0U 
                                                != (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_bufIdx)) 
                                               && (IData)(vlSelfRef.__PVT___GEN_74))
                                            : (IData)(vlSelfRef.__PVT___GEN_74)));
    vlSelfRef.__PVT__beatValids_0_1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_bufRead_valid)
                                            ? ((0U 
                                                != (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_bufIdx)) 
                                               && (IData)(vlSelfRef.__PVT___GEN_75))
                                            : (IData)(vlSelfRef.__PVT___GEN_75)));
    vlSelfRef.__PVT__beatValids_2_0 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_bufRead_valid)
                                            ? ((2U 
                                                != (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_bufIdx)) 
                                               && (IData)(vlSelfRef.__PVT___GEN_78))
                                            : (IData)(vlSelfRef.__PVT___GEN_78)));
    vlSelfRef.__PVT__beatValids_3_0 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_bufRead_valid)
                                            ? ((3U 
                                                != (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_bufIdx)) 
                                               && (IData)(vlSelfRef.__PVT___GEN_80))
                                            : (IData)(vlSelfRef.__PVT___GEN_80)));
    vlSelfRef.__PVT__taskArb__DOT__validMask_3 = ((IData)(vlSelfRef.__PVT__taskValids_3) 
                                                  & (3U 
                                                     > (IData)(vlSelfRef.__PVT__taskArb__DOT__lastGrant)));
    vlSelfRef.__PVT__taskArb__DOT__validMask_2 = ((IData)(vlSelfRef.__PVT__taskValids_2) 
                                                  & (2U 
                                                     > (IData)(vlSelfRef.__PVT__taskArb__DOT__lastGrant)));
    vlSelfRef.__PVT__taskArb__DOT__validMask_1 = ((IData)(vlSelfRef.__PVT__taskValids_1) 
                                                  & (1U 
                                                     > (IData)(vlSelfRef.__PVT__taskArb__DOT__lastGrant)));
    vlSelfRef.taskArb__DOT____VdfgRegularize_he969bb4c_0_2 
        = ((IData)(vlSelfRef.__PVT__taskArb__DOT__validMask_1) 
           | (IData)(vlSelfRef.__PVT__taskArb__DOT__validMask_2));
    vlSelfRef.taskArb__DOT____VdfgRegularize_he969bb4c_0_3 
        = ((IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_he969bb4c_0_2) 
           | (IData)(vlSelfRef.__PVT__taskArb__DOT__validMask_3));
    vlSelfRef.taskArb__DOT____VdfgRegularize_he969bb4c_0_4 
        = ((IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_he969bb4c_0_3) 
           | (IData)(vlSelfRef.__PVT__taskValids_0));
    vlSelfRef.taskArb__DOT____VdfgRegularize_he969bb4c_0_5 
        = ((IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_he969bb4c_0_4) 
           | (IData)(vlSelfRef.__PVT__taskValids_1));
}

VL_INLINE_OPT void VTestTop_L2L3L2_SinkC___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC__1(VTestTop_L2L3L2_SinkC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_SinkC___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__taskArb_io_chosen = ((IData)(vlSelfRef.__PVT__taskArb__DOT__validMask_1)
                                           ? 1U : ((IData)(vlSelfRef.__PVT__taskArb__DOT__validMask_2)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__taskArb__DOT__validMask_3)
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
    if (vlSelfRef.__PVT___nextPtrReg_T_1) {
        if ((1U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode))) {
            if (vlSelfRef.__PVT__counter) {
                if (((0U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                     & (~ (IData)(vlSelfRef.__PVT__beat)))) {
                    vlSelfRef.__PVT__dataBuf_0_0 = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data;
                }
                if (((0U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                     & (IData)(vlSelfRef.__PVT__beat))) {
                    vlSelfRef.__PVT__dataBuf_0_1 = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data;
                }
                if (((1U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                     & (~ (IData)(vlSelfRef.__PVT__beat)))) {
                    vlSelfRef.__PVT__dataBuf_1_0 = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data;
                }
                if (((1U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                     & (IData)(vlSelfRef.__PVT__beat))) {
                    vlSelfRef.__PVT__dataBuf_1_1 = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data;
                }
                if (((2U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                     & (~ (IData)(vlSelfRef.__PVT__beat)))) {
                    vlSelfRef.__PVT__dataBuf_2_0 = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data;
                }
                if (((2U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                     & (IData)(vlSelfRef.__PVT__beat))) {
                    vlSelfRef.__PVT__dataBuf_2_1 = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data;
                }
                if (((3U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                     & (~ (IData)(vlSelfRef.__PVT__beat)))) {
                    vlSelfRef.__PVT__dataBuf_3_0 = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data;
                }
                if (((3U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                     & (IData)(vlSelfRef.__PVT__beat))) {
                    vlSelfRef.__PVT__dataBuf_3_1 = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data;
                }
            } else {
                if (((0U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                     & (~ (IData)(vlSelfRef.__PVT__beat)))) {
                    vlSelfRef.__PVT__dataBuf_0_0 = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data;
                }
                if (((0U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                     & (IData)(vlSelfRef.__PVT__beat))) {
                    vlSelfRef.__PVT__dataBuf_0_1 = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data;
                }
                if (((1U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                     & (~ (IData)(vlSelfRef.__PVT__beat)))) {
                    vlSelfRef.__PVT__dataBuf_1_0 = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data;
                }
                if (((1U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                     & (IData)(vlSelfRef.__PVT__beat))) {
                    vlSelfRef.__PVT__dataBuf_1_1 = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data;
                }
                if (((2U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                     & (~ (IData)(vlSelfRef.__PVT__beat)))) {
                    vlSelfRef.__PVT__dataBuf_2_0 = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data;
                }
                if (((2U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                     & (IData)(vlSelfRef.__PVT__beat))) {
                    vlSelfRef.__PVT__dataBuf_2_1 = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data;
                }
                if (((3U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                     & (~ (IData)(vlSelfRef.__PVT__beat)))) {
                    vlSelfRef.__PVT__dataBuf_3_0 = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data;
                }
                if (((3U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                     & (IData)(vlSelfRef.__PVT__beat))) {
                    vlSelfRef.__PVT__dataBuf_3_1 = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_data;
                }
            }
        }
    }
    if ((((IData)(vlSelfRef.__PVT___nextPtrReg_T_1) 
          & (IData)(vlSelfRef.io_resp_respInfo_last)) 
         & ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_sinkC_ready)) 
            | (IData)(vlSelfRef.__PVT__taskArb_io_out_valid)))) {
        if ((1U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode))) {
            if ((0U == (IData)(vlSelfRef.__PVT__nextPtrReg))) {
                vlSelfRef.__PVT__taskBuf_0_set = (0x7fU 
                                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_address) 
                                                     >> 1U));
                vlSelfRef.__PVT__taskBuf_0_tag = (0xffU 
                                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_address) 
                                                     >> 8U));
                vlSelfRef.__PVT__taskBuf_0_off = (1U 
                                                  & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_address));
                vlSelfRef.__PVT__taskBuf_0_opcode = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode;
                vlSelfRef.__PVT__taskBuf_0_param = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param;
                vlSelfRef.__PVT__taskBuf_0_sourceId 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_source;
                vlSelfRef.__PVT__taskBuf_0_bufIdx = vlSelfRef.__PVT__nextPtrReg;
            } else if ((0U == (IData)(vlSelfRef.__PVT__nextPtrReg))) {
                vlSelfRef.__PVT__taskBuf_0_bufIdx = 0U;
            }
            if ((1U == (IData)(vlSelfRef.__PVT__nextPtrReg))) {
                vlSelfRef.__PVT__taskBuf_1_set = (0x7fU 
                                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_address) 
                                                     >> 1U));
                vlSelfRef.__PVT__taskBuf_1_tag = (0xffU 
                                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_address) 
                                                     >> 8U));
                vlSelfRef.__PVT__taskBuf_1_off = (1U 
                                                  & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_address));
                vlSelfRef.__PVT__taskBuf_1_opcode = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode;
                vlSelfRef.__PVT__taskBuf_1_param = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param;
                vlSelfRef.__PVT__taskBuf_1_sourceId 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_source;
                vlSelfRef.__PVT__taskBuf_1_bufIdx = vlSelfRef.__PVT__nextPtrReg;
            } else if ((1U == (IData)(vlSelfRef.__PVT__nextPtrReg))) {
                vlSelfRef.__PVT__taskBuf_1_bufIdx = 0U;
            }
            if ((2U == (IData)(vlSelfRef.__PVT__nextPtrReg))) {
                vlSelfRef.__PVT__taskBuf_2_set = (0x7fU 
                                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_address) 
                                                     >> 1U));
                vlSelfRef.__PVT__taskBuf_2_tag = (0xffU 
                                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_address) 
                                                     >> 8U));
                vlSelfRef.__PVT__taskBuf_2_off = (1U 
                                                  & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_address));
                vlSelfRef.__PVT__taskBuf_2_opcode = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode;
                vlSelfRef.__PVT__taskBuf_2_param = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param;
                vlSelfRef.__PVT__taskBuf_2_sourceId 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_source;
                vlSelfRef.__PVT__taskBuf_2_bufIdx = vlSelfRef.__PVT__nextPtrReg;
            } else if ((2U == (IData)(vlSelfRef.__PVT__nextPtrReg))) {
                vlSelfRef.__PVT__taskBuf_2_bufIdx = 0U;
            }
            if ((3U == (IData)(vlSelfRef.__PVT__nextPtrReg))) {
                vlSelfRef.__PVT__taskBuf_3_set = (0x7fU 
                                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_address) 
                                                     >> 1U));
                vlSelfRef.__PVT__taskBuf_3_tag = (0xffU 
                                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_address) 
                                                     >> 8U));
                vlSelfRef.__PVT__taskBuf_3_off = (1U 
                                                  & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_address));
                vlSelfRef.__PVT__taskBuf_3_opcode = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode;
                vlSelfRef.__PVT__taskBuf_3_param = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param;
                vlSelfRef.__PVT__taskBuf_3_sourceId 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_source;
                vlSelfRef.__PVT__taskBuf_3_bufIdx = vlSelfRef.__PVT__nextPtrReg;
            } else if ((3U == (IData)(vlSelfRef.__PVT__nextPtrReg))) {
                vlSelfRef.__PVT__taskBuf_3_bufIdx = 0U;
            }
        } else {
            if ((0U == (IData)(vlSelfRef.__PVT__nextPtr))) {
                vlSelfRef.__PVT__taskBuf_0_set = (0x7fU 
                                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_address) 
                                                     >> 1U));
                vlSelfRef.__PVT__taskBuf_0_tag = (0xffU 
                                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_address) 
                                                     >> 8U));
                vlSelfRef.__PVT__taskBuf_0_off = (1U 
                                                  & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_address));
                vlSelfRef.__PVT__taskBuf_0_opcode = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode;
                vlSelfRef.__PVT__taskBuf_0_param = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param;
                vlSelfRef.__PVT__taskBuf_0_sourceId 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_source;
                vlSelfRef.__PVT__taskBuf_0_bufIdx = 
                    ((1U & (IData)(vlSelfRef.__PVT__bufValids))
                      ? (IData)(vlSelfRef.__PVT___nextPtr_T_6)
                      : 0U);
            } else if ((0U == (IData)(vlSelfRef.__PVT__nextPtr))) {
                vlSelfRef.__PVT__taskBuf_0_bufIdx = 0U;
            }
            if ((1U == (IData)(vlSelfRef.__PVT__nextPtr))) {
                vlSelfRef.__PVT__taskBuf_1_set = (0x7fU 
                                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_address) 
                                                     >> 1U));
                vlSelfRef.__PVT__taskBuf_1_tag = (0xffU 
                                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_address) 
                                                     >> 8U));
                vlSelfRef.__PVT__taskBuf_1_off = (1U 
                                                  & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_address));
                vlSelfRef.__PVT__taskBuf_1_opcode = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode;
                vlSelfRef.__PVT__taskBuf_1_param = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param;
                vlSelfRef.__PVT__taskBuf_1_sourceId 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_source;
                vlSelfRef.__PVT__taskBuf_1_bufIdx = 
                    ((1U & (IData)(vlSelfRef.__PVT__bufValids))
                      ? (IData)(vlSelfRef.__PVT___nextPtr_T_6)
                      : 0U);
            } else if ((1U == (IData)(vlSelfRef.__PVT__nextPtr))) {
                vlSelfRef.__PVT__taskBuf_1_bufIdx = 0U;
            }
            if ((2U == (IData)(vlSelfRef.__PVT__nextPtr))) {
                vlSelfRef.__PVT__taskBuf_2_set = (0x7fU 
                                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_address) 
                                                     >> 1U));
                vlSelfRef.__PVT__taskBuf_2_tag = (0xffU 
                                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_address) 
                                                     >> 8U));
                vlSelfRef.__PVT__taskBuf_2_off = (1U 
                                                  & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_address));
                vlSelfRef.__PVT__taskBuf_2_opcode = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode;
                vlSelfRef.__PVT__taskBuf_2_param = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param;
                vlSelfRef.__PVT__taskBuf_2_sourceId 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_source;
                vlSelfRef.__PVT__taskBuf_2_bufIdx = 
                    ((1U & (IData)(vlSelfRef.__PVT__bufValids))
                      ? (IData)(vlSelfRef.__PVT___nextPtr_T_6)
                      : 0U);
            } else if ((2U == (IData)(vlSelfRef.__PVT__nextPtr))) {
                vlSelfRef.__PVT__taskBuf_2_bufIdx = 0U;
            }
            if ((3U == (IData)(vlSelfRef.__PVT__nextPtr))) {
                vlSelfRef.__PVT__taskBuf_3_set = (0x7fU 
                                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_address) 
                                                     >> 1U));
                vlSelfRef.__PVT__taskBuf_3_tag = (0xffU 
                                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_address) 
                                                     >> 8U));
                vlSelfRef.__PVT__taskBuf_3_off = (1U 
                                                  & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_address));
                vlSelfRef.__PVT__taskBuf_3_opcode = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode;
                vlSelfRef.__PVT__taskBuf_3_param = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param;
                vlSelfRef.__PVT__taskBuf_3_sourceId 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_source;
                vlSelfRef.__PVT__taskBuf_3_bufIdx = 
                    ((1U & (IData)(vlSelfRef.__PVT__bufValids))
                      ? (IData)(vlSelfRef.__PVT___nextPtr_T_6)
                      : 0U);
            } else if ((3U == (IData)(vlSelfRef.__PVT__nextPtr))) {
                vlSelfRef.__PVT__taskBuf_3_bufIdx = 0U;
            }
        }
    }
    vlSelfRef.__PVT__taskArb_io_out_valid = ((3U == (IData)(vlSelfRef.__PVT__taskArb_io_chosen))
                                              ? (IData)(vlSelfRef.__PVT__taskValids_3)
                                              : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__taskArb_io_chosen))
                                                  ? (IData)(vlSelfRef.__PVT__taskValids_2)
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelfRef.__PVT__taskArb_io_chosen))
                                                   ? (IData)(vlSelfRef.__PVT__taskValids_1)
                                                   : (IData)(vlSelfRef.__PVT__taskValids_0))));
    vlSelfRef.io_refillBufWrite_data_data = ((((3U 
                                                == (IData)(vlSelfRef.__PVT__io_refillBufWrite_data_data_REG))
                                                ? (IData)(vlSelfRef.__PVT__dataBuf_3_1)
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.__PVT__io_refillBufWrite_data_data_REG))
                                                    ? (IData)(vlSelfRef.__PVT__dataBuf_2_1)
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__io_refillBufWrite_data_data_REG))
                                                     ? (IData)(vlSelfRef.__PVT__dataBuf_1_1)
                                                     : (IData)(vlSelfRef.__PVT__dataBuf_0_1)))) 
                                              << 8U) 
                                             | ((3U 
                                                 == (IData)(vlSelfRef.__PVT__io_refillBufWrite_data_data_REG))
                                                 ? (IData)(vlSelfRef.__PVT__dataBuf_3_0)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__io_refillBufWrite_data_data_REG))
                                                  ? (IData)(vlSelfRef.__PVT__dataBuf_2_0)
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelfRef.__PVT__io_refillBufWrite_data_data_REG))
                                                   ? (IData)(vlSelfRef.__PVT__dataBuf_1_0)
                                                   : (IData)(vlSelfRef.__PVT__dataBuf_0_0)))));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__nextPtrReg = 0U;
        vlSelfRef.__PVT__counter = 0U;
    } else {
        if (((IData)(vlSelfRef.__PVT___nextPtrReg_T_1) 
             & ((~ (IData)(vlSelfRef.__PVT__counter)) 
                & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)))) {
            vlSelfRef.__PVT__nextPtrReg = ((1U & (IData)(vlSelfRef.__PVT__bufValids))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.__PVT__bufValids))
                                                ? (
                                                   (4U 
                                                    & (IData)(vlSelfRef.__PVT__bufValids))
                                                    ? 3U
                                                    : 2U)
                                                : 1U)
                                            : 0U);
        }
        if (vlSelfRef.__PVT___T) {
            vlSelfRef.__PVT__counter = ((IData)(vlSelfRef.__PVT__counter1)
                                         ? (IData)(vlSelfRef.__PVT__beats1)
                                         : (IData)(vlSelfRef.__PVT__counter1));
        }
    }
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
    vlSelfRef.__PVT___GEN_82 = ((0U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                                | (IData)(vlSelfRef.__PVT__taskValids_0));
    vlSelfRef.__PVT___GEN_83 = ((1U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                                | (IData)(vlSelfRef.__PVT__taskValids_1));
    vlSelfRef.__PVT___GEN_84 = ((2U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                                | (IData)(vlSelfRef.__PVT__taskValids_2));
    vlSelfRef.__PVT___GEN_85 = ((3U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                                | (IData)(vlSelfRef.__PVT__taskValids_3));
    vlSelfRef.io_task_bits_bufIdx = ((IData)(vlSelfRef.__PVT__taskArb_io_out_valid)
                                      ? ((3U == (IData)(vlSelfRef.__PVT__taskArb_io_chosen))
                                          ? (IData)(vlSelfRef.__PVT__taskBuf_3_bufIdx)
                                          : ((2U == (IData)(vlSelfRef.__PVT__taskArb_io_chosen))
                                              ? (IData)(vlSelfRef.__PVT__taskBuf_2_bufIdx)
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__taskArb_io_chosen))
                                                  ? (IData)(vlSelfRef.__PVT__taskBuf_1_bufIdx)
                                                  : (IData)(vlSelfRef.__PVT__taskBuf_0_bufIdx))))
                                      : (IData)(vlSelfRef.__PVT__nextPtrReg));
    vlSelfRef.__PVT___nextPtr_T_6 = ((2U & (IData)(vlSelfRef.__PVT__bufValids))
                                      ? ((4U & (IData)(vlSelfRef.__PVT__bufValids))
                                          ? 3U : 2U)
                                      : 1U);
    vlSelfRef.__PVT__nextPtr = ((1U & (IData)(vlSelfRef.__PVT__bufValids))
                                 ? (IData)(vlSelfRef.__PVT___nextPtr_T_6)
                                 : 0U);
    vlSelfRef.__PVT___GEN_202 = ((0U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                                 | (IData)(vlSelfRef.__PVT__taskValids_0));
    vlSelfRef.__PVT___GEN_203 = ((1U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                                 | (IData)(vlSelfRef.__PVT__taskValids_1));
    vlSelfRef.__PVT___GEN_204 = ((2U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                                 | (IData)(vlSelfRef.__PVT__taskValids_2));
    vlSelfRef.__PVT___GEN_205 = ((3U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                                 | (IData)(vlSelfRef.__PVT__taskValids_3));
    vlSelfRef.__PVT__counter1 = (1U & (~ (IData)(vlSelfRef.__PVT__counter)));
}

VL_INLINE_OPT void VTestTop_L2L3L2_SinkC___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC__2(VTestTop_L2L3L2_SinkC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_SinkC___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__taskArb_io_out_valid) {
        if ((3U == (IData)(vlSelfRef.__PVT__taskArb_io_chosen))) {
            vlSelfRef.io_task_bits_tag = (0xffU & (IData)(vlSelfRef.__PVT__taskBuf_3_tag));
            vlSelfRef.io_task_bits_set = (0x7fU & (IData)(vlSelfRef.__PVT__taskBuf_3_set));
            vlSelfRef.io_task_bits_opcode = vlSelfRef.__PVT__taskBuf_3_opcode;
        } else if ((2U == (IData)(vlSelfRef.__PVT__taskArb_io_chosen))) {
            vlSelfRef.io_task_bits_tag = (0xffU & (IData)(vlSelfRef.__PVT__taskBuf_2_tag));
            vlSelfRef.io_task_bits_set = (0x7fU & (IData)(vlSelfRef.__PVT__taskBuf_2_set));
            vlSelfRef.io_task_bits_opcode = vlSelfRef.__PVT__taskBuf_2_opcode;
        } else if ((1U == (IData)(vlSelfRef.__PVT__taskArb_io_chosen))) {
            vlSelfRef.io_task_bits_tag = (0xffU & (IData)(vlSelfRef.__PVT__taskBuf_1_tag));
            vlSelfRef.io_task_bits_set = (0x7fU & (IData)(vlSelfRef.__PVT__taskBuf_1_set));
            vlSelfRef.io_task_bits_opcode = vlSelfRef.__PVT__taskBuf_1_opcode;
        } else {
            vlSelfRef.io_task_bits_tag = (0xffU & (IData)(vlSelfRef.__PVT__taskBuf_0_tag));
            vlSelfRef.io_task_bits_set = (0x7fU & (IData)(vlSelfRef.__PVT__taskBuf_0_set));
            vlSelfRef.io_task_bits_opcode = vlSelfRef.__PVT__taskBuf_0_opcode;
        }
    } else {
        vlSelfRef.io_task_bits_tag = (0xffU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_address) 
                                               >> 8U));
        vlSelfRef.io_task_bits_set = (0x7fU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_address) 
                                               >> 1U));
        vlSelfRef.io_task_bits_opcode = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode;
    }
    vlSelfRef.io_releaseBufWrite_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer__DOT__bundleOut_0_c_q_io_deq_valid) 
                                          & (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)));
    vlSelfRef.__PVT__beats1 = (1U & ((~ ((IData)(1U) 
                                         << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_size))) 
                                     & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)));
    vlSelfRef.__PVT___newdataMask_T_44 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_valid) 
                                          & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_set) 
                                              == (IData)(vlSelfRef.io_task_bits_set)) 
                                             & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_tag) 
                                                 == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__io_status_bits_needsRepl))));
    vlSelfRef.__PVT___newdataMask_T_49 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_valid) 
                                          & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_set) 
                                              == (IData)(vlSelfRef.io_task_bits_set)) 
                                             & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_tag) 
                                                 == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__io_status_bits_needsRepl))));
    vlSelfRef.__PVT___newdataMask_T_54 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_valid) 
                                          & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_set) 
                                              == (IData)(vlSelfRef.io_task_bits_set)) 
                                             & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_tag) 
                                                 == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__io_status_bits_needsRepl))));
    vlSelfRef.__PVT___newdataMask_T_59 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_valid) 
                                          & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_set) 
                                              == (IData)(vlSelfRef.io_task_bits_set)) 
                                             & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_tag) 
                                                 == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__io_status_bits_needsRepl))));
    vlSelfRef.__PVT___newdataMask_T_64 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_valid) 
                                          & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_set) 
                                              == (IData)(vlSelfRef.io_task_bits_set)) 
                                             & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_tag) 
                                                 == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__io_status_bits_needsRepl))));
    vlSelfRef.__PVT___newdataMask_T_69 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_valid) 
                                          & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_set) 
                                              == (IData)(vlSelfRef.io_task_bits_set)) 
                                             & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_tag) 
                                                 == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__io_status_bits_needsRepl))));
    vlSelfRef.__PVT___newdataMask_T_74 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_valid) 
                                          & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_set) 
                                              == (IData)(vlSelfRef.io_task_bits_set)) 
                                             & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_tag) 
                                                 == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__io_status_bits_needsRepl))));
    vlSelfRef.__PVT___newdataMask_T_79 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_valid) 
                                          & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_set) 
                                              == (IData)(vlSelfRef.io_task_bits_set)) 
                                             & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_tag) 
                                                 == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__io_status_bits_needsRepl))));
    vlSelfRef.__PVT__newdataMask_lo = ((((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_valid) 
                                           & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_set) 
                                               == (IData)(vlSelfRef.io_task_bits_set)) 
                                              & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_tag) 
                                                  == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                 & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__io_status_bits_needsRepl)))) 
                                          << 7U) | 
                                         (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_valid) 
                                           & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_set) 
                                               == (IData)(vlSelfRef.io_task_bits_set)) 
                                              & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_tag) 
                                                  == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                 & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__io_status_bits_needsRepl)))) 
                                          << 6U)) | 
                                        ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_valid) 
                                           & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_set) 
                                               == (IData)(vlSelfRef.io_task_bits_set)) 
                                              & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_tag) 
                                                  == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                 & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__io_status_bits_needsRepl)))) 
                                          << 5U) | 
                                         (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_valid) 
                                           & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_set) 
                                               == (IData)(vlSelfRef.io_task_bits_set)) 
                                              & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_tag) 
                                                  == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                 & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__io_status_bits_needsRepl)))) 
                                          << 4U))) 
                                       | (((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid) 
                                             & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_set) 
                                                 == (IData)(vlSelfRef.io_task_bits_set)) 
                                                & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_tag) 
                                                    == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                   & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_status_bits_needsRepl)))) 
                                            << 3U) 
                                           | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid) 
                                               & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_set) 
                                                   == (IData)(vlSelfRef.io_task_bits_set)) 
                                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_tag) 
                                                      == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                     & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_status_bits_needsRepl)))) 
                                              << 2U)) 
                                          | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid) 
                                               & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_set) 
                                                   == (IData)(vlSelfRef.io_task_bits_set)) 
                                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_tag) 
                                                      == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                     & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_status_bits_needsRepl)))) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                                                & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set) 
                                                    == (IData)(vlSelfRef.io_task_bits_set)) 
                                                   & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_tag) 
                                                       == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                      & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_status_bits_needsRepl)))))));
    vlSelfRef.__PVT__beat = ((IData)(vlSelfRef.__PVT__counter) 
                             & (IData)(vlSelfRef.__PVT__beats1));
    vlSelfRef.io_resp_respInfo_last = (1U & ((~ (IData)(vlSelfRef.__PVT__beats1)) 
                                             | (IData)(vlSelfRef.__PVT__counter)));
    vlSelfRef.__PVT__io_refillBufWrite_id_hi = (((((IData)(vlSelfRef.__PVT___newdataMask_T_79) 
                                                   << 7U) 
                                                  | ((IData)(vlSelfRef.__PVT___newdataMask_T_74) 
                                                     << 6U)) 
                                                 | (((IData)(vlSelfRef.__PVT___newdataMask_T_69) 
                                                     << 5U) 
                                                    | ((IData)(vlSelfRef.__PVT___newdataMask_T_64) 
                                                       << 4U))) 
                                                | ((((IData)(vlSelfRef.__PVT___newdataMask_T_59) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.__PVT___newdataMask_T_54) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelfRef.__PVT___newdataMask_T_49) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.__PVT___newdataMask_T_44))));
    vlSelfRef.io_resp_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer__DOT__bundleOut_0_c_q_io_deq_valid) 
                               & ((~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode) 
                                      >> 1U)) & ((~ (IData)(vlSelfRef.__PVT__counter)) 
                                                 | (IData)(vlSelfRef.io_resp_respInfo_last))));
    vlSelfRef.io_task_valid = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer__DOT__bundleOut_0_c_q_io_deq_valid) 
                                & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode) 
                                    >> 1U) & (IData)(vlSelfRef.io_resp_respInfo_last))) 
                               | (IData)(vlSelfRef.__PVT__taskArb_io_out_valid));
    vlSelfRef.__PVT___io_refillBufWrite_id_T_1 = ((IData)(vlSelfRef.__PVT__io_refillBufWrite_id_hi) 
                                                  | (IData)(vlSelfRef.__PVT__newdataMask_lo));
    vlSelfRef.__PVT___io_refillBufWrite_id_T_3 = (0xfU 
                                                  & (((IData)(vlSelfRef.__PVT___io_refillBufWrite_id_T_1) 
                                                      >> 4U) 
                                                     | (IData)(vlSelfRef.__PVT___io_refillBufWrite_id_T_1)));
}

VL_INLINE_OPT void VTestTop_L2L3L2_SinkC___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC__3(VTestTop_L2L3L2_SinkC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_SinkC___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___T_22 = (((~ (IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_he969bb4c_0_3)) 
                               & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_sinkC_ready)) 
                              & (IData)(vlSelfRef.__PVT__taskValids_0));
    vlSelfRef.__PVT___T_23 = ((((~ (IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_he969bb4c_0_4)) 
                                | (1U > (IData)(vlSelfRef.__PVT__taskArb__DOT__lastGrant))) 
                               & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_sinkC_ready)) 
                              & (IData)(vlSelfRef.__PVT__taskValids_1));
    vlSelfRef.__PVT___T_24 = ((((~ (IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_he969bb4c_0_5)) 
                                | ((~ (IData)(vlSelfRef.__PVT__taskArb__DOT__validMask_1)) 
                                   & (2U > (IData)(vlSelfRef.__PVT__taskArb__DOT__lastGrant)))) 
                               & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_sinkC_ready)) 
                              & (IData)(vlSelfRef.__PVT__taskValids_2));
    vlSelfRef.__PVT___T_25 = ((((~ ((IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_he969bb4c_0_5) 
                                    | (IData)(vlSelfRef.__PVT__taskValids_2))) 
                                | ((~ (IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_he969bb4c_0_2)) 
                                   & (3U > (IData)(vlSelfRef.__PVT__taskArb__DOT__lastGrant)))) 
                               & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_sinkC_ready)) 
                              & (IData)(vlSelfRef.__PVT__taskValids_3));
    vlSelfRef.io_c_ready = (1U & ((~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode) 
                                      >> 1U)) | ((IData)(vlSelfRef.__PVT__counter) 
                                                 | ((~ (IData)(
                                                               (0xfU 
                                                                == (IData)(vlSelfRef.__PVT__bufValids)))) 
                                                    | ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)) 
                                                       & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_sinkC_ready))))));
    vlSelfRef.__PVT___T = ((IData)(vlSelfRef.io_c_ready) 
                           & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer__DOT__bundleOut_0_c_q_io_deq_valid));
    vlSelfRef.__PVT___nextPtrReg_T_1 = ((IData)(vlSelfRef.__PVT___T) 
                                        & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode) 
                                           >> 1U));
    if (vlSelfRef.__PVT___nextPtrReg_T_1) {
        if ((1U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode))) {
            if (vlSelfRef.__PVT__counter) {
                vlSelfRef.__PVT___GEN_74 = (((~ (IData)(vlSelfRef.__PVT__beat)) 
                                             & (0U 
                                                == (IData)(vlSelfRef.__PVT__nextPtrReg))) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_0_0));
                vlSelfRef.__PVT___GEN_75 = (((0U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                                             & (IData)(vlSelfRef.__PVT__beat)) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_0_1));
                vlSelfRef.__PVT___GEN_76 = (((~ (IData)(vlSelfRef.__PVT__beat)) 
                                             & (1U 
                                                == (IData)(vlSelfRef.__PVT__nextPtrReg))) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_1_0));
                vlSelfRef.__PVT___GEN_77 = (((1U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                                             & (IData)(vlSelfRef.__PVT__beat)) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_1_1));
                vlSelfRef.__PVT___GEN_78 = (((~ (IData)(vlSelfRef.__PVT__beat)) 
                                             & (2U 
                                                == (IData)(vlSelfRef.__PVT__nextPtrReg))) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_2_0));
                vlSelfRef.__PVT___GEN_79 = (((2U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                                             & (IData)(vlSelfRef.__PVT__beat)) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_2_1));
                vlSelfRef.__PVT___GEN_80 = (((~ (IData)(vlSelfRef.__PVT__beat)) 
                                             & (3U 
                                                == (IData)(vlSelfRef.__PVT__nextPtrReg))) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_3_0));
                vlSelfRef.__PVT___GEN_81 = (((3U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                                             & (IData)(vlSelfRef.__PVT__beat)) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_3_1));
            } else {
                vlSelfRef.__PVT___GEN_74 = (((~ (IData)(vlSelfRef.__PVT__beat)) 
                                             & (0U 
                                                == (IData)(vlSelfRef.__PVT__nextPtr))) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_0_0));
                vlSelfRef.__PVT___GEN_75 = (((0U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                                             & (IData)(vlSelfRef.__PVT__beat)) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_0_1));
                vlSelfRef.__PVT___GEN_76 = (((~ (IData)(vlSelfRef.__PVT__beat)) 
                                             & (1U 
                                                == (IData)(vlSelfRef.__PVT__nextPtr))) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_1_0));
                vlSelfRef.__PVT___GEN_77 = (((1U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                                             & (IData)(vlSelfRef.__PVT__beat)) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_1_1));
                vlSelfRef.__PVT___GEN_78 = (((~ (IData)(vlSelfRef.__PVT__beat)) 
                                             & (2U 
                                                == (IData)(vlSelfRef.__PVT__nextPtr))) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_2_0));
                vlSelfRef.__PVT___GEN_79 = (((2U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                                             & (IData)(vlSelfRef.__PVT__beat)) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_2_1));
                vlSelfRef.__PVT___GEN_80 = (((~ (IData)(vlSelfRef.__PVT__beat)) 
                                             & (3U 
                                                == (IData)(vlSelfRef.__PVT__nextPtr))) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_3_0));
                vlSelfRef.__PVT___GEN_81 = (((3U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                                             & (IData)(vlSelfRef.__PVT__beat)) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_3_1));
            }
        } else {
            vlSelfRef.__PVT___GEN_74 = vlSelfRef.__PVT__beatValids_0_0;
            vlSelfRef.__PVT___GEN_75 = vlSelfRef.__PVT__beatValids_0_1;
            vlSelfRef.__PVT___GEN_76 = vlSelfRef.__PVT__beatValids_1_0;
            vlSelfRef.__PVT___GEN_77 = vlSelfRef.__PVT__beatValids_1_1;
            vlSelfRef.__PVT___GEN_78 = vlSelfRef.__PVT__beatValids_2_0;
            vlSelfRef.__PVT___GEN_79 = vlSelfRef.__PVT__beatValids_2_1;
            vlSelfRef.__PVT___GEN_80 = vlSelfRef.__PVT__beatValids_3_0;
            vlSelfRef.__PVT___GEN_81 = vlSelfRef.__PVT__beatValids_3_1;
        }
    } else {
        vlSelfRef.__PVT___GEN_74 = vlSelfRef.__PVT__beatValids_0_0;
        vlSelfRef.__PVT___GEN_75 = vlSelfRef.__PVT__beatValids_0_1;
        vlSelfRef.__PVT___GEN_76 = vlSelfRef.__PVT__beatValids_1_0;
        vlSelfRef.__PVT___GEN_77 = vlSelfRef.__PVT__beatValids_1_1;
        vlSelfRef.__PVT___GEN_78 = vlSelfRef.__PVT__beatValids_2_0;
        vlSelfRef.__PVT___GEN_79 = vlSelfRef.__PVT__beatValids_2_1;
        vlSelfRef.__PVT___GEN_80 = vlSelfRef.__PVT__beatValids_3_0;
        vlSelfRef.__PVT___GEN_81 = vlSelfRef.__PVT__beatValids_3_1;
    }
}

VL_INLINE_OPT void VTestTop_L2L3L2_SinkC___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC__0(VTestTop_L2L3L2_SinkC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_SinkC___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((((IData)(vlSelfRef.__PVT___nextPtrReg_T_1) 
                        & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)) 
                       & (IData)(vlSelfRef.__PVT__counter)) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (~ (IData)(vlSelfRef.io_resp_respInfo_last))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at SinkC.scala:108 assert(last)\n",0);
    }
    vlSelfRef.__PVT__io_refillBufWrite_data_data_REG 
        = vlSelfRef.io_task_bits_bufIdx;
    vlSelfRef.__PVT__io_refillBufWrite_id_REG = (((
                                                   ((IData)(
                                                            (0U 
                                                             != (IData)(vlSelfRef.__PVT__io_refillBufWrite_id_hi))) 
                                                    << 1U) 
                                                   | (0U 
                                                      != 
                                                      (0xfU 
                                                       & ((IData)(vlSelfRef.__PVT___io_refillBufWrite_id_T_1) 
                                                          >> 4U)))) 
                                                  << 2U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (3U 
                                                               & ((IData)(vlSelfRef.__PVT___io_refillBufWrite_id_T_3) 
                                                                  >> 2U)))) 
                                                     << 1U) 
                                                    | (IData)(
                                                              (0U 
                                                               != 
                                                               (0xaU 
                                                                & (IData)(vlSelfRef.__PVT___io_refillBufWrite_id_T_3))))));
    vlSelfRef.__PVT__io_refillBufWrite_valid_REG = 
        ((1U & (~ (IData)(vlSymsp->TOP.reset))) && 
         (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_sinkC_ready) 
           & (IData)(vlSelfRef.io_task_valid)) & ((IData)(vlSelfRef.__PVT___newdataMask_T_79) 
                                                  | ((IData)(vlSelfRef.__PVT___newdataMask_T_74) 
                                                     | ((IData)(vlSelfRef.__PVT___newdataMask_T_69) 
                                                        | ((IData)(vlSelfRef.__PVT___newdataMask_T_64) 
                                                           | ((IData)(vlSelfRef.__PVT___newdataMask_T_59) 
                                                              | ((IData)(vlSelfRef.__PVT___newdataMask_T_54) 
                                                                 | ((IData)(vlSelfRef.__PVT___newdataMask_T_49) 
                                                                    | ((IData)(vlSelfRef.__PVT___newdataMask_T_44) 
                                                                       | (0U 
                                                                          != (IData)(vlSelfRef.__PVT__newdataMask_lo))))))))))));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__taskValids_0 = 0U;
        vlSelfRef.__PVT__taskValids_3 = 0U;
        vlSelfRef.__PVT__taskValids_2 = 0U;
        vlSelfRef.__PVT__taskValids_1 = 0U;
    } else {
        if (vlSelfRef.__PVT___T_22) {
            vlSelfRef.__PVT__taskValids_0 = 0U;
        } else if ((((IData)(vlSelfRef.__PVT___nextPtrReg_T_1) 
                     & (IData)(vlSelfRef.io_resp_respInfo_last)) 
                    & ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_sinkC_ready)) 
                       | (IData)(vlSelfRef.__PVT__taskArb_io_out_valid)))) {
            vlSelfRef.__PVT__taskValids_0 = ((1U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode))
                                              ? (IData)(vlSelfRef.__PVT___GEN_82)
                                              : (IData)(vlSelfRef.__PVT___GEN_202));
        }
        if (vlSelfRef.__PVT___T_25) {
            vlSelfRef.__PVT__taskValids_3 = 0U;
        } else if ((((IData)(vlSelfRef.__PVT___nextPtrReg_T_1) 
                     & (IData)(vlSelfRef.io_resp_respInfo_last)) 
                    & ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_sinkC_ready)) 
                       | (IData)(vlSelfRef.__PVT__taskArb_io_out_valid)))) {
            vlSelfRef.__PVT__taskValids_3 = ((1U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode))
                                              ? (IData)(vlSelfRef.__PVT___GEN_85)
                                              : (IData)(vlSelfRef.__PVT___GEN_205));
        }
        if (vlSelfRef.__PVT___T_24) {
            vlSelfRef.__PVT__taskValids_2 = 0U;
        } else if ((((IData)(vlSelfRef.__PVT___nextPtrReg_T_1) 
                     & (IData)(vlSelfRef.io_resp_respInfo_last)) 
                    & ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_sinkC_ready)) 
                       | (IData)(vlSelfRef.__PVT__taskArb_io_out_valid)))) {
            vlSelfRef.__PVT__taskValids_2 = ((1U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode))
                                              ? (IData)(vlSelfRef.__PVT___GEN_84)
                                              : (IData)(vlSelfRef.__PVT___GEN_204));
        }
        if (vlSelfRef.__PVT___T_23) {
            vlSelfRef.__PVT__taskValids_1 = 0U;
        } else if ((((IData)(vlSelfRef.__PVT___nextPtrReg_T_1) 
                     & (IData)(vlSelfRef.io_resp_respInfo_last)) 
                    & ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_sinkC_ready)) 
                       | (IData)(vlSelfRef.__PVT__taskArb_io_out_valid)))) {
            vlSelfRef.__PVT__taskValids_1 = ((1U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode))
                                              ? (IData)(vlSelfRef.__PVT___GEN_83)
                                              : (IData)(vlSelfRef.__PVT___GEN_203));
        }
    }
    if (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_sinkC_ready) 
         & (IData)(vlSelfRef.__PVT__taskArb_io_out_valid))) {
        vlSelfRef.__PVT__taskArb__DOT__lastGrant = vlSelfRef.__PVT__taskArb_io_chosen;
    }
    vlSelfRef.__PVT__beatValids_1_0 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_bufRead_valid)
                                            ? ((1U 
                                                != (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_bufIdx)) 
                                               && (IData)(vlSelfRef.__PVT___GEN_76))
                                            : (IData)(vlSelfRef.__PVT___GEN_76)));
    vlSelfRef.__PVT__beatValids_1_1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_bufRead_valid)
                                            ? ((1U 
                                                != (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_bufIdx)) 
                                               && (IData)(vlSelfRef.__PVT___GEN_77))
                                            : (IData)(vlSelfRef.__PVT___GEN_77)));
    vlSelfRef.__PVT__beatValids_2_1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_bufRead_valid)
                                            ? ((2U 
                                                != (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_bufIdx)) 
                                               && (IData)(vlSelfRef.__PVT___GEN_79))
                                            : (IData)(vlSelfRef.__PVT___GEN_79)));
    vlSelfRef.__PVT__beatValids_3_1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_bufRead_valid)
                                            ? ((3U 
                                                != (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_bufIdx)) 
                                               && (IData)(vlSelfRef.__PVT___GEN_81))
                                            : (IData)(vlSelfRef.__PVT___GEN_81)));
    vlSelfRef.__PVT__beatValids_0_0 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_bufRead_valid)
                                            ? ((0U 
                                                != (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_bufIdx)) 
                                               && (IData)(vlSelfRef.__PVT___GEN_74))
                                            : (IData)(vlSelfRef.__PVT___GEN_74)));
    vlSelfRef.__PVT__beatValids_0_1 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_bufRead_valid)
                                            ? ((0U 
                                                != (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_bufIdx)) 
                                               && (IData)(vlSelfRef.__PVT___GEN_75))
                                            : (IData)(vlSelfRef.__PVT___GEN_75)));
    vlSelfRef.__PVT__beatValids_2_0 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_bufRead_valid)
                                            ? ((2U 
                                                != (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_bufIdx)) 
                                               && (IData)(vlSelfRef.__PVT___GEN_78))
                                            : (IData)(vlSelfRef.__PVT___GEN_78)));
    vlSelfRef.__PVT__beatValids_3_0 = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_bufRead_valid)
                                            ? ((3U 
                                                != (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_bufIdx)) 
                                               && (IData)(vlSelfRef.__PVT___GEN_80))
                                            : (IData)(vlSelfRef.__PVT___GEN_80)));
    vlSelfRef.__PVT__taskArb__DOT__validMask_3 = ((IData)(vlSelfRef.__PVT__taskValids_3) 
                                                  & (3U 
                                                     > (IData)(vlSelfRef.__PVT__taskArb__DOT__lastGrant)));
    vlSelfRef.__PVT__taskArb__DOT__validMask_2 = ((IData)(vlSelfRef.__PVT__taskValids_2) 
                                                  & (2U 
                                                     > (IData)(vlSelfRef.__PVT__taskArb__DOT__lastGrant)));
    vlSelfRef.__PVT__taskArb__DOT__validMask_1 = ((IData)(vlSelfRef.__PVT__taskValids_1) 
                                                  & (1U 
                                                     > (IData)(vlSelfRef.__PVT__taskArb__DOT__lastGrant)));
    vlSelfRef.taskArb__DOT____VdfgRegularize_he969bb4c_0_2 
        = ((IData)(vlSelfRef.__PVT__taskArb__DOT__validMask_1) 
           | (IData)(vlSelfRef.__PVT__taskArb__DOT__validMask_2));
    vlSelfRef.taskArb__DOT____VdfgRegularize_he969bb4c_0_3 
        = ((IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_he969bb4c_0_2) 
           | (IData)(vlSelfRef.__PVT__taskArb__DOT__validMask_3));
    vlSelfRef.taskArb__DOT____VdfgRegularize_he969bb4c_0_4 
        = ((IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_he969bb4c_0_3) 
           | (IData)(vlSelfRef.__PVT__taskValids_0));
    vlSelfRef.taskArb__DOT____VdfgRegularize_he969bb4c_0_5 
        = ((IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_he969bb4c_0_4) 
           | (IData)(vlSelfRef.__PVT__taskValids_1));
}

VL_INLINE_OPT void VTestTop_L2L3L2_SinkC___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC__1(VTestTop_L2L3L2_SinkC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_SinkC___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__taskArb_io_chosen = ((IData)(vlSelfRef.__PVT__taskArb__DOT__validMask_1)
                                           ? 1U : ((IData)(vlSelfRef.__PVT__taskArb__DOT__validMask_2)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__taskArb__DOT__validMask_3)
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
    if (vlSelfRef.__PVT___nextPtrReg_T_1) {
        if ((1U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode))) {
            if (vlSelfRef.__PVT__counter) {
                if (((0U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                     & (~ (IData)(vlSelfRef.__PVT__beat)))) {
                    vlSelfRef.__PVT__dataBuf_0_0 = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data;
                }
                if (((0U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                     & (IData)(vlSelfRef.__PVT__beat))) {
                    vlSelfRef.__PVT__dataBuf_0_1 = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data;
                }
                if (((1U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                     & (~ (IData)(vlSelfRef.__PVT__beat)))) {
                    vlSelfRef.__PVT__dataBuf_1_0 = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data;
                }
                if (((1U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                     & (IData)(vlSelfRef.__PVT__beat))) {
                    vlSelfRef.__PVT__dataBuf_1_1 = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data;
                }
                if (((2U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                     & (~ (IData)(vlSelfRef.__PVT__beat)))) {
                    vlSelfRef.__PVT__dataBuf_2_0 = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data;
                }
                if (((2U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                     & (IData)(vlSelfRef.__PVT__beat))) {
                    vlSelfRef.__PVT__dataBuf_2_1 = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data;
                }
                if (((3U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                     & (~ (IData)(vlSelfRef.__PVT__beat)))) {
                    vlSelfRef.__PVT__dataBuf_3_0 = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data;
                }
                if (((3U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                     & (IData)(vlSelfRef.__PVT__beat))) {
                    vlSelfRef.__PVT__dataBuf_3_1 = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data;
                }
            } else {
                if (((0U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                     & (~ (IData)(vlSelfRef.__PVT__beat)))) {
                    vlSelfRef.__PVT__dataBuf_0_0 = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data;
                }
                if (((0U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                     & (IData)(vlSelfRef.__PVT__beat))) {
                    vlSelfRef.__PVT__dataBuf_0_1 = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data;
                }
                if (((1U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                     & (~ (IData)(vlSelfRef.__PVT__beat)))) {
                    vlSelfRef.__PVT__dataBuf_1_0 = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data;
                }
                if (((1U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                     & (IData)(vlSelfRef.__PVT__beat))) {
                    vlSelfRef.__PVT__dataBuf_1_1 = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data;
                }
                if (((2U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                     & (~ (IData)(vlSelfRef.__PVT__beat)))) {
                    vlSelfRef.__PVT__dataBuf_2_0 = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data;
                }
                if (((2U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                     & (IData)(vlSelfRef.__PVT__beat))) {
                    vlSelfRef.__PVT__dataBuf_2_1 = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data;
                }
                if (((3U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                     & (~ (IData)(vlSelfRef.__PVT__beat)))) {
                    vlSelfRef.__PVT__dataBuf_3_0 = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data;
                }
                if (((3U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                     & (IData)(vlSelfRef.__PVT__beat))) {
                    vlSelfRef.__PVT__dataBuf_3_1 = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_data;
                }
            }
        }
    }
    if ((((IData)(vlSelfRef.__PVT___nextPtrReg_T_1) 
          & (IData)(vlSelfRef.io_resp_respInfo_last)) 
         & ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_sinkC_ready)) 
            | (IData)(vlSelfRef.__PVT__taskArb_io_out_valid)))) {
        if ((1U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode))) {
            if ((0U == (IData)(vlSelfRef.__PVT__nextPtrReg))) {
                vlSelfRef.__PVT__taskBuf_0_set = (0x7fU 
                                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                     >> 1U));
                vlSelfRef.__PVT__taskBuf_0_tag = (0xffU 
                                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                     >> 8U));
                vlSelfRef.__PVT__taskBuf_0_off = (1U 
                                                  & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address));
                vlSelfRef.__PVT__taskBuf_0_opcode = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode;
                vlSelfRef.__PVT__taskBuf_0_param = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param;
                vlSelfRef.__PVT__taskBuf_0_sourceId 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_source;
                vlSelfRef.__PVT__taskBuf_0_bufIdx = vlSelfRef.__PVT__nextPtrReg;
            } else if ((0U == (IData)(vlSelfRef.__PVT__nextPtrReg))) {
                vlSelfRef.__PVT__taskBuf_0_bufIdx = 0U;
            }
            if ((1U == (IData)(vlSelfRef.__PVT__nextPtrReg))) {
                vlSelfRef.__PVT__taskBuf_1_set = (0x7fU 
                                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                     >> 1U));
                vlSelfRef.__PVT__taskBuf_1_tag = (0xffU 
                                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                     >> 8U));
                vlSelfRef.__PVT__taskBuf_1_off = (1U 
                                                  & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address));
                vlSelfRef.__PVT__taskBuf_1_opcode = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode;
                vlSelfRef.__PVT__taskBuf_1_param = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param;
                vlSelfRef.__PVT__taskBuf_1_sourceId 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_source;
                vlSelfRef.__PVT__taskBuf_1_bufIdx = vlSelfRef.__PVT__nextPtrReg;
            } else if ((1U == (IData)(vlSelfRef.__PVT__nextPtrReg))) {
                vlSelfRef.__PVT__taskBuf_1_bufIdx = 0U;
            }
            if ((2U == (IData)(vlSelfRef.__PVT__nextPtrReg))) {
                vlSelfRef.__PVT__taskBuf_2_set = (0x7fU 
                                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                     >> 1U));
                vlSelfRef.__PVT__taskBuf_2_tag = (0xffU 
                                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                     >> 8U));
                vlSelfRef.__PVT__taskBuf_2_off = (1U 
                                                  & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address));
                vlSelfRef.__PVT__taskBuf_2_opcode = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode;
                vlSelfRef.__PVT__taskBuf_2_param = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param;
                vlSelfRef.__PVT__taskBuf_2_sourceId 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_source;
                vlSelfRef.__PVT__taskBuf_2_bufIdx = vlSelfRef.__PVT__nextPtrReg;
            } else if ((2U == (IData)(vlSelfRef.__PVT__nextPtrReg))) {
                vlSelfRef.__PVT__taskBuf_2_bufIdx = 0U;
            }
            if ((3U == (IData)(vlSelfRef.__PVT__nextPtrReg))) {
                vlSelfRef.__PVT__taskBuf_3_set = (0x7fU 
                                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                     >> 1U));
                vlSelfRef.__PVT__taskBuf_3_tag = (0xffU 
                                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                     >> 8U));
                vlSelfRef.__PVT__taskBuf_3_off = (1U 
                                                  & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address));
                vlSelfRef.__PVT__taskBuf_3_opcode = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode;
                vlSelfRef.__PVT__taskBuf_3_param = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param;
                vlSelfRef.__PVT__taskBuf_3_sourceId 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_source;
                vlSelfRef.__PVT__taskBuf_3_bufIdx = vlSelfRef.__PVT__nextPtrReg;
            } else if ((3U == (IData)(vlSelfRef.__PVT__nextPtrReg))) {
                vlSelfRef.__PVT__taskBuf_3_bufIdx = 0U;
            }
        } else {
            if ((0U == (IData)(vlSelfRef.__PVT__nextPtr))) {
                vlSelfRef.__PVT__taskBuf_0_set = (0x7fU 
                                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                     >> 1U));
                vlSelfRef.__PVT__taskBuf_0_tag = (0xffU 
                                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                     >> 8U));
                vlSelfRef.__PVT__taskBuf_0_off = (1U 
                                                  & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address));
                vlSelfRef.__PVT__taskBuf_0_opcode = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode;
                vlSelfRef.__PVT__taskBuf_0_param = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param;
                vlSelfRef.__PVT__taskBuf_0_sourceId 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_source;
                vlSelfRef.__PVT__taskBuf_0_bufIdx = 
                    ((1U & (IData)(vlSelfRef.__PVT__bufValids))
                      ? (IData)(vlSelfRef.__PVT___nextPtr_T_6)
                      : 0U);
            } else if ((0U == (IData)(vlSelfRef.__PVT__nextPtr))) {
                vlSelfRef.__PVT__taskBuf_0_bufIdx = 0U;
            }
            if ((1U == (IData)(vlSelfRef.__PVT__nextPtr))) {
                vlSelfRef.__PVT__taskBuf_1_set = (0x7fU 
                                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                     >> 1U));
                vlSelfRef.__PVT__taskBuf_1_tag = (0xffU 
                                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                     >> 8U));
                vlSelfRef.__PVT__taskBuf_1_off = (1U 
                                                  & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address));
                vlSelfRef.__PVT__taskBuf_1_opcode = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode;
                vlSelfRef.__PVT__taskBuf_1_param = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param;
                vlSelfRef.__PVT__taskBuf_1_sourceId 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_source;
                vlSelfRef.__PVT__taskBuf_1_bufIdx = 
                    ((1U & (IData)(vlSelfRef.__PVT__bufValids))
                      ? (IData)(vlSelfRef.__PVT___nextPtr_T_6)
                      : 0U);
            } else if ((1U == (IData)(vlSelfRef.__PVT__nextPtr))) {
                vlSelfRef.__PVT__taskBuf_1_bufIdx = 0U;
            }
            if ((2U == (IData)(vlSelfRef.__PVT__nextPtr))) {
                vlSelfRef.__PVT__taskBuf_2_set = (0x7fU 
                                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                     >> 1U));
                vlSelfRef.__PVT__taskBuf_2_tag = (0xffU 
                                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                     >> 8U));
                vlSelfRef.__PVT__taskBuf_2_off = (1U 
                                                  & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address));
                vlSelfRef.__PVT__taskBuf_2_opcode = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode;
                vlSelfRef.__PVT__taskBuf_2_param = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param;
                vlSelfRef.__PVT__taskBuf_2_sourceId 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_source;
                vlSelfRef.__PVT__taskBuf_2_bufIdx = 
                    ((1U & (IData)(vlSelfRef.__PVT__bufValids))
                      ? (IData)(vlSelfRef.__PVT___nextPtr_T_6)
                      : 0U);
            } else if ((2U == (IData)(vlSelfRef.__PVT__nextPtr))) {
                vlSelfRef.__PVT__taskBuf_2_bufIdx = 0U;
            }
            if ((3U == (IData)(vlSelfRef.__PVT__nextPtr))) {
                vlSelfRef.__PVT__taskBuf_3_set = (0x7fU 
                                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                     >> 1U));
                vlSelfRef.__PVT__taskBuf_3_tag = (0xffU 
                                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                     >> 8U));
                vlSelfRef.__PVT__taskBuf_3_off = (1U 
                                                  & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address));
                vlSelfRef.__PVT__taskBuf_3_opcode = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode;
                vlSelfRef.__PVT__taskBuf_3_param = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param;
                vlSelfRef.__PVT__taskBuf_3_sourceId 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_source;
                vlSelfRef.__PVT__taskBuf_3_bufIdx = 
                    ((1U & (IData)(vlSelfRef.__PVT__bufValids))
                      ? (IData)(vlSelfRef.__PVT___nextPtr_T_6)
                      : 0U);
            } else if ((3U == (IData)(vlSelfRef.__PVT__nextPtr))) {
                vlSelfRef.__PVT__taskBuf_3_bufIdx = 0U;
            }
        }
    }
    vlSelfRef.__PVT__taskArb_io_out_valid = ((3U == (IData)(vlSelfRef.__PVT__taskArb_io_chosen))
                                              ? (IData)(vlSelfRef.__PVT__taskValids_3)
                                              : ((2U 
                                                  == (IData)(vlSelfRef.__PVT__taskArb_io_chosen))
                                                  ? (IData)(vlSelfRef.__PVT__taskValids_2)
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelfRef.__PVT__taskArb_io_chosen))
                                                   ? (IData)(vlSelfRef.__PVT__taskValids_1)
                                                   : (IData)(vlSelfRef.__PVT__taskValids_0))));
    vlSelfRef.io_refillBufWrite_data_data = ((((3U 
                                                == (IData)(vlSelfRef.__PVT__io_refillBufWrite_data_data_REG))
                                                ? (IData)(vlSelfRef.__PVT__dataBuf_3_1)
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.__PVT__io_refillBufWrite_data_data_REG))
                                                    ? (IData)(vlSelfRef.__PVT__dataBuf_2_1)
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.__PVT__io_refillBufWrite_data_data_REG))
                                                     ? (IData)(vlSelfRef.__PVT__dataBuf_1_1)
                                                     : (IData)(vlSelfRef.__PVT__dataBuf_0_1)))) 
                                              << 8U) 
                                             | ((3U 
                                                 == (IData)(vlSelfRef.__PVT__io_refillBufWrite_data_data_REG))
                                                 ? (IData)(vlSelfRef.__PVT__dataBuf_3_0)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelfRef.__PVT__io_refillBufWrite_data_data_REG))
                                                  ? (IData)(vlSelfRef.__PVT__dataBuf_2_0)
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelfRef.__PVT__io_refillBufWrite_data_data_REG))
                                                   ? (IData)(vlSelfRef.__PVT__dataBuf_1_0)
                                                   : (IData)(vlSelfRef.__PVT__dataBuf_0_0)))));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__nextPtrReg = 0U;
        vlSelfRef.__PVT__counter = 0U;
    } else {
        if (((IData)(vlSelfRef.__PVT___nextPtrReg_T_1) 
             & ((~ (IData)(vlSelfRef.__PVT__counter)) 
                & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)))) {
            vlSelfRef.__PVT__nextPtrReg = ((1U & (IData)(vlSelfRef.__PVT__bufValids))
                                            ? ((2U 
                                                & (IData)(vlSelfRef.__PVT__bufValids))
                                                ? (
                                                   (4U 
                                                    & (IData)(vlSelfRef.__PVT__bufValids))
                                                    ? 3U
                                                    : 2U)
                                                : 1U)
                                            : 0U);
        }
        if (vlSelfRef.__PVT___T) {
            vlSelfRef.__PVT__counter = ((IData)(vlSelfRef.__PVT__counter1)
                                         ? (IData)(vlSelfRef.__PVT__beats1)
                                         : (IData)(vlSelfRef.__PVT__counter1));
        }
    }
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
    vlSelfRef.__PVT___GEN_82 = ((0U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                                | (IData)(vlSelfRef.__PVT__taskValids_0));
    vlSelfRef.__PVT___GEN_83 = ((1U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                                | (IData)(vlSelfRef.__PVT__taskValids_1));
    vlSelfRef.__PVT___GEN_84 = ((2U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                                | (IData)(vlSelfRef.__PVT__taskValids_2));
    vlSelfRef.__PVT___GEN_85 = ((3U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                                | (IData)(vlSelfRef.__PVT__taskValids_3));
    vlSelfRef.io_task_bits_bufIdx = ((IData)(vlSelfRef.__PVT__taskArb_io_out_valid)
                                      ? ((3U == (IData)(vlSelfRef.__PVT__taskArb_io_chosen))
                                          ? (IData)(vlSelfRef.__PVT__taskBuf_3_bufIdx)
                                          : ((2U == (IData)(vlSelfRef.__PVT__taskArb_io_chosen))
                                              ? (IData)(vlSelfRef.__PVT__taskBuf_2_bufIdx)
                                              : ((1U 
                                                  == (IData)(vlSelfRef.__PVT__taskArb_io_chosen))
                                                  ? (IData)(vlSelfRef.__PVT__taskBuf_1_bufIdx)
                                                  : (IData)(vlSelfRef.__PVT__taskBuf_0_bufIdx))))
                                      : (IData)(vlSelfRef.__PVT__nextPtrReg));
    vlSelfRef.__PVT___nextPtr_T_6 = ((2U & (IData)(vlSelfRef.__PVT__bufValids))
                                      ? ((4U & (IData)(vlSelfRef.__PVT__bufValids))
                                          ? 3U : 2U)
                                      : 1U);
    vlSelfRef.__PVT__nextPtr = ((1U & (IData)(vlSelfRef.__PVT__bufValids))
                                 ? (IData)(vlSelfRef.__PVT___nextPtr_T_6)
                                 : 0U);
    vlSelfRef.__PVT___GEN_202 = ((0U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                                 | (IData)(vlSelfRef.__PVT__taskValids_0));
    vlSelfRef.__PVT___GEN_203 = ((1U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                                 | (IData)(vlSelfRef.__PVT__taskValids_1));
    vlSelfRef.__PVT___GEN_204 = ((2U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                                 | (IData)(vlSelfRef.__PVT__taskValids_2));
    vlSelfRef.__PVT___GEN_205 = ((3U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                                 | (IData)(vlSelfRef.__PVT__taskValids_3));
    vlSelfRef.__PVT__counter1 = (1U & (~ (IData)(vlSelfRef.__PVT__counter)));
}

VL_INLINE_OPT void VTestTop_L2L3L2_SinkC___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC__2(VTestTop_L2L3L2_SinkC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_SinkC___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__taskArb_io_out_valid) {
        if ((3U == (IData)(vlSelfRef.__PVT__taskArb_io_chosen))) {
            vlSelfRef.io_task_bits_tag = (0xffU & (IData)(vlSelfRef.__PVT__taskBuf_3_tag));
            vlSelfRef.io_task_bits_set = (0x7fU & (IData)(vlSelfRef.__PVT__taskBuf_3_set));
            vlSelfRef.io_task_bits_opcode = vlSelfRef.__PVT__taskBuf_3_opcode;
        } else if ((2U == (IData)(vlSelfRef.__PVT__taskArb_io_chosen))) {
            vlSelfRef.io_task_bits_tag = (0xffU & (IData)(vlSelfRef.__PVT__taskBuf_2_tag));
            vlSelfRef.io_task_bits_set = (0x7fU & (IData)(vlSelfRef.__PVT__taskBuf_2_set));
            vlSelfRef.io_task_bits_opcode = vlSelfRef.__PVT__taskBuf_2_opcode;
        } else if ((1U == (IData)(vlSelfRef.__PVT__taskArb_io_chosen))) {
            vlSelfRef.io_task_bits_tag = (0xffU & (IData)(vlSelfRef.__PVT__taskBuf_1_tag));
            vlSelfRef.io_task_bits_set = (0x7fU & (IData)(vlSelfRef.__PVT__taskBuf_1_set));
            vlSelfRef.io_task_bits_opcode = vlSelfRef.__PVT__taskBuf_1_opcode;
        } else {
            vlSelfRef.io_task_bits_tag = (0xffU & (IData)(vlSelfRef.__PVT__taskBuf_0_tag));
            vlSelfRef.io_task_bits_set = (0x7fU & (IData)(vlSelfRef.__PVT__taskBuf_0_set));
            vlSelfRef.io_task_bits_opcode = vlSelfRef.__PVT__taskBuf_0_opcode;
        }
    } else {
        vlSelfRef.io_task_bits_tag = (0xffU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                               >> 8U));
        vlSelfRef.io_task_bits_set = (0x7fU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                               >> 1U));
        vlSelfRef.io_task_bits_opcode = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode;
    }
    vlSelfRef.io_releaseBufWrite_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer_1__DOT__bundleOut_0_c_q_io_deq_valid) 
                                          & (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)));
    vlSelfRef.__PVT__beats1 = (1U & ((~ ((IData)(1U) 
                                         << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_size))) 
                                     & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)));
    vlSelfRef.__PVT___newdataMask_T_44 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_valid) 
                                          & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_set) 
                                              == (IData)(vlSelfRef.io_task_bits_set)) 
                                             & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_tag) 
                                                 == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__io_status_bits_needsRepl))));
    vlSelfRef.__PVT___newdataMask_T_49 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_valid) 
                                          & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_set) 
                                              == (IData)(vlSelfRef.io_task_bits_set)) 
                                             & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_tag) 
                                                 == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__io_status_bits_needsRepl))));
    vlSelfRef.__PVT___newdataMask_T_54 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_valid) 
                                          & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_set) 
                                              == (IData)(vlSelfRef.io_task_bits_set)) 
                                             & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_tag) 
                                                 == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__io_status_bits_needsRepl))));
    vlSelfRef.__PVT___newdataMask_T_59 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_valid) 
                                          & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_set) 
                                              == (IData)(vlSelfRef.io_task_bits_set)) 
                                             & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_tag) 
                                                 == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__io_status_bits_needsRepl))));
    vlSelfRef.__PVT___newdataMask_T_64 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_valid) 
                                          & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_set) 
                                              == (IData)(vlSelfRef.io_task_bits_set)) 
                                             & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_tag) 
                                                 == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__io_status_bits_needsRepl))));
    vlSelfRef.__PVT___newdataMask_T_69 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_valid) 
                                          & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_set) 
                                              == (IData)(vlSelfRef.io_task_bits_set)) 
                                             & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_tag) 
                                                 == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__io_status_bits_needsRepl))));
    vlSelfRef.__PVT___newdataMask_T_74 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_valid) 
                                          & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_set) 
                                              == (IData)(vlSelfRef.io_task_bits_set)) 
                                             & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_tag) 
                                                 == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__io_status_bits_needsRepl))));
    vlSelfRef.__PVT___newdataMask_T_79 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_valid) 
                                          & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_set) 
                                              == (IData)(vlSelfRef.io_task_bits_set)) 
                                             & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_tag) 
                                                 == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__io_status_bits_needsRepl))));
    vlSelfRef.__PVT__newdataMask_lo = ((((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_valid) 
                                           & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_set) 
                                               == (IData)(vlSelfRef.io_task_bits_set)) 
                                              & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_tag) 
                                                  == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                 & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__io_status_bits_needsRepl)))) 
                                          << 7U) | 
                                         (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_valid) 
                                           & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_set) 
                                               == (IData)(vlSelfRef.io_task_bits_set)) 
                                              & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_tag) 
                                                  == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                 & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__io_status_bits_needsRepl)))) 
                                          << 6U)) | 
                                        ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_valid) 
                                           & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_set) 
                                               == (IData)(vlSelfRef.io_task_bits_set)) 
                                              & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_tag) 
                                                  == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                 & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__io_status_bits_needsRepl)))) 
                                          << 5U) | 
                                         (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_valid) 
                                           & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_set) 
                                               == (IData)(vlSelfRef.io_task_bits_set)) 
                                              & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_tag) 
                                                  == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                 & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__io_status_bits_needsRepl)))) 
                                          << 4U))) 
                                       | (((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid) 
                                             & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_set) 
                                                 == (IData)(vlSelfRef.io_task_bits_set)) 
                                                & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_tag) 
                                                    == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                   & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_status_bits_needsRepl)))) 
                                            << 3U) 
                                           | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid) 
                                               & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_set) 
                                                   == (IData)(vlSelfRef.io_task_bits_set)) 
                                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_tag) 
                                                      == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                     & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_status_bits_needsRepl)))) 
                                              << 2U)) 
                                          | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid) 
                                               & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_set) 
                                                   == (IData)(vlSelfRef.io_task_bits_set)) 
                                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_tag) 
                                                      == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                     & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_status_bits_needsRepl)))) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                                                & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set) 
                                                    == (IData)(vlSelfRef.io_task_bits_set)) 
                                                   & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_tag) 
                                                       == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                      & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_status_bits_needsRepl)))))));
    vlSelfRef.__PVT__beat = ((IData)(vlSelfRef.__PVT__counter) 
                             & (IData)(vlSelfRef.__PVT__beats1));
    vlSelfRef.io_resp_respInfo_last = (1U & ((~ (IData)(vlSelfRef.__PVT__beats1)) 
                                             | (IData)(vlSelfRef.__PVT__counter)));
    vlSelfRef.__PVT__io_refillBufWrite_id_hi = (((((IData)(vlSelfRef.__PVT___newdataMask_T_79) 
                                                   << 7U) 
                                                  | ((IData)(vlSelfRef.__PVT___newdataMask_T_74) 
                                                     << 6U)) 
                                                 | (((IData)(vlSelfRef.__PVT___newdataMask_T_69) 
                                                     << 5U) 
                                                    | ((IData)(vlSelfRef.__PVT___newdataMask_T_64) 
                                                       << 4U))) 
                                                | ((((IData)(vlSelfRef.__PVT___newdataMask_T_59) 
                                                     << 3U) 
                                                    | ((IData)(vlSelfRef.__PVT___newdataMask_T_54) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelfRef.__PVT___newdataMask_T_49) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.__PVT___newdataMask_T_44))));
    vlSelfRef.io_resp_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer_1__DOT__bundleOut_0_c_q_io_deq_valid) 
                               & ((~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode) 
                                      >> 1U)) & ((~ (IData)(vlSelfRef.__PVT__counter)) 
                                                 | (IData)(vlSelfRef.io_resp_respInfo_last))));
    vlSelfRef.io_task_valid = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer_1__DOT__bundleOut_0_c_q_io_deq_valid) 
                                & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode) 
                                    >> 1U) & (IData)(vlSelfRef.io_resp_respInfo_last))) 
                               | (IData)(vlSelfRef.__PVT__taskArb_io_out_valid));
    vlSelfRef.__PVT___io_refillBufWrite_id_T_1 = ((IData)(vlSelfRef.__PVT__io_refillBufWrite_id_hi) 
                                                  | (IData)(vlSelfRef.__PVT__newdataMask_lo));
    vlSelfRef.__PVT___io_refillBufWrite_id_T_3 = (0xfU 
                                                  & (((IData)(vlSelfRef.__PVT___io_refillBufWrite_id_T_1) 
                                                      >> 4U) 
                                                     | (IData)(vlSelfRef.__PVT___io_refillBufWrite_id_T_1)));
}

VL_INLINE_OPT void VTestTop_L2L3L2_SinkC___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC__3(VTestTop_L2L3L2_SinkC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_SinkC___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___T_22 = (((~ (IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_he969bb4c_0_3)) 
                               & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_sinkC_ready)) 
                              & (IData)(vlSelfRef.__PVT__taskValids_0));
    vlSelfRef.__PVT___T_23 = ((((~ (IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_he969bb4c_0_4)) 
                                | (1U > (IData)(vlSelfRef.__PVT__taskArb__DOT__lastGrant))) 
                               & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_sinkC_ready)) 
                              & (IData)(vlSelfRef.__PVT__taskValids_1));
    vlSelfRef.__PVT___T_24 = ((((~ (IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_he969bb4c_0_5)) 
                                | ((~ (IData)(vlSelfRef.__PVT__taskArb__DOT__validMask_1)) 
                                   & (2U > (IData)(vlSelfRef.__PVT__taskArb__DOT__lastGrant)))) 
                               & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_sinkC_ready)) 
                              & (IData)(vlSelfRef.__PVT__taskValids_2));
    vlSelfRef.__PVT___T_25 = ((((~ ((IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_he969bb4c_0_5) 
                                    | (IData)(vlSelfRef.__PVT__taskValids_2))) 
                                | ((~ (IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_he969bb4c_0_2)) 
                                   & (3U > (IData)(vlSelfRef.__PVT__taskArb__DOT__lastGrant)))) 
                               & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_sinkC_ready)) 
                              & (IData)(vlSelfRef.__PVT__taskValids_3));
    vlSelfRef.io_c_ready = (1U & ((~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode) 
                                      >> 1U)) | ((IData)(vlSelfRef.__PVT__counter) 
                                                 | ((~ (IData)(
                                                               (0xfU 
                                                                == (IData)(vlSelfRef.__PVT__bufValids)))) 
                                                    | ((~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)) 
                                                       & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_sinkC_ready))))));
    vlSelfRef.__PVT___T = ((IData)(vlSelfRef.io_c_ready) 
                           & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer_1__DOT__bundleOut_0_c_q_io_deq_valid));
    vlSelfRef.__PVT___nextPtrReg_T_1 = ((IData)(vlSelfRef.__PVT___T) 
                                        & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode) 
                                           >> 1U));
    if (vlSelfRef.__PVT___nextPtrReg_T_1) {
        if ((1U & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode))) {
            if (vlSelfRef.__PVT__counter) {
                vlSelfRef.__PVT___GEN_74 = (((~ (IData)(vlSelfRef.__PVT__beat)) 
                                             & (0U 
                                                == (IData)(vlSelfRef.__PVT__nextPtrReg))) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_0_0));
                vlSelfRef.__PVT___GEN_75 = (((0U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                                             & (IData)(vlSelfRef.__PVT__beat)) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_0_1));
                vlSelfRef.__PVT___GEN_76 = (((~ (IData)(vlSelfRef.__PVT__beat)) 
                                             & (1U 
                                                == (IData)(vlSelfRef.__PVT__nextPtrReg))) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_1_0));
                vlSelfRef.__PVT___GEN_77 = (((1U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                                             & (IData)(vlSelfRef.__PVT__beat)) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_1_1));
                vlSelfRef.__PVT___GEN_78 = (((~ (IData)(vlSelfRef.__PVT__beat)) 
                                             & (2U 
                                                == (IData)(vlSelfRef.__PVT__nextPtrReg))) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_2_0));
                vlSelfRef.__PVT___GEN_79 = (((2U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                                             & (IData)(vlSelfRef.__PVT__beat)) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_2_1));
                vlSelfRef.__PVT___GEN_80 = (((~ (IData)(vlSelfRef.__PVT__beat)) 
                                             & (3U 
                                                == (IData)(vlSelfRef.__PVT__nextPtrReg))) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_3_0));
                vlSelfRef.__PVT___GEN_81 = (((3U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                                             & (IData)(vlSelfRef.__PVT__beat)) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_3_1));
            } else {
                vlSelfRef.__PVT___GEN_74 = (((~ (IData)(vlSelfRef.__PVT__beat)) 
                                             & (0U 
                                                == (IData)(vlSelfRef.__PVT__nextPtr))) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_0_0));
                vlSelfRef.__PVT___GEN_75 = (((0U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                                             & (IData)(vlSelfRef.__PVT__beat)) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_0_1));
                vlSelfRef.__PVT___GEN_76 = (((~ (IData)(vlSelfRef.__PVT__beat)) 
                                             & (1U 
                                                == (IData)(vlSelfRef.__PVT__nextPtr))) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_1_0));
                vlSelfRef.__PVT___GEN_77 = (((1U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                                             & (IData)(vlSelfRef.__PVT__beat)) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_1_1));
                vlSelfRef.__PVT___GEN_78 = (((~ (IData)(vlSelfRef.__PVT__beat)) 
                                             & (2U 
                                                == (IData)(vlSelfRef.__PVT__nextPtr))) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_2_0));
                vlSelfRef.__PVT___GEN_79 = (((2U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                                             & (IData)(vlSelfRef.__PVT__beat)) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_2_1));
                vlSelfRef.__PVT___GEN_80 = (((~ (IData)(vlSelfRef.__PVT__beat)) 
                                             & (3U 
                                                == (IData)(vlSelfRef.__PVT__nextPtr))) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_3_0));
                vlSelfRef.__PVT___GEN_81 = (((3U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                                             & (IData)(vlSelfRef.__PVT__beat)) 
                                            | (IData)(vlSelfRef.__PVT__beatValids_3_1));
            }
        } else {
            vlSelfRef.__PVT___GEN_74 = vlSelfRef.__PVT__beatValids_0_0;
            vlSelfRef.__PVT___GEN_75 = vlSelfRef.__PVT__beatValids_0_1;
            vlSelfRef.__PVT___GEN_76 = vlSelfRef.__PVT__beatValids_1_0;
            vlSelfRef.__PVT___GEN_77 = vlSelfRef.__PVT__beatValids_1_1;
            vlSelfRef.__PVT___GEN_78 = vlSelfRef.__PVT__beatValids_2_0;
            vlSelfRef.__PVT___GEN_79 = vlSelfRef.__PVT__beatValids_2_1;
            vlSelfRef.__PVT___GEN_80 = vlSelfRef.__PVT__beatValids_3_0;
            vlSelfRef.__PVT___GEN_81 = vlSelfRef.__PVT__beatValids_3_1;
        }
    } else {
        vlSelfRef.__PVT___GEN_74 = vlSelfRef.__PVT__beatValids_0_0;
        vlSelfRef.__PVT___GEN_75 = vlSelfRef.__PVT__beatValids_0_1;
        vlSelfRef.__PVT___GEN_76 = vlSelfRef.__PVT__beatValids_1_0;
        vlSelfRef.__PVT___GEN_77 = vlSelfRef.__PVT__beatValids_1_1;
        vlSelfRef.__PVT___GEN_78 = vlSelfRef.__PVT__beatValids_2_0;
        vlSelfRef.__PVT___GEN_79 = vlSelfRef.__PVT__beatValids_2_1;
        vlSelfRef.__PVT___GEN_80 = vlSelfRef.__PVT__beatValids_3_0;
        vlSelfRef.__PVT___GEN_81 = vlSelfRef.__PVT__beatValids_3_1;
    }
}
