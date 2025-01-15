// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVerifyTop.h for the primary calling header

#include "VVerifyTop__pch.h"
#include "VVerifyTop__Syms.h"
#include "VVerifyTop___024root.h"

VL_INLINE_OPT void VVerifyTop___024root___nba_sequent__TOP__10(VVerifyTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVerifyTop___024root___nba_sequent__TOP__10\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_3;
    VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_3 = 0;
    CData/*0:0*/ VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_9;
    VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_9 = 0;
    CData/*0:0*/ VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_15;
    VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_15 = 0;
    CData/*0:0*/ VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_21;
    VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_21 = 0;
    CData/*0:0*/ VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_3;
    VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_3 = 0;
    CData/*0:0*/ VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_9;
    VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_9 = 0;
    CData/*0:0*/ VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_15;
    VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_15 = 0;
    CData/*0:0*/ VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_21;
    VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_21 = 0;
    // Body
    vlSelfRef.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_1 
        = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_valid) 
           & (0U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_bits)));
    vlSelfRef.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_7 
        = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_valid) 
           & (1U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_bits)));
    vlSelfRef.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_13 
        = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_valid) 
           & (2U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_bits)));
    vlSelfRef.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_19 
        = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_valid) 
           & (3U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_bits)));
    vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_1 
        = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_valid) 
           & (0U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_bits)));
    vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_7 
        = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_valid) 
           & (1U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_bits)));
    vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_13 
        = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_valid) 
           & (2U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_bits)));
    vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_19 
        = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_valid) 
           & (3U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl.io_nestedwbDataId_bits)));
    vlSelfRef.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_b_q__DOT__do_deq 
        = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_b_q_io_deq_valid) 
           & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb.io_sinkB_ready) 
              & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB__DOT____VdfgRegularize_h0f467fdb_0_0)));
    vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_b_q__DOT__do_deq 
        = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_b_q_io_deq_valid) 
           & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb.io_sinkB_ready) 
              & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB__DOT____VdfgRegularize_h0f467fdb_0_0)));
    vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb__DOT___pendingMask_T_2 
        = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb.io_mshrTask_ready) 
           & (0U != (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb__DOT__valids)));
    vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb_io_in_0_ready 
        = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb__DOT__chosenOH) 
           & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb.io_mshrTask_ready));
    vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb_io_in_1_ready 
        = (((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb__DOT__chosenOH) 
            >> 1U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb.io_mshrTask_ready));
    vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb_io_in_2_ready 
        = (((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb__DOT__chosenOH) 
            >> 2U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb.io_mshrTask_ready));
    vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb_io_in_3_ready 
        = (((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb__DOT__chosenOH) 
            >> 3U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb.io_mshrTask_ready));
    vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkB_io_b_q__DOT__do_deq 
        = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkB_io_b_q_io_deq_valid) 
           & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb.io_sinkB_ready) 
              & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkB__DOT____VdfgRegularize_h78c30ab3_0_0)));
    vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb__DOT___pendingMask_T_2 
        = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.io_mshrTask_ready) 
           & (0U != (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb__DOT__valids)));
    vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb_io_in_0_ready 
        = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb__DOT__chosenOH) 
           & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.io_mshrTask_ready));
    vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb_io_in_1_ready 
        = (((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb__DOT__chosenOH) 
            >> 1U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.io_mshrTask_ready));
    vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb_io_in_2_ready 
        = (((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb__DOT__chosenOH) 
            >> 2U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.io_mshrTask_ready));
    vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb_io_in_3_ready 
        = (((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb__DOT__chosenOH) 
            >> 3U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.io_mshrTask_ready));
    vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkB_io_b_q__DOT__do_deq 
        = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkB_io_b_q_io_deq_valid) 
           & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.io_sinkB_ready) 
              & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkB__DOT____VdfgRegularize_h78c30ab3_0_0)));
    vlSelfRef.VerifyTop__DOT__buffer__DOT__nodeOut_c_q__DOT__do_deq 
        = ((IData)(vlSelfRef.VerifyTop__DOT__buffer__DOT__nodeOut_c_q_io_deq_valid) 
           & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkC.io_c_ready));
    VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_3 
        = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_valid) 
           & (0U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_1)));
    VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_9 
        = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_valid) 
           & (1U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_1)));
    VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_15 
        = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_valid) 
           & (2U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_1)));
    VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_21 
        = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_valid) 
           & (3U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_1)));
    vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__probe_period_en 
        = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkC.io_resp_valid) 
           & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT____VdfgRegularize_h167dc378_0_6));
    vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0_io___05Fresps_sink_c_valid 
        = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkC.io_resp_valid) 
           & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__resp_sinkC_match_vec_0));
    vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1_io_resps_sink_c_valid 
        = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkC.io_resp_valid) 
           & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__resp_sinkC_match_vec_1));
    vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2_io_resps_sink_c_valid 
        = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkC.io_resp_valid) 
           & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__resp_sinkC_match_vec_2));
    vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3_io_resps_sink_c_valid 
        = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkC.io_resp_valid) 
           & ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3_io_status_bits_w_c_resp) 
              & ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_valid) 
                 & (((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_set) 
                     == (3U & ((IData)(vlSelfRef.VerifyTop__DOT__logger_auto_out_c_bits_address) 
                               >> 1U))) & ((3U & ((IData)(vlSelfRef.VerifyTop__DOT__logger_auto_out_c_bits_address) 
                                                  >> 3U)) 
                                           == ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__state_s_release)
                                                ? (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_tag)
                                                : (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__dirResult_tag)))))));
    vlSelfRef.VerifyTop__DOT__buffer_1__DOT__nodeOut_c_q__DOT__do_deq 
        = ((IData)(vlSelfRef.VerifyTop__DOT__buffer_1__DOT__nodeOut_c_q_io_deq_valid) 
           & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkC.io_c_ready));
    VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_3 
        = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_valid) 
           & (0U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_16)));
    VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_9 
        = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_valid) 
           & (1U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_16)));
    VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_15 
        = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_valid) 
           & (2U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_16)));
    VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_21 
        = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_valid) 
           & (3U == (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_16)));
    vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__probe_period_en 
        = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkC.io_resp_valid) 
           & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT____VdfgRegularize_hb0541c16_0_6));
    vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0_io_resps_sink_c_valid 
        = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkC.io_resp_valid) 
           & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__resp_sinkC_match_vec_0));
    vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1_io___05Fresps_sink_c_valid 
        = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkC.io_resp_valid) 
           & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__resp_sinkC_match_vec_1));
    vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2_io_resps_sink_c_valid 
        = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkC.io_resp_valid) 
           & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__resp_sinkC_match_vec_2));
    vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3_io_resps_sink_c_valid 
        = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkC.io_resp_valid) 
           & ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3_io_status_bits_w_c_resp) 
              & ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_valid) 
                 & (((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_set) 
                     == (3U & ((IData)(vlSelfRef.VerifyTop__DOT__logger_1_auto_out_c_bits_address) 
                               >> 1U))) & ((3U & ((IData)(vlSelfRef.VerifyTop__DOT__logger_1_auto_out_c_bits_address) 
                                                  >> 3U)) 
                                           == ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__state_s_release)
                                                ? (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_tag)
                                                : (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__dirResult_tag)))))));
    vlSelfRef.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__releaseBuf__DOT__w_data_data 
        = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_1)
            ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_nestedwbData_data)
            : (IData)(vlSelfRef.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__dataStorage__DOT__array_io_r_resp_data_0_data));
    vlSelfRef.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__releaseBuf__DOT____VdfgRegularize_hcc926f31_1_0 
        = vlSelfRef.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_1;
    vlSelfRef.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__releaseBuf__DOT__w_data_1_data 
        = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_7)
            ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_nestedwbData_data)
            : (IData)(vlSelfRef.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__dataStorage__DOT__array_io_r_resp_data_0_data));
    vlSelfRef.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__releaseBuf__DOT____VdfgRegularize_hcc926f31_1_1 
        = vlSelfRef.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_7;
    vlSelfRef.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__releaseBuf__DOT__w_data_2_data 
        = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_13)
            ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_nestedwbData_data)
            : (IData)(vlSelfRef.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__dataStorage__DOT__array_io_r_resp_data_0_data));
    vlSelfRef.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__releaseBuf__DOT____VdfgRegularize_hcc926f31_1_2 
        = vlSelfRef.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_13;
    vlSelfRef.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__releaseBuf__DOT__w_data_3_data 
        = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_19)
            ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_nestedwbData_data)
            : (IData)(vlSelfRef.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__dataStorage__DOT__array_io_r_resp_data_0_data));
    vlSelfRef.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__releaseBuf__DOT____VdfgRegularize_hcc926f31_1_3 
        = vlSelfRef.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_19;
    vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__releaseBuf__DOT__w_data_data 
        = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_1)
            ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_nestedwbData_data)
            : (IData)(vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__dataStorage__DOT__array_io_r_resp_data_0_data));
    vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__releaseBuf__DOT____VdfgRegularize_hcc926f31_1_0 
        = vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_1;
    vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__releaseBuf__DOT__w_data_1_data 
        = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_7)
            ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_nestedwbData_data)
            : (IData)(vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__dataStorage__DOT__array_io_r_resp_data_0_data));
    vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__releaseBuf__DOT____VdfgRegularize_hcc926f31_1_1 
        = vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_7;
    vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__releaseBuf__DOT__w_data_2_data 
        = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_13)
            ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_nestedwbData_data)
            : (IData)(vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__dataStorage__DOT__array_io_r_resp_data_0_data));
    vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__releaseBuf__DOT____VdfgRegularize_hcc926f31_1_2 
        = vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_13;
    vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__releaseBuf__DOT__w_data_3_data 
        = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_19)
            ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_nestedwbData_data)
            : (IData)(vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__dataStorage__DOT__array_io_r_resp_data_0_data));
    vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__releaseBuf__DOT____VdfgRegularize_hcc926f31_1_3 
        = vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_19;
    if (vlSelfRef.reset) {
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_33 = 0ULL;
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_33 = 0ULL;
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_33 = 0ULL;
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_33 = 0ULL;
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_33 = 0ULL;
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_33 = 0ULL;
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_33 = 0ULL;
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_33 = 0ULL;
    } else {
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_33 
            = (((~ (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0_io___05Ftasks_mainpipe_bits_aMergeTask_meta_clients)) 
                & ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__mp_release_valid) 
                   & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb_io_in_0_ready)))
                ? vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__timer
                : (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__release_ts)));
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_33 
            = (((~ (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1_io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                & ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__mp_release_valid) 
                   & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb_io_in_1_ready)))
                ? vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__timer
                : (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__release_ts)));
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_33 
            = (((~ (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2_io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                & ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__mp_release_valid) 
                   & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb_io_in_2_ready)))
                ? vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__timer
                : (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__release_ts)));
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_33 
            = (((~ (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3_io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                & ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__mp_release_valid) 
                   & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb_io_in_3_ready)))
                ? vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__timer
                : (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__release_ts)));
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_33 
            = (((~ (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0_io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                & ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__mp_release_valid) 
                   & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb_io_in_0_ready)))
                ? vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__timer
                : (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__release_ts)));
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_33 
            = (((~ (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1_io___05Ftasks_mainpipe_bits_aMergeTask_meta_clients)) 
                & ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__mp_release_valid) 
                   & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb_io_in_1_ready)))
                ? vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__timer
                : (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__release_ts)));
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_33 
            = (((~ (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2_io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                & ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__mp_release_valid) 
                   & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb_io_in_2_ready)))
                ? vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__timer
                : (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__release_ts)));
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_33 
            = (((~ (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3_io_tasks_mainpipe_bits_aMergeTask_meta_clients)) 
                & ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__mp_release_valid) 
                   & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb_io_in_3_ready)))
                ? vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__timer
                : (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__release_ts)));
    }
    vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_164 
        = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb_io_in_0_ready)
            ? ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0_io___05Ftasks_mainpipe_bits_aMergeTask_meta_clients)
                ? (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_4)
                : ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__mp_release_valid) 
                   | (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_4)))
            : (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_4));
    vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_164 
        = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb_io_in_1_ready)
            ? ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1_io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                ? (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_4)
                : ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__mp_release_valid) 
                   | (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_4)))
            : (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_4));
    vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_164 
        = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb_io_in_2_ready)
            ? ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2_io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                ? (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_4)
                : ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__mp_release_valid) 
                   | (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_4)))
            : (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_4));
    vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_164 
        = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb_io_in_3_ready)
            ? ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3_io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                ? (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_4)
                : ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__mp_release_valid) 
                   | (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_4)))
            : (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_4));
    vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_164 
        = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb_io_in_0_ready)
            ? ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0_io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                ? (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_4)
                : ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__mp_release_valid) 
                   | (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_4)))
            : (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_4));
    vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_164 
        = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb_io_in_1_ready)
            ? ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1_io___05Ftasks_mainpipe_bits_aMergeTask_meta_clients)
                ? (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_4)
                : ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__mp_release_valid) 
                   | (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_4)))
            : (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_4));
    vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_164 
        = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb_io_in_2_ready)
            ? ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2_io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                ? (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_4)
                : ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__mp_release_valid) 
                   | (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_4)))
            : (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_4));
    vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_164 
        = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshr_task_arb_io_in_3_ready)
            ? ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3_io_tasks_mainpipe_bits_aMergeTask_meta_clients)
                ? (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_4)
                : ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__mp_release_valid) 
                   | (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_4)))
            : (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_4));
    vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT__w_data_data 
        = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_1)
            ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_nestedwbData_data)
            : ((IData)(VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_3)
                ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_bits_data_data)
                : (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__dataStorage__DOT__array_io_r_resp_data_0_data)));
    vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT____VdfgRegularize_hcc926f31_1_0 
        = (((IData)(VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_3) 
            << 1U) | (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_1));
    vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT__w_data_1_data 
        = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_7)
            ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_nestedwbData_data)
            : ((IData)(VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_9)
                ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_bits_data_data)
                : (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__dataStorage__DOT__array_io_r_resp_data_0_data)));
    vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT____VdfgRegularize_hcc926f31_1_1 
        = (((IData)(VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_9) 
            << 1U) | (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_7));
    vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT__w_data_2_data 
        = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_13)
            ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_nestedwbData_data)
            : ((IData)(VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_15)
                ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_bits_data_data)
                : (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__dataStorage__DOT__array_io_r_resp_data_0_data)));
    vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT____VdfgRegularize_hcc926f31_1_2 
        = (((IData)(VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_15) 
            << 1U) | (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_13));
    vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT__w_data_3_data 
        = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_19)
            ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_nestedwbData_data)
            : ((IData)(VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_21)
                ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_bits_data_data)
                : (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__dataStorage__DOT__array_io_r_resp_data_0_data)));
    vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT____VdfgRegularize_hcc926f31_1_3 
        = (((IData)(VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_21) 
            << 1U) | (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_19));
    if (vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0_io___05Fresps_sink_c_valid) {
        if (vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT____VdfgRegularize_h167dc378_0_6) {
            vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_177 
                = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__state_w_pprobeacklast) 
                   | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last));
            vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_175 
                = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__state_w_rprobeacklast) 
                   | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last));
            vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_178 
                = (1U & ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__state_w_pprobeack) 
                         | ((~ (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_off)) 
                            | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last))));
        } else {
            vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_177 
                = vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_11;
            vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_175 
                = vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_9;
            vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_178 
                = (1U & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_12));
        }
    } else {
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_177 
            = vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_11;
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_175 
            = vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_9;
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_178 
            = (1U & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_12));
    }
    if (vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1_io_resps_sink_c_valid) {
        if (vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT____VdfgRegularize_h167dc378_0_6) {
            vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_177 
                = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__state_w_pprobeacklast) 
                   | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last));
            vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_175 
                = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__state_w_rprobeacklast) 
                   | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last));
            vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_178 
                = (1U & ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__state_w_pprobeack) 
                         | ((~ (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_off)) 
                            | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last))));
        } else {
            vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_177 
                = vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_11;
            vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_175 
                = vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_9;
            vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_178 
                = (1U & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_12));
        }
    } else {
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_177 
            = vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_11;
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_175 
            = vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_9;
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_178 
            = (1U & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_12));
    }
    if (vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2_io_resps_sink_c_valid) {
        if (vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT____VdfgRegularize_h167dc378_0_6) {
            vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_177 
                = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__state_w_pprobeacklast) 
                   | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last));
            vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_175 
                = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__state_w_rprobeacklast) 
                   | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last));
            vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_178 
                = (1U & ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__state_w_pprobeack) 
                         | ((~ (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_off)) 
                            | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last))));
        } else {
            vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_177 
                = vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_11;
            vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_175 
                = vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_9;
            vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_178 
                = (1U & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_12));
        }
    } else {
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_177 
            = vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_11;
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_175 
            = vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_9;
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_178 
            = (1U & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_12));
    }
    vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__probe_period 
        = (((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0_io___05Fresps_sink_c_valid)
             ? (vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__timer 
                - (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__probe_ts)))
             : 0ULL) | (((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1_io_resps_sink_c_valid)
                          ? (vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__timer 
                             - (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__probe_ts)))
                          : 0ULL) | (((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2_io_resps_sink_c_valid)
                                       ? (vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__timer 
                                          - (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__probe_ts)))
                                       : 0ULL) | ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3_io_resps_sink_c_valid)
                                                   ? 
                                                  (vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__timer 
                                                   - (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__probe_ts)))
                                                   : 0ULL))));
    if (vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3_io_resps_sink_c_valid) {
        if (vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT____VdfgRegularize_h167dc378_0_6) {
            vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_177 
                = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__state_w_pprobeacklast) 
                   | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last));
            vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_175 
                = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__state_w_rprobeacklast) 
                   | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last));
            vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_178 
                = (1U & ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__state_w_pprobeack) 
                         | ((~ (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_off)) 
                            | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last))));
        } else {
            vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_177 
                = vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_11;
            vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_175 
                = vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_9;
            vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_178 
                = (1U & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_12));
        }
    } else {
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_177 
            = vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_11;
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_175 
            = vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_9;
        vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_178 
            = (1U & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_12));
    }
    vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT__w_data_data 
        = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_1)
            ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_nestedwbData_data)
            : ((IData)(VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_3)
                ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_bits_data_data)
                : (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__dataStorage__DOT__array_io_r_resp_data_0_data)));
    vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT____VdfgRegularize_hcc926f31_1_0 
        = (((IData)(VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_3) 
            << 1U) | (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_1));
    vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT__w_data_1_data 
        = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_7)
            ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_nestedwbData_data)
            : ((IData)(VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_9)
                ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_bits_data_data)
                : (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__dataStorage__DOT__array_io_r_resp_data_0_data)));
    vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT____VdfgRegularize_hcc926f31_1_1 
        = (((IData)(VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_9) 
            << 1U) | (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_7));
    vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT__w_data_2_data 
        = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_13)
            ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_nestedwbData_data)
            : ((IData)(VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_15)
                ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_bits_data_data)
                : (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__dataStorage__DOT__array_io_r_resp_data_0_data)));
    vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT____VdfgRegularize_hcc926f31_1_2 
        = (((IData)(VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_15) 
            << 1U) | (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_13));
    vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT__w_data_3_data 
        = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_19)
            ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_nestedwbData_data)
            : ((IData)(VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_21)
                ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkC.io_releaseBufWrite_bits_data_data)
                : (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__dataStorage__DOT__array_io_r_resp_data_0_data)));
    vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT____VdfgRegularize_hcc926f31_1_3 
        = (((IData)(VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_21) 
            << 1U) | (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_19));
    if (vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0_io_resps_sink_c_valid) {
        if (vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT____VdfgRegularize_hb0541c16_0_6) {
            vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_177 
                = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__state_w_pprobeacklast) 
                   | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last));
            vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_175 
                = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__state_w_rprobeacklast) 
                   | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last));
            vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_178 
                = (1U & ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__state_w_pprobeack) 
                         | ((~ (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__req_off)) 
                            | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last))));
        } else {
            vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_177 
                = vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_11;
            vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_175 
                = vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_9;
            vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_178 
                = (1U & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_12));
        }
    } else {
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_177 
            = vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_11;
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_175 
            = vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_9;
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_178 
            = (1U & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT___GEN_12));
    }
    if (vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1_io___05Fresps_sink_c_valid) {
        if (vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT____VdfgRegularize_hb0541c16_0_6) {
            vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_177 
                = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__state_w_pprobeacklast) 
                   | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last));
            vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_175 
                = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__state_w_rprobeacklast) 
                   | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last));
            vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_178 
                = (1U & ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__state_w_pprobeack) 
                         | ((~ (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__req_off)) 
                            | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last))));
        } else {
            vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_177 
                = vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_11;
            vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_175 
                = vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_9;
            vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_178 
                = (1U & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_12));
        }
    } else {
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_177 
            = vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_11;
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_175 
            = vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_9;
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_178 
            = (1U & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT___GEN_12));
    }
    if (vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2_io_resps_sink_c_valid) {
        if (vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT____VdfgRegularize_hb0541c16_0_6) {
            vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_177 
                = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__state_w_pprobeacklast) 
                   | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last));
            vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_175 
                = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__state_w_rprobeacklast) 
                   | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last));
            vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_178 
                = (1U & ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__state_w_pprobeack) 
                         | ((~ (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__req_off)) 
                            | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last))));
        } else {
            vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_177 
                = vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_11;
            vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_175 
                = vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_9;
            vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_178 
                = (1U & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_12));
        }
    } else {
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_177 
            = vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_11;
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_175 
            = vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_9;
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_178 
            = (1U & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT___GEN_12));
    }
    vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__probe_period 
        = (((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0_io_resps_sink_c_valid)
             ? (vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__timer 
                - (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT__probe_ts)))
             : 0ULL) | (((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1_io___05Fresps_sink_c_valid)
                          ? (vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__timer 
                             - (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_1__DOT__probe_ts)))
                          : 0ULL) | (((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2_io_resps_sink_c_valid)
                                       ? (vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__timer 
                                          - (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_2__DOT__probe_ts)))
                                       : 0ULL) | ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3_io_resps_sink_c_valid)
                                                   ? 
                                                  (vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__timer 
                                                   - (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__probe_ts)))
                                                   : 0ULL))));
    if (vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3_io_resps_sink_c_valid) {
        if (vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_0__DOT____VdfgRegularize_hb0541c16_0_6) {
            vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_177 
                = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__state_w_pprobeacklast) 
                   | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last));
            vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_175 
                = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__state_w_rprobeacklast) 
                   | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last));
            vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_178 
                = (1U & ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__state_w_pprobeack) 
                         | ((~ (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT__req_off)) 
                            | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkC.io_resp_respInfo_last))));
        } else {
            vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_177 
                = vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_11;
            vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_175 
                = vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_9;
            vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_178 
                = (1U & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_12));
        }
    } else {
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_177 
            = vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_11;
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_175 
            = vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_9;
        vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_178 
            = (1U & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mshrCtl__DOT__mshrs_3__DOT___GEN_12));
    }
    vlSelfRef.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__releaseBuf__DOT__wens 
        = (((IData)(vlSelfRef.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_5) 
            << 2U) | (IData)(vlSelfRef.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__releaseBuf__DOT____VdfgRegularize_hcc926f31_1_0));
    vlSelfRef.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__releaseBuf__DOT__wens_1 
        = (((IData)(vlSelfRef.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_11) 
            << 2U) | (IData)(vlSelfRef.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__releaseBuf__DOT____VdfgRegularize_hcc926f31_1_1));
    vlSelfRef.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__releaseBuf__DOT__wens_2 
        = (((IData)(vlSelfRef.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_17) 
            << 2U) | (IData)(vlSelfRef.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__releaseBuf__DOT____VdfgRegularize_hcc926f31_1_2));
    vlSelfRef.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__releaseBuf__DOT__wens_3 
        = (((IData)(vlSelfRef.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_23) 
            << 2U) | (IData)(vlSelfRef.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__releaseBuf__DOT____VdfgRegularize_hcc926f31_1_3));
    vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__releaseBuf__DOT__wens 
        = (((IData)(vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_5) 
            << 2U) | (IData)(vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__releaseBuf__DOT____VdfgRegularize_hcc926f31_1_0));
    vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__releaseBuf__DOT__wens_1 
        = (((IData)(vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_11) 
            << 2U) | (IData)(vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__releaseBuf__DOT____VdfgRegularize_hcc926f31_1_1));
    vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__releaseBuf__DOT__wens_2 
        = (((IData)(vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_17) 
            << 2U) | (IData)(vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__releaseBuf__DOT____VdfgRegularize_hcc926f31_1_2));
    vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__releaseBuf__DOT__wens_3 
        = (((IData)(vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_23) 
            << 2U) | (IData)(vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__releaseBuf__DOT____VdfgRegularize_hcc926f31_1_3));
    vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT__wens 
        = (((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_5) 
            << 2U) | (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT____VdfgRegularize_hcc926f31_1_0));
    vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT__wens_1 
        = (((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_11) 
            << 2U) | (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT____VdfgRegularize_hcc926f31_1_1));
    vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT__wens_2 
        = (((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_17) 
            << 2U) | (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT____VdfgRegularize_hcc926f31_1_2));
    vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT__wens_3 
        = (((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_23) 
            << 2U) | (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__releaseBuf__DOT____VdfgRegularize_hcc926f31_1_3));
    vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT__wens 
        = (((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_5) 
            << 2U) | (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT____VdfgRegularize_hcc926f31_1_0));
    vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT__wens_1 
        = (((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_11) 
            << 2U) | (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT____VdfgRegularize_hcc926f31_1_1));
    vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT__wens_2 
        = (((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_17) 
            << 2U) | (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT____VdfgRegularize_hcc926f31_1_2));
    vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT__wens_3 
        = (((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT___wens_T_23) 
            << 2U) | (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__releaseBuf__DOT____VdfgRegularize_hcc926f31_1_3));
}

VL_INLINE_OPT void VVerifyTop___024root___nba_sequent__TOP__12(VVerifyTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVerifyTop___024root___nba_sequent__TOP__12\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkA__DOT__next_counter 
        = (vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkA__DOT__counter 
           + (QData)((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_in_ready)));
    vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkA__DOT__next_counter_5 
        = (vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkA__DOT__counter_5 
           + (QData)((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_in_ready)));
    vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkA__DOT__next_counter_7 
        = (vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkA__DOT__counter_7 
           + (QData)((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_in_ready)));
    vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkA__DOT__next_counter_8 
        = (vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkA__DOT__counter_8 
           + (QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_in_ready))))));
    vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkA__DOT__next_counter_12 
        = (vlSelfRef.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkA__DOT__counter_12 
           + (QData)((IData)((1U & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_in_ready))))));
    vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__directory__DOT__tagArray_io_r_req_valid 
        = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__directory_io_read_ready) 
           & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb.__PVT__ds_mcp2_stall)) 
              & (((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb.__PVT__mshr_task_s1_valid)) 
                  & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb.__PVT__chnl_task_s1_valid)) 
                 | ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_toReqArb_blockG_s1)) 
                    & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb.io_dirRead_s1_bits_refill)))));
    vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__directory__DOT__tagArray_io_r_req_valid 
        = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__directory_io_read_ready) 
           & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.__PVT__ds_mcp2_stall)) 
              & (((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.__PVT__mshr_task_s1_valid)) 
                  & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.__PVT__chnl_task_s1_valid)) 
                 | ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_toReqArb_blockG_s1)) 
                    & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.io_dirRead_s1_bits_refill)))));
    vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__directory__DOT__next_counter 
        = (vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__directory__DOT__counter 
           + (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__directory__DOT__tagArray_io_r_req_valid)));
    vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__directory__DOT__next_counter 
        = (vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__directory__DOT__counter 
           + (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__directory__DOT__tagArray_io_r_req_valid)));
}

VL_INLINE_OPT void VVerifyTop___024root___nba_sequent__TOP__13(VVerifyTop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VVerifyTop___024root___nba_sequent__TOP__13\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA__DOT__stall 
        = ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__a_reqBuf.io_in_ready)) 
           & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_valid));
    vlSelfRef.VerifyTop__DOT__buffer__DOT__nodeOut_a_q__DOT__do_deq 
        = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA_io_task_valid) 
           & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__a_reqBuf.io_in_ready));
    vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA__DOT__stall 
        = ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__a_reqBuf.io_in_ready)) 
           & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_valid));
    vlSelfRef.VerifyTop__DOT__buffer_1__DOT__nodeOut_a_q__DOT__do_deq 
        = ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA_io_task_valid) 
           & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__a_reqBuf.io_in_ready));
    vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA__DOT__next_counter_5 
        = (vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA__DOT__counter_5 
           + (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA__DOT__stall)));
    vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA__DOT__next_counter_7 
        = (vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA__DOT__counter_7 
           + (QData)((IData)(((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA__DOT__stall) 
                              & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA__DOT____VdfgRegularize_h1f2f5599_1_2)))));
    vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA__DOT__next_counter_6 
        = (vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA__DOT__counter_6 
           + (QData)((IData)(((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA__DOT__stall) 
                              & ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA__DOT____VdfgRegularize_h1f2f5599_1_0) 
                                 | (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA__DOT____VdfgRegularize_h1f2f5599_1_1))))));
    vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA__DOT__next_counter_8 
        = (vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA__DOT__counter_8 
           + (QData)((IData)(((IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA__DOT__stall) 
                              & ((0U == vlSelfRef.VerifyTop__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_opcode
                                  [vlSelfRef.VerifyTop__DOT__buffer__DOT__nodeOut_a_q__DOT__deq_ptr_value]) 
                                 | (1U == vlSelfRef.VerifyTop__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_opcode
                                    [vlSelfRef.VerifyTop__DOT__buffer__DOT__nodeOut_a_q__DOT__deq_ptr_value]))))));
    vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA__DOT__next_counter 
        = (vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA__DOT__counter 
           + (QData)((IData)(vlSelfRef.VerifyTop__DOT__buffer__DOT__nodeOut_a_q__DOT__do_deq)));
    vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA__DOT__next_counter_2 
        = (vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA__DOT__counter_2 
           + (QData)((IData)(((IData)(vlSelfRef.VerifyTop__DOT__buffer__DOT__nodeOut_a_q__DOT__do_deq) 
                              & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA__DOT____VdfgRegularize_h1f2f5599_1_0)))));
    vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA__DOT__next_counter_3 
        = (vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA__DOT__counter_3 
           + (QData)((IData)(((IData)(vlSelfRef.VerifyTop__DOT__buffer__DOT__nodeOut_a_q__DOT__do_deq) 
                              & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA__DOT____VdfgRegularize_h1f2f5599_1_1)))));
    vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA__DOT__next_counter_4 
        = (vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA__DOT__counter_4 
           + (QData)((IData)(((IData)(vlSelfRef.VerifyTop__DOT__buffer__DOT__nodeOut_a_q__DOT__do_deq) 
                              & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA__DOT____VdfgRegularize_h1f2f5599_1_2)))));
    vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA__DOT__next_counter_1 
        = (vlSelfRef.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkA__DOT__counter_1 
           + (QData)((IData)(((IData)(vlSelfRef.VerifyTop__DOT__buffer__DOT__nodeOut_a_q__DOT__do_deq) 
                              & (3U == (3U & (vlSelfRef.VerifyTop__DOT__buffer__DOT__nodeOut_a_q__DOT__ram_opcode
                                              [vlSelfRef.VerifyTop__DOT__buffer__DOT__nodeOut_a_q__DOT__deq_ptr_value] 
                                              >> 1U)))))));
    vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA__DOT__next_counter_5 
        = (vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA__DOT__counter_5 
           + (QData)((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA__DOT__stall)));
    vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA__DOT__next_counter_7 
        = (vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA__DOT__counter_7 
           + (QData)((IData)(((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA__DOT__stall) 
                              & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA__DOT____VdfgRegularize_h1f2f5599_1_2)))));
    vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA__DOT__next_counter_6 
        = (vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA__DOT__counter_6 
           + (QData)((IData)(((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA__DOT__stall) 
                              & ((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA__DOT____VdfgRegularize_h1f2f5599_1_0) 
                                 | (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA__DOT____VdfgRegularize_h1f2f5599_1_1))))));
    vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA__DOT__next_counter_8 
        = (vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA__DOT__counter_8 
           + (QData)((IData)(((IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA__DOT__stall) 
                              & ((0U == vlSelfRef.VerifyTop__DOT__buffer_1__DOT__nodeOut_a_q__DOT__ram_opcode
                                  [vlSelfRef.VerifyTop__DOT__buffer_1__DOT__nodeOut_a_q__DOT__deq_ptr_value]) 
                                 | (1U == vlSelfRef.VerifyTop__DOT__buffer_1__DOT__nodeOut_a_q__DOT__ram_opcode
                                    [vlSelfRef.VerifyTop__DOT__buffer_1__DOT__nodeOut_a_q__DOT__deq_ptr_value]))))));
    vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA__DOT__next_counter 
        = (vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA__DOT__counter 
           + (QData)((IData)(vlSelfRef.VerifyTop__DOT__buffer_1__DOT__nodeOut_a_q__DOT__do_deq)));
    vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA__DOT__next_counter_2 
        = (vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA__DOT__counter_2 
           + (QData)((IData)(((IData)(vlSelfRef.VerifyTop__DOT__buffer_1__DOT__nodeOut_a_q__DOT__do_deq) 
                              & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA__DOT____VdfgRegularize_h1f2f5599_1_0)))));
    vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA__DOT__next_counter_3 
        = (vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA__DOT__counter_3 
           + (QData)((IData)(((IData)(vlSelfRef.VerifyTop__DOT__buffer_1__DOT__nodeOut_a_q__DOT__do_deq) 
                              & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA__DOT____VdfgRegularize_h1f2f5599_1_1)))));
    vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA__DOT__next_counter_4 
        = (vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA__DOT__counter_4 
           + (QData)((IData)(((IData)(vlSelfRef.VerifyTop__DOT__buffer_1__DOT__nodeOut_a_q__DOT__do_deq) 
                              & (IData)(vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA__DOT____VdfgRegularize_h1f2f5599_1_2)))));
    vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA__DOT__next_counter_1 
        = (vlSelfRef.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkA__DOT__counter_1 
           + (QData)((IData)(((IData)(vlSelfRef.VerifyTop__DOT__buffer_1__DOT__nodeOut_a_q__DOT__do_deq) 
                              & (3U == (3U & (vlSelfRef.VerifyTop__DOT__buffer_1__DOT__nodeOut_a_q__DOT__ram_opcode
                                              [vlSelfRef.VerifyTop__DOT__buffer_1__DOT__nodeOut_a_q__DOT__deq_ptr_value] 
                                              >> 1U)))))));
}
