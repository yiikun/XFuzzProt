// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestTop_L2L3L2.h for the primary calling header

#include "VTestTop_L2L3L2__pch.h"
#include "VTestTop_L2L3L2_MSHR.h"
#include "VTestTop_L2L3L2__Syms.h"

VL_INLINE_OPT void VTestTop_L2L3L2_MSHR___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12__2(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_3;
    __PVT___GEN_3 = 0;
    // Body
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_12_io_bMergeTask_valid)) 
                                               & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                                  & (IData)(vlSelfRef.__PVT__state_w_replResp)))));
    vlSelfRef.__PVT__io_status_bits_needsRepl = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__state_s_merge_probeack)) 
                                                       | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_12_io_bMergeTask_valid))));
    vlSelfRef.__PVT___GEN_60 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_12_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_61 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_12_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotDirty));
    vlSelfRef.__PVT___GEN_0 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_12_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_12 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_12_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_merge_probeack));
    vlSelfRef.__PVT___GEN_142 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_12_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__gotGrantData)));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_12_io_alloc_valid) {
        vlSelfRef.__PVT___GEN_26 = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_resp_meta_state;
        vlSelfRef.__PVT___GEN_4 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_5 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_6 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_13 = (1U & (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel)));
        vlSelfRef.__PVT___GEN_14 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                             >> 1U)));
        vlSelfRef.__PVT___GEN_8 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_7 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_10 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe;
    } else {
        vlSelfRef.__PVT___GEN_26 = vlSelfRef.__PVT__dirResult_meta_state;
        vlSelfRef.__PVT___GEN_4 = vlSelfRef.__PVT__state_w_grant;
        vlSelfRef.__PVT___GEN_5 = vlSelfRef.__PVT__state_w_grantlast;
        vlSelfRef.__PVT___GEN_6 = vlSelfRef.__PVT__state_w_grantfirst;
        vlSelfRef.__PVT___GEN_13 = (1U & (IData)(vlSelfRef.__PVT__state_s_refill));
        vlSelfRef.__PVT___GEN_14 = (1U & (IData)(vlSelfRef.__PVT__state_s_probeack));
        vlSelfRef.__PVT___GEN_8 = (1U & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
        vlSelfRef.__PVT___GEN_7 = (1U & (IData)(vlSelfRef.__PVT__state_w_pprobeack));
        vlSelfRef.__PVT___GEN_10 = vlSelfRef.__PVT__state_w_rprobeacklast;
    }
    vlSelfRef.__PVT___GEN_103 = (1U & ((IData)(vlSelfRef.__PVT___T_1) 
                                       | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_12_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_102 = (((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                      >> 0xcU) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__io_out_a_q_io_enq_ready))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_12_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
    vlSelfRef.__PVT___GEN_151 = (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer_1__DOT__bundleOut_0_e_q_io_deq_valid) 
                                     & (0xcU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_e_bits_sink)))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_12_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_grantack)
                                     : (IData)(vlSelfRef.__PVT__state_w_grantack)));
    __PVT___GEN_3 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_12_io_alloc_valid) 
                     | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_15 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_12_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___GEN_104 = ((IData)(vlSelfRef.__PVT___T_1) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_12_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
    vlSelfRef.__PVT___GEN_129 = ((1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param)) 
                                 | (((2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param)) 
                                     | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param))) 
                                    | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_12_io_alloc_valid)) 
                                       & (IData)(vlSelfRef.__PVT__probeGotN))));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_4 = ((4U 
                                                 == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)) 
                                                | (5U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)));
    vlSelfRef.__PVT___GEN_128 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_12_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__probeDirty)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_9 = ((IData)(vlSelfRef.__PVT__mp_grant_valid) 
                                                | (IData)(vlSelfRef.__PVT__mp_release_valid));
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid) 
                                                      | (IData)(vlSelfRef.__PVT__mp_grant_valid))));
    vlSelfRef.__PVT___GEN_150 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_12_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_3))
                                  : (IData)(__PVT___GEN_3));
}

VL_INLINE_OPT void VTestTop_L2L3L2_MSHR___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12__3(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_131;
    __PVT___GEN_131 = 0;
    // Body
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_12_io_resps_sink_c_valid) {
        if (vlSelfRef.__VdfgRegularize_h47ff5784_2_4) {
            vlSelfRef.__PVT___GEN_133 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last) 
                                         | (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
            vlSelfRef.__PVT___GEN_134 = (1U & ((IData)(vlSelfRef.__PVT__state_w_pprobeack) 
                                               | ((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                                  | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last))));
            __PVT___GEN_131 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last) 
                               | (IData)(vlSelfRef.__PVT__state_w_rprobeacklast));
        } else {
            vlSelfRef.__PVT___GEN_133 = vlSelfRef.__PVT___GEN_8;
            vlSelfRef.__PVT___GEN_134 = (1U & (IData)(vlSelfRef.__PVT___GEN_7));
            __PVT___GEN_131 = vlSelfRef.__PVT___GEN_10;
        }
    } else {
        vlSelfRef.__PVT___GEN_133 = vlSelfRef.__PVT___GEN_8;
        vlSelfRef.__PVT___GEN_134 = (1U & (IData)(vlSelfRef.__PVT___GEN_7));
        __PVT___GEN_131 = vlSelfRef.__PVT___GEN_10;
    }
    vlSelfRef.__VdfgRegularize_h47ff5784_2_11 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_retry)) 
                                                 & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_12_io_replResp_valid));
    vlSelfRef.__PVT___GEN_161 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_12_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_186 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11)
                                     ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_12_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_resp_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    if (vlSelfRef.__VdfgRegularize_h47ff5784_2_11) {
        if ((0U != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_state))) {
            vlSelfRef.__PVT___GEN_171 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(vlSelfRef.__PVT___GEN_104));
            vlSelfRef.__PVT___GEN_173 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(__PVT___GEN_131));
        } else {
            vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
            vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
        }
    } else {
        vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
        vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
    }
}

VL_INLINE_OPT void VTestTop_L2L3L2_MSHR___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12__4(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___GEN_120 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_12_ready)
                                  ? ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid)
                                      ? (IData)(vlSelfRef.__PVT___GEN_15)
                                      : ((IData)(vlSelfRef.__PVT__mp_grant_valid)
                                          ? (IData)(vlSelfRef.__PVT___GEN_15)
                                          : ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                             | (IData)(vlSelfRef.__PVT___GEN_15))))
                                  : (IData)(vlSelfRef.__PVT___GEN_15));
}

VL_INLINE_OPT void VTestTop_L2L3L2_MSHR___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13__0(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_resps_sink_c_valid) 
                        & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                           & ((IData)(vlSelfRef.__PVT__state_w_pprobeack) 
                              & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at MSHR.scala:556 assert(!(c_resp.valid && !io.status.bits.w_c_resp))\n",0);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_resps_sink_d_valid) 
                        & (~ ((~ (IData)(vlSelfRef.__PVT__state_w_grantlast)) 
                              | ((~ (IData)(vlSelfRef.__PVT__state_w_grant)) 
                                 | (~ (IData)(vlSelfRef.__PVT__state_w_releaseack))))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at MSHR.scala:557 assert(!(d_resp.valid && !io.status.bits.w_d_resp))\n",0);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (((IData)(vlSelfRef.__PVT__req_valid) 
                         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer_1__DOT__bundleOut_0_e_q_io_deq_valid) 
                            & (0xdU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_e_bits_sink)))) 
                        & (IData)(vlSelfRef.__PVT__state_w_grantack))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at MSHR.scala:558 assert(!(e_resp.valid && !io.status.bits.w_e_resp))\n",0);
    }
    vlSelfRef.__PVT__gotDirty = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                 && ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_resps_sink_d_valid)
                                      ? ((IData)(vlSelfRef.__PVT___T_13)
                                          ? ((IData)(vlSelfRef.__PVT__gotDirty) 
                                             | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_dirty))
                                          : (IData)(vlSelfRef.__PVT___GEN_61))
                                      : (IData)(vlSelfRef.__PVT___GEN_61)));
    vlSelfRef.__PVT__req_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                  && ((1U & (~ ((IData)(vlSelfRef.__PVT__io_msInfo_bits_willFree) 
                                                & (IData)(vlSelfRef.__PVT__req_valid)))) 
                                      && (IData)(vlSelfRef.__PVT___GEN_0)));
    vlSelfRef.__PVT__gotT = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                             && ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_resps_sink_d_valid)
                                  ? ((IData)(vlSelfRef.__PVT___T_13)
                                      ? (0U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_param))
                                      : (IData)(vlSelfRef.__PVT___GEN_60))
                                  : (IData)(vlSelfRef.__PVT___GEN_60)));
    vlSelfRef.__PVT__state_s_acquire = ((IData)(vlSymsp->TOP.reset) 
                                        | (IData)(vlSelfRef.__PVT___GEN_102));
    vlSelfRef.__PVT__state_w_grantfirst = ((IData)(vlSymsp->TOP.reset) 
                                           | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_resps_sink_d_valid)
                                               ? ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_5) 
                                                  | (IData)(vlSelfRef.__PVT___GEN_6))
                                               : (IData)(vlSelfRef.__PVT___GEN_6)));
    vlSelfRef.__PVT__state_s_pprobe = ((IData)(vlSymsp->TOP.reset) 
                                       | (IData)(vlSelfRef.__PVT___GEN_103));
    vlSelfRef.__PVT__state_w_replResp = ((IData)(vlSymsp->TOP.reset) 
                                         | (IData)(vlSelfRef.__PVT___GEN_161));
    vlSelfRef.__PVT__state_s_probeack = ((IData)(vlSymsp->TOP.reset) 
                                         | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_13_ready)
                                             ? ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid)
                                                 ? (IData)(vlSelfRef.__PVT___GEN_14)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__mp_grant_valid)
                                                  ? (IData)(vlSelfRef.__PVT___GEN_14)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__mp_release_valid)
                                                   ? (IData)(vlSelfRef.__PVT___GEN_14)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | (IData)(vlSelfRef.__PVT___GEN_14)))))
                                             : (IData)(vlSelfRef.__PVT___GEN_14)));
    vlSelfRef.__PVT__state_s_refill = ((IData)(vlSymsp->TOP.reset) 
                                       | ((~ ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_retry) 
                                              & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_replResp_valid))) 
                                          & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_13_ready)
                                              ? ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid)
                                                  ? (IData)(vlSelfRef.__PVT___GEN_13)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__mp_grant_valid) 
                                                  | (IData)(vlSelfRef.__PVT___GEN_13)))
                                              : (IData)(vlSelfRef.__PVT___GEN_13))));
    vlSelfRef.__PVT__state_s_rprobe = ((IData)(vlSymsp->TOP.reset) 
                                       | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_bMergeTask_valid)
                                           ? ((~ (IData)(vlSelfRef.__PVT__dirResult_meta_clients)) 
                                              & (IData)(vlSelfRef.__PVT___GEN_171))
                                           : (IData)(vlSelfRef.__PVT___GEN_171)));
    vlSelfRef.__PVT__state_s_merge_probeack = ((IData)(vlSymsp->TOP.reset) 
                                               | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_bMergeTask_valid)) 
                                                  & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_13_ready)
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid) 
                                                      | (IData)(vlSelfRef.__PVT___GEN_12))
                                                      : (IData)(vlSelfRef.__PVT___GEN_12))));
    vlSelfRef.__PVT__state_s_release = ((IData)(vlSymsp->TOP.reset) 
                                        | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_bMergeTask_valid) 
                                           | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11)
                                               ? ((0U 
                                                   == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_state)) 
                                                  & (IData)(vlSelfRef.__PVT___GEN_120))
                                               : (IData)(vlSelfRef.__PVT___GEN_120))));
    vlSelfRef.__PVT__state_w_pprobeack = ((IData)(vlSymsp->TOP.reset) 
                                          | (IData)(vlSelfRef.__PVT___GEN_134));
    vlSelfRef.__PVT__state_w_grantack = ((IData)(vlSymsp->TOP.reset) 
                                         | (IData)(vlSelfRef.__PVT___GEN_151));
    vlSelfRef.__PVT__state_w_pprobeacklast = ((IData)(vlSymsp->TOP.reset) 
                                              | (IData)(vlSelfRef.__PVT___GEN_133));
    vlSelfRef.__PVT__state_w_grantlast = ((IData)(vlSymsp->TOP.reset) 
                                          | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_resps_sink_d_valid)
                                              ? ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_5)
                                                  ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_last)
                                                  : (IData)(vlSelfRef.__PVT___GEN_5))
                                              : (IData)(vlSelfRef.__PVT___GEN_5)));
    vlSelfRef.__PVT__state_w_releaseack = ((IData)(vlSymsp->TOP.reset) 
                                           | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_bMergeTask_valid) 
                                              | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11)
                                                  ? 
                                                 ((0U 
                                                   == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_state)) 
                                                  & (IData)(vlSelfRef.__PVT___GEN_150))
                                                  : (IData)(vlSelfRef.__PVT___GEN_150))));
    vlSelfRef.__PVT__state_w_rprobeacklast = ((IData)(vlSymsp->TOP.reset) 
                                              | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_bMergeTask_valid)
                                                  ? 
                                                 ((~ (IData)(vlSelfRef.__PVT__dirResult_meta_clients)) 
                                                  & (IData)(vlSelfRef.__PVT___GEN_173))
                                                  : (IData)(vlSelfRef.__PVT___GEN_173)));
    vlSelfRef.__PVT__state_w_grant = (1U & ((IData)(vlSymsp->TOP.reset) 
                                            | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_resps_sink_d_valid)
                                                ? ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_5)
                                                    ? 
                                                   ((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                                    | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_last))
                                                    : (IData)(vlSelfRef.__PVT___GEN_4))
                                                : (IData)(vlSelfRef.__PVT___GEN_4))));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__probeGotN = 0U;
        vlSelfRef.__PVT__gotGrantData = 0U;
        vlSelfRef.__PVT__probeDirty = 0U;
        vlSelfRef.__PVT__req_aliasTask = 0U;
        vlSelfRef.__PVT__dirResult_meta_accessed = 0U;
        vlSelfRef.__PVT__dirResult_meta_dirty = 0U;
        vlSelfRef.__PVT__task_channel = 0U;
        vlSelfRef.__PVT__task_off = 0U;
        vlSelfRef.__PVT__task_needProbeAckData = 0U;
        vlSelfRef.__PVT__task_param = 0U;
        vlSelfRef.__PVT__dirResult_meta_alias = 0U;
        vlSelfRef.__PVT__dirResult_meta_state = 0U;
        vlSelfRef.__PVT__dirResult_hit = 0U;
        vlSelfRef.__PVT__dirResult_way = 0U;
        vlSelfRef.__PVT__req_reqSource = 0U;
        vlSelfRef.__PVT__req_sourceId = 0U;
        vlSelfRef.__PVT__req_needProbeAckData = 0U;
        vlSelfRef.__PVT__req_alias = 0U;
        vlSelfRef.__PVT__req_param = 0U;
        vlSelfRef.__PVT__req_opcode = 0U;
        vlSelfRef.__PVT__req_channel = 0U;
        vlSelfRef.__PVT__dirResult_set = 0U;
        vlSelfRef.__PVT__task_tag = 0U;
        vlSelfRef.__PVT__task_set = 0U;
        vlSelfRef.__PVT__req_tag = 0U;
        vlSelfRef.__PVT__dirResult_tag = 0U;
        vlSelfRef.__PVT__req_set = 0U;
        vlSelfRef.__PVT__dirResult_meta_clients = 0U;
        vlSelfRef.__PVT__req_off = 0U;
    } else {
        if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_resps_sink_c_valid) {
            vlSelfRef.__PVT__probeGotN = vlSelfRef.__PVT___GEN_129;
            vlSelfRef.__PVT__probeDirty = vlSelfRef.__PVT___GEN_128;
        } else if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_alloc_valid) {
            vlSelfRef.__PVT__probeGotN = 0U;
            vlSelfRef.__PVT__probeDirty = 0U;
        }
        if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_resps_sink_d_valid) {
            vlSelfRef.__PVT__gotGrantData = vlSelfRef.__PVT___GEN_142;
        } else if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_alloc_valid) {
            vlSelfRef.__PVT__gotGrantData = 0U;
        }
        if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_alloc_valid) {
            vlSelfRef.__PVT__req_aliasTask = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_task_aliasTask;
            vlSelfRef.__PVT__dirResult_hit = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_resp_hit;
            vlSelfRef.__PVT__req_reqSource = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_reqSource;
            vlSelfRef.__PVT__req_sourceId = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_sourceId;
            vlSelfRef.__PVT__req_needProbeAckData = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_needProbeAckData;
            vlSelfRef.__PVT__req_alias = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_alias;
            vlSelfRef.__PVT__req_param = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_param;
            vlSelfRef.__PVT__req_opcode = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_opcode;
            vlSelfRef.__PVT__req_channel = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel;
            vlSelfRef.__PVT__dirResult_set = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.__PVT__req_s3_set;
            vlSelfRef.__PVT__req_tag = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
            vlSelfRef.__PVT__req_set = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set;
            vlSelfRef.__PVT__req_off = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_off;
        }
        if (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_replResp_valid) 
             & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_retry)))) {
            vlSelfRef.__PVT__dirResult_meta_accessed 
                = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_accessed;
            vlSelfRef.__PVT__dirResult_meta_alias = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_alias;
            vlSelfRef.__PVT__dirResult_meta_state = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_state;
            vlSelfRef.__PVT__dirResult_way = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_way;
            vlSelfRef.__PVT__dirResult_tag = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_tag;
            vlSelfRef.__PVT__dirResult_meta_clients 
                = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients;
        } else {
            if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_alloc_valid) {
                vlSelfRef.__PVT__dirResult_meta_accessed 
                    = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_resp_meta_accessed;
                vlSelfRef.__PVT__dirResult_meta_alias 
                    = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_resp_meta_alias;
                vlSelfRef.__PVT__dirResult_way = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_resp_way;
                vlSelfRef.__PVT__dirResult_tag = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_resp_tag;
                vlSelfRef.__PVT__dirResult_meta_clients 
                    = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_resp_meta_clients;
            }
            vlSelfRef.__PVT__dirResult_meta_state = 
                ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_13_ready)
                  ? ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid)
                      ? (IData)(vlSelfRef.__PVT___GEN_26)
                      : ((IData)(vlSelfRef.__PVT__mp_grant_valid)
                          ? (IData)(vlSelfRef.__PVT___GEN_26)
                          : ((IData)(vlSelfRef.__PVT__mp_release_valid)
                              ? 0U : (IData)(vlSelfRef.__PVT___GEN_26))))
                  : (IData)(vlSelfRef.__PVT___GEN_26));
        }
        if (vlSelfRef.__PVT__nestedwb_match) {
            vlSelfRef.__PVT__dirResult_meta_dirty = vlSelfRef.__PVT___GEN_186;
        } else if (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_replResp_valid) 
                    & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_retry)))) {
            vlSelfRef.__PVT__dirResult_meta_dirty = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_dirty;
        } else if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_alloc_valid) {
            vlSelfRef.__PVT__dirResult_meta_dirty = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_resp_meta_dirty;
        }
        if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_bMergeTask_valid) {
            vlSelfRef.__PVT__task_channel = 2U;
            vlSelfRef.__PVT__task_off = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkB_io_task_bits_off;
            vlSelfRef.__PVT__task_needProbeAckData 
                = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkB_io_task_bits_needProbeAckData;
            vlSelfRef.__PVT__task_param = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkB_io_task_bits_param;
            vlSelfRef.__PVT__task_tag = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_tags_1;
            vlSelfRef.__PVT__task_set = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1;
        }
    }
    vlSelfRef.__PVT___T_13 = ((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_5 = ((IData)(vlSelfRef.__PVT___T_13) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__PVT__mp_release_dirty = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                                          & (0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state))) 
                                         | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_opcode_T_2 
        = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
            & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
               >> 1U)) | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_merge_probeack_param_T_2 = 
        ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                << 1U)) | (3U & (IData)(vlSelfRef.__PVT__task_param)));
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT__req_needT = (1U & ((~ ((IData)(vlSelfRef.__PVT__req_opcode) 
                                            >> 2U)) 
                                        | (((5U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                            & (1U == (IData)(vlSelfRef.__PVT__req_param))) 
                                           | (((6U 
                                                == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                               | (7U 
                                                  == (IData)(vlSelfRef.__PVT__req_opcode))) 
                                              & (0U 
                                                 != (IData)(vlSelfRef.__PVT__req_param))))));
    vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T 
        = ((4U == (IData)(vlSelfRef.__PVT__req_opcode)) 
           | (5U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__req_acquire = (((6U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                     & (IData)(vlSelfRef.__PVT__req_channel)) 
                                    | (7U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__mp_merge_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_merge_probeack)) 
                                                & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast));
    vlSelfRef.__PVT__io_msInfo_bits_willFree = ((IData)(vlSelfRef.__PVT__state_s_probeack) 
                                                & (((IData)(vlSelfRef.__PVT__state_s_refill) 
                                                    & ((IData)(vlSelfRef.__PVT__state_s_merge_probeack) 
                                                       & (IData)(vlSelfRef.__PVT__state_s_release))) 
                                                   & ((IData)(vlSelfRef.__PVT__state_w_pprobeacklast) 
                                                      & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                                         & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                                            & ((IData)(vlSelfRef.__PVT__state_w_releaseack) 
                                                               & ((IData)(vlSelfRef.__PVT__state_w_grantack) 
                                                                  & (IData)(vlSelfRef.__PVT__state_w_replResp))))))));
    vlSelfRef.__PVT__mp_grant_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
                                       & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                          & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT___io_tasks_mainpipe_bits_T_1_alias 
        = ((IData)(vlSelfRef.__PVT__mp_grant_valid)
            ? ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                : (IData)(vlSelfRef.__PVT__req_alias))
            : 0U);
    vlSelfRef.__PVT__req_promoteT = (((IData)(vlSelfRef.__PVT___req_promoteT_T) 
                                      | (5U == (IData)(vlSelfRef.__PVT__req_opcode))) 
                                     & (((IData)(vlSelfRef.__PVT__dirResult_hit) 
                                         & ((~ (IData)(vlSelfRef.__PVT__dirResult_meta_clients)) 
                                            & (3U == (IData)(vlSelfRef.__PVT__dirResult_meta_state)))) 
                                        | (((~ (IData)(vlSelfRef.__PVT__dirResult_hit)) 
                                            & (IData)(vlSelfRef.__PVT__gotT)) 
                                           | ((IData)(vlSelfRef.__PVT__dirResult_hit) 
                                              & ((IData)(vlSelfRef.__PVT__req_aliasTask) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__dirResult_meta_state)))))));
}

VL_INLINE_OPT void VTestTop_L2L3L2_MSHR___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13__1(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___T_1 = (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH) 
                                 >> 0xdU)) & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT__io_nestedwbData = ((IData)(vlSelfRef.__PVT__nestedwb_match) 
                                        & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty));
}

VL_INLINE_OPT void VTestTop_L2L3L2_MSHR___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13__2(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_3;
    __PVT___GEN_3 = 0;
    // Body
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_bMergeTask_valid)) 
                                               & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                                  & (IData)(vlSelfRef.__PVT__state_w_replResp)))));
    vlSelfRef.__PVT__io_status_bits_needsRepl = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__state_s_merge_probeack)) 
                                                       | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_bMergeTask_valid))));
    vlSelfRef.__PVT___GEN_60 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_61 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotDirty));
    vlSelfRef.__PVT___GEN_0 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_12 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_merge_probeack));
    vlSelfRef.__PVT___GEN_142 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__gotGrantData)));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_alloc_valid) {
        vlSelfRef.__PVT___GEN_26 = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_resp_meta_state;
        vlSelfRef.__PVT___GEN_4 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_5 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_6 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_13 = (1U & (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel)));
        vlSelfRef.__PVT___GEN_14 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                             >> 1U)));
        vlSelfRef.__PVT___GEN_8 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_7 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_10 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe;
    } else {
        vlSelfRef.__PVT___GEN_26 = vlSelfRef.__PVT__dirResult_meta_state;
        vlSelfRef.__PVT___GEN_4 = vlSelfRef.__PVT__state_w_grant;
        vlSelfRef.__PVT___GEN_5 = vlSelfRef.__PVT__state_w_grantlast;
        vlSelfRef.__PVT___GEN_6 = vlSelfRef.__PVT__state_w_grantfirst;
        vlSelfRef.__PVT___GEN_13 = (1U & (IData)(vlSelfRef.__PVT__state_s_refill));
        vlSelfRef.__PVT___GEN_14 = (1U & (IData)(vlSelfRef.__PVT__state_s_probeack));
        vlSelfRef.__PVT___GEN_8 = (1U & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
        vlSelfRef.__PVT___GEN_7 = (1U & (IData)(vlSelfRef.__PVT__state_w_pprobeack));
        vlSelfRef.__PVT___GEN_10 = vlSelfRef.__PVT__state_w_rprobeacklast;
    }
    vlSelfRef.__PVT___GEN_103 = (1U & ((IData)(vlSelfRef.__PVT___T_1) 
                                       | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_102 = (((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                      >> 0xdU) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__io_out_a_q_io_enq_ready))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
    vlSelfRef.__PVT___GEN_151 = (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer_1__DOT__bundleOut_0_e_q_io_deq_valid) 
                                     & (0xdU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_e_bits_sink)))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_grantack)
                                     : (IData)(vlSelfRef.__PVT__state_w_grantack)));
    __PVT___GEN_3 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_alloc_valid) 
                     | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_15 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___GEN_104 = ((IData)(vlSelfRef.__PVT___T_1) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
    vlSelfRef.__PVT___GEN_129 = ((1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param)) 
                                 | (((2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param)) 
                                     | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param))) 
                                    | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_alloc_valid)) 
                                       & (IData)(vlSelfRef.__PVT__probeGotN))));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_4 = ((4U 
                                                 == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)) 
                                                | (5U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)));
    vlSelfRef.__PVT___GEN_128 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__probeDirty)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_9 = ((IData)(vlSelfRef.__PVT__mp_grant_valid) 
                                                | (IData)(vlSelfRef.__PVT__mp_release_valid));
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid) 
                                                      | (IData)(vlSelfRef.__PVT__mp_grant_valid))));
    vlSelfRef.__PVT___GEN_150 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_3))
                                  : (IData)(__PVT___GEN_3));
}

VL_INLINE_OPT void VTestTop_L2L3L2_MSHR___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13__3(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_131;
    __PVT___GEN_131 = 0;
    // Body
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_resps_sink_c_valid) {
        if (vlSelfRef.__VdfgRegularize_h47ff5784_2_4) {
            vlSelfRef.__PVT___GEN_133 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last) 
                                         | (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
            vlSelfRef.__PVT___GEN_134 = (1U & ((IData)(vlSelfRef.__PVT__state_w_pprobeack) 
                                               | ((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                                  | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last))));
            __PVT___GEN_131 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last) 
                               | (IData)(vlSelfRef.__PVT__state_w_rprobeacklast));
        } else {
            vlSelfRef.__PVT___GEN_133 = vlSelfRef.__PVT___GEN_8;
            vlSelfRef.__PVT___GEN_134 = (1U & (IData)(vlSelfRef.__PVT___GEN_7));
            __PVT___GEN_131 = vlSelfRef.__PVT___GEN_10;
        }
    } else {
        vlSelfRef.__PVT___GEN_133 = vlSelfRef.__PVT___GEN_8;
        vlSelfRef.__PVT___GEN_134 = (1U & (IData)(vlSelfRef.__PVT___GEN_7));
        __PVT___GEN_131 = vlSelfRef.__PVT___GEN_10;
    }
    vlSelfRef.__VdfgRegularize_h47ff5784_2_11 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_retry)) 
                                                 & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_replResp_valid));
    vlSelfRef.__PVT___GEN_161 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_186 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11)
                                     ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_resp_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    if (vlSelfRef.__VdfgRegularize_h47ff5784_2_11) {
        if ((0U != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_state))) {
            vlSelfRef.__PVT___GEN_171 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(vlSelfRef.__PVT___GEN_104));
            vlSelfRef.__PVT___GEN_173 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(__PVT___GEN_131));
        } else {
            vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
            vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
        }
    } else {
        vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
        vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
    }
}

VL_INLINE_OPT void VTestTop_L2L3L2_MSHR___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13__4(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___GEN_120 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_13_ready)
                                  ? ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid)
                                      ? (IData)(vlSelfRef.__PVT___GEN_15)
                                      : ((IData)(vlSelfRef.__PVT__mp_grant_valid)
                                          ? (IData)(vlSelfRef.__PVT___GEN_15)
                                          : ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                             | (IData)(vlSelfRef.__PVT___GEN_15))))
                                  : (IData)(vlSelfRef.__PVT___GEN_15));
}

VL_INLINE_OPT void VTestTop_L2L3L2_MSHR___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14__0(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_resps_sink_c_valid) 
                        & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                           & ((IData)(vlSelfRef.__PVT__state_w_pprobeack) 
                              & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at MSHR.scala:556 assert(!(c_resp.valid && !io.status.bits.w_c_resp))\n",0);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_resps_sink_d_valid) 
                        & (~ ((~ (IData)(vlSelfRef.__PVT__state_w_grantlast)) 
                              | ((~ (IData)(vlSelfRef.__PVT__state_w_grant)) 
                                 | (~ (IData)(vlSelfRef.__PVT__state_w_releaseack))))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at MSHR.scala:557 assert(!(d_resp.valid && !io.status.bits.w_d_resp))\n",0);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (((IData)(vlSelfRef.__PVT__req_valid) 
                         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer_1__DOT__bundleOut_0_e_q_io_deq_valid) 
                            & (0xeU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_e_bits_sink)))) 
                        & (IData)(vlSelfRef.__PVT__state_w_grantack))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at MSHR.scala:558 assert(!(e_resp.valid && !io.status.bits.w_e_resp))\n",0);
    }
    vlSelfRef.__PVT__gotDirty = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                 && ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_resps_sink_d_valid)
                                      ? ((IData)(vlSelfRef.__PVT___T_13)
                                          ? ((IData)(vlSelfRef.__PVT__gotDirty) 
                                             | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_dirty))
                                          : (IData)(vlSelfRef.__PVT___GEN_61))
                                      : (IData)(vlSelfRef.__PVT___GEN_61)));
    vlSelfRef.__PVT__req_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                  && ((1U & (~ ((IData)(vlSelfRef.__PVT__io_msInfo_bits_willFree) 
                                                & (IData)(vlSelfRef.__PVT__req_valid)))) 
                                      && (IData)(vlSelfRef.__PVT___GEN_0)));
    vlSelfRef.__PVT__gotT = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                             && ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_resps_sink_d_valid)
                                  ? ((IData)(vlSelfRef.__PVT___T_13)
                                      ? (0U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_param))
                                      : (IData)(vlSelfRef.__PVT___GEN_60))
                                  : (IData)(vlSelfRef.__PVT___GEN_60)));
    vlSelfRef.__PVT__state_s_acquire = ((IData)(vlSymsp->TOP.reset) 
                                        | (IData)(vlSelfRef.__PVT___GEN_102));
    vlSelfRef.__PVT__state_w_grantfirst = ((IData)(vlSymsp->TOP.reset) 
                                           | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_resps_sink_d_valid)
                                               ? ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_5) 
                                                  | (IData)(vlSelfRef.__PVT___GEN_6))
                                               : (IData)(vlSelfRef.__PVT___GEN_6)));
    vlSelfRef.__PVT__state_s_pprobe = ((IData)(vlSymsp->TOP.reset) 
                                       | (IData)(vlSelfRef.__PVT___GEN_103));
    vlSelfRef.__PVT__state_w_replResp = ((IData)(vlSymsp->TOP.reset) 
                                         | (IData)(vlSelfRef.__PVT___GEN_161));
    vlSelfRef.__PVT__state_s_probeack = ((IData)(vlSymsp->TOP.reset) 
                                         | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_14_ready)
                                             ? ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid)
                                                 ? (IData)(vlSelfRef.__PVT___GEN_14)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__mp_grant_valid)
                                                  ? (IData)(vlSelfRef.__PVT___GEN_14)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__mp_release_valid)
                                                   ? (IData)(vlSelfRef.__PVT___GEN_14)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | (IData)(vlSelfRef.__PVT___GEN_14)))))
                                             : (IData)(vlSelfRef.__PVT___GEN_14)));
    vlSelfRef.__PVT__state_s_refill = ((IData)(vlSymsp->TOP.reset) 
                                       | ((~ ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_retry) 
                                              & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_replResp_valid))) 
                                          & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_14_ready)
                                              ? ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid)
                                                  ? (IData)(vlSelfRef.__PVT___GEN_13)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__mp_grant_valid) 
                                                  | (IData)(vlSelfRef.__PVT___GEN_13)))
                                              : (IData)(vlSelfRef.__PVT___GEN_13))));
    vlSelfRef.__PVT__state_s_rprobe = ((IData)(vlSymsp->TOP.reset) 
                                       | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_bMergeTask_valid)
                                           ? ((~ (IData)(vlSelfRef.__PVT__dirResult_meta_clients)) 
                                              & (IData)(vlSelfRef.__PVT___GEN_171))
                                           : (IData)(vlSelfRef.__PVT___GEN_171)));
    vlSelfRef.__PVT__state_s_merge_probeack = ((IData)(vlSymsp->TOP.reset) 
                                               | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_bMergeTask_valid)) 
                                                  & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_14_ready)
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid) 
                                                      | (IData)(vlSelfRef.__PVT___GEN_12))
                                                      : (IData)(vlSelfRef.__PVT___GEN_12))));
    vlSelfRef.__PVT__state_s_release = ((IData)(vlSymsp->TOP.reset) 
                                        | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_bMergeTask_valid) 
                                           | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11)
                                               ? ((0U 
                                                   == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_state)) 
                                                  & (IData)(vlSelfRef.__PVT___GEN_120))
                                               : (IData)(vlSelfRef.__PVT___GEN_120))));
    vlSelfRef.__PVT__state_w_pprobeack = ((IData)(vlSymsp->TOP.reset) 
                                          | (IData)(vlSelfRef.__PVT___GEN_134));
    vlSelfRef.__PVT__state_w_grantack = ((IData)(vlSymsp->TOP.reset) 
                                         | (IData)(vlSelfRef.__PVT___GEN_151));
    vlSelfRef.__PVT__state_w_pprobeacklast = ((IData)(vlSymsp->TOP.reset) 
                                              | (IData)(vlSelfRef.__PVT___GEN_133));
    vlSelfRef.__PVT__state_w_grantlast = ((IData)(vlSymsp->TOP.reset) 
                                          | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_resps_sink_d_valid)
                                              ? ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_5)
                                                  ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_last)
                                                  : (IData)(vlSelfRef.__PVT___GEN_5))
                                              : (IData)(vlSelfRef.__PVT___GEN_5)));
    vlSelfRef.__PVT__state_w_releaseack = ((IData)(vlSymsp->TOP.reset) 
                                           | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_bMergeTask_valid) 
                                              | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11)
                                                  ? 
                                                 ((0U 
                                                   == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_state)) 
                                                  & (IData)(vlSelfRef.__PVT___GEN_150))
                                                  : (IData)(vlSelfRef.__PVT___GEN_150))));
    vlSelfRef.__PVT__state_w_rprobeacklast = ((IData)(vlSymsp->TOP.reset) 
                                              | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_bMergeTask_valid)
                                                  ? 
                                                 ((~ (IData)(vlSelfRef.__PVT__dirResult_meta_clients)) 
                                                  & (IData)(vlSelfRef.__PVT___GEN_173))
                                                  : (IData)(vlSelfRef.__PVT___GEN_173)));
    vlSelfRef.__PVT__state_w_grant = (1U & ((IData)(vlSymsp->TOP.reset) 
                                            | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_resps_sink_d_valid)
                                                ? ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_5)
                                                    ? 
                                                   ((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                                    | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_last))
                                                    : (IData)(vlSelfRef.__PVT___GEN_4))
                                                : (IData)(vlSelfRef.__PVT___GEN_4))));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__probeGotN = 0U;
        vlSelfRef.__PVT__gotGrantData = 0U;
        vlSelfRef.__PVT__probeDirty = 0U;
        vlSelfRef.__PVT__req_aliasTask = 0U;
        vlSelfRef.__PVT__dirResult_meta_accessed = 0U;
        vlSelfRef.__PVT__dirResult_meta_dirty = 0U;
        vlSelfRef.__PVT__task_channel = 0U;
        vlSelfRef.__PVT__task_off = 0U;
        vlSelfRef.__PVT__task_needProbeAckData = 0U;
        vlSelfRef.__PVT__task_param = 0U;
        vlSelfRef.__PVT__dirResult_meta_alias = 0U;
        vlSelfRef.__PVT__dirResult_meta_state = 0U;
        vlSelfRef.__PVT__dirResult_hit = 0U;
        vlSelfRef.__PVT__dirResult_way = 0U;
        vlSelfRef.__PVT__req_reqSource = 0U;
        vlSelfRef.__PVT__req_sourceId = 0U;
        vlSelfRef.__PVT__req_needProbeAckData = 0U;
        vlSelfRef.__PVT__req_alias = 0U;
        vlSelfRef.__PVT__req_param = 0U;
        vlSelfRef.__PVT__req_opcode = 0U;
        vlSelfRef.__PVT__req_channel = 0U;
        vlSelfRef.__PVT__dirResult_set = 0U;
        vlSelfRef.__PVT__task_tag = 0U;
        vlSelfRef.__PVT__task_set = 0U;
        vlSelfRef.__PVT__req_tag = 0U;
        vlSelfRef.__PVT__dirResult_tag = 0U;
        vlSelfRef.__PVT__req_set = 0U;
        vlSelfRef.__PVT__dirResult_meta_clients = 0U;
        vlSelfRef.__PVT__req_off = 0U;
    } else {
        if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_resps_sink_c_valid) {
            vlSelfRef.__PVT__probeGotN = vlSelfRef.__PVT___GEN_129;
            vlSelfRef.__PVT__probeDirty = vlSelfRef.__PVT___GEN_128;
        } else if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_alloc_valid) {
            vlSelfRef.__PVT__probeGotN = 0U;
            vlSelfRef.__PVT__probeDirty = 0U;
        }
        if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_resps_sink_d_valid) {
            vlSelfRef.__PVT__gotGrantData = vlSelfRef.__PVT___GEN_142;
        } else if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_alloc_valid) {
            vlSelfRef.__PVT__gotGrantData = 0U;
        }
        if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_alloc_valid) {
            vlSelfRef.__PVT__req_aliasTask = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_task_aliasTask;
            vlSelfRef.__PVT__dirResult_hit = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_resp_hit;
            vlSelfRef.__PVT__req_reqSource = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_reqSource;
            vlSelfRef.__PVT__req_sourceId = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_sourceId;
            vlSelfRef.__PVT__req_needProbeAckData = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_needProbeAckData;
            vlSelfRef.__PVT__req_alias = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_alias;
            vlSelfRef.__PVT__req_param = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_param;
            vlSelfRef.__PVT__req_opcode = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_opcode;
            vlSelfRef.__PVT__req_channel = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel;
            vlSelfRef.__PVT__dirResult_set = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.__PVT__req_s3_set;
            vlSelfRef.__PVT__req_tag = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
            vlSelfRef.__PVT__req_set = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set;
            vlSelfRef.__PVT__req_off = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_off;
        }
        if (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_replResp_valid) 
             & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_retry)))) {
            vlSelfRef.__PVT__dirResult_meta_accessed 
                = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_accessed;
            vlSelfRef.__PVT__dirResult_meta_alias = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_alias;
            vlSelfRef.__PVT__dirResult_meta_state = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_state;
            vlSelfRef.__PVT__dirResult_way = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_way;
            vlSelfRef.__PVT__dirResult_tag = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_tag;
            vlSelfRef.__PVT__dirResult_meta_clients 
                = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients;
        } else {
            if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_alloc_valid) {
                vlSelfRef.__PVT__dirResult_meta_accessed 
                    = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_resp_meta_accessed;
                vlSelfRef.__PVT__dirResult_meta_alias 
                    = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_resp_meta_alias;
                vlSelfRef.__PVT__dirResult_way = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_resp_way;
                vlSelfRef.__PVT__dirResult_tag = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_resp_tag;
                vlSelfRef.__PVT__dirResult_meta_clients 
                    = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_resp_meta_clients;
            }
            vlSelfRef.__PVT__dirResult_meta_state = 
                ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_14_ready)
                  ? ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid)
                      ? (IData)(vlSelfRef.__PVT___GEN_26)
                      : ((IData)(vlSelfRef.__PVT__mp_grant_valid)
                          ? (IData)(vlSelfRef.__PVT___GEN_26)
                          : ((IData)(vlSelfRef.__PVT__mp_release_valid)
                              ? 0U : (IData)(vlSelfRef.__PVT___GEN_26))))
                  : (IData)(vlSelfRef.__PVT___GEN_26));
        }
        if (vlSelfRef.__PVT__nestedwb_match) {
            vlSelfRef.__PVT__dirResult_meta_dirty = vlSelfRef.__PVT___GEN_186;
        } else if (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_replResp_valid) 
                    & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_retry)))) {
            vlSelfRef.__PVT__dirResult_meta_dirty = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_dirty;
        } else if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_alloc_valid) {
            vlSelfRef.__PVT__dirResult_meta_dirty = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_resp_meta_dirty;
        }
        if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_bMergeTask_valid) {
            vlSelfRef.__PVT__task_channel = 2U;
            vlSelfRef.__PVT__task_off = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkB_io_task_bits_off;
            vlSelfRef.__PVT__task_needProbeAckData 
                = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkB_io_task_bits_needProbeAckData;
            vlSelfRef.__PVT__task_param = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkB_io_task_bits_param;
            vlSelfRef.__PVT__task_tag = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_tags_1;
            vlSelfRef.__PVT__task_set = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1;
        }
    }
    vlSelfRef.__PVT___T_13 = ((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_5 = ((IData)(vlSelfRef.__PVT___T_13) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__PVT__mp_release_dirty = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                                          & (0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state))) 
                                         | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_opcode_T_2 
        = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
            & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
               >> 1U)) | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_merge_probeack_param_T_2 = 
        ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                << 1U)) | (3U & (IData)(vlSelfRef.__PVT__task_param)));
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT__req_needT = (1U & ((~ ((IData)(vlSelfRef.__PVT__req_opcode) 
                                            >> 2U)) 
                                        | (((5U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                            & (1U == (IData)(vlSelfRef.__PVT__req_param))) 
                                           | (((6U 
                                                == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                               | (7U 
                                                  == (IData)(vlSelfRef.__PVT__req_opcode))) 
                                              & (0U 
                                                 != (IData)(vlSelfRef.__PVT__req_param))))));
    vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T 
        = ((4U == (IData)(vlSelfRef.__PVT__req_opcode)) 
           | (5U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__req_acquire = (((6U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                     & (IData)(vlSelfRef.__PVT__req_channel)) 
                                    | (7U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__mp_merge_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_merge_probeack)) 
                                                & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast));
    vlSelfRef.__PVT__io_msInfo_bits_willFree = ((IData)(vlSelfRef.__PVT__state_s_probeack) 
                                                & (((IData)(vlSelfRef.__PVT__state_s_refill) 
                                                    & ((IData)(vlSelfRef.__PVT__state_s_merge_probeack) 
                                                       & (IData)(vlSelfRef.__PVT__state_s_release))) 
                                                   & ((IData)(vlSelfRef.__PVT__state_w_pprobeacklast) 
                                                      & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                                         & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                                            & ((IData)(vlSelfRef.__PVT__state_w_releaseack) 
                                                               & ((IData)(vlSelfRef.__PVT__state_w_grantack) 
                                                                  & (IData)(vlSelfRef.__PVT__state_w_replResp))))))));
    vlSelfRef.__PVT__mp_grant_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
                                       & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                          & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT___io_tasks_mainpipe_bits_T_1_alias 
        = ((IData)(vlSelfRef.__PVT__mp_grant_valid)
            ? ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                : (IData)(vlSelfRef.__PVT__req_alias))
            : 0U);
    vlSelfRef.__PVT__req_promoteT = (((IData)(vlSelfRef.__PVT___req_promoteT_T) 
                                      | (5U == (IData)(vlSelfRef.__PVT__req_opcode))) 
                                     & (((IData)(vlSelfRef.__PVT__dirResult_hit) 
                                         & ((~ (IData)(vlSelfRef.__PVT__dirResult_meta_clients)) 
                                            & (3U == (IData)(vlSelfRef.__PVT__dirResult_meta_state)))) 
                                        | (((~ (IData)(vlSelfRef.__PVT__dirResult_hit)) 
                                            & (IData)(vlSelfRef.__PVT__gotT)) 
                                           | ((IData)(vlSelfRef.__PVT__dirResult_hit) 
                                              & ((IData)(vlSelfRef.__PVT__req_aliasTask) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__dirResult_meta_state)))))));
}

VL_INLINE_OPT void VTestTop_L2L3L2_MSHR___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14__1(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___T_1 = (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH) 
                                 >> 0xeU)) & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT__io_nestedwbData = ((IData)(vlSelfRef.__PVT__nestedwb_match) 
                                        & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty));
}

VL_INLINE_OPT void VTestTop_L2L3L2_MSHR___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14__2(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_3;
    __PVT___GEN_3 = 0;
    // Body
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_bMergeTask_valid)) 
                                               & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                                  & (IData)(vlSelfRef.__PVT__state_w_replResp)))));
    vlSelfRef.__PVT__io_status_bits_needsRepl = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__state_s_merge_probeack)) 
                                                       | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_bMergeTask_valid))));
    vlSelfRef.__PVT___GEN_60 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_61 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotDirty));
    vlSelfRef.__PVT___GEN_0 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_12 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_merge_probeack));
    vlSelfRef.__PVT___GEN_142 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__gotGrantData)));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_alloc_valid) {
        vlSelfRef.__PVT___GEN_26 = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_resp_meta_state;
        vlSelfRef.__PVT___GEN_4 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_5 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_6 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_13 = (1U & (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel)));
        vlSelfRef.__PVT___GEN_14 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                             >> 1U)));
        vlSelfRef.__PVT___GEN_8 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_7 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_10 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe;
    } else {
        vlSelfRef.__PVT___GEN_26 = vlSelfRef.__PVT__dirResult_meta_state;
        vlSelfRef.__PVT___GEN_4 = vlSelfRef.__PVT__state_w_grant;
        vlSelfRef.__PVT___GEN_5 = vlSelfRef.__PVT__state_w_grantlast;
        vlSelfRef.__PVT___GEN_6 = vlSelfRef.__PVT__state_w_grantfirst;
        vlSelfRef.__PVT___GEN_13 = (1U & (IData)(vlSelfRef.__PVT__state_s_refill));
        vlSelfRef.__PVT___GEN_14 = (1U & (IData)(vlSelfRef.__PVT__state_s_probeack));
        vlSelfRef.__PVT___GEN_8 = (1U & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
        vlSelfRef.__PVT___GEN_7 = (1U & (IData)(vlSelfRef.__PVT__state_w_pprobeack));
        vlSelfRef.__PVT___GEN_10 = vlSelfRef.__PVT__state_w_rprobeacklast;
    }
    vlSelfRef.__PVT___GEN_103 = (1U & ((IData)(vlSelfRef.__PVT___T_1) 
                                       | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_102 = (((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                      >> 0xeU) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__io_out_a_q_io_enq_ready))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
    vlSelfRef.__PVT___GEN_151 = (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer_1__DOT__bundleOut_0_e_q_io_deq_valid) 
                                     & (0xeU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_e_bits_sink)))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_grantack)
                                     : (IData)(vlSelfRef.__PVT__state_w_grantack)));
    __PVT___GEN_3 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_alloc_valid) 
                     | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_15 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___GEN_104 = ((IData)(vlSelfRef.__PVT___T_1) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
    vlSelfRef.__PVT___GEN_129 = ((1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param)) 
                                 | (((2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param)) 
                                     | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param))) 
                                    | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_alloc_valid)) 
                                       & (IData)(vlSelfRef.__PVT__probeGotN))));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_4 = ((4U 
                                                 == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)) 
                                                | (5U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)));
    vlSelfRef.__PVT___GEN_128 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__probeDirty)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_9 = ((IData)(vlSelfRef.__PVT__mp_grant_valid) 
                                                | (IData)(vlSelfRef.__PVT__mp_release_valid));
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid) 
                                                      | (IData)(vlSelfRef.__PVT__mp_grant_valid))));
    vlSelfRef.__PVT___GEN_150 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_3))
                                  : (IData)(__PVT___GEN_3));
}

VL_INLINE_OPT void VTestTop_L2L3L2_MSHR___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14__3(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_131;
    __PVT___GEN_131 = 0;
    // Body
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_resps_sink_c_valid) {
        if (vlSelfRef.__VdfgRegularize_h47ff5784_2_4) {
            vlSelfRef.__PVT___GEN_133 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last) 
                                         | (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
            vlSelfRef.__PVT___GEN_134 = (1U & ((IData)(vlSelfRef.__PVT__state_w_pprobeack) 
                                               | ((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                                  | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last))));
            __PVT___GEN_131 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last) 
                               | (IData)(vlSelfRef.__PVT__state_w_rprobeacklast));
        } else {
            vlSelfRef.__PVT___GEN_133 = vlSelfRef.__PVT___GEN_8;
            vlSelfRef.__PVT___GEN_134 = (1U & (IData)(vlSelfRef.__PVT___GEN_7));
            __PVT___GEN_131 = vlSelfRef.__PVT___GEN_10;
        }
    } else {
        vlSelfRef.__PVT___GEN_133 = vlSelfRef.__PVT___GEN_8;
        vlSelfRef.__PVT___GEN_134 = (1U & (IData)(vlSelfRef.__PVT___GEN_7));
        __PVT___GEN_131 = vlSelfRef.__PVT___GEN_10;
    }
    vlSelfRef.__VdfgRegularize_h47ff5784_2_11 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_retry)) 
                                                 & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_replResp_valid));
    vlSelfRef.__PVT___GEN_161 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_186 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11)
                                     ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_resp_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    if (vlSelfRef.__VdfgRegularize_h47ff5784_2_11) {
        if ((0U != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_state))) {
            vlSelfRef.__PVT___GEN_171 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(vlSelfRef.__PVT___GEN_104));
            vlSelfRef.__PVT___GEN_173 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(__PVT___GEN_131));
        } else {
            vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
            vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
        }
    } else {
        vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
        vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
    }
}

VL_INLINE_OPT void VTestTop_L2L3L2_MSHR___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14__4(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___GEN_120 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_14_ready)
                                  ? ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid)
                                      ? (IData)(vlSelfRef.__PVT___GEN_15)
                                      : ((IData)(vlSelfRef.__PVT__mp_grant_valid)
                                          ? (IData)(vlSelfRef.__PVT___GEN_15)
                                          : ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                             | (IData)(vlSelfRef.__PVT___GEN_15))))
                                  : (IData)(vlSelfRef.__PVT___GEN_15));
}

VL_INLINE_OPT void VTestTop_L2L3L2_MSHR___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15__0(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_resps_sink_c_valid) 
                        & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                           & ((IData)(vlSelfRef.__PVT__state_w_pprobeack) 
                              & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at MSHR.scala:556 assert(!(c_resp.valid && !io.status.bits.w_c_resp))\n",0);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_resps_sink_d_valid) 
                        & (~ ((~ (IData)(vlSelfRef.__PVT__state_w_grantlast)) 
                              | ((~ (IData)(vlSelfRef.__PVT__state_w_grant)) 
                                 | (~ (IData)(vlSelfRef.__PVT__state_w_releaseack))))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at MSHR.scala:557 assert(!(d_resp.valid && !io.status.bits.w_d_resp))\n",0);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (((IData)(vlSelfRef.__PVT__req_valid) 
                         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer_1__DOT__bundleOut_0_e_q_io_deq_valid) 
                            & (0xfU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_e_bits_sink)))) 
                        & (IData)(vlSelfRef.__PVT__state_w_grantack))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at MSHR.scala:558 assert(!(e_resp.valid && !io.status.bits.w_e_resp))\n",0);
    }
    vlSelfRef.__PVT__gotDirty = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                 && ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_resps_sink_d_valid)
                                      ? ((IData)(vlSelfRef.__PVT___T_13)
                                          ? ((IData)(vlSelfRef.__PVT__gotDirty) 
                                             | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_dirty))
                                          : (IData)(vlSelfRef.__PVT___GEN_61))
                                      : (IData)(vlSelfRef.__PVT___GEN_61)));
    vlSelfRef.__PVT__req_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                  && ((1U & (~ ((IData)(vlSelfRef.__PVT__io_msInfo_bits_willFree) 
                                                & (IData)(vlSelfRef.__PVT__req_valid)))) 
                                      && (IData)(vlSelfRef.__PVT___GEN_0)));
    vlSelfRef.__PVT__gotT = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                             && ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_resps_sink_d_valid)
                                  ? ((IData)(vlSelfRef.__PVT___T_13)
                                      ? (0U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_param))
                                      : (IData)(vlSelfRef.__PVT___GEN_60))
                                  : (IData)(vlSelfRef.__PVT___GEN_60)));
    vlSelfRef.__PVT__state_s_acquire = ((IData)(vlSymsp->TOP.reset) 
                                        | (IData)(vlSelfRef.__PVT___GEN_102));
    vlSelfRef.__PVT__state_w_grantfirst = ((IData)(vlSymsp->TOP.reset) 
                                           | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_resps_sink_d_valid)
                                               ? ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_5) 
                                                  | (IData)(vlSelfRef.__PVT___GEN_6))
                                               : (IData)(vlSelfRef.__PVT___GEN_6)));
    vlSelfRef.__PVT__state_w_replResp = ((IData)(vlSymsp->TOP.reset) 
                                         | (IData)(vlSelfRef.__PVT___GEN_161));
    vlSelfRef.__PVT__state_s_pprobe = ((IData)(vlSymsp->TOP.reset) 
                                       | (IData)(vlSelfRef.__PVT___GEN_103));
    vlSelfRef.__PVT__state_s_probeack = ((IData)(vlSymsp->TOP.reset) 
                                         | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_15_ready)
                                             ? ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid)
                                                 ? (IData)(vlSelfRef.__PVT___GEN_14)
                                                 : 
                                                ((IData)(vlSelfRef.__PVT__mp_grant_valid)
                                                  ? (IData)(vlSelfRef.__PVT___GEN_14)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__mp_release_valid)
                                                   ? (IData)(vlSelfRef.__PVT___GEN_14)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | (IData)(vlSelfRef.__PVT___GEN_14)))))
                                             : (IData)(vlSelfRef.__PVT___GEN_14)));
    vlSelfRef.__PVT__state_s_refill = ((IData)(vlSymsp->TOP.reset) 
                                       | ((~ ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_retry) 
                                              & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_replResp_valid))) 
                                          & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_15_ready)
                                              ? ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid)
                                                  ? (IData)(vlSelfRef.__PVT___GEN_13)
                                                  : 
                                                 ((IData)(vlSelfRef.__PVT__mp_grant_valid) 
                                                  | (IData)(vlSelfRef.__PVT___GEN_13)))
                                              : (IData)(vlSelfRef.__PVT___GEN_13))));
    vlSelfRef.__PVT__state_s_rprobe = ((IData)(vlSymsp->TOP.reset) 
                                       | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_bMergeTask_valid)
                                           ? ((~ (IData)(vlSelfRef.__PVT__dirResult_meta_clients)) 
                                              & (IData)(vlSelfRef.__PVT___GEN_171))
                                           : (IData)(vlSelfRef.__PVT___GEN_171)));
    vlSelfRef.__PVT__state_s_merge_probeack = ((IData)(vlSymsp->TOP.reset) 
                                               | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_bMergeTask_valid)) 
                                                  & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_15_ready)
                                                      ? 
                                                     ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid) 
                                                      | (IData)(vlSelfRef.__PVT___GEN_12))
                                                      : (IData)(vlSelfRef.__PVT___GEN_12))));
    vlSelfRef.__PVT__state_s_release = ((IData)(vlSymsp->TOP.reset) 
                                        | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_bMergeTask_valid) 
                                           | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11)
                                               ? ((0U 
                                                   == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_state)) 
                                                  & (IData)(vlSelfRef.__PVT___GEN_120))
                                               : (IData)(vlSelfRef.__PVT___GEN_120))));
    vlSelfRef.__PVT__state_w_pprobeack = ((IData)(vlSymsp->TOP.reset) 
                                          | (IData)(vlSelfRef.__PVT___GEN_134));
    vlSelfRef.__PVT__state_w_grantack = ((IData)(vlSymsp->TOP.reset) 
                                         | (IData)(vlSelfRef.__PVT___GEN_151));
    vlSelfRef.__PVT__state_w_pprobeacklast = ((IData)(vlSymsp->TOP.reset) 
                                              | (IData)(vlSelfRef.__PVT___GEN_133));
    vlSelfRef.__PVT__state_w_grantlast = ((IData)(vlSymsp->TOP.reset) 
                                          | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_resps_sink_d_valid)
                                              ? ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_5)
                                                  ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_last)
                                                  : (IData)(vlSelfRef.__PVT___GEN_5))
                                              : (IData)(vlSelfRef.__PVT___GEN_5)));
    vlSelfRef.__PVT__state_w_releaseack = ((IData)(vlSymsp->TOP.reset) 
                                           | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_bMergeTask_valid) 
                                              | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11)
                                                  ? 
                                                 ((0U 
                                                   == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_state)) 
                                                  & (IData)(vlSelfRef.__PVT___GEN_150))
                                                  : (IData)(vlSelfRef.__PVT___GEN_150))));
    vlSelfRef.__PVT__state_w_rprobeacklast = ((IData)(vlSymsp->TOP.reset) 
                                              | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_bMergeTask_valid)
                                                  ? 
                                                 ((~ (IData)(vlSelfRef.__PVT__dirResult_meta_clients)) 
                                                  & (IData)(vlSelfRef.__PVT___GEN_173))
                                                  : (IData)(vlSelfRef.__PVT___GEN_173)));
    vlSelfRef.__PVT__state_w_grant = (1U & ((IData)(vlSymsp->TOP.reset) 
                                            | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_resps_sink_d_valid)
                                                ? ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_5)
                                                    ? 
                                                   ((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                                    | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_last))
                                                    : (IData)(vlSelfRef.__PVT___GEN_4))
                                                : (IData)(vlSelfRef.__PVT___GEN_4))));
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__probeGotN = 0U;
        vlSelfRef.__PVT__gotGrantData = 0U;
        vlSelfRef.__PVT__probeDirty = 0U;
        vlSelfRef.__PVT__req_aliasTask = 0U;
        vlSelfRef.__PVT__dirResult_meta_accessed = 0U;
        vlSelfRef.__PVT__dirResult_meta_dirty = 0U;
        vlSelfRef.__PVT__task_channel = 0U;
        vlSelfRef.__PVT__task_off = 0U;
        vlSelfRef.__PVT__task_needProbeAckData = 0U;
        vlSelfRef.__PVT__task_param = 0U;
        vlSelfRef.__PVT__dirResult_meta_alias = 0U;
        vlSelfRef.__PVT__dirResult_meta_state = 0U;
        vlSelfRef.__PVT__dirResult_hit = 0U;
        vlSelfRef.__PVT__dirResult_way = 0U;
        vlSelfRef.__PVT__req_reqSource = 0U;
        vlSelfRef.__PVT__req_sourceId = 0U;
        vlSelfRef.__PVT__req_needProbeAckData = 0U;
        vlSelfRef.__PVT__req_alias = 0U;
        vlSelfRef.__PVT__req_param = 0U;
        vlSelfRef.__PVT__req_opcode = 0U;
        vlSelfRef.__PVT__req_channel = 0U;
        vlSelfRef.__PVT__dirResult_set = 0U;
        vlSelfRef.__PVT__task_tag = 0U;
        vlSelfRef.__PVT__task_set = 0U;
        vlSelfRef.__PVT__req_tag = 0U;
        vlSelfRef.__PVT__dirResult_tag = 0U;
        vlSelfRef.__PVT__req_set = 0U;
        vlSelfRef.__PVT__dirResult_meta_clients = 0U;
        vlSelfRef.__PVT__req_off = 0U;
    } else {
        if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_resps_sink_c_valid) {
            vlSelfRef.__PVT__probeGotN = vlSelfRef.__PVT___GEN_129;
            vlSelfRef.__PVT__probeDirty = vlSelfRef.__PVT___GEN_128;
        } else if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_alloc_valid) {
            vlSelfRef.__PVT__probeGotN = 0U;
            vlSelfRef.__PVT__probeDirty = 0U;
        }
        if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_resps_sink_d_valid) {
            vlSelfRef.__PVT__gotGrantData = vlSelfRef.__PVT___GEN_142;
        } else if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_alloc_valid) {
            vlSelfRef.__PVT__gotGrantData = 0U;
        }
        if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_alloc_valid) {
            vlSelfRef.__PVT__req_aliasTask = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_task_aliasTask;
            vlSelfRef.__PVT__dirResult_hit = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_resp_hit;
            vlSelfRef.__PVT__req_reqSource = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_reqSource;
            vlSelfRef.__PVT__req_sourceId = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_sourceId;
            vlSelfRef.__PVT__req_needProbeAckData = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_needProbeAckData;
            vlSelfRef.__PVT__req_alias = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_alias;
            vlSelfRef.__PVT__req_param = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_param;
            vlSelfRef.__PVT__req_opcode = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_opcode;
            vlSelfRef.__PVT__req_channel = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel;
            vlSelfRef.__PVT__dirResult_set = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.__PVT__req_s3_set;
            vlSelfRef.__PVT__req_tag = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag;
            vlSelfRef.__PVT__req_set = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set;
            vlSelfRef.__PVT__req_off = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_off;
        }
        if (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_replResp_valid) 
             & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_retry)))) {
            vlSelfRef.__PVT__dirResult_meta_accessed 
                = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_accessed;
            vlSelfRef.__PVT__dirResult_meta_alias = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_alias;
            vlSelfRef.__PVT__dirResult_meta_state = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_state;
            vlSelfRef.__PVT__dirResult_way = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_way;
            vlSelfRef.__PVT__dirResult_tag = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_tag;
            vlSelfRef.__PVT__dirResult_meta_clients 
                = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients;
        } else {
            if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_alloc_valid) {
                vlSelfRef.__PVT__dirResult_meta_accessed 
                    = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_resp_meta_accessed;
                vlSelfRef.__PVT__dirResult_meta_alias 
                    = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_resp_meta_alias;
                vlSelfRef.__PVT__dirResult_way = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_resp_way;
                vlSelfRef.__PVT__dirResult_tag = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_resp_tag;
                vlSelfRef.__PVT__dirResult_meta_clients 
                    = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_resp_meta_clients;
            }
            vlSelfRef.__PVT__dirResult_meta_state = 
                ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_15_ready)
                  ? ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid)
                      ? (IData)(vlSelfRef.__PVT___GEN_26)
                      : ((IData)(vlSelfRef.__PVT__mp_grant_valid)
                          ? (IData)(vlSelfRef.__PVT___GEN_26)
                          : ((IData)(vlSelfRef.__PVT__mp_release_valid)
                              ? 0U : (IData)(vlSelfRef.__PVT___GEN_26))))
                  : (IData)(vlSelfRef.__PVT___GEN_26));
        }
        if (vlSelfRef.__PVT__nestedwb_match) {
            vlSelfRef.__PVT__dirResult_meta_dirty = vlSelfRef.__PVT___GEN_186;
        } else if (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_replResp_valid) 
                    & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_retry)))) {
            vlSelfRef.__PVT__dirResult_meta_dirty = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_dirty;
        } else if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_alloc_valid) {
            vlSelfRef.__PVT__dirResult_meta_dirty = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_resp_meta_dirty;
        }
        if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_bMergeTask_valid) {
            vlSelfRef.__PVT__task_channel = 2U;
            vlSelfRef.__PVT__task_off = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkB_io_task_bits_off;
            vlSelfRef.__PVT__task_needProbeAckData 
                = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkB_io_task_bits_needProbeAckData;
            vlSelfRef.__PVT__task_param = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkB_io_task_bits_param;
            vlSelfRef.__PVT__task_tag = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_tags_1;
            vlSelfRef.__PVT__task_set = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1;
        }
    }
    vlSelfRef.__PVT___T_13 = ((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_5 = ((IData)(vlSelfRef.__PVT___T_13) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__PVT__mp_release_dirty = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                                          & (0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state))) 
                                         | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_opcode_T_2 
        = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
            & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
               >> 1U)) | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_merge_probeack_param_T_2 = 
        ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                << 1U)) | (3U & (IData)(vlSelfRef.__PVT__task_param)));
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT__req_needT = (1U & ((~ ((IData)(vlSelfRef.__PVT__req_opcode) 
                                            >> 2U)) 
                                        | (((5U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                            & (1U == (IData)(vlSelfRef.__PVT__req_param))) 
                                           | (((6U 
                                                == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                               | (7U 
                                                  == (IData)(vlSelfRef.__PVT__req_opcode))) 
                                              & (0U 
                                                 != (IData)(vlSelfRef.__PVT__req_param))))));
    vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T 
        = ((4U == (IData)(vlSelfRef.__PVT__req_opcode)) 
           | (5U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__req_acquire = (((6U == (IData)(vlSelfRef.__PVT__req_opcode)) 
                                     & (IData)(vlSelfRef.__PVT__req_channel)) 
                                    | (7U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__mp_merge_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_merge_probeack)) 
                                                & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast));
    vlSelfRef.__PVT__io_msInfo_bits_willFree = ((IData)(vlSelfRef.__PVT__state_s_probeack) 
                                                & (((IData)(vlSelfRef.__PVT__state_s_refill) 
                                                    & ((IData)(vlSelfRef.__PVT__state_s_merge_probeack) 
                                                       & (IData)(vlSelfRef.__PVT__state_s_release))) 
                                                   & ((IData)(vlSelfRef.__PVT__state_w_pprobeacklast) 
                                                      & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                                         & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                                            & ((IData)(vlSelfRef.__PVT__state_w_releaseack) 
                                                               & ((IData)(vlSelfRef.__PVT__state_w_grantack) 
                                                                  & (IData)(vlSelfRef.__PVT__state_w_replResp))))))));
    vlSelfRef.__PVT__mp_grant_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
                                       & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                          & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT___io_tasks_mainpipe_bits_T_1_alias 
        = ((IData)(vlSelfRef.__PVT__mp_grant_valid)
            ? ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                : (IData)(vlSelfRef.__PVT__req_alias))
            : 0U);
    vlSelfRef.__PVT__req_promoteT = (((IData)(vlSelfRef.__PVT___req_promoteT_T) 
                                      | (5U == (IData)(vlSelfRef.__PVT__req_opcode))) 
                                     & (((IData)(vlSelfRef.__PVT__dirResult_hit) 
                                         & ((~ (IData)(vlSelfRef.__PVT__dirResult_meta_clients)) 
                                            & (3U == (IData)(vlSelfRef.__PVT__dirResult_meta_state)))) 
                                        | (((~ (IData)(vlSelfRef.__PVT__dirResult_hit)) 
                                            & (IData)(vlSelfRef.__PVT__gotT)) 
                                           | ((IData)(vlSelfRef.__PVT__dirResult_hit) 
                                              & ((IData)(vlSelfRef.__PVT__req_aliasTask) 
                                                 & (2U 
                                                    == (IData)(vlSelfRef.__PVT__dirResult_meta_state)))))));
}

VL_INLINE_OPT void VTestTop_L2L3L2_MSHR___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15__1(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___T_1 = (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH) 
                                 >> 0xfU)) & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT__io_nestedwbData = ((IData)(vlSelfRef.__PVT__nestedwb_match) 
                                        & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty));
}

VL_INLINE_OPT void VTestTop_L2L3L2_MSHR___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15__2(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_3;
    __PVT___GEN_3 = 0;
    // Body
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_bMergeTask_valid)) 
                                               & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                                  & (IData)(vlSelfRef.__PVT__state_w_replResp)))));
    vlSelfRef.__PVT__io_status_bits_needsRepl = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__state_s_merge_probeack)) 
                                                       | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_bMergeTask_valid))));
    vlSelfRef.__PVT___GEN_60 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_61 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotDirty));
    vlSelfRef.__PVT___GEN_0 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_12 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_merge_probeack));
    vlSelfRef.__PVT___GEN_142 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__gotGrantData)));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_alloc_valid) {
        vlSelfRef.__PVT___GEN_26 = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_resp_meta_state;
        vlSelfRef.__PVT___GEN_4 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_5 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_6 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_13 = (1U & (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel)));
        vlSelfRef.__PVT___GEN_14 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                             >> 1U)));
        vlSelfRef.__PVT___GEN_8 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_7 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_10 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe;
    } else {
        vlSelfRef.__PVT___GEN_26 = vlSelfRef.__PVT__dirResult_meta_state;
        vlSelfRef.__PVT___GEN_4 = vlSelfRef.__PVT__state_w_grant;
        vlSelfRef.__PVT___GEN_5 = vlSelfRef.__PVT__state_w_grantlast;
        vlSelfRef.__PVT___GEN_6 = vlSelfRef.__PVT__state_w_grantfirst;
        vlSelfRef.__PVT___GEN_13 = (1U & (IData)(vlSelfRef.__PVT__state_s_refill));
        vlSelfRef.__PVT___GEN_14 = (1U & (IData)(vlSelfRef.__PVT__state_s_probeack));
        vlSelfRef.__PVT___GEN_8 = (1U & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
        vlSelfRef.__PVT___GEN_7 = (1U & (IData)(vlSelfRef.__PVT__state_w_pprobeack));
        vlSelfRef.__PVT___GEN_10 = vlSelfRef.__PVT__state_w_rprobeacklast;
    }
    vlSelfRef.__PVT___GEN_103 = (1U & ((IData)(vlSelfRef.__PVT___T_1) 
                                       | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_102 = (((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                      >> 0xfU) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__io_out_a_q_io_enq_ready))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
    vlSelfRef.__PVT___GEN_151 = (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer_1__DOT__bundleOut_0_e_q_io_deq_valid) 
                                     & (0xfU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_e_bits_sink)))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_grantack)
                                     : (IData)(vlSelfRef.__PVT__state_w_grantack)));
    __PVT___GEN_3 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_alloc_valid) 
                     | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_15 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___GEN_104 = ((IData)(vlSelfRef.__PVT___T_1) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
    vlSelfRef.__PVT___GEN_129 = ((1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param)) 
                                 | (((2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param)) 
                                     | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param))) 
                                    | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_alloc_valid)) 
                                       & (IData)(vlSelfRef.__PVT__probeGotN))));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_4 = ((4U 
                                                 == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)) 
                                                | (5U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)));
    vlSelfRef.__PVT___GEN_128 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__probeDirty)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_9 = ((IData)(vlSelfRef.__PVT__mp_grant_valid) 
                                                | (IData)(vlSelfRef.__PVT__mp_release_valid));
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid) 
                                                      | (IData)(vlSelfRef.__PVT__mp_grant_valid))));
    vlSelfRef.__PVT___GEN_150 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_3))
                                  : (IData)(__PVT___GEN_3));
}

VL_INLINE_OPT void VTestTop_L2L3L2_MSHR___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15__3(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_131;
    __PVT___GEN_131 = 0;
    // Body
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_resps_sink_c_valid) {
        if (vlSelfRef.__VdfgRegularize_h47ff5784_2_4) {
            vlSelfRef.__PVT___GEN_133 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last) 
                                         | (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
            vlSelfRef.__PVT___GEN_134 = (1U & ((IData)(vlSelfRef.__PVT__state_w_pprobeack) 
                                               | ((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                                  | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last))));
            __PVT___GEN_131 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last) 
                               | (IData)(vlSelfRef.__PVT__state_w_rprobeacklast));
        } else {
            vlSelfRef.__PVT___GEN_133 = vlSelfRef.__PVT___GEN_8;
            vlSelfRef.__PVT___GEN_134 = (1U & (IData)(vlSelfRef.__PVT___GEN_7));
            __PVT___GEN_131 = vlSelfRef.__PVT___GEN_10;
        }
    } else {
        vlSelfRef.__PVT___GEN_133 = vlSelfRef.__PVT___GEN_8;
        vlSelfRef.__PVT___GEN_134 = (1U & (IData)(vlSelfRef.__PVT___GEN_7));
        __PVT___GEN_131 = vlSelfRef.__PVT___GEN_10;
    }
    vlSelfRef.__VdfgRegularize_h47ff5784_2_11 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_retry)) 
                                                 & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_replResp_valid));
    vlSelfRef.__PVT___GEN_161 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_186 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11)
                                     ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_resp_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    if (vlSelfRef.__VdfgRegularize_h47ff5784_2_11) {
        if ((0U != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_state))) {
            vlSelfRef.__PVT___GEN_171 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(vlSelfRef.__PVT___GEN_104));
            vlSelfRef.__PVT___GEN_173 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(__PVT___GEN_131));
        } else {
            vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
            vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
        }
    } else {
        vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
        vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
    }
}

VL_INLINE_OPT void VTestTop_L2L3L2_MSHR___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15__4(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___GEN_120 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshr_task_arb_io_in_15_ready)
                                  ? ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid)
                                      ? (IData)(vlSelfRef.__PVT___GEN_15)
                                      : ((IData)(vlSelfRef.__PVT__mp_grant_valid)
                                          ? (IData)(vlSelfRef.__PVT___GEN_15)
                                          : ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                             | (IData)(vlSelfRef.__PVT___GEN_15))))
                                  : (IData)(vlSelfRef.__PVT___GEN_15));
}
