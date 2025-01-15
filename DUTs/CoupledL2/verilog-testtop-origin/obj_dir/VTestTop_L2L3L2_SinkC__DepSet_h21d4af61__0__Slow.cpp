// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestTop_L2L3L2.h for the primary calling header

#include "VTestTop_L2L3L2__pch.h"
#include "VTestTop_L2L3L2_SinkC.h"
#include "VTestTop_L2L3L2__Syms.h"

VL_ATTR_COLD void VTestTop_L2L3L2_SinkC___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC__0(VTestTop_L2L3L2_SinkC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_SinkC___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__counter1 = (1U & (~ (IData)(vlSelfRef.__PVT__counter)));
    vlSelfRef.__PVT___GEN_82 = ((0U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                                | (IData)(vlSelfRef.__PVT__taskValids_0));
    vlSelfRef.__PVT___GEN_83 = ((1U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                                | (IData)(vlSelfRef.__PVT__taskValids_1));
    vlSelfRef.__PVT___GEN_84 = ((2U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                                | (IData)(vlSelfRef.__PVT__taskValids_2));
    vlSelfRef.__PVT___GEN_85 = ((3U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                                | (IData)(vlSelfRef.__PVT__taskValids_3));
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
    vlSelfRef.__PVT__taskArb__DOT__validMask_3 = ((IData)(vlSelfRef.__PVT__taskValids_3) 
                                                  & (3U 
                                                     > (IData)(vlSelfRef.__PVT__taskArb__DOT__lastGrant)));
    vlSelfRef.__PVT__taskArb__DOT__validMask_2 = ((IData)(vlSelfRef.__PVT__taskValids_2) 
                                                  & (2U 
                                                     > (IData)(vlSelfRef.__PVT__taskArb__DOT__lastGrant)));
    vlSelfRef.__PVT__taskArb__DOT__validMask_1 = ((IData)(vlSelfRef.__PVT__taskValids_1) 
                                                  & (1U 
                                                     > (IData)(vlSelfRef.__PVT__taskArb__DOT__lastGrant)));
    vlSelfRef.__PVT__beats1 = (1U & ((~ ((IData)(1U) 
                                         << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_size))) 
                                     & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)));
    vlSelfRef.io_releaseBufWrite_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer__DOT__bundleOut_0_c_q_io_deq_valid) 
                                          & (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)));
    vlSelfRef.__PVT___nextPtr_T_6 = ((2U & (IData)(vlSelfRef.__PVT__bufValids))
                                      ? ((4U & (IData)(vlSelfRef.__PVT__bufValids))
                                          ? 3U : 2U)
                                      : 1U);
    vlSelfRef.taskArb__DOT____VdfgRegularize_he969bb4c_0_2 
        = ((IData)(vlSelfRef.__PVT__taskArb__DOT__validMask_1) 
           | (IData)(vlSelfRef.__PVT__taskArb__DOT__validMask_2));
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
    vlSelfRef.__PVT__beat = ((IData)(vlSelfRef.__PVT__counter) 
                             & (IData)(vlSelfRef.__PVT__beats1));
    vlSelfRef.io_resp_respInfo_last = (1U & ((~ (IData)(vlSelfRef.__PVT__beats1)) 
                                             | (IData)(vlSelfRef.__PVT__counter)));
    vlSelfRef.__PVT__nextPtr = ((1U & (IData)(vlSelfRef.__PVT__bufValids))
                                 ? (IData)(vlSelfRef.__PVT___nextPtr_T_6)
                                 : 0U);
    vlSelfRef.taskArb__DOT____VdfgRegularize_he969bb4c_0_3 
        = ((IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_he969bb4c_0_2) 
           | (IData)(vlSelfRef.__PVT__taskArb__DOT__validMask_3));
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
    vlSelfRef.io_resp_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer__DOT__bundleOut_0_c_q_io_deq_valid) 
                               & ((~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode) 
                                      >> 1U)) & ((~ (IData)(vlSelfRef.__PVT__counter)) 
                                                 | (IData)(vlSelfRef.io_resp_respInfo_last))));
    vlSelfRef.__PVT___GEN_202 = ((0U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                                 | (IData)(vlSelfRef.__PVT__taskValids_0));
    vlSelfRef.__PVT___GEN_203 = ((1U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                                 | (IData)(vlSelfRef.__PVT__taskValids_1));
    vlSelfRef.__PVT___GEN_204 = ((2U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                                 | (IData)(vlSelfRef.__PVT__taskValids_2));
    vlSelfRef.__PVT___GEN_205 = ((3U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                                 | (IData)(vlSelfRef.__PVT__taskValids_3));
    vlSelfRef.taskArb__DOT____VdfgRegularize_he969bb4c_0_4 
        = ((IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_he969bb4c_0_3) 
           | (IData)(vlSelfRef.__PVT__taskValids_0));
    if (vlSelfRef.__PVT__taskArb_io_out_valid) {
        if ((3U == (IData)(vlSelfRef.__PVT__taskArb_io_chosen))) {
            vlSelfRef.io_task_bits_opcode = vlSelfRef.__PVT__taskBuf_3_opcode;
            vlSelfRef.io_task_bits_bufIdx = vlSelfRef.__PVT__taskBuf_3_bufIdx;
            vlSelfRef.io_task_bits_tag = (0xffU & (IData)(vlSelfRef.__PVT__taskBuf_3_tag));
            vlSelfRef.io_task_bits_set = (0x7fU & (IData)(vlSelfRef.__PVT__taskBuf_3_set));
        } else if ((2U == (IData)(vlSelfRef.__PVT__taskArb_io_chosen))) {
            vlSelfRef.io_task_bits_opcode = vlSelfRef.__PVT__taskBuf_2_opcode;
            vlSelfRef.io_task_bits_bufIdx = vlSelfRef.__PVT__taskBuf_2_bufIdx;
            vlSelfRef.io_task_bits_tag = (0xffU & (IData)(vlSelfRef.__PVT__taskBuf_2_tag));
            vlSelfRef.io_task_bits_set = (0x7fU & (IData)(vlSelfRef.__PVT__taskBuf_2_set));
        } else if ((1U == (IData)(vlSelfRef.__PVT__taskArb_io_chosen))) {
            vlSelfRef.io_task_bits_opcode = vlSelfRef.__PVT__taskBuf_1_opcode;
            vlSelfRef.io_task_bits_bufIdx = vlSelfRef.__PVT__taskBuf_1_bufIdx;
            vlSelfRef.io_task_bits_tag = (0xffU & (IData)(vlSelfRef.__PVT__taskBuf_1_tag));
            vlSelfRef.io_task_bits_set = (0x7fU & (IData)(vlSelfRef.__PVT__taskBuf_1_set));
        } else {
            vlSelfRef.io_task_bits_opcode = vlSelfRef.__PVT__taskBuf_0_opcode;
            vlSelfRef.io_task_bits_bufIdx = vlSelfRef.__PVT__taskBuf_0_bufIdx;
            vlSelfRef.io_task_bits_tag = (0xffU & (IData)(vlSelfRef.__PVT__taskBuf_0_tag));
            vlSelfRef.io_task_bits_set = (0x7fU & (IData)(vlSelfRef.__PVT__taskBuf_0_set));
        }
    } else {
        vlSelfRef.io_task_bits_opcode = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode;
        vlSelfRef.io_task_bits_bufIdx = vlSelfRef.__PVT__nextPtrReg;
        vlSelfRef.io_task_bits_tag = (0xffU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_address) 
                                               >> 8U));
        vlSelfRef.io_task_bits_set = (0x7fU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_address) 
                                               >> 1U));
    }
    vlSelfRef.io_task_valid = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer__DOT__bundleOut_0_c_q_io_deq_valid) 
                                & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode) 
                                    >> 1U) & (IData)(vlSelfRef.io_resp_respInfo_last))) 
                               | (IData)(vlSelfRef.__PVT__taskArb_io_out_valid));
    vlSelfRef.taskArb__DOT____VdfgRegularize_he969bb4c_0_5 
        = ((IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_he969bb4c_0_4) 
           | (IData)(vlSelfRef.__PVT__taskValids_1));
}

VL_ATTR_COLD void VTestTop_L2L3L2_SinkC___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC__1(VTestTop_L2L3L2_SinkC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_SinkC___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.__PVT___io_refillBufWrite_id_T_1 = ((IData)(vlSelfRef.__PVT__io_refillBufWrite_id_hi) 
                                                  | (IData)(vlSelfRef.__PVT__newdataMask_lo));
    vlSelfRef.__PVT___io_refillBufWrite_id_T_3 = (0xfU 
                                                  & (((IData)(vlSelfRef.__PVT___io_refillBufWrite_id_T_1) 
                                                      >> 4U) 
                                                     | (IData)(vlSelfRef.__PVT___io_refillBufWrite_id_T_1)));
}

VL_ATTR_COLD void VTestTop_L2L3L2_SinkC___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC__0(VTestTop_L2L3L2_SinkC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_SinkC___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__counter1 = (1U & (~ (IData)(vlSelfRef.__PVT__counter)));
    vlSelfRef.__PVT___GEN_82 = ((0U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                                | (IData)(vlSelfRef.__PVT__taskValids_0));
    vlSelfRef.__PVT___GEN_83 = ((1U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                                | (IData)(vlSelfRef.__PVT__taskValids_1));
    vlSelfRef.__PVT___GEN_84 = ((2U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                                | (IData)(vlSelfRef.__PVT__taskValids_2));
    vlSelfRef.__PVT___GEN_85 = ((3U == (IData)(vlSelfRef.__PVT__nextPtrReg)) 
                                | (IData)(vlSelfRef.__PVT__taskValids_3));
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
    vlSelfRef.__PVT__taskArb__DOT__validMask_3 = ((IData)(vlSelfRef.__PVT__taskValids_3) 
                                                  & (3U 
                                                     > (IData)(vlSelfRef.__PVT__taskArb__DOT__lastGrant)));
    vlSelfRef.__PVT__taskArb__DOT__validMask_2 = ((IData)(vlSelfRef.__PVT__taskValids_2) 
                                                  & (2U 
                                                     > (IData)(vlSelfRef.__PVT__taskArb__DOT__lastGrant)));
    vlSelfRef.__PVT__taskArb__DOT__validMask_1 = ((IData)(vlSelfRef.__PVT__taskValids_1) 
                                                  & (1U 
                                                     > (IData)(vlSelfRef.__PVT__taskArb__DOT__lastGrant)));
    vlSelfRef.__PVT__beats1 = (1U & ((~ ((IData)(1U) 
                                         << (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_size))) 
                                     & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)));
    vlSelfRef.io_releaseBufWrite_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer_1__DOT__bundleOut_0_c_q_io_deq_valid) 
                                          & (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)));
    vlSelfRef.__PVT___nextPtr_T_6 = ((2U & (IData)(vlSelfRef.__PVT__bufValids))
                                      ? ((4U & (IData)(vlSelfRef.__PVT__bufValids))
                                          ? 3U : 2U)
                                      : 1U);
    vlSelfRef.taskArb__DOT____VdfgRegularize_he969bb4c_0_2 
        = ((IData)(vlSelfRef.__PVT__taskArb__DOT__validMask_1) 
           | (IData)(vlSelfRef.__PVT__taskArb__DOT__validMask_2));
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
    vlSelfRef.__PVT__beat = ((IData)(vlSelfRef.__PVT__counter) 
                             & (IData)(vlSelfRef.__PVT__beats1));
    vlSelfRef.io_resp_respInfo_last = (1U & ((~ (IData)(vlSelfRef.__PVT__beats1)) 
                                             | (IData)(vlSelfRef.__PVT__counter)));
    vlSelfRef.__PVT__nextPtr = ((1U & (IData)(vlSelfRef.__PVT__bufValids))
                                 ? (IData)(vlSelfRef.__PVT___nextPtr_T_6)
                                 : 0U);
    vlSelfRef.taskArb__DOT____VdfgRegularize_he969bb4c_0_3 
        = ((IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_he969bb4c_0_2) 
           | (IData)(vlSelfRef.__PVT__taskArb__DOT__validMask_3));
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
    vlSelfRef.io_resp_valid = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer_1__DOT__bundleOut_0_c_q_io_deq_valid) 
                               & ((~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode) 
                                      >> 1U)) & ((~ (IData)(vlSelfRef.__PVT__counter)) 
                                                 | (IData)(vlSelfRef.io_resp_respInfo_last))));
    vlSelfRef.__PVT___GEN_202 = ((0U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                                 | (IData)(vlSelfRef.__PVT__taskValids_0));
    vlSelfRef.__PVT___GEN_203 = ((1U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                                 | (IData)(vlSelfRef.__PVT__taskValids_1));
    vlSelfRef.__PVT___GEN_204 = ((2U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                                 | (IData)(vlSelfRef.__PVT__taskValids_2));
    vlSelfRef.__PVT___GEN_205 = ((3U == (IData)(vlSelfRef.__PVT__nextPtr)) 
                                 | (IData)(vlSelfRef.__PVT__taskValids_3));
    vlSelfRef.taskArb__DOT____VdfgRegularize_he969bb4c_0_4 
        = ((IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_he969bb4c_0_3) 
           | (IData)(vlSelfRef.__PVT__taskValids_0));
    if (vlSelfRef.__PVT__taskArb_io_out_valid) {
        if ((3U == (IData)(vlSelfRef.__PVT__taskArb_io_chosen))) {
            vlSelfRef.io_task_bits_opcode = vlSelfRef.__PVT__taskBuf_3_opcode;
            vlSelfRef.io_task_bits_bufIdx = vlSelfRef.__PVT__taskBuf_3_bufIdx;
            vlSelfRef.io_task_bits_tag = (0xffU & (IData)(vlSelfRef.__PVT__taskBuf_3_tag));
            vlSelfRef.io_task_bits_set = (0x7fU & (IData)(vlSelfRef.__PVT__taskBuf_3_set));
        } else if ((2U == (IData)(vlSelfRef.__PVT__taskArb_io_chosen))) {
            vlSelfRef.io_task_bits_opcode = vlSelfRef.__PVT__taskBuf_2_opcode;
            vlSelfRef.io_task_bits_bufIdx = vlSelfRef.__PVT__taskBuf_2_bufIdx;
            vlSelfRef.io_task_bits_tag = (0xffU & (IData)(vlSelfRef.__PVT__taskBuf_2_tag));
            vlSelfRef.io_task_bits_set = (0x7fU & (IData)(vlSelfRef.__PVT__taskBuf_2_set));
        } else if ((1U == (IData)(vlSelfRef.__PVT__taskArb_io_chosen))) {
            vlSelfRef.io_task_bits_opcode = vlSelfRef.__PVT__taskBuf_1_opcode;
            vlSelfRef.io_task_bits_bufIdx = vlSelfRef.__PVT__taskBuf_1_bufIdx;
            vlSelfRef.io_task_bits_tag = (0xffU & (IData)(vlSelfRef.__PVT__taskBuf_1_tag));
            vlSelfRef.io_task_bits_set = (0x7fU & (IData)(vlSelfRef.__PVT__taskBuf_1_set));
        } else {
            vlSelfRef.io_task_bits_opcode = vlSelfRef.__PVT__taskBuf_0_opcode;
            vlSelfRef.io_task_bits_bufIdx = vlSelfRef.__PVT__taskBuf_0_bufIdx;
            vlSelfRef.io_task_bits_tag = (0xffU & (IData)(vlSelfRef.__PVT__taskBuf_0_tag));
            vlSelfRef.io_task_bits_set = (0x7fU & (IData)(vlSelfRef.__PVT__taskBuf_0_set));
        }
    } else {
        vlSelfRef.io_task_bits_opcode = vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode;
        vlSelfRef.io_task_bits_bufIdx = vlSelfRef.__PVT__nextPtrReg;
        vlSelfRef.io_task_bits_tag = (0xffU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                               >> 8U));
        vlSelfRef.io_task_bits_set = (0x7fU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                               >> 1U));
    }
    vlSelfRef.io_task_valid = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer_1__DOT__bundleOut_0_c_q_io_deq_valid) 
                                & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode) 
                                    >> 1U) & (IData)(vlSelfRef.io_resp_respInfo_last))) 
                               | (IData)(vlSelfRef.__PVT__taskArb_io_out_valid));
    vlSelfRef.taskArb__DOT____VdfgRegularize_he969bb4c_0_5 
        = ((IData)(vlSelfRef.taskArb__DOT____VdfgRegularize_he969bb4c_0_4) 
           | (IData)(vlSelfRef.__PVT__taskValids_1));
}

VL_ATTR_COLD void VTestTop_L2L3L2_SinkC___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC__1(VTestTop_L2L3L2_SinkC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_SinkC___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.__PVT___io_refillBufWrite_id_T_1 = ((IData)(vlSelfRef.__PVT__io_refillBufWrite_id_hi) 
                                                  | (IData)(vlSelfRef.__PVT__newdataMask_lo));
    vlSelfRef.__PVT___io_refillBufWrite_id_T_3 = (0xfU 
                                                  & (((IData)(vlSelfRef.__PVT___io_refillBufWrite_id_T_1) 
                                                      >> 4U) 
                                                     | (IData)(vlSelfRef.__PVT___io_refillBufWrite_id_T_1)));
}
