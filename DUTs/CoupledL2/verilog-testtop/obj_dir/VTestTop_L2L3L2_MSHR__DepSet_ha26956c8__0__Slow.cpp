// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestTop_L2L3L2.h for the primary calling header

#include "VTestTop_L2L3L2__pch.h"
#include "VTestTop_L2L3L2_MSHR.h"
#include "VTestTop_L2L3L2__Syms.h"

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0__0(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mp_release_dirty = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                                          & (0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state))) 
                                         | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_opcode_T_2 
        = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
            & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
               >> 1U)) | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT___mp_merge_probeack_param_T_2 = 
        ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                << 1U)) | (3U & (IData)(vlSelfRef.__PVT__task_param)));
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
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
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
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__mp_grant_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
                                       & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                          & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
    vlSelfRef.__PVT___T_13 = ((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_4 = ((4U 
                                                 == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)) 
                                                | (5U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)));
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_bMergeTask_valid)) 
                                               & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                                  & (IData)(vlSelfRef.__PVT__state_w_replResp)))));
    vlSelfRef.__PVT__io_status_bits_needsRepl = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__state_s_merge_probeack)) 
                                                       | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_bMergeTask_valid))));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__io_nestedwbData = ((IData)(vlSelfRef.__PVT__nestedwb_match) 
                                        & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty));
    vlSelfRef.__PVT___io_tasks_mainpipe_bits_T_1_alias 
        = ((IData)(vlSelfRef.__PVT__mp_grant_valid)
            ? ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                : (IData)(vlSelfRef.__PVT__req_alias))
            : 0U);
    vlSelfRef.__VdfgRegularize_h47ff5784_2_5 = ((IData)(vlSelfRef.__PVT___T_13) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_9 = ((IData)(vlSelfRef.__PVT__mp_grant_valid) 
                                                | (IData)(vlSelfRef.__PVT__mp_release_valid));
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid) 
                                                      | (IData)(vlSelfRef.__PVT__mp_grant_valid))));
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

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0__1(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_3;
    __PVT___GEN_3 = 0;
    CData/*0:0*/ __PVT___GEN_131;
    __PVT___GEN_131 = 0;
    // Body
    vlSelfRef.__PVT___GEN_60 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_61 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotDirty));
    vlSelfRef.__PVT___GEN_0 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_12 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_merge_probeack));
    vlSelfRef.__PVT___GEN_142 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__gotGrantData)));
    vlSelfRef.__PVT___GEN_128 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__probeDirty)));
    vlSelfRef.__PVT___GEN_129 = ((1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param)) 
                                 | (((2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param)) 
                                     | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param))) 
                                    | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)) 
                                       & (IData)(vlSelfRef.__PVT__probeGotN))));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid) {
        vlSelfRef.__PVT___GEN_26 = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_resp_meta_state;
        vlSelfRef.__PVT___GEN_4 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_5 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_6 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_13 = (1U & (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel)));
        vlSelfRef.__PVT___GEN_14 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                             >> 1U)));
        vlSelfRef.__PVT___GEN_8 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_7 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_10 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe;
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
    vlSelfRef.__PVT___GEN_102 = (((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                                  & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                     & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__io_out_a_q_io_enq_ready))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
    vlSelfRef.__PVT___GEN_151 = (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer__DOT__bundleOut_0_e_q_io_deq_valid) 
                                     & (0U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_e_bits_sink)))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_grantack)
                                     : (IData)(vlSelfRef.__PVT__state_w_grantack)));
    __PVT___GEN_3 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid) 
                     | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_15 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___T_1 = (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH)) 
                             & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_11 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_retry)) 
                                                 & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_replResp_valid));
    vlSelfRef.__PVT___GEN_150 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_3))
                                  : (IData)(__PVT___GEN_3));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_resps_sink_c_valid) {
        if (vlSelfRef.__VdfgRegularize_h47ff5784_2_4) {
            vlSelfRef.__PVT___GEN_133 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last) 
                                         | (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
            vlSelfRef.__PVT___GEN_134 = (1U & ((IData)(vlSelfRef.__PVT__state_w_pprobeack) 
                                               | ((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                                  | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last))));
            __PVT___GEN_131 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last) 
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
    vlSelfRef.__PVT___GEN_103 = (1U & ((IData)(vlSelfRef.__PVT___T_1) 
                                       | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_104 = ((IData)(vlSelfRef.__PVT___T_1) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
    vlSelfRef.__PVT___GEN_161 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_186 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11)
                                     ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_resp_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    if (vlSelfRef.__VdfgRegularize_h47ff5784_2_11) {
        if ((0U != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_state))) {
            vlSelfRef.__PVT___GEN_173 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(__PVT___GEN_131));
            vlSelfRef.__PVT___GEN_171 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(vlSelfRef.__PVT___GEN_104));
        } else {
            vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
            vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
        }
    } else {
        vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
        vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
    }
}

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1__0(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mp_release_dirty = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                                          & (0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state))) 
                                         | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_opcode_T_2 
        = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
            & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
               >> 1U)) | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT___mp_merge_probeack_param_T_2 = 
        ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                << 1U)) | (3U & (IData)(vlSelfRef.__PVT__task_param)));
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
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
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
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__mp_grant_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
                                       & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                          & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
    vlSelfRef.__PVT___T_13 = ((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_4 = ((4U 
                                                 == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)) 
                                                | (5U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)));
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_bMergeTask_valid)) 
                                               & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                                  & (IData)(vlSelfRef.__PVT__state_w_replResp)))));
    vlSelfRef.__PVT__io_status_bits_needsRepl = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__state_s_merge_probeack)) 
                                                       | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_bMergeTask_valid))));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__io_nestedwbData = ((IData)(vlSelfRef.__PVT__nestedwb_match) 
                                        & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty));
    vlSelfRef.__PVT___io_tasks_mainpipe_bits_T_1_alias 
        = ((IData)(vlSelfRef.__PVT__mp_grant_valid)
            ? ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                : (IData)(vlSelfRef.__PVT__req_alias))
            : 0U);
    vlSelfRef.__VdfgRegularize_h47ff5784_2_5 = ((IData)(vlSelfRef.__PVT___T_13) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_9 = ((IData)(vlSelfRef.__PVT__mp_grant_valid) 
                                                | (IData)(vlSelfRef.__PVT__mp_release_valid));
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid) 
                                                      | (IData)(vlSelfRef.__PVT__mp_grant_valid))));
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

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1__1(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_3;
    __PVT___GEN_3 = 0;
    CData/*0:0*/ __PVT___GEN_131;
    __PVT___GEN_131 = 0;
    // Body
    vlSelfRef.__PVT___GEN_60 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_61 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotDirty));
    vlSelfRef.__PVT___GEN_0 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_12 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_merge_probeack));
    vlSelfRef.__PVT___GEN_142 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__gotGrantData)));
    vlSelfRef.__PVT___GEN_128 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__probeDirty)));
    vlSelfRef.__PVT___GEN_129 = ((1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param)) 
                                 | (((2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param)) 
                                     | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param))) 
                                    | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)) 
                                       & (IData)(vlSelfRef.__PVT__probeGotN))));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid) {
        vlSelfRef.__PVT___GEN_26 = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_resp_meta_state;
        vlSelfRef.__PVT___GEN_4 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_5 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_6 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_13 = (1U & (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel)));
        vlSelfRef.__PVT___GEN_14 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                             >> 1U)));
        vlSelfRef.__PVT___GEN_8 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_7 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_10 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe;
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
    vlSelfRef.__PVT___GEN_102 = (((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                      >> 1U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__io_out_a_q_io_enq_ready))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
    vlSelfRef.__PVT___GEN_151 = (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer__DOT__bundleOut_0_e_q_io_deq_valid) 
                                     & (1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_e_bits_sink)))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_grantack)
                                     : (IData)(vlSelfRef.__PVT__state_w_grantack)));
    __PVT___GEN_3 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid) 
                     | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_15 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___T_1 = (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH) 
                                 >> 1U)) & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_11 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_retry)) 
                                                 & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_replResp_valid));
    vlSelfRef.__PVT___GEN_150 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_3))
                                  : (IData)(__PVT___GEN_3));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_resps_sink_c_valid) {
        if (vlSelfRef.__VdfgRegularize_h47ff5784_2_4) {
            vlSelfRef.__PVT___GEN_133 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last) 
                                         | (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
            vlSelfRef.__PVT___GEN_134 = (1U & ((IData)(vlSelfRef.__PVT__state_w_pprobeack) 
                                               | ((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                                  | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last))));
            __PVT___GEN_131 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last) 
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
    vlSelfRef.__PVT___GEN_103 = (1U & ((IData)(vlSelfRef.__PVT___T_1) 
                                       | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_104 = ((IData)(vlSelfRef.__PVT___T_1) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
    vlSelfRef.__PVT___GEN_161 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_186 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11)
                                     ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_resp_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    if (vlSelfRef.__VdfgRegularize_h47ff5784_2_11) {
        if ((0U != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_state))) {
            vlSelfRef.__PVT___GEN_173 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(__PVT___GEN_131));
            vlSelfRef.__PVT___GEN_171 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(vlSelfRef.__PVT___GEN_104));
        } else {
            vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
            vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
        }
    } else {
        vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
        vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
    }
}

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2__0(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mp_release_dirty = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                                          & (0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state))) 
                                         | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_opcode_T_2 
        = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
            & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
               >> 1U)) | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT___mp_merge_probeack_param_T_2 = 
        ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                << 1U)) | (3U & (IData)(vlSelfRef.__PVT__task_param)));
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
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
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
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__mp_grant_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
                                       & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                          & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
    vlSelfRef.__PVT___T_13 = ((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_4 = ((4U 
                                                 == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)) 
                                                | (5U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)));
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_bMergeTask_valid)) 
                                               & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                                  & (IData)(vlSelfRef.__PVT__state_w_replResp)))));
    vlSelfRef.__PVT__io_status_bits_needsRepl = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__state_s_merge_probeack)) 
                                                       | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_bMergeTask_valid))));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__io_nestedwbData = ((IData)(vlSelfRef.__PVT__nestedwb_match) 
                                        & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty));
    vlSelfRef.__PVT___io_tasks_mainpipe_bits_T_1_alias 
        = ((IData)(vlSelfRef.__PVT__mp_grant_valid)
            ? ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                : (IData)(vlSelfRef.__PVT__req_alias))
            : 0U);
    vlSelfRef.__VdfgRegularize_h47ff5784_2_5 = ((IData)(vlSelfRef.__PVT___T_13) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_9 = ((IData)(vlSelfRef.__PVT__mp_grant_valid) 
                                                | (IData)(vlSelfRef.__PVT__mp_release_valid));
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid) 
                                                      | (IData)(vlSelfRef.__PVT__mp_grant_valid))));
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

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2__1(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_3;
    __PVT___GEN_3 = 0;
    CData/*0:0*/ __PVT___GEN_131;
    __PVT___GEN_131 = 0;
    // Body
    vlSelfRef.__PVT___GEN_60 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_61 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotDirty));
    vlSelfRef.__PVT___GEN_0 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_12 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_merge_probeack));
    vlSelfRef.__PVT___GEN_142 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__gotGrantData)));
    vlSelfRef.__PVT___GEN_128 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__probeDirty)));
    vlSelfRef.__PVT___GEN_129 = ((1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param)) 
                                 | (((2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param)) 
                                     | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param))) 
                                    | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)) 
                                       & (IData)(vlSelfRef.__PVT__probeGotN))));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid) {
        vlSelfRef.__PVT___GEN_26 = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_resp_meta_state;
        vlSelfRef.__PVT___GEN_4 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_5 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_6 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_13 = (1U & (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel)));
        vlSelfRef.__PVT___GEN_14 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                             >> 1U)));
        vlSelfRef.__PVT___GEN_8 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_7 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_10 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe;
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
    vlSelfRef.__PVT___GEN_102 = (((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                      >> 2U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__io_out_a_q_io_enq_ready))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
    vlSelfRef.__PVT___GEN_151 = (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer__DOT__bundleOut_0_e_q_io_deq_valid) 
                                     & (2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_e_bits_sink)))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_grantack)
                                     : (IData)(vlSelfRef.__PVT__state_w_grantack)));
    __PVT___GEN_3 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid) 
                     | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_15 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___T_1 = (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH) 
                                 >> 2U)) & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_11 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_retry)) 
                                                 & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_replResp_valid));
    vlSelfRef.__PVT___GEN_150 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_3))
                                  : (IData)(__PVT___GEN_3));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_resps_sink_c_valid) {
        if (vlSelfRef.__VdfgRegularize_h47ff5784_2_4) {
            vlSelfRef.__PVT___GEN_133 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last) 
                                         | (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
            vlSelfRef.__PVT___GEN_134 = (1U & ((IData)(vlSelfRef.__PVT__state_w_pprobeack) 
                                               | ((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                                  | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last))));
            __PVT___GEN_131 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last) 
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
    vlSelfRef.__PVT___GEN_103 = (1U & ((IData)(vlSelfRef.__PVT___T_1) 
                                       | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_104 = ((IData)(vlSelfRef.__PVT___T_1) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
    vlSelfRef.__PVT___GEN_161 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_186 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11)
                                     ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_resp_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    if (vlSelfRef.__VdfgRegularize_h47ff5784_2_11) {
        if ((0U != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_state))) {
            vlSelfRef.__PVT___GEN_173 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(__PVT___GEN_131));
            vlSelfRef.__PVT___GEN_171 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(vlSelfRef.__PVT___GEN_104));
        } else {
            vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
            vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
        }
    } else {
        vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
        vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
    }
}

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3__0(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mp_release_dirty = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                                          & (0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state))) 
                                         | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_opcode_T_2 
        = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
            & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
               >> 1U)) | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT___mp_merge_probeack_param_T_2 = 
        ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                << 1U)) | (3U & (IData)(vlSelfRef.__PVT__task_param)));
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
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
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
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__mp_grant_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
                                       & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                          & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
    vlSelfRef.__PVT___T_13 = ((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_4 = ((4U 
                                                 == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)) 
                                                | (5U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)));
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_bMergeTask_valid)) 
                                               & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                                  & (IData)(vlSelfRef.__PVT__state_w_replResp)))));
    vlSelfRef.__PVT__io_status_bits_needsRepl = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__state_s_merge_probeack)) 
                                                       | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_bMergeTask_valid))));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__io_nestedwbData = ((IData)(vlSelfRef.__PVT__nestedwb_match) 
                                        & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty));
    vlSelfRef.__PVT___io_tasks_mainpipe_bits_T_1_alias 
        = ((IData)(vlSelfRef.__PVT__mp_grant_valid)
            ? ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                : (IData)(vlSelfRef.__PVT__req_alias))
            : 0U);
    vlSelfRef.__VdfgRegularize_h47ff5784_2_5 = ((IData)(vlSelfRef.__PVT___T_13) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_9 = ((IData)(vlSelfRef.__PVT__mp_grant_valid) 
                                                | (IData)(vlSelfRef.__PVT__mp_release_valid));
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid) 
                                                      | (IData)(vlSelfRef.__PVT__mp_grant_valid))));
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

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3__1(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_3;
    __PVT___GEN_3 = 0;
    CData/*0:0*/ __PVT___GEN_131;
    __PVT___GEN_131 = 0;
    // Body
    vlSelfRef.__PVT___GEN_60 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_61 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotDirty));
    vlSelfRef.__PVT___GEN_0 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_12 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_merge_probeack));
    vlSelfRef.__PVT___GEN_142 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__gotGrantData)));
    vlSelfRef.__PVT___GEN_128 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__probeDirty)));
    vlSelfRef.__PVT___GEN_129 = ((1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param)) 
                                 | (((2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param)) 
                                     | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param))) 
                                    | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)) 
                                       & (IData)(vlSelfRef.__PVT__probeGotN))));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid) {
        vlSelfRef.__PVT___GEN_26 = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_resp_meta_state;
        vlSelfRef.__PVT___GEN_4 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_5 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_6 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_13 = (1U & (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel)));
        vlSelfRef.__PVT___GEN_14 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                             >> 1U)));
        vlSelfRef.__PVT___GEN_8 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_7 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_10 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe;
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
    vlSelfRef.__PVT___GEN_102 = (((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                      >> 3U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__io_out_a_q_io_enq_ready))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
    vlSelfRef.__PVT___GEN_151 = (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer__DOT__bundleOut_0_e_q_io_deq_valid) 
                                     & (3U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_e_bits_sink)))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_grantack)
                                     : (IData)(vlSelfRef.__PVT__state_w_grantack)));
    __PVT___GEN_3 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid) 
                     | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_15 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___T_1 = (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH) 
                                 >> 3U)) & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_11 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_retry)) 
                                                 & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_replResp_valid));
    vlSelfRef.__PVT___GEN_150 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_3))
                                  : (IData)(__PVT___GEN_3));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_resps_sink_c_valid) {
        if (vlSelfRef.__VdfgRegularize_h47ff5784_2_4) {
            vlSelfRef.__PVT___GEN_133 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last) 
                                         | (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
            vlSelfRef.__PVT___GEN_134 = (1U & ((IData)(vlSelfRef.__PVT__state_w_pprobeack) 
                                               | ((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                                  | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last))));
            __PVT___GEN_131 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last) 
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
    vlSelfRef.__PVT___GEN_103 = (1U & ((IData)(vlSelfRef.__PVT___T_1) 
                                       | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_104 = ((IData)(vlSelfRef.__PVT___T_1) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
    vlSelfRef.__PVT___GEN_161 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_186 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11)
                                     ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_resp_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    if (vlSelfRef.__VdfgRegularize_h47ff5784_2_11) {
        if ((0U != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_state))) {
            vlSelfRef.__PVT___GEN_173 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(__PVT___GEN_131));
            vlSelfRef.__PVT___GEN_171 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(vlSelfRef.__PVT___GEN_104));
        } else {
            vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
            vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
        }
    } else {
        vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
        vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
    }
}

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4__0(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mp_release_dirty = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                                          & (0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state))) 
                                         | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_opcode_T_2 
        = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
            & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
               >> 1U)) | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT___mp_merge_probeack_param_T_2 = 
        ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                << 1U)) | (3U & (IData)(vlSelfRef.__PVT__task_param)));
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
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
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
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__mp_grant_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
                                       & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                          & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
    vlSelfRef.__PVT___T_13 = ((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_4 = ((4U 
                                                 == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)) 
                                                | (5U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)));
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_4_io_bMergeTask_valid)) 
                                               & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                                  & (IData)(vlSelfRef.__PVT__state_w_replResp)))));
    vlSelfRef.__PVT__io_status_bits_needsRepl = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__state_s_merge_probeack)) 
                                                       | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_4_io_bMergeTask_valid))));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__io_nestedwbData = ((IData)(vlSelfRef.__PVT__nestedwb_match) 
                                        & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty));
    vlSelfRef.__PVT___io_tasks_mainpipe_bits_T_1_alias 
        = ((IData)(vlSelfRef.__PVT__mp_grant_valid)
            ? ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                : (IData)(vlSelfRef.__PVT__req_alias))
            : 0U);
    vlSelfRef.__VdfgRegularize_h47ff5784_2_5 = ((IData)(vlSelfRef.__PVT___T_13) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_9 = ((IData)(vlSelfRef.__PVT__mp_grant_valid) 
                                                | (IData)(vlSelfRef.__PVT__mp_release_valid));
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid) 
                                                      | (IData)(vlSelfRef.__PVT__mp_grant_valid))));
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

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4__1(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_3;
    __PVT___GEN_3 = 0;
    CData/*0:0*/ __PVT___GEN_131;
    __PVT___GEN_131 = 0;
    // Body
    vlSelfRef.__PVT___GEN_60 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_4_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_61 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_4_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotDirty));
    vlSelfRef.__PVT___GEN_0 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_4_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_12 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_4_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_merge_probeack));
    vlSelfRef.__PVT___GEN_142 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_4_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__gotGrantData)));
    vlSelfRef.__PVT___GEN_128 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_4_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__probeDirty)));
    vlSelfRef.__PVT___GEN_129 = ((1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param)) 
                                 | (((2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param)) 
                                     | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param))) 
                                    | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_4_io_alloc_valid)) 
                                       & (IData)(vlSelfRef.__PVT__probeGotN))));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_4_io_alloc_valid) {
        vlSelfRef.__PVT___GEN_26 = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_resp_meta_state;
        vlSelfRef.__PVT___GEN_4 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_5 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_6 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_13 = (1U & (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel)));
        vlSelfRef.__PVT___GEN_14 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                             >> 1U)));
        vlSelfRef.__PVT___GEN_8 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_7 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_10 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe;
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
    vlSelfRef.__PVT___GEN_102 = (((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                      >> 4U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__io_out_a_q_io_enq_ready))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_4_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
    vlSelfRef.__PVT___GEN_151 = (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer__DOT__bundleOut_0_e_q_io_deq_valid) 
                                     & (4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_e_bits_sink)))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_4_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_grantack)
                                     : (IData)(vlSelfRef.__PVT__state_w_grantack)));
    __PVT___GEN_3 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_4_io_alloc_valid) 
                     | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_15 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_4_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___T_1 = (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH) 
                                 >> 4U)) & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_11 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_retry)) 
                                                 & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_4_io_replResp_valid));
    vlSelfRef.__PVT___GEN_150 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_4_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_3))
                                  : (IData)(__PVT___GEN_3));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_4_io_resps_sink_c_valid) {
        if (vlSelfRef.__VdfgRegularize_h47ff5784_2_4) {
            vlSelfRef.__PVT___GEN_133 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last) 
                                         | (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
            vlSelfRef.__PVT___GEN_134 = (1U & ((IData)(vlSelfRef.__PVT__state_w_pprobeack) 
                                               | ((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                                  | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last))));
            __PVT___GEN_131 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last) 
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
    vlSelfRef.__PVT___GEN_103 = (1U & ((IData)(vlSelfRef.__PVT___T_1) 
                                       | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_4_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_104 = ((IData)(vlSelfRef.__PVT___T_1) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_4_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
    vlSelfRef.__PVT___GEN_161 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_4_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_186 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11)
                                     ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_4_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_resp_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    if (vlSelfRef.__VdfgRegularize_h47ff5784_2_11) {
        if ((0U != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_state))) {
            vlSelfRef.__PVT___GEN_173 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(__PVT___GEN_131));
            vlSelfRef.__PVT___GEN_171 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(vlSelfRef.__PVT___GEN_104));
        } else {
            vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
            vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
        }
    } else {
        vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
        vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
    }
}

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5__0(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mp_release_dirty = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                                          & (0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state))) 
                                         | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_opcode_T_2 
        = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
            & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
               >> 1U)) | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT___mp_merge_probeack_param_T_2 = 
        ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                << 1U)) | (3U & (IData)(vlSelfRef.__PVT__task_param)));
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
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
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
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__mp_grant_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
                                       & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                          & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
    vlSelfRef.__PVT___T_13 = ((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_4 = ((4U 
                                                 == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)) 
                                                | (5U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)));
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_5_io_bMergeTask_valid)) 
                                               & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                                  & (IData)(vlSelfRef.__PVT__state_w_replResp)))));
    vlSelfRef.__PVT__io_status_bits_needsRepl = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__state_s_merge_probeack)) 
                                                       | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_5_io_bMergeTask_valid))));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__io_nestedwbData = ((IData)(vlSelfRef.__PVT__nestedwb_match) 
                                        & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty));
    vlSelfRef.__PVT___io_tasks_mainpipe_bits_T_1_alias 
        = ((IData)(vlSelfRef.__PVT__mp_grant_valid)
            ? ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                : (IData)(vlSelfRef.__PVT__req_alias))
            : 0U);
    vlSelfRef.__VdfgRegularize_h47ff5784_2_5 = ((IData)(vlSelfRef.__PVT___T_13) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_9 = ((IData)(vlSelfRef.__PVT__mp_grant_valid) 
                                                | (IData)(vlSelfRef.__PVT__mp_release_valid));
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid) 
                                                      | (IData)(vlSelfRef.__PVT__mp_grant_valid))));
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

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5__1(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_3;
    __PVT___GEN_3 = 0;
    CData/*0:0*/ __PVT___GEN_131;
    __PVT___GEN_131 = 0;
    // Body
    vlSelfRef.__PVT___GEN_60 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_5_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_61 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_5_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotDirty));
    vlSelfRef.__PVT___GEN_0 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_5_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_12 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_5_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_merge_probeack));
    vlSelfRef.__PVT___GEN_142 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_5_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__gotGrantData)));
    vlSelfRef.__PVT___GEN_128 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_5_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__probeDirty)));
    vlSelfRef.__PVT___GEN_129 = ((1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param)) 
                                 | (((2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param)) 
                                     | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param))) 
                                    | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_5_io_alloc_valid)) 
                                       & (IData)(vlSelfRef.__PVT__probeGotN))));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_5_io_alloc_valid) {
        vlSelfRef.__PVT___GEN_26 = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_resp_meta_state;
        vlSelfRef.__PVT___GEN_4 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_5 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_6 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_13 = (1U & (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel)));
        vlSelfRef.__PVT___GEN_14 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                             >> 1U)));
        vlSelfRef.__PVT___GEN_8 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_7 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_10 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe;
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
    vlSelfRef.__PVT___GEN_102 = (((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                      >> 5U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__io_out_a_q_io_enq_ready))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_5_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
    vlSelfRef.__PVT___GEN_151 = (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer__DOT__bundleOut_0_e_q_io_deq_valid) 
                                     & (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_e_bits_sink)))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_5_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_grantack)
                                     : (IData)(vlSelfRef.__PVT__state_w_grantack)));
    __PVT___GEN_3 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_5_io_alloc_valid) 
                     | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_15 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_5_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___T_1 = (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH) 
                                 >> 5U)) & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_11 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_retry)) 
                                                 & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_5_io_replResp_valid));
    vlSelfRef.__PVT___GEN_150 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_5_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_3))
                                  : (IData)(__PVT___GEN_3));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_5_io_resps_sink_c_valid) {
        if (vlSelfRef.__VdfgRegularize_h47ff5784_2_4) {
            vlSelfRef.__PVT___GEN_133 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last) 
                                         | (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
            vlSelfRef.__PVT___GEN_134 = (1U & ((IData)(vlSelfRef.__PVT__state_w_pprobeack) 
                                               | ((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                                  | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last))));
            __PVT___GEN_131 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last) 
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
    vlSelfRef.__PVT___GEN_103 = (1U & ((IData)(vlSelfRef.__PVT___T_1) 
                                       | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_5_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_104 = ((IData)(vlSelfRef.__PVT___T_1) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_5_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
    vlSelfRef.__PVT___GEN_161 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_5_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_186 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11)
                                     ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_5_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_resp_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    if (vlSelfRef.__VdfgRegularize_h47ff5784_2_11) {
        if ((0U != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_state))) {
            vlSelfRef.__PVT___GEN_173 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(__PVT___GEN_131));
            vlSelfRef.__PVT___GEN_171 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(vlSelfRef.__PVT___GEN_104));
        } else {
            vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
            vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
        }
    } else {
        vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
        vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
    }
}

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6__0(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mp_release_dirty = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                                          & (0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state))) 
                                         | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_opcode_T_2 
        = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
            & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
               >> 1U)) | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT___mp_merge_probeack_param_T_2 = 
        ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                << 1U)) | (3U & (IData)(vlSelfRef.__PVT__task_param)));
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
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
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
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__mp_grant_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
                                       & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                          & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
    vlSelfRef.__PVT___T_13 = ((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_4 = ((4U 
                                                 == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)) 
                                                | (5U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)));
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_6_io_bMergeTask_valid)) 
                                               & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                                  & (IData)(vlSelfRef.__PVT__state_w_replResp)))));
    vlSelfRef.__PVT__io_status_bits_needsRepl = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__state_s_merge_probeack)) 
                                                       | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_6_io_bMergeTask_valid))));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__io_nestedwbData = ((IData)(vlSelfRef.__PVT__nestedwb_match) 
                                        & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty));
    vlSelfRef.__PVT___io_tasks_mainpipe_bits_T_1_alias 
        = ((IData)(vlSelfRef.__PVT__mp_grant_valid)
            ? ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                : (IData)(vlSelfRef.__PVT__req_alias))
            : 0U);
    vlSelfRef.__VdfgRegularize_h47ff5784_2_5 = ((IData)(vlSelfRef.__PVT___T_13) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_9 = ((IData)(vlSelfRef.__PVT__mp_grant_valid) 
                                                | (IData)(vlSelfRef.__PVT__mp_release_valid));
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid) 
                                                      | (IData)(vlSelfRef.__PVT__mp_grant_valid))));
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

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6__1(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_3;
    __PVT___GEN_3 = 0;
    CData/*0:0*/ __PVT___GEN_131;
    __PVT___GEN_131 = 0;
    // Body
    vlSelfRef.__PVT___GEN_60 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_6_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_61 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_6_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotDirty));
    vlSelfRef.__PVT___GEN_0 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_6_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_12 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_6_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_merge_probeack));
    vlSelfRef.__PVT___GEN_142 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_6_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__gotGrantData)));
    vlSelfRef.__PVT___GEN_128 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_6_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__probeDirty)));
    vlSelfRef.__PVT___GEN_129 = ((1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param)) 
                                 | (((2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param)) 
                                     | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param))) 
                                    | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_6_io_alloc_valid)) 
                                       & (IData)(vlSelfRef.__PVT__probeGotN))));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_6_io_alloc_valid) {
        vlSelfRef.__PVT___GEN_26 = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_resp_meta_state;
        vlSelfRef.__PVT___GEN_4 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_5 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_6 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_13 = (1U & (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel)));
        vlSelfRef.__PVT___GEN_14 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                             >> 1U)));
        vlSelfRef.__PVT___GEN_8 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_7 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_10 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe;
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
    vlSelfRef.__PVT___GEN_102 = (((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                      >> 6U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__io_out_a_q_io_enq_ready))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_6_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
    vlSelfRef.__PVT___GEN_151 = (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer__DOT__bundleOut_0_e_q_io_deq_valid) 
                                     & (6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_e_bits_sink)))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_6_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_grantack)
                                     : (IData)(vlSelfRef.__PVT__state_w_grantack)));
    __PVT___GEN_3 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_6_io_alloc_valid) 
                     | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_15 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_6_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___T_1 = (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH) 
                                 >> 6U)) & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_11 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_retry)) 
                                                 & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_6_io_replResp_valid));
    vlSelfRef.__PVT___GEN_150 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_6_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_3))
                                  : (IData)(__PVT___GEN_3));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_6_io_resps_sink_c_valid) {
        if (vlSelfRef.__VdfgRegularize_h47ff5784_2_4) {
            vlSelfRef.__PVT___GEN_133 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last) 
                                         | (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
            vlSelfRef.__PVT___GEN_134 = (1U & ((IData)(vlSelfRef.__PVT__state_w_pprobeack) 
                                               | ((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                                  | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last))));
            __PVT___GEN_131 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last) 
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
    vlSelfRef.__PVT___GEN_103 = (1U & ((IData)(vlSelfRef.__PVT___T_1) 
                                       | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_6_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_104 = ((IData)(vlSelfRef.__PVT___T_1) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_6_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
    vlSelfRef.__PVT___GEN_161 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_6_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_186 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11)
                                     ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_6_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_resp_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    if (vlSelfRef.__VdfgRegularize_h47ff5784_2_11) {
        if ((0U != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_state))) {
            vlSelfRef.__PVT___GEN_173 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(__PVT___GEN_131));
            vlSelfRef.__PVT___GEN_171 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(vlSelfRef.__PVT___GEN_104));
        } else {
            vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
            vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
        }
    } else {
        vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
        vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
    }
}

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7__0(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mp_release_dirty = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                                          & (0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state))) 
                                         | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_opcode_T_2 
        = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
            & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
               >> 1U)) | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT___mp_merge_probeack_param_T_2 = 
        ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                << 1U)) | (3U & (IData)(vlSelfRef.__PVT__task_param)));
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
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
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
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__mp_grant_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
                                       & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                          & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
    vlSelfRef.__PVT___T_13 = ((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_4 = ((4U 
                                                 == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)) 
                                                | (5U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)));
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_7_io_bMergeTask_valid)) 
                                               & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                                  & (IData)(vlSelfRef.__PVT__state_w_replResp)))));
    vlSelfRef.__PVT__io_status_bits_needsRepl = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__state_s_merge_probeack)) 
                                                       | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_7_io_bMergeTask_valid))));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__io_nestedwbData = ((IData)(vlSelfRef.__PVT__nestedwb_match) 
                                        & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty));
    vlSelfRef.__PVT___io_tasks_mainpipe_bits_T_1_alias 
        = ((IData)(vlSelfRef.__PVT__mp_grant_valid)
            ? ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                : (IData)(vlSelfRef.__PVT__req_alias))
            : 0U);
    vlSelfRef.__VdfgRegularize_h47ff5784_2_5 = ((IData)(vlSelfRef.__PVT___T_13) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_9 = ((IData)(vlSelfRef.__PVT__mp_grant_valid) 
                                                | (IData)(vlSelfRef.__PVT__mp_release_valid));
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid) 
                                                      | (IData)(vlSelfRef.__PVT__mp_grant_valid))));
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

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7__1(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_3;
    __PVT___GEN_3 = 0;
    CData/*0:0*/ __PVT___GEN_131;
    __PVT___GEN_131 = 0;
    // Body
    vlSelfRef.__PVT___GEN_60 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_7_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_61 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_7_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotDirty));
    vlSelfRef.__PVT___GEN_0 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_7_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_12 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_7_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_merge_probeack));
    vlSelfRef.__PVT___GEN_142 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_7_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__gotGrantData)));
    vlSelfRef.__PVT___GEN_128 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_7_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__probeDirty)));
    vlSelfRef.__PVT___GEN_129 = ((1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param)) 
                                 | (((2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param)) 
                                     | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param))) 
                                    | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_7_io_alloc_valid)) 
                                       & (IData)(vlSelfRef.__PVT__probeGotN))));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_7_io_alloc_valid) {
        vlSelfRef.__PVT___GEN_26 = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_resp_meta_state;
        vlSelfRef.__PVT___GEN_4 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_5 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_6 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_13 = (1U & (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel)));
        vlSelfRef.__PVT___GEN_14 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                             >> 1U)));
        vlSelfRef.__PVT___GEN_8 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_7 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_10 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe;
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
    vlSelfRef.__PVT___GEN_102 = (((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                      >> 7U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__io_out_a_q_io_enq_ready))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_7_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
    vlSelfRef.__PVT___GEN_151 = (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer__DOT__bundleOut_0_e_q_io_deq_valid) 
                                     & (7U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_e_bits_sink)))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_7_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_grantack)
                                     : (IData)(vlSelfRef.__PVT__state_w_grantack)));
    __PVT___GEN_3 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_7_io_alloc_valid) 
                     | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_15 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_7_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___T_1 = (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH) 
                                 >> 7U)) & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_11 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_retry)) 
                                                 & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_7_io_replResp_valid));
    vlSelfRef.__PVT___GEN_150 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_7_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_3))
                                  : (IData)(__PVT___GEN_3));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_7_io_resps_sink_c_valid) {
        if (vlSelfRef.__VdfgRegularize_h47ff5784_2_4) {
            vlSelfRef.__PVT___GEN_133 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last) 
                                         | (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
            vlSelfRef.__PVT___GEN_134 = (1U & ((IData)(vlSelfRef.__PVT__state_w_pprobeack) 
                                               | ((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                                  | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last))));
            __PVT___GEN_131 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last) 
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
    vlSelfRef.__PVT___GEN_103 = (1U & ((IData)(vlSelfRef.__PVT___T_1) 
                                       | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_7_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_104 = ((IData)(vlSelfRef.__PVT___T_1) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_7_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
    vlSelfRef.__PVT___GEN_161 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_7_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_186 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11)
                                     ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_7_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_resp_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    if (vlSelfRef.__VdfgRegularize_h47ff5784_2_11) {
        if ((0U != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_state))) {
            vlSelfRef.__PVT___GEN_173 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(__PVT___GEN_131));
            vlSelfRef.__PVT___GEN_171 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(vlSelfRef.__PVT___GEN_104));
        } else {
            vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
            vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
        }
    } else {
        vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
        vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
    }
}

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8__0(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mp_release_dirty = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                                          & (0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state))) 
                                         | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_opcode_T_2 
        = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
            & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
               >> 1U)) | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT___mp_merge_probeack_param_T_2 = 
        ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                << 1U)) | (3U & (IData)(vlSelfRef.__PVT__task_param)));
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
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
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
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__mp_grant_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
                                       & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                          & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
    vlSelfRef.__PVT___T_13 = ((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_4 = ((4U 
                                                 == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)) 
                                                | (5U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)));
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_8_io_bMergeTask_valid)) 
                                               & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                                  & (IData)(vlSelfRef.__PVT__state_w_replResp)))));
    vlSelfRef.__PVT__io_status_bits_needsRepl = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__state_s_merge_probeack)) 
                                                       | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_8_io_bMergeTask_valid))));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__io_nestedwbData = ((IData)(vlSelfRef.__PVT__nestedwb_match) 
                                        & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty));
    vlSelfRef.__PVT___io_tasks_mainpipe_bits_T_1_alias 
        = ((IData)(vlSelfRef.__PVT__mp_grant_valid)
            ? ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                : (IData)(vlSelfRef.__PVT__req_alias))
            : 0U);
    vlSelfRef.__VdfgRegularize_h47ff5784_2_5 = ((IData)(vlSelfRef.__PVT___T_13) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_9 = ((IData)(vlSelfRef.__PVT__mp_grant_valid) 
                                                | (IData)(vlSelfRef.__PVT__mp_release_valid));
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid) 
                                                      | (IData)(vlSelfRef.__PVT__mp_grant_valid))));
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

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8__1(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_3;
    __PVT___GEN_3 = 0;
    CData/*0:0*/ __PVT___GEN_131;
    __PVT___GEN_131 = 0;
    // Body
    vlSelfRef.__PVT___GEN_60 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_8_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_61 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_8_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotDirty));
    vlSelfRef.__PVT___GEN_0 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_8_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_12 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_8_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_merge_probeack));
    vlSelfRef.__PVT___GEN_142 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_8_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__gotGrantData)));
    vlSelfRef.__PVT___GEN_128 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_8_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__probeDirty)));
    vlSelfRef.__PVT___GEN_129 = ((1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param)) 
                                 | (((2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param)) 
                                     | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param))) 
                                    | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_8_io_alloc_valid)) 
                                       & (IData)(vlSelfRef.__PVT__probeGotN))));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_8_io_alloc_valid) {
        vlSelfRef.__PVT___GEN_26 = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_resp_meta_state;
        vlSelfRef.__PVT___GEN_4 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_5 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_6 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_13 = (1U & (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel)));
        vlSelfRef.__PVT___GEN_14 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                             >> 1U)));
        vlSelfRef.__PVT___GEN_8 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_7 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_10 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe;
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
    vlSelfRef.__PVT___GEN_102 = (((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                      >> 8U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__io_out_a_q_io_enq_ready))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_8_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
    vlSelfRef.__PVT___GEN_151 = (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer__DOT__bundleOut_0_e_q_io_deq_valid) 
                                     & (8U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_e_bits_sink)))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_8_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_grantack)
                                     : (IData)(vlSelfRef.__PVT__state_w_grantack)));
    __PVT___GEN_3 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_8_io_alloc_valid) 
                     | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_15 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_8_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___T_1 = (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH) 
                                 >> 8U)) & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_11 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_retry)) 
                                                 & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_8_io_replResp_valid));
    vlSelfRef.__PVT___GEN_150 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_8_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_3))
                                  : (IData)(__PVT___GEN_3));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_8_io_resps_sink_c_valid) {
        if (vlSelfRef.__VdfgRegularize_h47ff5784_2_4) {
            vlSelfRef.__PVT___GEN_133 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last) 
                                         | (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
            vlSelfRef.__PVT___GEN_134 = (1U & ((IData)(vlSelfRef.__PVT__state_w_pprobeack) 
                                               | ((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                                  | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last))));
            __PVT___GEN_131 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last) 
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
    vlSelfRef.__PVT___GEN_103 = (1U & ((IData)(vlSelfRef.__PVT___T_1) 
                                       | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_8_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_104 = ((IData)(vlSelfRef.__PVT___T_1) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_8_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
    vlSelfRef.__PVT___GEN_161 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_8_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_186 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11)
                                     ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_8_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_resp_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    if (vlSelfRef.__VdfgRegularize_h47ff5784_2_11) {
        if ((0U != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_state))) {
            vlSelfRef.__PVT___GEN_173 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(__PVT___GEN_131));
            vlSelfRef.__PVT___GEN_171 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(vlSelfRef.__PVT___GEN_104));
        } else {
            vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
            vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
        }
    } else {
        vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
        vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
    }
}

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9__0(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mp_release_dirty = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                                          & (0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state))) 
                                         | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_opcode_T_2 
        = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
            & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
               >> 1U)) | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT___mp_merge_probeack_param_T_2 = 
        ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                << 1U)) | (3U & (IData)(vlSelfRef.__PVT__task_param)));
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
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
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
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__mp_grant_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
                                       & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                          & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
    vlSelfRef.__PVT___T_13 = ((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_4 = ((4U 
                                                 == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)) 
                                                | (5U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)));
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_9_io_bMergeTask_valid)) 
                                               & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                                  & (IData)(vlSelfRef.__PVT__state_w_replResp)))));
    vlSelfRef.__PVT__io_status_bits_needsRepl = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__state_s_merge_probeack)) 
                                                       | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_9_io_bMergeTask_valid))));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__io_nestedwbData = ((IData)(vlSelfRef.__PVT__nestedwb_match) 
                                        & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty));
    vlSelfRef.__PVT___io_tasks_mainpipe_bits_T_1_alias 
        = ((IData)(vlSelfRef.__PVT__mp_grant_valid)
            ? ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                : (IData)(vlSelfRef.__PVT__req_alias))
            : 0U);
    vlSelfRef.__VdfgRegularize_h47ff5784_2_5 = ((IData)(vlSelfRef.__PVT___T_13) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_9 = ((IData)(vlSelfRef.__PVT__mp_grant_valid) 
                                                | (IData)(vlSelfRef.__PVT__mp_release_valid));
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid) 
                                                      | (IData)(vlSelfRef.__PVT__mp_grant_valid))));
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

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9__1(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_3;
    __PVT___GEN_3 = 0;
    CData/*0:0*/ __PVT___GEN_131;
    __PVT___GEN_131 = 0;
    // Body
    vlSelfRef.__PVT___GEN_60 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_9_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_61 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_9_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotDirty));
    vlSelfRef.__PVT___GEN_0 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_9_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_12 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_9_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_merge_probeack));
    vlSelfRef.__PVT___GEN_142 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_9_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__gotGrantData)));
    vlSelfRef.__PVT___GEN_128 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_9_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__probeDirty)));
    vlSelfRef.__PVT___GEN_129 = ((1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param)) 
                                 | (((2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param)) 
                                     | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param))) 
                                    | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_9_io_alloc_valid)) 
                                       & (IData)(vlSelfRef.__PVT__probeGotN))));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_9_io_alloc_valid) {
        vlSelfRef.__PVT___GEN_26 = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_resp_meta_state;
        vlSelfRef.__PVT___GEN_4 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_5 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_6 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_13 = (1U & (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel)));
        vlSelfRef.__PVT___GEN_14 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                             >> 1U)));
        vlSelfRef.__PVT___GEN_8 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_7 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_10 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe;
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
    vlSelfRef.__PVT___GEN_102 = (((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                      >> 9U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__io_out_a_q_io_enq_ready))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_9_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
    vlSelfRef.__PVT___GEN_151 = (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer__DOT__bundleOut_0_e_q_io_deq_valid) 
                                     & (9U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_e_bits_sink)))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_9_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_grantack)
                                     : (IData)(vlSelfRef.__PVT__state_w_grantack)));
    __PVT___GEN_3 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_9_io_alloc_valid) 
                     | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_15 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_9_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___T_1 = (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH) 
                                 >> 9U)) & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_11 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_retry)) 
                                                 & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_9_io_replResp_valid));
    vlSelfRef.__PVT___GEN_150 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_9_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_3))
                                  : (IData)(__PVT___GEN_3));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_9_io_resps_sink_c_valid) {
        if (vlSelfRef.__VdfgRegularize_h47ff5784_2_4) {
            vlSelfRef.__PVT___GEN_133 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last) 
                                         | (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
            vlSelfRef.__PVT___GEN_134 = (1U & ((IData)(vlSelfRef.__PVT__state_w_pprobeack) 
                                               | ((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                                  | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last))));
            __PVT___GEN_131 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last) 
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
    vlSelfRef.__PVT___GEN_103 = (1U & ((IData)(vlSelfRef.__PVT___T_1) 
                                       | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_9_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_104 = ((IData)(vlSelfRef.__PVT___T_1) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_9_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
    vlSelfRef.__PVT___GEN_161 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_9_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_186 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11)
                                     ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_9_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_resp_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    if (vlSelfRef.__VdfgRegularize_h47ff5784_2_11) {
        if ((0U != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_state))) {
            vlSelfRef.__PVT___GEN_173 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(__PVT___GEN_131));
            vlSelfRef.__PVT___GEN_171 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(vlSelfRef.__PVT___GEN_104));
        } else {
            vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
            vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
        }
    } else {
        vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
        vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
    }
}

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10__0(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mp_release_dirty = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                                          & (0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state))) 
                                         | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_opcode_T_2 
        = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
            & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
               >> 1U)) | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT___mp_merge_probeack_param_T_2 = 
        ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                << 1U)) | (3U & (IData)(vlSelfRef.__PVT__task_param)));
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
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
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
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__mp_grant_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
                                       & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                          & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
    vlSelfRef.__PVT___T_13 = ((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_4 = ((4U 
                                                 == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)) 
                                                | (5U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)));
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_10_io_bMergeTask_valid)) 
                                               & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                                  & (IData)(vlSelfRef.__PVT__state_w_replResp)))));
    vlSelfRef.__PVT__io_status_bits_needsRepl = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__state_s_merge_probeack)) 
                                                       | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_10_io_bMergeTask_valid))));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__io_nestedwbData = ((IData)(vlSelfRef.__PVT__nestedwb_match) 
                                        & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty));
    vlSelfRef.__PVT___io_tasks_mainpipe_bits_T_1_alias 
        = ((IData)(vlSelfRef.__PVT__mp_grant_valid)
            ? ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                : (IData)(vlSelfRef.__PVT__req_alias))
            : 0U);
    vlSelfRef.__VdfgRegularize_h47ff5784_2_5 = ((IData)(vlSelfRef.__PVT___T_13) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_9 = ((IData)(vlSelfRef.__PVT__mp_grant_valid) 
                                                | (IData)(vlSelfRef.__PVT__mp_release_valid));
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid) 
                                                      | (IData)(vlSelfRef.__PVT__mp_grant_valid))));
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

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10__1(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_3;
    __PVT___GEN_3 = 0;
    CData/*0:0*/ __PVT___GEN_131;
    __PVT___GEN_131 = 0;
    // Body
    vlSelfRef.__PVT___GEN_60 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_10_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_61 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_10_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotDirty));
    vlSelfRef.__PVT___GEN_0 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_10_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_12 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_10_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_merge_probeack));
    vlSelfRef.__PVT___GEN_142 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_10_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__gotGrantData)));
    vlSelfRef.__PVT___GEN_128 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_10_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__probeDirty)));
    vlSelfRef.__PVT___GEN_129 = ((1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param)) 
                                 | (((2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param)) 
                                     | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param))) 
                                    | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_10_io_alloc_valid)) 
                                       & (IData)(vlSelfRef.__PVT__probeGotN))));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_10_io_alloc_valid) {
        vlSelfRef.__PVT___GEN_26 = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_resp_meta_state;
        vlSelfRef.__PVT___GEN_4 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_5 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_6 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_13 = (1U & (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel)));
        vlSelfRef.__PVT___GEN_14 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                             >> 1U)));
        vlSelfRef.__PVT___GEN_8 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_7 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_10 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe;
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
    vlSelfRef.__PVT___GEN_102 = (((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                      >> 0xaU) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__io_out_a_q_io_enq_ready))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_10_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
    vlSelfRef.__PVT___GEN_151 = (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer__DOT__bundleOut_0_e_q_io_deq_valid) 
                                     & (0xaU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_e_bits_sink)))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_10_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_grantack)
                                     : (IData)(vlSelfRef.__PVT__state_w_grantack)));
    __PVT___GEN_3 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_10_io_alloc_valid) 
                     | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_15 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_10_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___T_1 = (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH) 
                                 >> 0xaU)) & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_11 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_retry)) 
                                                 & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_10_io_replResp_valid));
    vlSelfRef.__PVT___GEN_150 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_10_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_3))
                                  : (IData)(__PVT___GEN_3));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_10_io_resps_sink_c_valid) {
        if (vlSelfRef.__VdfgRegularize_h47ff5784_2_4) {
            vlSelfRef.__PVT___GEN_133 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last) 
                                         | (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
            vlSelfRef.__PVT___GEN_134 = (1U & ((IData)(vlSelfRef.__PVT__state_w_pprobeack) 
                                               | ((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                                  | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last))));
            __PVT___GEN_131 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last) 
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
    vlSelfRef.__PVT___GEN_103 = (1U & ((IData)(vlSelfRef.__PVT___T_1) 
                                       | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_10_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_104 = ((IData)(vlSelfRef.__PVT___T_1) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_10_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
    vlSelfRef.__PVT___GEN_161 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_10_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_186 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11)
                                     ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_10_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_resp_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    if (vlSelfRef.__VdfgRegularize_h47ff5784_2_11) {
        if ((0U != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_state))) {
            vlSelfRef.__PVT___GEN_173 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(__PVT___GEN_131));
            vlSelfRef.__PVT___GEN_171 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(vlSelfRef.__PVT___GEN_104));
        } else {
            vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
            vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
        }
    } else {
        vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
        vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
    }
}

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11__0(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mp_release_dirty = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                                          & (0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state))) 
                                         | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_opcode_T_2 
        = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
            & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
               >> 1U)) | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT___mp_merge_probeack_param_T_2 = 
        ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                << 1U)) | (3U & (IData)(vlSelfRef.__PVT__task_param)));
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
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
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
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__mp_grant_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
                                       & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                          & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
    vlSelfRef.__PVT___T_13 = ((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_4 = ((4U 
                                                 == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)) 
                                                | (5U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)));
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_11_io_bMergeTask_valid)) 
                                               & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                                  & (IData)(vlSelfRef.__PVT__state_w_replResp)))));
    vlSelfRef.__PVT__io_status_bits_needsRepl = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__state_s_merge_probeack)) 
                                                       | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_11_io_bMergeTask_valid))));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__io_nestedwbData = ((IData)(vlSelfRef.__PVT__nestedwb_match) 
                                        & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty));
    vlSelfRef.__PVT___io_tasks_mainpipe_bits_T_1_alias 
        = ((IData)(vlSelfRef.__PVT__mp_grant_valid)
            ? ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                : (IData)(vlSelfRef.__PVT__req_alias))
            : 0U);
    vlSelfRef.__VdfgRegularize_h47ff5784_2_5 = ((IData)(vlSelfRef.__PVT___T_13) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_9 = ((IData)(vlSelfRef.__PVT__mp_grant_valid) 
                                                | (IData)(vlSelfRef.__PVT__mp_release_valid));
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid) 
                                                      | (IData)(vlSelfRef.__PVT__mp_grant_valid))));
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

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11__1(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_3;
    __PVT___GEN_3 = 0;
    CData/*0:0*/ __PVT___GEN_131;
    __PVT___GEN_131 = 0;
    // Body
    vlSelfRef.__PVT___GEN_60 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_11_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_61 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_11_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotDirty));
    vlSelfRef.__PVT___GEN_0 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_11_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_12 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_11_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_merge_probeack));
    vlSelfRef.__PVT___GEN_142 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_11_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__gotGrantData)));
    vlSelfRef.__PVT___GEN_128 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_11_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__probeDirty)));
    vlSelfRef.__PVT___GEN_129 = ((1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param)) 
                                 | (((2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param)) 
                                     | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param))) 
                                    | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_11_io_alloc_valid)) 
                                       & (IData)(vlSelfRef.__PVT__probeGotN))));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_11_io_alloc_valid) {
        vlSelfRef.__PVT___GEN_26 = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_resp_meta_state;
        vlSelfRef.__PVT___GEN_4 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_5 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_6 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_13 = (1U & (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel)));
        vlSelfRef.__PVT___GEN_14 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                             >> 1U)));
        vlSelfRef.__PVT___GEN_8 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_7 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_10 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe;
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
    vlSelfRef.__PVT___GEN_102 = (((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                      >> 0xbU) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__io_out_a_q_io_enq_ready))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_11_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
    vlSelfRef.__PVT___GEN_151 = (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer__DOT__bundleOut_0_e_q_io_deq_valid) 
                                     & (0xbU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_e_bits_sink)))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_11_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_grantack)
                                     : (IData)(vlSelfRef.__PVT__state_w_grantack)));
    __PVT___GEN_3 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_11_io_alloc_valid) 
                     | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_15 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_11_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___T_1 = (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH) 
                                 >> 0xbU)) & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_11 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_retry)) 
                                                 & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_11_io_replResp_valid));
    vlSelfRef.__PVT___GEN_150 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_11_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_3))
                                  : (IData)(__PVT___GEN_3));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_11_io_resps_sink_c_valid) {
        if (vlSelfRef.__VdfgRegularize_h47ff5784_2_4) {
            vlSelfRef.__PVT___GEN_133 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last) 
                                         | (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
            vlSelfRef.__PVT___GEN_134 = (1U & ((IData)(vlSelfRef.__PVT__state_w_pprobeack) 
                                               | ((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                                  | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last))));
            __PVT___GEN_131 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last) 
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
    vlSelfRef.__PVT___GEN_103 = (1U & ((IData)(vlSelfRef.__PVT___T_1) 
                                       | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_11_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_104 = ((IData)(vlSelfRef.__PVT___T_1) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_11_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
    vlSelfRef.__PVT___GEN_161 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_11_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_186 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11)
                                     ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_11_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_resp_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    if (vlSelfRef.__VdfgRegularize_h47ff5784_2_11) {
        if ((0U != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_state))) {
            vlSelfRef.__PVT___GEN_173 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(__PVT___GEN_131));
            vlSelfRef.__PVT___GEN_171 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(vlSelfRef.__PVT___GEN_104));
        } else {
            vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
            vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
        }
    } else {
        vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
        vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
    }
}

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12__0(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mp_release_dirty = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                                          & (0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state))) 
                                         | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_opcode_T_2 
        = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
            & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
               >> 1U)) | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT___mp_merge_probeack_param_T_2 = 
        ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                << 1U)) | (3U & (IData)(vlSelfRef.__PVT__task_param)));
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
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
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
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__mp_grant_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
                                       & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                          & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
    vlSelfRef.__PVT___T_13 = ((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_4 = ((4U 
                                                 == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)) 
                                                | (5U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)));
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_12_io_bMergeTask_valid)) 
                                               & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                                  & (IData)(vlSelfRef.__PVT__state_w_replResp)))));
    vlSelfRef.__PVT__io_status_bits_needsRepl = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__state_s_merge_probeack)) 
                                                       | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_12_io_bMergeTask_valid))));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__io_nestedwbData = ((IData)(vlSelfRef.__PVT__nestedwb_match) 
                                        & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty));
    vlSelfRef.__PVT___io_tasks_mainpipe_bits_T_1_alias 
        = ((IData)(vlSelfRef.__PVT__mp_grant_valid)
            ? ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                : (IData)(vlSelfRef.__PVT__req_alias))
            : 0U);
    vlSelfRef.__VdfgRegularize_h47ff5784_2_5 = ((IData)(vlSelfRef.__PVT___T_13) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_9 = ((IData)(vlSelfRef.__PVT__mp_grant_valid) 
                                                | (IData)(vlSelfRef.__PVT__mp_release_valid));
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid) 
                                                      | (IData)(vlSelfRef.__PVT__mp_grant_valid))));
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

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12__1(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_3;
    __PVT___GEN_3 = 0;
    CData/*0:0*/ __PVT___GEN_131;
    __PVT___GEN_131 = 0;
    // Body
    vlSelfRef.__PVT___GEN_60 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_12_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_61 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_12_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotDirty));
    vlSelfRef.__PVT___GEN_0 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_12_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_12 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_12_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_merge_probeack));
    vlSelfRef.__PVT___GEN_142 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_12_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__gotGrantData)));
    vlSelfRef.__PVT___GEN_128 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_12_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__probeDirty)));
    vlSelfRef.__PVT___GEN_129 = ((1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param)) 
                                 | (((2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param)) 
                                     | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param))) 
                                    | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_12_io_alloc_valid)) 
                                       & (IData)(vlSelfRef.__PVT__probeGotN))));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_12_io_alloc_valid) {
        vlSelfRef.__PVT___GEN_26 = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_resp_meta_state;
        vlSelfRef.__PVT___GEN_4 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_5 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_6 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_13 = (1U & (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel)));
        vlSelfRef.__PVT___GEN_14 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                             >> 1U)));
        vlSelfRef.__PVT___GEN_8 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_7 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_10 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe;
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
    vlSelfRef.__PVT___GEN_102 = (((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                      >> 0xcU) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__io_out_a_q_io_enq_ready))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_12_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
    vlSelfRef.__PVT___GEN_151 = (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer__DOT__bundleOut_0_e_q_io_deq_valid) 
                                     & (0xcU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_e_bits_sink)))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_12_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_grantack)
                                     : (IData)(vlSelfRef.__PVT__state_w_grantack)));
    __PVT___GEN_3 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_12_io_alloc_valid) 
                     | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_15 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_12_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___T_1 = (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH) 
                                 >> 0xcU)) & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_11 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_retry)) 
                                                 & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_12_io_replResp_valid));
    vlSelfRef.__PVT___GEN_150 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_12_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_3))
                                  : (IData)(__PVT___GEN_3));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_12_io_resps_sink_c_valid) {
        if (vlSelfRef.__VdfgRegularize_h47ff5784_2_4) {
            vlSelfRef.__PVT___GEN_133 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last) 
                                         | (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
            vlSelfRef.__PVT___GEN_134 = (1U & ((IData)(vlSelfRef.__PVT__state_w_pprobeack) 
                                               | ((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                                  | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last))));
            __PVT___GEN_131 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last) 
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
    vlSelfRef.__PVT___GEN_103 = (1U & ((IData)(vlSelfRef.__PVT___T_1) 
                                       | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_12_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_104 = ((IData)(vlSelfRef.__PVT___T_1) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_12_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
    vlSelfRef.__PVT___GEN_161 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_12_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_186 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11)
                                     ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_12_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_resp_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    if (vlSelfRef.__VdfgRegularize_h47ff5784_2_11) {
        if ((0U != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_state))) {
            vlSelfRef.__PVT___GEN_173 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(__PVT___GEN_131));
            vlSelfRef.__PVT___GEN_171 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(vlSelfRef.__PVT___GEN_104));
        } else {
            vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
            vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
        }
    } else {
        vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
        vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
    }
}

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13__0(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mp_release_dirty = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                                          & (0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state))) 
                                         | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_opcode_T_2 
        = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
            & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
               >> 1U)) | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT___mp_merge_probeack_param_T_2 = 
        ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                << 1U)) | (3U & (IData)(vlSelfRef.__PVT__task_param)));
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
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
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
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__mp_grant_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
                                       & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                          & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
    vlSelfRef.__PVT___T_13 = ((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_4 = ((4U 
                                                 == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)) 
                                                | (5U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)));
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_bMergeTask_valid)) 
                                               & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                                  & (IData)(vlSelfRef.__PVT__state_w_replResp)))));
    vlSelfRef.__PVT__io_status_bits_needsRepl = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__state_s_merge_probeack)) 
                                                       | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_bMergeTask_valid))));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__io_nestedwbData = ((IData)(vlSelfRef.__PVT__nestedwb_match) 
                                        & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty));
    vlSelfRef.__PVT___io_tasks_mainpipe_bits_T_1_alias 
        = ((IData)(vlSelfRef.__PVT__mp_grant_valid)
            ? ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                : (IData)(vlSelfRef.__PVT__req_alias))
            : 0U);
    vlSelfRef.__VdfgRegularize_h47ff5784_2_5 = ((IData)(vlSelfRef.__PVT___T_13) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_9 = ((IData)(vlSelfRef.__PVT__mp_grant_valid) 
                                                | (IData)(vlSelfRef.__PVT__mp_release_valid));
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid) 
                                                      | (IData)(vlSelfRef.__PVT__mp_grant_valid))));
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

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13__1(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_3;
    __PVT___GEN_3 = 0;
    CData/*0:0*/ __PVT___GEN_131;
    __PVT___GEN_131 = 0;
    // Body
    vlSelfRef.__PVT___GEN_60 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_61 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotDirty));
    vlSelfRef.__PVT___GEN_0 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_12 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_merge_probeack));
    vlSelfRef.__PVT___GEN_142 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__gotGrantData)));
    vlSelfRef.__PVT___GEN_128 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__probeDirty)));
    vlSelfRef.__PVT___GEN_129 = ((1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param)) 
                                 | (((2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param)) 
                                     | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param))) 
                                    | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_alloc_valid)) 
                                       & (IData)(vlSelfRef.__PVT__probeGotN))));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_alloc_valid) {
        vlSelfRef.__PVT___GEN_26 = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_resp_meta_state;
        vlSelfRef.__PVT___GEN_4 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_5 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_6 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_13 = (1U & (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel)));
        vlSelfRef.__PVT___GEN_14 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                             >> 1U)));
        vlSelfRef.__PVT___GEN_8 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_7 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_10 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe;
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
    vlSelfRef.__PVT___GEN_102 = (((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                      >> 0xdU) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__io_out_a_q_io_enq_ready))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
    vlSelfRef.__PVT___GEN_151 = (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer__DOT__bundleOut_0_e_q_io_deq_valid) 
                                     & (0xdU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_e_bits_sink)))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_grantack)
                                     : (IData)(vlSelfRef.__PVT__state_w_grantack)));
    __PVT___GEN_3 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_alloc_valid) 
                     | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_15 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___T_1 = (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH) 
                                 >> 0xdU)) & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_11 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_retry)) 
                                                 & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_replResp_valid));
    vlSelfRef.__PVT___GEN_150 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_3))
                                  : (IData)(__PVT___GEN_3));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_resps_sink_c_valid) {
        if (vlSelfRef.__VdfgRegularize_h47ff5784_2_4) {
            vlSelfRef.__PVT___GEN_133 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last) 
                                         | (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
            vlSelfRef.__PVT___GEN_134 = (1U & ((IData)(vlSelfRef.__PVT__state_w_pprobeack) 
                                               | ((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                                  | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last))));
            __PVT___GEN_131 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last) 
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
    vlSelfRef.__PVT___GEN_103 = (1U & ((IData)(vlSelfRef.__PVT___T_1) 
                                       | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_104 = ((IData)(vlSelfRef.__PVT___T_1) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
    vlSelfRef.__PVT___GEN_161 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_186 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11)
                                     ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_13_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_resp_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    if (vlSelfRef.__VdfgRegularize_h47ff5784_2_11) {
        if ((0U != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_state))) {
            vlSelfRef.__PVT___GEN_173 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(__PVT___GEN_131));
            vlSelfRef.__PVT___GEN_171 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(vlSelfRef.__PVT___GEN_104));
        } else {
            vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
            vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
        }
    } else {
        vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
        vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
    }
}

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14__0(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mp_release_dirty = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                                          & (0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state))) 
                                         | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_opcode_T_2 
        = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
            & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
               >> 1U)) | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT___mp_merge_probeack_param_T_2 = 
        ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                << 1U)) | (3U & (IData)(vlSelfRef.__PVT__task_param)));
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
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
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
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__mp_grant_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
                                       & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                          & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
    vlSelfRef.__PVT___T_13 = ((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_4 = ((4U 
                                                 == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)) 
                                                | (5U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)));
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_bMergeTask_valid)) 
                                               & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                                  & (IData)(vlSelfRef.__PVT__state_w_replResp)))));
    vlSelfRef.__PVT__io_status_bits_needsRepl = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__state_s_merge_probeack)) 
                                                       | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_bMergeTask_valid))));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__io_nestedwbData = ((IData)(vlSelfRef.__PVT__nestedwb_match) 
                                        & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty));
    vlSelfRef.__PVT___io_tasks_mainpipe_bits_T_1_alias 
        = ((IData)(vlSelfRef.__PVT__mp_grant_valid)
            ? ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                : (IData)(vlSelfRef.__PVT__req_alias))
            : 0U);
    vlSelfRef.__VdfgRegularize_h47ff5784_2_5 = ((IData)(vlSelfRef.__PVT___T_13) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_9 = ((IData)(vlSelfRef.__PVT__mp_grant_valid) 
                                                | (IData)(vlSelfRef.__PVT__mp_release_valid));
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid) 
                                                      | (IData)(vlSelfRef.__PVT__mp_grant_valid))));
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

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14__1(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_3;
    __PVT___GEN_3 = 0;
    CData/*0:0*/ __PVT___GEN_131;
    __PVT___GEN_131 = 0;
    // Body
    vlSelfRef.__PVT___GEN_60 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_61 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotDirty));
    vlSelfRef.__PVT___GEN_0 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_12 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_merge_probeack));
    vlSelfRef.__PVT___GEN_142 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__gotGrantData)));
    vlSelfRef.__PVT___GEN_128 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__probeDirty)));
    vlSelfRef.__PVT___GEN_129 = ((1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param)) 
                                 | (((2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param)) 
                                     | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param))) 
                                    | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_alloc_valid)) 
                                       & (IData)(vlSelfRef.__PVT__probeGotN))));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_alloc_valid) {
        vlSelfRef.__PVT___GEN_26 = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_resp_meta_state;
        vlSelfRef.__PVT___GEN_4 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_5 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_6 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_13 = (1U & (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel)));
        vlSelfRef.__PVT___GEN_14 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                             >> 1U)));
        vlSelfRef.__PVT___GEN_8 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_7 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_10 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe;
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
    vlSelfRef.__PVT___GEN_102 = (((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                      >> 0xeU) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__io_out_a_q_io_enq_ready))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
    vlSelfRef.__PVT___GEN_151 = (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer__DOT__bundleOut_0_e_q_io_deq_valid) 
                                     & (0xeU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_e_bits_sink)))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_grantack)
                                     : (IData)(vlSelfRef.__PVT__state_w_grantack)));
    __PVT___GEN_3 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_alloc_valid) 
                     | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_15 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___T_1 = (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH) 
                                 >> 0xeU)) & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_11 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_retry)) 
                                                 & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_replResp_valid));
    vlSelfRef.__PVT___GEN_150 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_3))
                                  : (IData)(__PVT___GEN_3));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_resps_sink_c_valid) {
        if (vlSelfRef.__VdfgRegularize_h47ff5784_2_4) {
            vlSelfRef.__PVT___GEN_133 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last) 
                                         | (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
            vlSelfRef.__PVT___GEN_134 = (1U & ((IData)(vlSelfRef.__PVT__state_w_pprobeack) 
                                               | ((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                                  | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last))));
            __PVT___GEN_131 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last) 
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
    vlSelfRef.__PVT___GEN_103 = (1U & ((IData)(vlSelfRef.__PVT___T_1) 
                                       | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_104 = ((IData)(vlSelfRef.__PVT___T_1) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
    vlSelfRef.__PVT___GEN_161 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_186 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11)
                                     ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_14_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_resp_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    if (vlSelfRef.__VdfgRegularize_h47ff5784_2_11) {
        if ((0U != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_state))) {
            vlSelfRef.__PVT___GEN_173 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(__PVT___GEN_131));
            vlSelfRef.__PVT___GEN_171 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(vlSelfRef.__PVT___GEN_104));
        } else {
            vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
            vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
        }
    } else {
        vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
        vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
    }
}

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15__0(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mp_release_dirty = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                                          & (0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state))) 
                                         | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_opcode_T_2 
        = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
            & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
               >> 1U)) | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT___mp_merge_probeack_param_T_2 = 
        ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                << 1U)) | (3U & (IData)(vlSelfRef.__PVT__task_param)));
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
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
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
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__mp_grant_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
                                       & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                          & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
    vlSelfRef.__PVT___T_13 = ((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_4 = ((4U 
                                                 == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)) 
                                                | (5U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)));
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_bMergeTask_valid)) 
                                               & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                                  & (IData)(vlSelfRef.__PVT__state_w_replResp)))));
    vlSelfRef.__PVT__io_status_bits_needsRepl = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__state_s_merge_probeack)) 
                                                       | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_bMergeTask_valid))));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__io_nestedwbData = ((IData)(vlSelfRef.__PVT__nestedwb_match) 
                                        & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty));
    vlSelfRef.__PVT___io_tasks_mainpipe_bits_T_1_alias 
        = ((IData)(vlSelfRef.__PVT__mp_grant_valid)
            ? ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                : (IData)(vlSelfRef.__PVT__req_alias))
            : 0U);
    vlSelfRef.__VdfgRegularize_h47ff5784_2_5 = ((IData)(vlSelfRef.__PVT___T_13) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_9 = ((IData)(vlSelfRef.__PVT__mp_grant_valid) 
                                                | (IData)(vlSelfRef.__PVT__mp_release_valid));
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid) 
                                                      | (IData)(vlSelfRef.__PVT__mp_grant_valid))));
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

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15__1(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_3;
    __PVT___GEN_3 = 0;
    CData/*0:0*/ __PVT___GEN_131;
    __PVT___GEN_131 = 0;
    // Body
    vlSelfRef.__PVT___GEN_60 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_61 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotDirty));
    vlSelfRef.__PVT___GEN_0 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_12 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_merge_probeack));
    vlSelfRef.__PVT___GEN_142 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__gotGrantData)));
    vlSelfRef.__PVT___GEN_128 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__probeDirty)));
    vlSelfRef.__PVT___GEN_129 = ((1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param)) 
                                 | (((2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param)) 
                                     | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_c_bits_param))) 
                                    | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_alloc_valid)) 
                                       & (IData)(vlSelfRef.__PVT__probeGotN))));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_alloc_valid) {
        vlSelfRef.__PVT___GEN_26 = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_resp_meta_state;
        vlSelfRef.__PVT___GEN_4 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_5 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_6 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire;
        vlSelfRef.__PVT___GEN_13 = (1U & (~ (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel)));
        vlSelfRef.__PVT___GEN_14 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                             >> 1U)));
        vlSelfRef.__PVT___GEN_8 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_7 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                            >> 1U)));
        vlSelfRef.__PVT___GEN_10 = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe;
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
    vlSelfRef.__PVT___GEN_102 = (((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                      >> 0xfU) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__io_out_a_q_io_enq_ready))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
    vlSelfRef.__PVT___GEN_151 = (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer__DOT__bundleOut_0_e_q_io_deq_valid) 
                                     & (0xfU == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_auto_out_e_bits_sink)))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_grantack)
                                     : (IData)(vlSelfRef.__PVT__state_w_grantack)));
    __PVT___GEN_3 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_alloc_valid) 
                     | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_15 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___T_1 = (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH) 
                                 >> 0xfU)) & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_11 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_retry)) 
                                                 & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_replResp_valid));
    vlSelfRef.__PVT___GEN_150 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_3))
                                  : (IData)(__PVT___GEN_3));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_resps_sink_c_valid) {
        if (vlSelfRef.__VdfgRegularize_h47ff5784_2_4) {
            vlSelfRef.__PVT___GEN_133 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last) 
                                         | (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
            vlSelfRef.__PVT___GEN_134 = (1U & ((IData)(vlSelfRef.__PVT__state_w_pprobeack) 
                                               | ((~ (IData)(vlSelfRef.__PVT__req_off)) 
                                                  | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last))));
            __PVT___GEN_131 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last) 
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
    vlSelfRef.__PVT___GEN_103 = (1U & ((IData)(vlSelfRef.__PVT___T_1) 
                                       | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_104 = ((IData)(vlSelfRef.__PVT___T_1) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
    vlSelfRef.__PVT___GEN_161 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_186 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11)
                                     ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_15_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_resp_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    if (vlSelfRef.__VdfgRegularize_h47ff5784_2_11) {
        if ((0U != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_state))) {
            vlSelfRef.__PVT___GEN_173 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(__PVT___GEN_131));
            vlSelfRef.__PVT___GEN_171 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(vlSelfRef.__PVT___GEN_104));
        } else {
            vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
            vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
        }
    } else {
        vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
        vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
    }
}

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0__0(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mp_release_dirty = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                                          & (0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state))) 
                                         | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_opcode_T_2 
        = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
            & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
               >> 1U)) | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT___mp_merge_probeack_param_T_2 = 
        ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                << 1U)) | (3U & (IData)(vlSelfRef.__PVT__task_param)));
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
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
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
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__mp_grant_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
                                       & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                          & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
    vlSelfRef.__PVT___T_13 = ((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_4 = ((4U 
                                                 == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)) 
                                                | (5U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)));
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_bMergeTask_valid)) 
                                               & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                                  & (IData)(vlSelfRef.__PVT__state_w_replResp)))));
    vlSelfRef.__PVT__io_status_bits_needsRepl = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__state_s_merge_probeack)) 
                                                       | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_bMergeTask_valid))));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__io_nestedwbData = ((IData)(vlSelfRef.__PVT__nestedwb_match) 
                                        & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty));
    vlSelfRef.__PVT___io_tasks_mainpipe_bits_T_1_alias 
        = ((IData)(vlSelfRef.__PVT__mp_grant_valid)
            ? ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                : (IData)(vlSelfRef.__PVT__req_alias))
            : 0U);
    vlSelfRef.__VdfgRegularize_h47ff5784_2_5 = ((IData)(vlSelfRef.__PVT___T_13) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_9 = ((IData)(vlSelfRef.__PVT__mp_grant_valid) 
                                                | (IData)(vlSelfRef.__PVT__mp_release_valid));
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid) 
                                                      | (IData)(vlSelfRef.__PVT__mp_grant_valid))));
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

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0__1(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_3;
    __PVT___GEN_3 = 0;
    CData/*0:0*/ __PVT___GEN_131;
    __PVT___GEN_131 = 0;
    // Body
    vlSelfRef.__PVT___GEN_60 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_61 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotDirty));
    vlSelfRef.__PVT___GEN_0 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_12 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_merge_probeack));
    vlSelfRef.__PVT___GEN_142 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__gotGrantData)));
    vlSelfRef.__PVT___GEN_128 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__probeDirty)));
    vlSelfRef.__PVT___GEN_129 = ((1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param)) 
                                 | (((2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param)) 
                                     | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param))) 
                                    | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)) 
                                       & (IData)(vlSelfRef.__PVT__probeGotN))));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid) {
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
    vlSelfRef.__PVT___GEN_102 = (((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                                  & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                     & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__io_out_a_q_io_enq_ready))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
    vlSelfRef.__PVT___GEN_151 = (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer_1__DOT__bundleOut_0_e_q_io_deq_valid) 
                                     & (0U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_e_bits_sink)))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_grantack)
                                     : (IData)(vlSelfRef.__PVT__state_w_grantack)));
    __PVT___GEN_3 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid) 
                     | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_15 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___T_1 = (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH)) 
                             & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_11 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_retry)) 
                                                 & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_replResp_valid));
    vlSelfRef.__PVT___GEN_150 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_3))
                                  : (IData)(__PVT___GEN_3));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_resps_sink_c_valid) {
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
    vlSelfRef.__PVT___GEN_103 = (1U & ((IData)(vlSelfRef.__PVT___T_1) 
                                       | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_104 = ((IData)(vlSelfRef.__PVT___T_1) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
    vlSelfRef.__PVT___GEN_161 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_186 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11)
                                     ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_0_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_resp_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    if (vlSelfRef.__VdfgRegularize_h47ff5784_2_11) {
        if ((0U != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_state))) {
            vlSelfRef.__PVT___GEN_173 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(__PVT___GEN_131));
            vlSelfRef.__PVT___GEN_171 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(vlSelfRef.__PVT___GEN_104));
        } else {
            vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
            vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
        }
    } else {
        vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
        vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
    }
}

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1__0(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mp_release_dirty = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                                          & (0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state))) 
                                         | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_opcode_T_2 
        = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
            & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
               >> 1U)) | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT___mp_merge_probeack_param_T_2 = 
        ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                << 1U)) | (3U & (IData)(vlSelfRef.__PVT__task_param)));
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
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
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
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__mp_grant_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
                                       & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                          & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
    vlSelfRef.__PVT___T_13 = ((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_4 = ((4U 
                                                 == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)) 
                                                | (5U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)));
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_bMergeTask_valid)) 
                                               & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                                  & (IData)(vlSelfRef.__PVT__state_w_replResp)))));
    vlSelfRef.__PVT__io_status_bits_needsRepl = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__state_s_merge_probeack)) 
                                                       | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_bMergeTask_valid))));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__io_nestedwbData = ((IData)(vlSelfRef.__PVT__nestedwb_match) 
                                        & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty));
    vlSelfRef.__PVT___io_tasks_mainpipe_bits_T_1_alias 
        = ((IData)(vlSelfRef.__PVT__mp_grant_valid)
            ? ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                : (IData)(vlSelfRef.__PVT__req_alias))
            : 0U);
    vlSelfRef.__VdfgRegularize_h47ff5784_2_5 = ((IData)(vlSelfRef.__PVT___T_13) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_9 = ((IData)(vlSelfRef.__PVT__mp_grant_valid) 
                                                | (IData)(vlSelfRef.__PVT__mp_release_valid));
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid) 
                                                      | (IData)(vlSelfRef.__PVT__mp_grant_valid))));
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

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1__1(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_3;
    __PVT___GEN_3 = 0;
    CData/*0:0*/ __PVT___GEN_131;
    __PVT___GEN_131 = 0;
    // Body
    vlSelfRef.__PVT___GEN_60 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_61 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotDirty));
    vlSelfRef.__PVT___GEN_0 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_12 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_merge_probeack));
    vlSelfRef.__PVT___GEN_142 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__gotGrantData)));
    vlSelfRef.__PVT___GEN_128 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__probeDirty)));
    vlSelfRef.__PVT___GEN_129 = ((1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param)) 
                                 | (((2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param)) 
                                     | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param))) 
                                    | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)) 
                                       & (IData)(vlSelfRef.__PVT__probeGotN))));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid) {
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
    vlSelfRef.__PVT___GEN_102 = (((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                      >> 1U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__io_out_a_q_io_enq_ready))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
    vlSelfRef.__PVT___GEN_151 = (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer_1__DOT__bundleOut_0_e_q_io_deq_valid) 
                                     & (1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_e_bits_sink)))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_grantack)
                                     : (IData)(vlSelfRef.__PVT__state_w_grantack)));
    __PVT___GEN_3 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid) 
                     | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_15 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___T_1 = (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH) 
                                 >> 1U)) & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_11 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_retry)) 
                                                 & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_replResp_valid));
    vlSelfRef.__PVT___GEN_150 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_3))
                                  : (IData)(__PVT___GEN_3));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_resps_sink_c_valid) {
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
    vlSelfRef.__PVT___GEN_103 = (1U & ((IData)(vlSelfRef.__PVT___T_1) 
                                       | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_104 = ((IData)(vlSelfRef.__PVT___T_1) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
    vlSelfRef.__PVT___GEN_161 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_186 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11)
                                     ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_1_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_resp_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    if (vlSelfRef.__VdfgRegularize_h47ff5784_2_11) {
        if ((0U != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_state))) {
            vlSelfRef.__PVT___GEN_173 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(__PVT___GEN_131));
            vlSelfRef.__PVT___GEN_171 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(vlSelfRef.__PVT___GEN_104));
        } else {
            vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
            vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
        }
    } else {
        vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
        vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
    }
}

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2__0(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mp_release_dirty = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                                          & (0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state))) 
                                         | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_opcode_T_2 
        = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
            & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
               >> 1U)) | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT___mp_merge_probeack_param_T_2 = 
        ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                << 1U)) | (3U & (IData)(vlSelfRef.__PVT__task_param)));
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
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
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
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__mp_grant_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
                                       & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                          & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
    vlSelfRef.__PVT___T_13 = ((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_4 = ((4U 
                                                 == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)) 
                                                | (5U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)));
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_bMergeTask_valid)) 
                                               & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                                  & (IData)(vlSelfRef.__PVT__state_w_replResp)))));
    vlSelfRef.__PVT__io_status_bits_needsRepl = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__state_s_merge_probeack)) 
                                                       | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_bMergeTask_valid))));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__io_nestedwbData = ((IData)(vlSelfRef.__PVT__nestedwb_match) 
                                        & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty));
    vlSelfRef.__PVT___io_tasks_mainpipe_bits_T_1_alias 
        = ((IData)(vlSelfRef.__PVT__mp_grant_valid)
            ? ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                : (IData)(vlSelfRef.__PVT__req_alias))
            : 0U);
    vlSelfRef.__VdfgRegularize_h47ff5784_2_5 = ((IData)(vlSelfRef.__PVT___T_13) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_9 = ((IData)(vlSelfRef.__PVT__mp_grant_valid) 
                                                | (IData)(vlSelfRef.__PVT__mp_release_valid));
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid) 
                                                      | (IData)(vlSelfRef.__PVT__mp_grant_valid))));
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

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2__1(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_3;
    __PVT___GEN_3 = 0;
    CData/*0:0*/ __PVT___GEN_131;
    __PVT___GEN_131 = 0;
    // Body
    vlSelfRef.__PVT___GEN_60 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_61 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotDirty));
    vlSelfRef.__PVT___GEN_0 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_12 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_merge_probeack));
    vlSelfRef.__PVT___GEN_142 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__gotGrantData)));
    vlSelfRef.__PVT___GEN_128 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__probeDirty)));
    vlSelfRef.__PVT___GEN_129 = ((1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param)) 
                                 | (((2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param)) 
                                     | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param))) 
                                    | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)) 
                                       & (IData)(vlSelfRef.__PVT__probeGotN))));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid) {
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
    vlSelfRef.__PVT___GEN_102 = (((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                      >> 2U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__io_out_a_q_io_enq_ready))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
    vlSelfRef.__PVT___GEN_151 = (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer_1__DOT__bundleOut_0_e_q_io_deq_valid) 
                                     & (2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_e_bits_sink)))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_grantack)
                                     : (IData)(vlSelfRef.__PVT__state_w_grantack)));
    __PVT___GEN_3 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid) 
                     | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_15 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___T_1 = (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH) 
                                 >> 2U)) & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_11 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_retry)) 
                                                 & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_replResp_valid));
    vlSelfRef.__PVT___GEN_150 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_3))
                                  : (IData)(__PVT___GEN_3));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_resps_sink_c_valid) {
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
    vlSelfRef.__PVT___GEN_103 = (1U & ((IData)(vlSelfRef.__PVT___T_1) 
                                       | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_104 = ((IData)(vlSelfRef.__PVT___T_1) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
    vlSelfRef.__PVT___GEN_161 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_186 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11)
                                     ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_2_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_resp_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    if (vlSelfRef.__VdfgRegularize_h47ff5784_2_11) {
        if ((0U != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_state))) {
            vlSelfRef.__PVT___GEN_173 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(__PVT___GEN_131));
            vlSelfRef.__PVT___GEN_171 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(vlSelfRef.__PVT___GEN_104));
        } else {
            vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
            vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
        }
    } else {
        vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
        vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
    }
}

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3__0(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mp_release_dirty = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                                          & (0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state))) 
                                         | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_opcode_T_2 
        = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
            & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
               >> 1U)) | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT___mp_merge_probeack_param_T_2 = 
        ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                << 1U)) | (3U & (IData)(vlSelfRef.__PVT__task_param)));
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
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
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
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__mp_grant_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
                                       & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                          & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
    vlSelfRef.__PVT___T_13 = ((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_4 = ((4U 
                                                 == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)) 
                                                | (5U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)));
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_bMergeTask_valid)) 
                                               & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                                  & (IData)(vlSelfRef.__PVT__state_w_replResp)))));
    vlSelfRef.__PVT__io_status_bits_needsRepl = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__state_s_merge_probeack)) 
                                                       | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_bMergeTask_valid))));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__io_nestedwbData = ((IData)(vlSelfRef.__PVT__nestedwb_match) 
                                        & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty));
    vlSelfRef.__PVT___io_tasks_mainpipe_bits_T_1_alias 
        = ((IData)(vlSelfRef.__PVT__mp_grant_valid)
            ? ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                : (IData)(vlSelfRef.__PVT__req_alias))
            : 0U);
    vlSelfRef.__VdfgRegularize_h47ff5784_2_5 = ((IData)(vlSelfRef.__PVT___T_13) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_9 = ((IData)(vlSelfRef.__PVT__mp_grant_valid) 
                                                | (IData)(vlSelfRef.__PVT__mp_release_valid));
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid) 
                                                      | (IData)(vlSelfRef.__PVT__mp_grant_valid))));
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

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3__1(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_3;
    __PVT___GEN_3 = 0;
    CData/*0:0*/ __PVT___GEN_131;
    __PVT___GEN_131 = 0;
    // Body
    vlSelfRef.__PVT___GEN_60 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_61 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotDirty));
    vlSelfRef.__PVT___GEN_0 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_12 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_merge_probeack));
    vlSelfRef.__PVT___GEN_142 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__gotGrantData)));
    vlSelfRef.__PVT___GEN_128 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__probeDirty)));
    vlSelfRef.__PVT___GEN_129 = ((1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param)) 
                                 | (((2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param)) 
                                     | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param))) 
                                    | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)) 
                                       & (IData)(vlSelfRef.__PVT__probeGotN))));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid) {
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
    vlSelfRef.__PVT___GEN_102 = (((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                      >> 3U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__io_out_a_q_io_enq_ready))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
    vlSelfRef.__PVT___GEN_151 = (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer_1__DOT__bundleOut_0_e_q_io_deq_valid) 
                                     & (3U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_e_bits_sink)))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_grantack)
                                     : (IData)(vlSelfRef.__PVT__state_w_grantack)));
    __PVT___GEN_3 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid) 
                     | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_15 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___T_1 = (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH) 
                                 >> 3U)) & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_11 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_retry)) 
                                                 & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_replResp_valid));
    vlSelfRef.__PVT___GEN_150 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_3))
                                  : (IData)(__PVT___GEN_3));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_resps_sink_c_valid) {
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
    vlSelfRef.__PVT___GEN_103 = (1U & ((IData)(vlSelfRef.__PVT___T_1) 
                                       | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_104 = ((IData)(vlSelfRef.__PVT___T_1) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
    vlSelfRef.__PVT___GEN_161 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_186 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11)
                                     ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_3_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_resp_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    if (vlSelfRef.__VdfgRegularize_h47ff5784_2_11) {
        if ((0U != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_state))) {
            vlSelfRef.__PVT___GEN_173 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(__PVT___GEN_131));
            vlSelfRef.__PVT___GEN_171 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(vlSelfRef.__PVT___GEN_104));
        } else {
            vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
            vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
        }
    } else {
        vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
        vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
    }
}

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4__0(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mp_release_dirty = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                                          & (0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state))) 
                                         | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_opcode_T_2 
        = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
            & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
               >> 1U)) | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT___mp_merge_probeack_param_T_2 = 
        ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                << 1U)) | (3U & (IData)(vlSelfRef.__PVT__task_param)));
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
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
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
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__mp_grant_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
                                       & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                          & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
    vlSelfRef.__PVT___T_13 = ((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_4 = ((4U 
                                                 == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)) 
                                                | (5U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)));
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_4_io_bMergeTask_valid)) 
                                               & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                                  & (IData)(vlSelfRef.__PVT__state_w_replResp)))));
    vlSelfRef.__PVT__io_status_bits_needsRepl = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__state_s_merge_probeack)) 
                                                       | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_4_io_bMergeTask_valid))));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__io_nestedwbData = ((IData)(vlSelfRef.__PVT__nestedwb_match) 
                                        & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty));
    vlSelfRef.__PVT___io_tasks_mainpipe_bits_T_1_alias 
        = ((IData)(vlSelfRef.__PVT__mp_grant_valid)
            ? ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                : (IData)(vlSelfRef.__PVT__req_alias))
            : 0U);
    vlSelfRef.__VdfgRegularize_h47ff5784_2_5 = ((IData)(vlSelfRef.__PVT___T_13) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_9 = ((IData)(vlSelfRef.__PVT__mp_grant_valid) 
                                                | (IData)(vlSelfRef.__PVT__mp_release_valid));
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid) 
                                                      | (IData)(vlSelfRef.__PVT__mp_grant_valid))));
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

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4__1(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_3;
    __PVT___GEN_3 = 0;
    CData/*0:0*/ __PVT___GEN_131;
    __PVT___GEN_131 = 0;
    // Body
    vlSelfRef.__PVT___GEN_60 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_4_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_61 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_4_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotDirty));
    vlSelfRef.__PVT___GEN_0 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_4_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_12 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_4_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_merge_probeack));
    vlSelfRef.__PVT___GEN_142 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_4_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__gotGrantData)));
    vlSelfRef.__PVT___GEN_128 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_4_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__probeDirty)));
    vlSelfRef.__PVT___GEN_129 = ((1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param)) 
                                 | (((2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param)) 
                                     | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param))) 
                                    | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_4_io_alloc_valid)) 
                                       & (IData)(vlSelfRef.__PVT__probeGotN))));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_4_io_alloc_valid) {
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
    vlSelfRef.__PVT___GEN_102 = (((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                      >> 4U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__io_out_a_q_io_enq_ready))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_4_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
    vlSelfRef.__PVT___GEN_151 = (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer_1__DOT__bundleOut_0_e_q_io_deq_valid) 
                                     & (4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_e_bits_sink)))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_4_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_grantack)
                                     : (IData)(vlSelfRef.__PVT__state_w_grantack)));
    __PVT___GEN_3 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_4_io_alloc_valid) 
                     | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_15 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_4_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___T_1 = (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH) 
                                 >> 4U)) & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_11 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_retry)) 
                                                 & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_4_io_replResp_valid));
    vlSelfRef.__PVT___GEN_150 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_4_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_3))
                                  : (IData)(__PVT___GEN_3));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_4_io_resps_sink_c_valid) {
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
    vlSelfRef.__PVT___GEN_103 = (1U & ((IData)(vlSelfRef.__PVT___T_1) 
                                       | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_4_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_104 = ((IData)(vlSelfRef.__PVT___T_1) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_4_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
    vlSelfRef.__PVT___GEN_161 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_4_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_186 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11)
                                     ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_4_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_resp_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    if (vlSelfRef.__VdfgRegularize_h47ff5784_2_11) {
        if ((0U != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_state))) {
            vlSelfRef.__PVT___GEN_173 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(__PVT___GEN_131));
            vlSelfRef.__PVT___GEN_171 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(vlSelfRef.__PVT___GEN_104));
        } else {
            vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
            vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
        }
    } else {
        vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
        vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
    }
}

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5__0(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mp_release_dirty = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                                          & (0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state))) 
                                         | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_opcode_T_2 
        = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
            & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
               >> 1U)) | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT___mp_merge_probeack_param_T_2 = 
        ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                << 1U)) | (3U & (IData)(vlSelfRef.__PVT__task_param)));
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
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
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
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__mp_grant_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
                                       & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                          & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
    vlSelfRef.__PVT___T_13 = ((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_4 = ((4U 
                                                 == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)) 
                                                | (5U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)));
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_5_io_bMergeTask_valid)) 
                                               & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                                  & (IData)(vlSelfRef.__PVT__state_w_replResp)))));
    vlSelfRef.__PVT__io_status_bits_needsRepl = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__state_s_merge_probeack)) 
                                                       | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_5_io_bMergeTask_valid))));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__io_nestedwbData = ((IData)(vlSelfRef.__PVT__nestedwb_match) 
                                        & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty));
    vlSelfRef.__PVT___io_tasks_mainpipe_bits_T_1_alias 
        = ((IData)(vlSelfRef.__PVT__mp_grant_valid)
            ? ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                : (IData)(vlSelfRef.__PVT__req_alias))
            : 0U);
    vlSelfRef.__VdfgRegularize_h47ff5784_2_5 = ((IData)(vlSelfRef.__PVT___T_13) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_9 = ((IData)(vlSelfRef.__PVT__mp_grant_valid) 
                                                | (IData)(vlSelfRef.__PVT__mp_release_valid));
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid) 
                                                      | (IData)(vlSelfRef.__PVT__mp_grant_valid))));
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

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5__1(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_3;
    __PVT___GEN_3 = 0;
    CData/*0:0*/ __PVT___GEN_131;
    __PVT___GEN_131 = 0;
    // Body
    vlSelfRef.__PVT___GEN_60 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_5_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_61 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_5_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotDirty));
    vlSelfRef.__PVT___GEN_0 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_5_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_12 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_5_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_merge_probeack));
    vlSelfRef.__PVT___GEN_142 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_5_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__gotGrantData)));
    vlSelfRef.__PVT___GEN_128 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_5_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__probeDirty)));
    vlSelfRef.__PVT___GEN_129 = ((1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param)) 
                                 | (((2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param)) 
                                     | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param))) 
                                    | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_5_io_alloc_valid)) 
                                       & (IData)(vlSelfRef.__PVT__probeGotN))));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_5_io_alloc_valid) {
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
    vlSelfRef.__PVT___GEN_102 = (((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                      >> 5U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__io_out_a_q_io_enq_ready))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_5_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
    vlSelfRef.__PVT___GEN_151 = (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer_1__DOT__bundleOut_0_e_q_io_deq_valid) 
                                     & (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_e_bits_sink)))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_5_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_grantack)
                                     : (IData)(vlSelfRef.__PVT__state_w_grantack)));
    __PVT___GEN_3 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_5_io_alloc_valid) 
                     | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_15 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_5_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___T_1 = (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH) 
                                 >> 5U)) & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_11 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_retry)) 
                                                 & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_5_io_replResp_valid));
    vlSelfRef.__PVT___GEN_150 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_5_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_3))
                                  : (IData)(__PVT___GEN_3));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_5_io_resps_sink_c_valid) {
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
    vlSelfRef.__PVT___GEN_103 = (1U & ((IData)(vlSelfRef.__PVT___T_1) 
                                       | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_5_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_104 = ((IData)(vlSelfRef.__PVT___T_1) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_5_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
    vlSelfRef.__PVT___GEN_161 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_5_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_186 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11)
                                     ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_5_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_resp_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    if (vlSelfRef.__VdfgRegularize_h47ff5784_2_11) {
        if ((0U != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_state))) {
            vlSelfRef.__PVT___GEN_173 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(__PVT___GEN_131));
            vlSelfRef.__PVT___GEN_171 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(vlSelfRef.__PVT___GEN_104));
        } else {
            vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
            vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
        }
    } else {
        vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
        vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
    }
}

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6__0(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mp_release_dirty = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                                          & (0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state))) 
                                         | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_opcode_T_2 
        = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
            & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
               >> 1U)) | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT___mp_merge_probeack_param_T_2 = 
        ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                << 1U)) | (3U & (IData)(vlSelfRef.__PVT__task_param)));
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
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
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
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__mp_grant_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
                                       & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                          & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
    vlSelfRef.__PVT___T_13 = ((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_4 = ((4U 
                                                 == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)) 
                                                | (5U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)));
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_6_io_bMergeTask_valid)) 
                                               & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                                  & (IData)(vlSelfRef.__PVT__state_w_replResp)))));
    vlSelfRef.__PVT__io_status_bits_needsRepl = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__state_s_merge_probeack)) 
                                                       | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_6_io_bMergeTask_valid))));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__io_nestedwbData = ((IData)(vlSelfRef.__PVT__nestedwb_match) 
                                        & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty));
    vlSelfRef.__PVT___io_tasks_mainpipe_bits_T_1_alias 
        = ((IData)(vlSelfRef.__PVT__mp_grant_valid)
            ? ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                : (IData)(vlSelfRef.__PVT__req_alias))
            : 0U);
    vlSelfRef.__VdfgRegularize_h47ff5784_2_5 = ((IData)(vlSelfRef.__PVT___T_13) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_9 = ((IData)(vlSelfRef.__PVT__mp_grant_valid) 
                                                | (IData)(vlSelfRef.__PVT__mp_release_valid));
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid) 
                                                      | (IData)(vlSelfRef.__PVT__mp_grant_valid))));
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

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6__1(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_3;
    __PVT___GEN_3 = 0;
    CData/*0:0*/ __PVT___GEN_131;
    __PVT___GEN_131 = 0;
    // Body
    vlSelfRef.__PVT___GEN_60 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_6_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_61 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_6_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotDirty));
    vlSelfRef.__PVT___GEN_0 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_6_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_12 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_6_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_merge_probeack));
    vlSelfRef.__PVT___GEN_142 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_6_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__gotGrantData)));
    vlSelfRef.__PVT___GEN_128 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_6_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__probeDirty)));
    vlSelfRef.__PVT___GEN_129 = ((1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param)) 
                                 | (((2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param)) 
                                     | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param))) 
                                    | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_6_io_alloc_valid)) 
                                       & (IData)(vlSelfRef.__PVT__probeGotN))));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_6_io_alloc_valid) {
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
    vlSelfRef.__PVT___GEN_102 = (((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                      >> 6U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__io_out_a_q_io_enq_ready))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_6_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
    vlSelfRef.__PVT___GEN_151 = (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer_1__DOT__bundleOut_0_e_q_io_deq_valid) 
                                     & (6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_e_bits_sink)))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_6_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_grantack)
                                     : (IData)(vlSelfRef.__PVT__state_w_grantack)));
    __PVT___GEN_3 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_6_io_alloc_valid) 
                     | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_15 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_6_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___T_1 = (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH) 
                                 >> 6U)) & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_11 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_retry)) 
                                                 & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_6_io_replResp_valid));
    vlSelfRef.__PVT___GEN_150 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_6_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_3))
                                  : (IData)(__PVT___GEN_3));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_6_io_resps_sink_c_valid) {
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
    vlSelfRef.__PVT___GEN_103 = (1U & ((IData)(vlSelfRef.__PVT___T_1) 
                                       | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_6_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_104 = ((IData)(vlSelfRef.__PVT___T_1) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_6_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
    vlSelfRef.__PVT___GEN_161 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_6_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_186 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11)
                                     ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_6_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_resp_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    if (vlSelfRef.__VdfgRegularize_h47ff5784_2_11) {
        if ((0U != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_state))) {
            vlSelfRef.__PVT___GEN_173 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(__PVT___GEN_131));
            vlSelfRef.__PVT___GEN_171 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(vlSelfRef.__PVT___GEN_104));
        } else {
            vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
            vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
        }
    } else {
        vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
        vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
    }
}

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7__0(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mp_release_dirty = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                                          & (0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state))) 
                                         | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_opcode_T_2 
        = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
            & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
               >> 1U)) | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT___mp_merge_probeack_param_T_2 = 
        ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                << 1U)) | (3U & (IData)(vlSelfRef.__PVT__task_param)));
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
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
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
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__mp_grant_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
                                       & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                          & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
    vlSelfRef.__PVT___T_13 = ((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_4 = ((4U 
                                                 == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)) 
                                                | (5U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)));
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_7_io_bMergeTask_valid)) 
                                               & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                                  & (IData)(vlSelfRef.__PVT__state_w_replResp)))));
    vlSelfRef.__PVT__io_status_bits_needsRepl = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__state_s_merge_probeack)) 
                                                       | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_7_io_bMergeTask_valid))));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__io_nestedwbData = ((IData)(vlSelfRef.__PVT__nestedwb_match) 
                                        & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty));
    vlSelfRef.__PVT___io_tasks_mainpipe_bits_T_1_alias 
        = ((IData)(vlSelfRef.__PVT__mp_grant_valid)
            ? ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                : (IData)(vlSelfRef.__PVT__req_alias))
            : 0U);
    vlSelfRef.__VdfgRegularize_h47ff5784_2_5 = ((IData)(vlSelfRef.__PVT___T_13) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_9 = ((IData)(vlSelfRef.__PVT__mp_grant_valid) 
                                                | (IData)(vlSelfRef.__PVT__mp_release_valid));
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid) 
                                                      | (IData)(vlSelfRef.__PVT__mp_grant_valid))));
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

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7__1(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_3;
    __PVT___GEN_3 = 0;
    CData/*0:0*/ __PVT___GEN_131;
    __PVT___GEN_131 = 0;
    // Body
    vlSelfRef.__PVT___GEN_60 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_7_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_61 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_7_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotDirty));
    vlSelfRef.__PVT___GEN_0 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_7_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_12 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_7_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_merge_probeack));
    vlSelfRef.__PVT___GEN_142 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_7_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__gotGrantData)));
    vlSelfRef.__PVT___GEN_128 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_7_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__probeDirty)));
    vlSelfRef.__PVT___GEN_129 = ((1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param)) 
                                 | (((2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param)) 
                                     | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param))) 
                                    | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_7_io_alloc_valid)) 
                                       & (IData)(vlSelfRef.__PVT__probeGotN))));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_7_io_alloc_valid) {
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
    vlSelfRef.__PVT___GEN_102 = (((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                      >> 7U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__io_out_a_q_io_enq_ready))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_7_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
    vlSelfRef.__PVT___GEN_151 = (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer_1__DOT__bundleOut_0_e_q_io_deq_valid) 
                                     & (7U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_e_bits_sink)))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_7_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_grantack)
                                     : (IData)(vlSelfRef.__PVT__state_w_grantack)));
    __PVT___GEN_3 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_7_io_alloc_valid) 
                     | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_15 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_7_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___T_1 = (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH) 
                                 >> 7U)) & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_11 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_retry)) 
                                                 & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_7_io_replResp_valid));
    vlSelfRef.__PVT___GEN_150 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_7_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_3))
                                  : (IData)(__PVT___GEN_3));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_7_io_resps_sink_c_valid) {
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
    vlSelfRef.__PVT___GEN_103 = (1U & ((IData)(vlSelfRef.__PVT___T_1) 
                                       | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_7_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_104 = ((IData)(vlSelfRef.__PVT___T_1) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_7_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
    vlSelfRef.__PVT___GEN_161 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_7_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_186 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11)
                                     ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_7_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_resp_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    if (vlSelfRef.__VdfgRegularize_h47ff5784_2_11) {
        if ((0U != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_state))) {
            vlSelfRef.__PVT___GEN_173 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(__PVT___GEN_131));
            vlSelfRef.__PVT___GEN_171 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(vlSelfRef.__PVT___GEN_104));
        } else {
            vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
            vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
        }
    } else {
        vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
        vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
    }
}

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8__0(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mp_release_dirty = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                                          & (0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state))) 
                                         | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_opcode_T_2 
        = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
            & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
               >> 1U)) | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT___mp_merge_probeack_param_T_2 = 
        ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                << 1U)) | (3U & (IData)(vlSelfRef.__PVT__task_param)));
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
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
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
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__mp_grant_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
                                       & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                          & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
    vlSelfRef.__PVT___T_13 = ((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_4 = ((4U 
                                                 == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)) 
                                                | (5U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)));
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_8_io_bMergeTask_valid)) 
                                               & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                                  & (IData)(vlSelfRef.__PVT__state_w_replResp)))));
    vlSelfRef.__PVT__io_status_bits_needsRepl = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__state_s_merge_probeack)) 
                                                       | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_8_io_bMergeTask_valid))));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__io_nestedwbData = ((IData)(vlSelfRef.__PVT__nestedwb_match) 
                                        & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty));
    vlSelfRef.__PVT___io_tasks_mainpipe_bits_T_1_alias 
        = ((IData)(vlSelfRef.__PVT__mp_grant_valid)
            ? ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                : (IData)(vlSelfRef.__PVT__req_alias))
            : 0U);
    vlSelfRef.__VdfgRegularize_h47ff5784_2_5 = ((IData)(vlSelfRef.__PVT___T_13) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_9 = ((IData)(vlSelfRef.__PVT__mp_grant_valid) 
                                                | (IData)(vlSelfRef.__PVT__mp_release_valid));
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid) 
                                                      | (IData)(vlSelfRef.__PVT__mp_grant_valid))));
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

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8__1(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_3;
    __PVT___GEN_3 = 0;
    CData/*0:0*/ __PVT___GEN_131;
    __PVT___GEN_131 = 0;
    // Body
    vlSelfRef.__PVT___GEN_60 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_8_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_61 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_8_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotDirty));
    vlSelfRef.__PVT___GEN_0 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_8_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_12 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_8_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_merge_probeack));
    vlSelfRef.__PVT___GEN_142 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_8_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__gotGrantData)));
    vlSelfRef.__PVT___GEN_128 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_8_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__probeDirty)));
    vlSelfRef.__PVT___GEN_129 = ((1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param)) 
                                 | (((2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param)) 
                                     | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param))) 
                                    | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_8_io_alloc_valid)) 
                                       & (IData)(vlSelfRef.__PVT__probeGotN))));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_8_io_alloc_valid) {
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
    vlSelfRef.__PVT___GEN_102 = (((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                      >> 8U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__io_out_a_q_io_enq_ready))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_8_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
    vlSelfRef.__PVT___GEN_151 = (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer_1__DOT__bundleOut_0_e_q_io_deq_valid) 
                                     & (8U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_e_bits_sink)))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_8_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_grantack)
                                     : (IData)(vlSelfRef.__PVT__state_w_grantack)));
    __PVT___GEN_3 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_8_io_alloc_valid) 
                     | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_15 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_8_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___T_1 = (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH) 
                                 >> 8U)) & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_11 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_retry)) 
                                                 & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_8_io_replResp_valid));
    vlSelfRef.__PVT___GEN_150 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_8_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_3))
                                  : (IData)(__PVT___GEN_3));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_8_io_resps_sink_c_valid) {
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
    vlSelfRef.__PVT___GEN_103 = (1U & ((IData)(vlSelfRef.__PVT___T_1) 
                                       | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_8_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_104 = ((IData)(vlSelfRef.__PVT___T_1) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_8_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
    vlSelfRef.__PVT___GEN_161 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_8_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_186 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11)
                                     ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_8_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_resp_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    if (vlSelfRef.__VdfgRegularize_h47ff5784_2_11) {
        if ((0U != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_state))) {
            vlSelfRef.__PVT___GEN_173 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(__PVT___GEN_131));
            vlSelfRef.__PVT___GEN_171 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(vlSelfRef.__PVT___GEN_104));
        } else {
            vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
            vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
        }
    } else {
        vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
        vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
    }
}

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9__0(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mp_release_dirty = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                                          & (0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state))) 
                                         | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_opcode_T_2 
        = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
            & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
               >> 1U)) | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT___mp_merge_probeack_param_T_2 = 
        ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                << 1U)) | (3U & (IData)(vlSelfRef.__PVT__task_param)));
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
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
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
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__mp_grant_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
                                       & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                          & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
    vlSelfRef.__PVT___T_13 = ((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_4 = ((4U 
                                                 == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)) 
                                                | (5U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)));
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_9_io_bMergeTask_valid)) 
                                               & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                                  & (IData)(vlSelfRef.__PVT__state_w_replResp)))));
    vlSelfRef.__PVT__io_status_bits_needsRepl = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__state_s_merge_probeack)) 
                                                       | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_9_io_bMergeTask_valid))));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__io_nestedwbData = ((IData)(vlSelfRef.__PVT__nestedwb_match) 
                                        & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty));
    vlSelfRef.__PVT___io_tasks_mainpipe_bits_T_1_alias 
        = ((IData)(vlSelfRef.__PVT__mp_grant_valid)
            ? ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                : (IData)(vlSelfRef.__PVT__req_alias))
            : 0U);
    vlSelfRef.__VdfgRegularize_h47ff5784_2_5 = ((IData)(vlSelfRef.__PVT___T_13) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_9 = ((IData)(vlSelfRef.__PVT__mp_grant_valid) 
                                                | (IData)(vlSelfRef.__PVT__mp_release_valid));
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid) 
                                                      | (IData)(vlSelfRef.__PVT__mp_grant_valid))));
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

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9__1(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___GEN_3;
    __PVT___GEN_3 = 0;
    CData/*0:0*/ __PVT___GEN_131;
    __PVT___GEN_131 = 0;
    // Body
    vlSelfRef.__PVT___GEN_60 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_9_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotT));
    vlSelfRef.__PVT___GEN_61 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_9_io_alloc_valid)) 
                                & (IData)(vlSelfRef.__PVT__gotDirty));
    vlSelfRef.__PVT___GEN_0 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_9_io_alloc_valid) 
                               | (IData)(vlSelfRef.__PVT__req_valid));
    vlSelfRef.__PVT___GEN_12 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_9_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_merge_probeack));
    vlSelfRef.__PVT___GEN_142 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_9_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__gotGrantData)));
    vlSelfRef.__PVT___GEN_128 = ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)) 
                                 | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_9_io_alloc_valid)) 
                                    & (IData)(vlSelfRef.__PVT__probeDirty)));
    vlSelfRef.__PVT___GEN_129 = ((1U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param)) 
                                 | (((2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param)) 
                                     | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_param))) 
                                    | ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_9_io_alloc_valid)) 
                                       & (IData)(vlSelfRef.__PVT__probeGotN))));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_9_io_alloc_valid) {
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
    vlSelfRef.__PVT___GEN_102 = (((~ (IData)(vlSelfRef.__PVT__state_s_acquire)) 
                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__source_a_arb__DOT__chosenOH) 
                                      >> 9U) & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__io_out_a_q_io_enq_ready))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_9_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire)
                                     : (IData)(vlSelfRef.__PVT__state_s_acquire)));
    vlSelfRef.__PVT___GEN_151 = (((IData)(vlSelfRef.__PVT__req_valid) 
                                  & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__buffer_1__DOT__bundleOut_0_e_q_io_deq_valid) 
                                     & (9U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_e_bits_sink)))) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_9_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_grantack)
                                     : (IData)(vlSelfRef.__PVT__state_w_grantack)));
    __PVT___GEN_3 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_9_io_alloc_valid) 
                     | (IData)(vlSelfRef.__PVT__state_w_releaseack));
    vlSelfRef.__PVT___GEN_15 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_9_io_alloc_valid) 
                                | (IData)(vlSelfRef.__PVT__state_s_release));
    vlSelfRef.__PVT___T_1 = (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__sourceB_io_task_ready) 
                              & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__source_b_arb__DOT__chosenOH) 
                                 >> 9U)) & (IData)(vlSelfRef.__PVT__io_tasks_source_b_valid));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_11 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_retry)) 
                                                 & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_9_io_replResp_valid));
    vlSelfRef.__PVT___GEN_150 = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_9_io_resps_sink_d_valid)
                                  ? ((6U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                     | (IData)(__PVT___GEN_3))
                                  : (IData)(__PVT___GEN_3));
    if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_9_io_resps_sink_c_valid) {
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
    vlSelfRef.__PVT___GEN_103 = (1U & ((IData)(vlSelfRef.__PVT___T_1) 
                                       | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_9_io_alloc_valid)
                                           ? (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_channel) 
                                                 >> 1U))
                                           : (IData)(vlSelfRef.__PVT__state_s_pprobe))));
    vlSelfRef.__PVT___GEN_104 = ((IData)(vlSelfRef.__PVT___T_1) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_9_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe)
                                     : (IData)(vlSelfRef.__PVT__state_s_rprobe)));
    vlSelfRef.__PVT___GEN_161 = ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11) 
                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_9_io_alloc_valid)
                                     ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp)
                                     : (IData)(vlSelfRef.__PVT__state_w_replResp)));
    vlSelfRef.__PVT___GEN_186 = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h47ff5784_2_11)
                                     ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_dirty)
                                     : ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_9_io_alloc_valid)
                                         ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_resp_meta_dirty)
                                         : (IData)(vlSelfRef.__PVT__dirResult_meta_dirty))));
    if (vlSelfRef.__VdfgRegularize_h47ff5784_2_11) {
        if ((0U != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_state))) {
            vlSelfRef.__PVT___GEN_173 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(__PVT___GEN_131));
            vlSelfRef.__PVT___GEN_171 = ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_meta_clients)) 
                                         & (IData)(vlSelfRef.__PVT___GEN_104));
        } else {
            vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
            vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
        }
    } else {
        vlSelfRef.__PVT___GEN_173 = __PVT___GEN_131;
        vlSelfRef.__PVT___GEN_171 = vlSelfRef.__PVT___GEN_104;
    }
}

VL_ATTR_COLD void VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10__0(VTestTop_L2L3L2_MSHR* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTestTop_L2L3L2_MSHR___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mp_release_dirty = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
                                          & (0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state))) 
                                         | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_opcode_T_2 
        = (((IData)(vlSelfRef.__PVT__dirResult_meta_dirty) 
            & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
               >> 1U)) | (IData)(vlSelfRef.__PVT__probeDirty));
    vlSelfRef.__PVT___mp_probeack_task_mp_probeack_param_T_2 
        = ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                  << 1U)) | (3U & (IData)(vlSelfRef.__PVT__req_param)));
    vlSelfRef.__PVT___mp_merge_probeack_param_T_2 = 
        ((4U & ((IData)(vlSelfRef.__PVT__dirResult_meta_state) 
                << 1U)) | (3U & (IData)(vlSelfRef.__PVT__task_param)));
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
    vlSelfRef.__PVT__nestedwb_match = (((IData)(vlSelfRef.__PVT__req_valid) 
                                        & ((0U != (IData)(vlSelfRef.__PVT__dirResult_meta_state)) 
                                           & ((IData)(vlSelfRef.__PVT__dirResult_set) 
                                              == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set)))) 
                                       & (((IData)(vlSelfRef.__PVT__dirResult_tag) 
                                           == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tag)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_replResp)));
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
    vlSelfRef.__PVT__mp_probeack_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_probeack)) 
                                          & (IData)(vlSelfRef.__PVT__state_w_pprobeacklast));
    vlSelfRef.__PVT__mp_grant_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_refill)) 
                                       & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                          & (IData)(vlSelfRef.__PVT__state_w_rprobeacklast)));
    vlSelfRef.__PVT__io_tasks_source_b_valid = (1U 
                                                & ((~ (IData)(vlSelfRef.__PVT__state_s_pprobe)) 
                                                   | (~ (IData)(vlSelfRef.__PVT__state_s_rprobe))));
    vlSelfRef.__PVT___T_13 = ((4U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                              | (5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_4 = ((4U 
                                                 == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)) 
                                                | (5U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_opcode)));
    vlSelfRef.__PVT__mp_release_valid = ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                         & ((IData)(vlSelfRef.__PVT__state_w_rprobeacklast) 
                                            & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_10_io_bMergeTask_valid)) 
                                               & ((IData)(vlSelfRef.__PVT__state_w_grantlast) 
                                                  & (IData)(vlSelfRef.__PVT__state_w_replResp)))));
    vlSelfRef.__PVT__io_status_bits_needsRepl = (1U 
                                                 & ((~ (IData)(vlSelfRef.__PVT__state_s_release)) 
                                                    | ((~ (IData)(vlSelfRef.__PVT__state_s_merge_probeack)) 
                                                       | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT__mshrs_10_io_bMergeTask_valid))));
    vlSelfRef.__PVT___req_promoteT_T = ((IData)(vlSelfRef.__PVT__req_acquire) 
                                        | (4U == (IData)(vlSelfRef.__PVT__req_opcode)));
    vlSelfRef.__PVT__io_nestedwbData = ((IData)(vlSelfRef.__PVT__nestedwb_match) 
                                        & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_nestedwb_c_set_dirty));
    vlSelfRef.__PVT___io_tasks_mainpipe_bits_T_1_alias 
        = ((IData)(vlSelfRef.__PVT__mp_grant_valid)
            ? ((IData)(vlSelfRef.__PVT___mp_grant_task_mp_grant_param_T)
                ? (IData)(vlSelfRef.__PVT__dirResult_meta_alias)
                : (IData)(vlSelfRef.__PVT__req_alias))
            : 0U);
    vlSelfRef.__VdfgRegularize_h47ff5784_2_5 = ((IData)(vlSelfRef.__PVT___T_13) 
                                                | (0U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__VdfgRegularize_h47ff5784_2_9 = ((IData)(vlSelfRef.__PVT__mp_grant_valid) 
                                                | (IData)(vlSelfRef.__PVT__mp_release_valid));
    vlSelfRef.__PVT__io_tasks_mainpipe_valid = ((IData)(vlSelfRef.__PVT__mp_release_valid) 
                                                | ((IData)(vlSelfRef.__PVT__mp_probeack_valid) 
                                                   | ((IData)(vlSelfRef.__PVT__mp_merge_probeack_valid) 
                                                      | (IData)(vlSelfRef.__PVT__mp_grant_valid))));
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
