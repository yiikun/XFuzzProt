// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVerifyTop.h for the primary calling header

#include "VVerifyTop__pch.h"
#include "VVerifyTop_MSHR.h"
#include "VVerifyTop_MSHRCtl.h"
#include "VVerifyTop__Syms.h"

VL_ATTR_COLD void VVerifyTop_MSHRCtl___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__0(VVerifyTop_MSHRCtl* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_MSHRCtl___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __PVT__source_a_arb__DOT___rrSelOH_T;
    __PVT__source_a_arb__DOT___rrSelOH_T = 0;
    CData/*1:0*/ __PVT__sourceB__DOT__insertIdx;
    __PVT__sourceB__DOT__insertIdx = 0;
    CData/*3:0*/ __PVT__source_b_arb__DOT___rrSelOH_T;
    __PVT__source_b_arb__DOT___rrSelOH_T = 0;
    CData/*3:0*/ __PVT__mshr_task_arb__DOT___rrSelOH_T;
    __PVT__mshr_task_arb__DOT___rrSelOH_T = 0;
    // Body
    vlSelfRef.__PVT___counter_T_3 = (1ULL + vlSelfRef.__PVT__counter_2);
    vlSelfRef.__PVT___counter_T_5 = (1ULL + vlSelfRef.__PVT__counter_3);
    vlSelfRef.__PVT___counter_T_7 = (1ULL + vlSelfRef.__PVT__counter_4);
    vlSelfRef.__PVT___counter_T_9 = (1ULL + vlSelfRef.__PVT__counter_5);
    vlSelfRef.__PVT___counter_T_11 = (1ULL + vlSelfRef.__PVT__counter_6);
    vlSelfRef.__PVT___counter_T_13 = (1ULL + vlSelfRef.__PVT__counter_7);
    vlSelfRef.__PVT___counter_T_15 = (1ULL + vlSelfRef.__PVT__counter_8);
    vlSelfRef.__PVT___counter_T_17 = (1ULL + vlSelfRef.__PVT__counter_9);
    vlSelfRef.__PVT___counter_T_19 = (1ULL + vlSelfRef.__PVT__counter_10);
    vlSelfRef.__PVT___counter_T_21 = (1ULL + vlSelfRef.__PVT__counter_11);
    vlSelfRef.__PVT___counter_T_23 = (1ULL + vlSelfRef.__PVT__counter_12);
    vlSelfRef.__PVT___counter_T_25 = (1ULL + vlSelfRef.__PVT__counter_13);
    vlSelfRef.__PVT___counter_T_27 = (1ULL + vlSelfRef.__PVT__counter_14);
    vlSelfRef.__PVT___counter_T_29 = (1ULL + vlSelfRef.__PVT__counter_15);
    vlSelfRef.__PVT___counter_T_31 = (1ULL + vlSelfRef.__PVT__counter_16);
    vlSelfRef.__PVT___counter_T_33 = (1ULL + vlSelfRef.__PVT__counter_17);
    vlSelfRef.__PVT___counter_T_35 = (1ULL + vlSelfRef.__PVT__counter_18);
    vlSelfRef.__PVT___counter_T_37 = (1ULL + vlSelfRef.__PVT__counter_19);
    vlSelfRef.__PVT___counter_T_39 = (1ULL + vlSelfRef.__PVT__counter_20);
    vlSelfRef.__PVT___counter_T_41 = (1ULL + vlSelfRef.__PVT__counter_21);
    vlSelfRef.__PVT___counter_T_43 = (1ULL + vlSelfRef.__PVT__counter_22);
    vlSelfRef.__PVT___counter_T_45 = (1ULL + vlSelfRef.__PVT__counter_23);
    vlSelfRef.__PVT___counter_T_47 = (1ULL + vlSelfRef.__PVT__counter_24);
    vlSelfRef.__PVT___counter_T_49 = (1ULL + vlSelfRef.__PVT__counter_25);
    vlSelfRef.__PVT___counter_T_51 = (1ULL + vlSelfRef.__PVT__counter_26);
    vlSelfRef.__PVT___counter_T_53 = (1ULL + vlSelfRef.__PVT__counter_27);
    vlSelfRef.__PVT___counter_T_55 = (1ULL + vlSelfRef.__PVT__counter_28);
    vlSelfRef.__PVT___counter_T_57 = (1ULL + vlSelfRef.__PVT__counter_29);
    vlSelfRef.__PVT___counter_T_59 = (1ULL + vlSelfRef.__PVT__counter_30);
    vlSelfRef.__PVT___counter_T_61 = (1ULL + vlSelfRef.__PVT__counter_31);
    vlSelfRef.__PVT___counter_T_63 = (1ULL + vlSelfRef.__PVT__counter_32);
    vlSelfRef.__PVT___counter_T_65 = (1ULL + vlSelfRef.__PVT__counter_33);
    vlSelfRef.__PVT___counter_T_67 = (1ULL + vlSelfRef.__PVT__counter_34);
    vlSelfRef.__PVT___counter_T_69 = (1ULL + vlSelfRef.__PVT__counter_35);
    vlSelfRef.__PVT___counter_T_71 = (1ULL + vlSelfRef.__PVT__counter_36);
    vlSelfRef.__PVT___counter_T_73 = (1ULL + vlSelfRef.__PVT__counter_37);
    vlSelfRef.__PVT___counter_T_75 = (1ULL + vlSelfRef.__PVT__counter_38);
    vlSelfRef.__PVT___counter_T_77 = (1ULL + vlSelfRef.__PVT__counter_39);
    vlSelfRef.__PVT___counter_T_79 = (1ULL + vlSelfRef.__PVT__counter_40);
    vlSelfRef.__PVT___counter_T_81 = (1ULL + vlSelfRef.__PVT__counter_41);
    vlSelfRef.__PVT___counter_T_83 = (1ULL + vlSelfRef.__PVT__counter_42);
    vlSelfRef.__PVT___counter_T_85 = (1ULL + vlSelfRef.__PVT__counter_43);
    vlSelfRef.__PVT___counter_T_87 = (1ULL + vlSelfRef.__PVT__counter_44);
    vlSelfRef.__PVT___counter_T_89 = (1ULL + vlSelfRef.__PVT__counter_45);
    __PVT__sourceB__DOT__insertIdx = ((IData)(vlSelfRef.__PVT__sourceB__DOT__probes_0_valid)
                                       ? ((IData)(vlSelfRef.__PVT__sourceB__DOT__probes_1_valid)
                                           ? ((IData)(vlSelfRef.__PVT__sourceB__DOT__probes_2_valid)
                                               ? 3U
                                               : 2U)
                                           : 1U) : 0U);
    vlSelfRef.__PVT__sourceB__DOT___update_T_4 = (7U 
                                                  & ((3U 
                                                      & ((IData)(vlSelfRef.__PVT__sourceB__DOT__probes_0_valid) 
                                                         + (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_1_valid))) 
                                                     + 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.__PVT__sourceB__DOT__probes_2_valid) 
                                                         + (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_3_valid)))));
    vlSelfRef.__PVT__mshrs_0_io_aMergeTask_valid = 
        ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_aMergeTask_valid) 
         & (0U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_aMergeTask_bits_id)));
    vlSelfRef.__PVT__mshrs_1_io_aMergeTask_valid = 
        ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_aMergeTask_valid) 
         & (1U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_aMergeTask_bits_id)));
    vlSelfRef.__PVT__mshrs_2_io_aMergeTask_valid = 
        ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_aMergeTask_valid) 
         & (2U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_aMergeTask_bits_id)));
    vlSelfRef.__PVT__mshrs_3_io_aMergeTask_valid = 
        ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_aMergeTask_valid) 
         & (3U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf.io_aMergeTask_bits_id)));
    vlSelfRef.__PVT__mshrs_0_io_replResp_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__refillReqValid_s3) 
                                                  & (0U 
                                                     == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__req_s3_mshrId)));
    vlSelfRef.__PVT__mshrs_1_io_replResp_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__refillReqValid_s3) 
                                                  & (1U 
                                                     == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__req_s3_mshrId)));
    vlSelfRef.__PVT__mshrs_2_io_replResp_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__refillReqValid_s3) 
                                                  & (2U 
                                                     == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__req_s3_mshrId)));
    vlSelfRef.__PVT__mshrs_3_io_replResp_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__refillReqValid_s3) 
                                                  & (3U 
                                                     == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__req_s3_mshrId)));
    vlSelfRef.__PVT__sourceB_io_task_ready = (1U & 
                                              (~ ((IData)(vlSelfRef.__PVT__sourceB__DOT__probes_0_valid) 
                                                  & ((IData)(vlSelfRef.__PVT__sourceB__DOT__probes_1_valid) 
                                                     & ((IData)(vlSelfRef.__PVT__sourceB__DOT__probes_2_valid) 
                                                        & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_3_valid))))));
    __PVT__source_a_arb__DOT___rrSelOH_T = ((IData)(vlSelfRef.__PVT__source_a_arb__DOT__pendingMask) 
                                            & (IData)(vlSelfRef.__PVT__source_a_arb__DOT__rrGrantMask));
    __PVT__mshr_task_arb__DOT___rrSelOH_T = ((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__pendingMask) 
                                             & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__rrGrantMask));
    vlSelfRef.__PVT__source_a_arb__DOT__valids = ((
                                                   (8U 
                                                    & ((~ (IData)(vlSelf->__PVT__mshrs_3->__PVT__state_s_acquire)) 
                                                       << 3U)) 
                                                   | (4U 
                                                      & ((~ (IData)(vlSelf->__PVT__mshrs_2->__PVT__state_s_acquire)) 
                                                         << 2U))) 
                                                  | ((2U 
                                                      & ((~ (IData)(vlSelf->__PVT__mshrs_1->__PVT__state_s_acquire)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__state_s_acquire)))));
    __PVT__source_b_arb__DOT___rrSelOH_T = ((IData)(vlSelfRef.__PVT__source_b_arb__DOT__pendingMask) 
                                            & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__rrGrantMask));
    vlSelfRef.__PVT__mshrSelector_io_out_bits = ((1U 
                                                  & ((~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_valid)) 
                                                     | (~ (IData)(vlSelf->__PVT__mshrs_1->__PVT__req_valid))))
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__mshrs_0->__PVT__req_valid)
                                                   ? 2U
                                                   : 1U)
                                                  : 
                                                 ((IData)(vlSelf->__PVT__mshrs_2->__PVT__req_valid)
                                                   ? 8U
                                                   : 4U));
    vlSelfRef.__PVT__acquire_period_en = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_valid) 
                                          & ((4U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                             | (5U 
                                                == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode))));
    vlSelfRef.__PVT__release_period_en = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_valid) 
                                          & (6U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__PVT__mshrs_0_io_resps_sink_d_valid 
        = ((IData)(vlSelf->__PVT__mshrs_0->__PVT__req_valid) 
           & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_valid) 
              & (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_mshrId))));
    vlSelfRef.__PVT__mshrs_1_io_resps_sink_d_valid 
        = ((IData)(vlSelf->__PVT__mshrs_1->__PVT__req_valid) 
           & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_valid) 
              & (1U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_mshrId))));
    vlSelfRef.__PVT__mshrs_2_io_resps_sink_d_valid 
        = ((IData)(vlSelf->__PVT__mshrs_2->__PVT__req_valid) 
           & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_valid) 
              & (2U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_mshrId))));
    vlSelfRef.__PVT__mshrs_3_io_resps_sink_d_valid 
        = ((IData)(vlSelf->__PVT__mshrs_3->__PVT__req_valid) 
           & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_valid) 
              & (3U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillUnit_io_resp_mshrId))));
    vlSelfRef.__PVT___mshrFull_T_1 = (7U & ((3U & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_status_vec_toD_0_valid) 
                                                   + 
                                                   VL_SHIFTR_III(2,2,32, 
                                                                 (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb.__PVT__task_s2_valid) 
                                                                   << 1U) 
                                                                  | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_status_vec_toD_0_valid)), 1U))) 
                                            + ((3U 
                                                & ((IData)(vlSelf->__PVT__mshrs_3->__PVT__req_valid) 
                                                   + 
                                                   VL_SHIFTR_III(2,2,32, 
                                                                 (((IData)(vlSelf->__PVT__mshrs_2->__PVT__req_valid) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelf->__PVT__mshrs_3->__PVT__req_valid)), 1U))) 
                                               + (3U 
                                                  & ((IData)(vlSelf->__PVT__mshrs_1->__PVT__req_valid) 
                                                     + (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_valid))))));
    vlSelfRef.__PVT__sourceB__DOT___GEN_0 = ((0U == (IData)(__PVT__sourceB__DOT__insertIdx)) 
                                             | (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_0_valid));
    vlSelfRef.__PVT__sourceB__DOT___GEN_1 = ((1U == (IData)(__PVT__sourceB__DOT__insertIdx)) 
                                             | (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_1_valid));
    vlSelfRef.__PVT__sourceB__DOT___GEN_2 = ((2U == (IData)(__PVT__sourceB__DOT__insertIdx)) 
                                             | (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_2_valid));
    vlSelfRef.__PVT__sourceB__DOT___GEN_3 = ((3U == (IData)(__PVT__sourceB__DOT__insertIdx)) 
                                             | (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_3_valid));
    vlSelfRef.__PVT__sourceB__DOT__next_counter = (vlSelfRef.__PVT__sourceB__DOT__counter 
                                                   + (QData)((IData)(
                                                                     (0U 
                                                                      == (IData)(vlSelfRef.__PVT__sourceB__DOT___update_T_4)))));
    vlSelfRef.__PVT__sourceB__DOT__next_counter_1 = 
        (vlSelfRef.__PVT__sourceB__DOT__counter_1 + (QData)((IData)(
                                                                    (1U 
                                                                     == (IData)(vlSelfRef.__PVT__sourceB__DOT___update_T_4)))));
    vlSelfRef.__PVT__sourceB__DOT__next_counter_2 = 
        (vlSelfRef.__PVT__sourceB__DOT__counter_2 + (QData)((IData)(
                                                                    (2U 
                                                                     == (IData)(vlSelfRef.__PVT__sourceB__DOT___update_T_4)))));
    vlSelfRef.__PVT__sourceB__DOT__next_counter_3 = 
        (vlSelfRef.__PVT__sourceB__DOT__counter_3 + (QData)((IData)(
                                                                    (3U 
                                                                     == (IData)(vlSelfRef.__PVT__sourceB__DOT___update_T_4)))));
    vlSelfRef.__PVT__source_a_arb__DOT__rrSelOH = (
                                                   (((IData)(
                                                             (((IData)(__PVT__source_a_arb__DOT___rrSelOH_T) 
                                                               >> 3U) 
                                                              & (~ (IData)(
                                                                           (0U 
                                                                            != 
                                                                            (7U 
                                                                             & (IData)(__PVT__source_a_arb__DOT___rrSelOH_T))))))) 
                                                     << 3U) 
                                                    | (4U 
                                                       & (((~ 
                                                            ((IData)(__PVT__source_a_arb__DOT___rrSelOH_T) 
                                                             | ((IData)(__PVT__source_a_arb__DOT___rrSelOH_T) 
                                                                >> 1U))) 
                                                           << 2U) 
                                                          & (IData)(__PVT__source_a_arb__DOT___rrSelOH_T)))) 
                                                   | (((IData)(
                                                               (2U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(__PVT__source_a_arb__DOT___rrSelOH_T)))) 
                                                       << 1U) 
                                                      | (1U 
                                                         & (IData)(__PVT__source_a_arb__DOT___rrSelOH_T))));
    vlSelfRef.__PVT__mshr_task_arb__DOT__rrSelOH = 
        ((((IData)((((IData)(__PVT__mshr_task_arb__DOT___rrSelOH_T) 
                     >> 3U) & (~ (IData)((0U != (7U 
                                                 & (IData)(__PVT__mshr_task_arb__DOT___rrSelOH_T))))))) 
           << 3U) | (4U & (((~ ((IData)(__PVT__mshr_task_arb__DOT___rrSelOH_T) 
                                | ((IData)(__PVT__mshr_task_arb__DOT___rrSelOH_T) 
                                   >> 1U))) << 2U) 
                           & (IData)(__PVT__mshr_task_arb__DOT___rrSelOH_T)))) 
         | (((IData)((2U == (3U & (IData)(__PVT__mshr_task_arb__DOT___rrSelOH_T)))) 
             << 1U) | (1U & (IData)(__PVT__mshr_task_arb__DOT___rrSelOH_T))));
    vlSelfRef.__PVT__source_a_arb__DOT___pendingMask_T_2 
        = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__io_out_a_q_io_enq_ready) 
           & (0U != (IData)(vlSelfRef.__PVT__source_a_arb__DOT__valids)));
    vlSelfRef.__PVT__source_b_arb__DOT__rrSelOH = (
                                                   (((IData)(
                                                             (((IData)(__PVT__source_b_arb__DOT___rrSelOH_T) 
                                                               >> 3U) 
                                                              & (~ (IData)(
                                                                           (0U 
                                                                            != 
                                                                            (7U 
                                                                             & (IData)(__PVT__source_b_arb__DOT___rrSelOH_T))))))) 
                                                     << 3U) 
                                                    | (4U 
                                                       & (((~ 
                                                            ((IData)(__PVT__source_b_arb__DOT___rrSelOH_T) 
                                                             | ((IData)(__PVT__source_b_arb__DOT___rrSelOH_T) 
                                                                >> 1U))) 
                                                           << 2U) 
                                                          & (IData)(__PVT__source_b_arb__DOT___rrSelOH_T)))) 
                                                   | (((IData)(
                                                               (2U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(__PVT__source_b_arb__DOT___rrSelOH_T)))) 
                                                       << 1U) 
                                                      | (1U 
                                                         & (IData)(__PVT__source_b_arb__DOT___rrSelOH_T))));
    vlSelfRef.io_toMainPipe_mshr_alloc_ptr = (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & ((IData)(vlSelfRef.__PVT__mshrSelector_io_out_bits) 
                                                            >> 2U)))) 
                                               << 1U) 
                                              | (IData)(
                                                        (0U 
                                                         != 
                                                         (0xaU 
                                                          & (IData)(vlSelfRef.__PVT__mshrSelector_io_out_bits)))));
    vlSelfRef.__PVT__mshrs_0_io_alloc_valid = ((IData)(vlSelfRef.__PVT__mshrSelector_io_out_bits) 
                                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_valid));
    vlSelfRef.__PVT__mshrs_1_io_alloc_valid = (((IData)(vlSelfRef.__PVT__mshrSelector_io_out_bits) 
                                                >> 1U) 
                                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_valid));
    vlSelfRef.__PVT__mshrs_2_io_alloc_valid = (((IData)(vlSelfRef.__PVT__mshrSelector_io_out_bits) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_valid));
    vlSelfRef.__PVT__mshrs_3_io_alloc_valid = (((IData)(vlSelfRef.__PVT__mshrSelector_io_out_bits) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_valid));
    vlSelfRef.__PVT__acquire_period = (((IData)(vlSelfRef.__PVT__mshrs_0_io_resps_sink_d_valid)
                                         ? (vlSelf->__PVT__mshrs_0->__PVT__timer 
                                            - (QData)((IData)(vlSelf->__PVT__mshrs_0->__PVT__acquire_ts)))
                                         : 0ULL) | 
                                       (((IData)(vlSelfRef.__PVT__mshrs_1_io_resps_sink_d_valid)
                                          ? (vlSelf->__PVT__mshrs_1->__PVT__timer 
                                             - (QData)((IData)(vlSelf->__PVT__mshrs_1->__PVT__acquire_ts)))
                                          : 0ULL) | 
                                        (((IData)(vlSelfRef.__PVT__mshrs_2_io_resps_sink_d_valid)
                                           ? (vlSelf->__PVT__mshrs_2->__PVT__timer 
                                              - (QData)((IData)(vlSelf->__PVT__mshrs_2->__PVT__acquire_ts)))
                                           : 0ULL) 
                                         | ((IData)(vlSelfRef.__PVT__mshrs_3_io_resps_sink_d_valid)
                                             ? (vlSelf->__PVT__mshrs_3->__PVT__timer 
                                                - (QData)((IData)(vlSelf->__PVT__mshrs_3->__PVT__acquire_ts)))
                                             : 0ULL))));
    vlSelfRef.__PVT__release_period = (((IData)(vlSelfRef.__PVT__mshrs_0_io_resps_sink_d_valid)
                                         ? (vlSelf->__PVT__mshrs_0->__PVT__timer 
                                            - (QData)((IData)(vlSelf->__PVT__mshrs_0->__PVT__release_ts)))
                                         : 0ULL) | 
                                       (((IData)(vlSelfRef.__PVT__mshrs_1_io_resps_sink_d_valid)
                                          ? (vlSelf->__PVT__mshrs_1->__PVT__timer 
                                             - (QData)((IData)(vlSelf->__PVT__mshrs_1->__PVT__release_ts)))
                                          : 0ULL) | 
                                        (((IData)(vlSelfRef.__PVT__mshrs_2_io_resps_sink_d_valid)
                                           ? (vlSelf->__PVT__mshrs_2->__PVT__timer 
                                              - (QData)((IData)(vlSelf->__PVT__mshrs_2->__PVT__release_ts)))
                                           : 0ULL) 
                                         | ((IData)(vlSelfRef.__PVT__mshrs_3_io_resps_sink_d_valid)
                                             ? (vlSelf->__PVT__mshrs_3->__PVT__timer 
                                                - (QData)((IData)(vlSelf->__PVT__mshrs_3->__PVT__release_ts)))
                                             : 0ULL))));
    vlSelfRef.__PVT__next_counter = (vlSelfRef.__PVT__counter 
                                     + (QData)((IData)(
                                                       (3U 
                                                        <= (IData)(vlSelfRef.__PVT___mshrFull_T_1)))));
    vlSelfRef.__PVT__next_counter_1 = (vlSelfRef.__PVT__counter_1 
                                       + (QData)((IData)(
                                                         (4U 
                                                          <= (IData)(vlSelfRef.__PVT___mshrFull_T_1)))));
    vlSelfRef.__PVT__source_a_arb__DOT__chosenOH = 
        ((0U != ((IData)(vlSelfRef.__PVT__source_a_arb__DOT__rrSelOH) 
                 & (IData)(vlSelfRef.__PVT__source_a_arb__DOT__valids)))
          ? (IData)(vlSelfRef.__PVT__source_a_arb__DOT__rrSelOH)
          : (((8U & (((~ ((~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__state_s_acquire)) 
                          | ((~ (IData)(vlSelf->__PVT__mshrs_1->__PVT__state_s_acquire)) 
                             | (~ (IData)(vlSelf->__PVT__mshrs_2->__PVT__state_s_acquire))))) 
                      & (~ (IData)(vlSelf->__PVT__mshrs_3->__PVT__state_s_acquire))) 
                     << 3U)) | (4U & (((~ ((~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__state_s_acquire)) 
                                           | (~ (IData)(vlSelf->__PVT__mshrs_1->__PVT__state_s_acquire)))) 
                                       & (~ (IData)(vlSelf->__PVT__mshrs_2->__PVT__state_s_acquire))) 
                                      << 2U))) | ((
                                                   ((IData)(vlSelf->__PVT__mshrs_0->__PVT__state_s_acquire) 
                                                    & (~ (IData)(vlSelf->__PVT__mshrs_1->__PVT__state_s_acquire))) 
                                                   << 1U) 
                                                  | (1U 
                                                     & (~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__state_s_acquire))))));
}

VL_ATTR_COLD void VVerifyTop_MSHRCtl___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__1(VVerifyTop_MSHRCtl* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_MSHRCtl___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __PVT__source_b_arb_io_out_bits_tag;
    __PVT__source_b_arb_io_out_bits_tag = 0;
    CData/*0:0*/ __PVT__source_b_arb_io_out_bits_set;
    __PVT__source_b_arb_io_out_bits_set = 0;
    // Body
    vlSelfRef.io_nestedwbDataId_bits = (((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_nestedwbData) 
                                         | (IData)(vlSelf->__PVT__mshrs_1->__PVT__io_nestedwbData))
                                         ? (1U & (~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__io_nestedwbData)))
                                         : ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_nestedwbData)
                                             ? 2U : 3U));
    vlSelfRef.io_nestedwbDataId_valid = ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_nestedwbData) 
                                         | ((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_nestedwbData) 
                                            | ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_nestedwbData) 
                                               | ((IData)(vlSelf->__PVT__mshrs_3->__PVT__nestedwb_match) 
                                                  & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_nestedwb_c_set_dirty)))));
    vlSelfRef.__PVT__source_b_arb__DOT__valids = ((
                                                   ((IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_source_b_valid) 
                                                    << 3U) 
                                                   | ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_source_b_valid) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_source_b_valid) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_source_b_valid)));
    vlSelfRef.__PVT__mshr_task_arb__DOT__valids = (
                                                   (((IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_mainpipe_valid) 
                                                     << 3U) 
                                                    | ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_mainpipe_valid) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_mainpipe_valid) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_mainpipe_valid)));
    vlSelfRef.__PVT__source_b_arb__DOT___pendingMask_T_2 
        = ((IData)(vlSelfRef.__PVT__sourceB_io_task_ready) 
           & (0U != (IData)(vlSelfRef.__PVT__source_b_arb__DOT__valids)));
    vlSelfRef.__PVT__source_b_arb__DOT__chosenOH = 
        ((0U != ((IData)(vlSelfRef.__PVT__source_b_arb__DOT__rrSelOH) 
                 & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__valids)))
          ? (IData)(vlSelfRef.__PVT__source_b_arb__DOT__rrSelOH)
          : (((((~ ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_source_b_valid) 
                    | ((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_source_b_valid) 
                       | (IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_source_b_valid)))) 
                & (IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_source_b_valid)) 
               << 3U) | (((~ ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_source_b_valid) 
                              | (IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_source_b_valid))) 
                          & (IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_source_b_valid)) 
                         << 2U)) | ((((~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_source_b_valid)) 
                                      & (IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_source_b_valid)) 
                                     << 1U) | (IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_source_b_valid))));
    vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH = 
        ((0U != ((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__rrSelOH) 
                 & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__valids)))
          ? (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__rrSelOH)
          : (((((~ ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_mainpipe_valid) 
                    | ((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_mainpipe_valid) 
                       | (IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_mainpipe_valid)))) 
                & (IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_mainpipe_valid)) 
               << 3U) | (((~ ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_mainpipe_valid) 
                              | (IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_mainpipe_valid))) 
                          & (IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_mainpipe_valid)) 
                         << 2U)) | ((((~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_mainpipe_valid)) 
                                      & (IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_mainpipe_valid)) 
                                     << 1U) | (IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_mainpipe_valid))));
    vlSelfRef.__PVT__mshr_task_arb__DOT___pendingMask_T_2 
        = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb.io_mshrTask_ready) 
           & (0U != (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__valids)));
    __PVT__source_b_arb_io_out_bits_tag = ((((1U & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                              ? (IData)(vlSelf->__PVT__mshrs_0->__PVT__dirResult_tag)
                                              : 0U) 
                                            | ((2U 
                                                & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                ? (IData)(vlSelf->__PVT__mshrs_1->__PVT__dirResult_tag)
                                                : 0U)) 
                                           | (((4U 
                                                & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                ? (IData)(vlSelf->__PVT__mshrs_2->__PVT__dirResult_tag)
                                                : 0U) 
                                              | ((8U 
                                                  & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                  ? (IData)(vlSelf->__PVT__mshrs_3->__PVT__dirResult_tag)
                                                  : 0U)));
    __PVT__source_b_arb_io_out_bits_set = (((IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH) 
                                            & (IData)(vlSelf->__PVT__mshrs_0->__PVT__dirResult_set)) 
                                           | ((((IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH) 
                                                >> 1U) 
                                               & (IData)(vlSelf->__PVT__mshrs_1->__PVT__dirResult_set)) 
                                              | ((((IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH) 
                                                   >> 2U) 
                                                  & (IData)(vlSelf->__PVT__mshrs_2->__PVT__dirResult_set)) 
                                                 | (((IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH) 
                                                     >> 3U) 
                                                    & (IData)(vlSelf->__PVT__mshrs_3->__PVT__dirResult_set)))));
    vlSelfRef.__PVT__mshr_task_arb_io_in_0_ready = 
        ((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
         & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb.io_mshrTask_ready));
    vlSelfRef.__PVT__mshr_task_arb_io_in_1_ready = 
        (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
          >> 1U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb.io_mshrTask_ready));
    vlSelfRef.__PVT__mshr_task_arb_io_in_2_ready = 
        (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
          >> 2U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb.io_mshrTask_ready));
    vlSelfRef.__PVT__mshr_task_arb_io_in_3_ready = 
        (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
          >> 3U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb.io_mshrTask_ready));
    vlSelfRef.__PVT__sourceB__DOT__conflictMask_0 = 
        ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_0_valid) 
         & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_0_bits_set) 
             == (IData)(__PVT__source_b_arb_io_out_bits_set)) 
            & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_0_bits_tag) 
               == (IData)(__PVT__source_b_arb_io_out_bits_tag))));
    vlSelfRef.__PVT__sourceB__DOT__conflictMask_1 = 
        ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_1_valid) 
         & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_1_bits_set) 
             == (IData)(__PVT__source_b_arb_io_out_bits_set)) 
            & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_1_bits_tag) 
               == (IData)(__PVT__source_b_arb_io_out_bits_tag))));
    vlSelfRef.__PVT__sourceB__DOT__conflictMask_2 = 
        ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_2_valid) 
         & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_2_bits_set) 
             == (IData)(__PVT__source_b_arb_io_out_bits_set)) 
            & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_2_bits_tag) 
               == (IData)(__PVT__source_b_arb_io_out_bits_tag))));
    vlSelfRef.__PVT__sourceB__DOT__conflictMask_3 = 
        ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_3_valid) 
         & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_3_bits_set) 
             == (IData)(__PVT__source_b_arb_io_out_bits_set)) 
            & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_3_bits_tag) 
               == (IData)(__PVT__source_b_arb_io_out_bits_tag))));
}

VL_ATTR_COLD void VVerifyTop_MSHRCtl___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__0(VVerifyTop_MSHRCtl* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_MSHRCtl___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __PVT__source_a_arb__DOT___rrSelOH_T;
    __PVT__source_a_arb__DOT___rrSelOH_T = 0;
    CData/*1:0*/ __PVT__sourceB__DOT__insertIdx;
    __PVT__sourceB__DOT__insertIdx = 0;
    CData/*3:0*/ __PVT__source_b_arb__DOT___rrSelOH_T;
    __PVT__source_b_arb__DOT___rrSelOH_T = 0;
    CData/*3:0*/ __PVT__mshr_task_arb__DOT___rrSelOH_T;
    __PVT__mshr_task_arb__DOT___rrSelOH_T = 0;
    // Body
    vlSelfRef.__PVT___counter_T_3 = (1ULL + vlSelfRef.__PVT__counter_2);
    vlSelfRef.__PVT___counter_T_5 = (1ULL + vlSelfRef.__PVT__counter_3);
    vlSelfRef.__PVT___counter_T_7 = (1ULL + vlSelfRef.__PVT__counter_4);
    vlSelfRef.__PVT___counter_T_9 = (1ULL + vlSelfRef.__PVT__counter_5);
    vlSelfRef.__PVT___counter_T_11 = (1ULL + vlSelfRef.__PVT__counter_6);
    vlSelfRef.__PVT___counter_T_13 = (1ULL + vlSelfRef.__PVT__counter_7);
    vlSelfRef.__PVT___counter_T_15 = (1ULL + vlSelfRef.__PVT__counter_8);
    vlSelfRef.__PVT___counter_T_17 = (1ULL + vlSelfRef.__PVT__counter_9);
    vlSelfRef.__PVT___counter_T_19 = (1ULL + vlSelfRef.__PVT__counter_10);
    vlSelfRef.__PVT___counter_T_21 = (1ULL + vlSelfRef.__PVT__counter_11);
    vlSelfRef.__PVT___counter_T_23 = (1ULL + vlSelfRef.__PVT__counter_12);
    vlSelfRef.__PVT___counter_T_25 = (1ULL + vlSelfRef.__PVT__counter_13);
    vlSelfRef.__PVT___counter_T_27 = (1ULL + vlSelfRef.__PVT__counter_14);
    vlSelfRef.__PVT___counter_T_29 = (1ULL + vlSelfRef.__PVT__counter_15);
    vlSelfRef.__PVT___counter_T_31 = (1ULL + vlSelfRef.__PVT__counter_16);
    vlSelfRef.__PVT___counter_T_33 = (1ULL + vlSelfRef.__PVT__counter_17);
    vlSelfRef.__PVT___counter_T_35 = (1ULL + vlSelfRef.__PVT__counter_18);
    vlSelfRef.__PVT___counter_T_37 = (1ULL + vlSelfRef.__PVT__counter_19);
    vlSelfRef.__PVT___counter_T_39 = (1ULL + vlSelfRef.__PVT__counter_20);
    vlSelfRef.__PVT___counter_T_41 = (1ULL + vlSelfRef.__PVT__counter_21);
    vlSelfRef.__PVT___counter_T_43 = (1ULL + vlSelfRef.__PVT__counter_22);
    vlSelfRef.__PVT___counter_T_45 = (1ULL + vlSelfRef.__PVT__counter_23);
    vlSelfRef.__PVT___counter_T_47 = (1ULL + vlSelfRef.__PVT__counter_24);
    vlSelfRef.__PVT___counter_T_49 = (1ULL + vlSelfRef.__PVT__counter_25);
    vlSelfRef.__PVT___counter_T_51 = (1ULL + vlSelfRef.__PVT__counter_26);
    vlSelfRef.__PVT___counter_T_53 = (1ULL + vlSelfRef.__PVT__counter_27);
    vlSelfRef.__PVT___counter_T_55 = (1ULL + vlSelfRef.__PVT__counter_28);
    vlSelfRef.__PVT___counter_T_57 = (1ULL + vlSelfRef.__PVT__counter_29);
    vlSelfRef.__PVT___counter_T_59 = (1ULL + vlSelfRef.__PVT__counter_30);
    vlSelfRef.__PVT___counter_T_61 = (1ULL + vlSelfRef.__PVT__counter_31);
    vlSelfRef.__PVT___counter_T_63 = (1ULL + vlSelfRef.__PVT__counter_32);
    vlSelfRef.__PVT___counter_T_65 = (1ULL + vlSelfRef.__PVT__counter_33);
    vlSelfRef.__PVT___counter_T_67 = (1ULL + vlSelfRef.__PVT__counter_34);
    vlSelfRef.__PVT___counter_T_69 = (1ULL + vlSelfRef.__PVT__counter_35);
    vlSelfRef.__PVT___counter_T_71 = (1ULL + vlSelfRef.__PVT__counter_36);
    vlSelfRef.__PVT___counter_T_73 = (1ULL + vlSelfRef.__PVT__counter_37);
    vlSelfRef.__PVT___counter_T_75 = (1ULL + vlSelfRef.__PVT__counter_38);
    vlSelfRef.__PVT___counter_T_77 = (1ULL + vlSelfRef.__PVT__counter_39);
    vlSelfRef.__PVT___counter_T_79 = (1ULL + vlSelfRef.__PVT__counter_40);
    vlSelfRef.__PVT___counter_T_81 = (1ULL + vlSelfRef.__PVT__counter_41);
    vlSelfRef.__PVT___counter_T_83 = (1ULL + vlSelfRef.__PVT__counter_42);
    vlSelfRef.__PVT___counter_T_85 = (1ULL + vlSelfRef.__PVT__counter_43);
    vlSelfRef.__PVT___counter_T_87 = (1ULL + vlSelfRef.__PVT__counter_44);
    vlSelfRef.__PVT___counter_T_89 = (1ULL + vlSelfRef.__PVT__counter_45);
    __PVT__sourceB__DOT__insertIdx = ((IData)(vlSelfRef.__PVT__sourceB__DOT__probes_0_valid)
                                       ? ((IData)(vlSelfRef.__PVT__sourceB__DOT__probes_1_valid)
                                           ? ((IData)(vlSelfRef.__PVT__sourceB__DOT__probes_2_valid)
                                               ? 3U
                                               : 2U)
                                           : 1U) : 0U);
    vlSelfRef.__PVT__sourceB__DOT___update_T_4 = (7U 
                                                  & ((3U 
                                                      & ((IData)(vlSelfRef.__PVT__sourceB__DOT__probes_0_valid) 
                                                         + (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_1_valid))) 
                                                     + 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.__PVT__sourceB__DOT__probes_2_valid) 
                                                         + (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_3_valid)))));
    vlSelfRef.__PVT__mshrs_0_io_aMergeTask_valid = 
        ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_aMergeTask_valid) 
         & (0U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_aMergeTask_bits_id)));
    vlSelfRef.__PVT__mshrs_1_io_aMergeTask_valid = 
        ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_aMergeTask_valid) 
         & (1U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_aMergeTask_bits_id)));
    vlSelfRef.__PVT__mshrs_2_io_aMergeTask_valid = 
        ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_aMergeTask_valid) 
         & (2U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_aMergeTask_bits_id)));
    vlSelfRef.__PVT__mshrs_3_io_aMergeTask_valid = 
        ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_aMergeTask_valid) 
         & (3U == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf.io_aMergeTask_bits_id)));
    vlSelfRef.__PVT__mshrs_0_io_replResp_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__refillReqValid_s3) 
                                                  & (0U 
                                                     == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__req_s3_mshrId)));
    vlSelfRef.__PVT__mshrs_1_io_replResp_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__refillReqValid_s3) 
                                                  & (1U 
                                                     == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__req_s3_mshrId)));
    vlSelfRef.__PVT__mshrs_2_io_replResp_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__refillReqValid_s3) 
                                                  & (2U 
                                                     == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__req_s3_mshrId)));
    vlSelfRef.__PVT__mshrs_3_io_replResp_valid = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__refillReqValid_s3) 
                                                  & (3U 
                                                     == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__req_s3_mshrId)));
    vlSelfRef.__PVT__sourceB_io_task_ready = (1U & 
                                              (~ ((IData)(vlSelfRef.__PVT__sourceB__DOT__probes_0_valid) 
                                                  & ((IData)(vlSelfRef.__PVT__sourceB__DOT__probes_1_valid) 
                                                     & ((IData)(vlSelfRef.__PVT__sourceB__DOT__probes_2_valid) 
                                                        & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_3_valid))))));
    __PVT__source_a_arb__DOT___rrSelOH_T = ((IData)(vlSelfRef.__PVT__source_a_arb__DOT__pendingMask) 
                                            & (IData)(vlSelfRef.__PVT__source_a_arb__DOT__rrGrantMask));
    __PVT__mshr_task_arb__DOT___rrSelOH_T = ((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__pendingMask) 
                                             & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__rrGrantMask));
    vlSelfRef.__PVT__source_a_arb__DOT__valids = ((
                                                   (8U 
                                                    & ((~ (IData)(vlSelf->__PVT__mshrs_3->__PVT__state_s_acquire)) 
                                                       << 3U)) 
                                                   | (4U 
                                                      & ((~ (IData)(vlSelf->__PVT__mshrs_2->__PVT__state_s_acquire)) 
                                                         << 2U))) 
                                                  | ((2U 
                                                      & ((~ (IData)(vlSelf->__PVT__mshrs_1->__PVT__state_s_acquire)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__state_s_acquire)))));
    __PVT__source_b_arb__DOT___rrSelOH_T = ((IData)(vlSelfRef.__PVT__source_b_arb__DOT__pendingMask) 
                                            & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__rrGrantMask));
    vlSelfRef.__PVT__mshrSelector_io_out_bits = ((1U 
                                                  & ((~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_valid)) 
                                                     | (~ (IData)(vlSelf->__PVT__mshrs_1->__PVT__req_valid))))
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__mshrs_0->__PVT__req_valid)
                                                   ? 2U
                                                   : 1U)
                                                  : 
                                                 ((IData)(vlSelf->__PVT__mshrs_2->__PVT__req_valid)
                                                   ? 8U
                                                   : 4U));
    vlSelfRef.__PVT__acquire_period_en = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_valid) 
                                          & ((4U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)) 
                                             | (5U 
                                                == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode))));
    vlSelfRef.__PVT__release_period_en = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_valid) 
                                          & (6U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_respInfo_opcode)));
    vlSelfRef.__PVT__mshrs_0_io_resps_sink_d_valid 
        = ((IData)(vlSelf->__PVT__mshrs_0->__PVT__req_valid) 
           & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_valid) 
              & (0U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_mshrId))));
    vlSelfRef.__PVT__mshrs_1_io_resps_sink_d_valid 
        = ((IData)(vlSelf->__PVT__mshrs_1->__PVT__req_valid) 
           & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_valid) 
              & (1U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_mshrId))));
    vlSelfRef.__PVT__mshrs_2_io_resps_sink_d_valid 
        = ((IData)(vlSelf->__PVT__mshrs_2->__PVT__req_valid) 
           & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_valid) 
              & (2U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_mshrId))));
    vlSelfRef.__PVT__mshrs_3_io_resps_sink_d_valid 
        = ((IData)(vlSelf->__PVT__mshrs_3->__PVT__req_valid) 
           & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_valid) 
              & (3U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillUnit_io_resp_mshrId))));
    vlSelfRef.__PVT___mshrFull_T_1 = (7U & ((3U & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_status_vec_toD_0_valid) 
                                                   + 
                                                   VL_SHIFTR_III(2,2,32, 
                                                                 (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb.__PVT__task_s2_valid) 
                                                                   << 1U) 
                                                                  | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_status_vec_toD_0_valid)), 1U))) 
                                            + ((3U 
                                                & ((IData)(vlSelf->__PVT__mshrs_3->__PVT__req_valid) 
                                                   + 
                                                   VL_SHIFTR_III(2,2,32, 
                                                                 (((IData)(vlSelf->__PVT__mshrs_2->__PVT__req_valid) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelf->__PVT__mshrs_3->__PVT__req_valid)), 1U))) 
                                               + (3U 
                                                  & ((IData)(vlSelf->__PVT__mshrs_1->__PVT__req_valid) 
                                                     + (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_valid))))));
    vlSelfRef.__PVT__sourceB__DOT___GEN_0 = ((0U == (IData)(__PVT__sourceB__DOT__insertIdx)) 
                                             | (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_0_valid));
    vlSelfRef.__PVT__sourceB__DOT___GEN_1 = ((1U == (IData)(__PVT__sourceB__DOT__insertIdx)) 
                                             | (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_1_valid));
    vlSelfRef.__PVT__sourceB__DOT___GEN_2 = ((2U == (IData)(__PVT__sourceB__DOT__insertIdx)) 
                                             | (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_2_valid));
    vlSelfRef.__PVT__sourceB__DOT___GEN_3 = ((3U == (IData)(__PVT__sourceB__DOT__insertIdx)) 
                                             | (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_3_valid));
    vlSelfRef.__PVT__sourceB__DOT__next_counter = (vlSelfRef.__PVT__sourceB__DOT__counter 
                                                   + (QData)((IData)(
                                                                     (0U 
                                                                      == (IData)(vlSelfRef.__PVT__sourceB__DOT___update_T_4)))));
    vlSelfRef.__PVT__sourceB__DOT__next_counter_1 = 
        (vlSelfRef.__PVT__sourceB__DOT__counter_1 + (QData)((IData)(
                                                                    (1U 
                                                                     == (IData)(vlSelfRef.__PVT__sourceB__DOT___update_T_4)))));
    vlSelfRef.__PVT__sourceB__DOT__next_counter_2 = 
        (vlSelfRef.__PVT__sourceB__DOT__counter_2 + (QData)((IData)(
                                                                    (2U 
                                                                     == (IData)(vlSelfRef.__PVT__sourceB__DOT___update_T_4)))));
    vlSelfRef.__PVT__sourceB__DOT__next_counter_3 = 
        (vlSelfRef.__PVT__sourceB__DOT__counter_3 + (QData)((IData)(
                                                                    (3U 
                                                                     == (IData)(vlSelfRef.__PVT__sourceB__DOT___update_T_4)))));
    vlSelfRef.__PVT__source_a_arb__DOT__rrSelOH = (
                                                   (((IData)(
                                                             (((IData)(__PVT__source_a_arb__DOT___rrSelOH_T) 
                                                               >> 3U) 
                                                              & (~ (IData)(
                                                                           (0U 
                                                                            != 
                                                                            (7U 
                                                                             & (IData)(__PVT__source_a_arb__DOT___rrSelOH_T))))))) 
                                                     << 3U) 
                                                    | (4U 
                                                       & (((~ 
                                                            ((IData)(__PVT__source_a_arb__DOT___rrSelOH_T) 
                                                             | ((IData)(__PVT__source_a_arb__DOT___rrSelOH_T) 
                                                                >> 1U))) 
                                                           << 2U) 
                                                          & (IData)(__PVT__source_a_arb__DOT___rrSelOH_T)))) 
                                                   | (((IData)(
                                                               (2U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(__PVT__source_a_arb__DOT___rrSelOH_T)))) 
                                                       << 1U) 
                                                      | (1U 
                                                         & (IData)(__PVT__source_a_arb__DOT___rrSelOH_T))));
    vlSelfRef.__PVT__mshr_task_arb__DOT__rrSelOH = 
        ((((IData)((((IData)(__PVT__mshr_task_arb__DOT___rrSelOH_T) 
                     >> 3U) & (~ (IData)((0U != (7U 
                                                 & (IData)(__PVT__mshr_task_arb__DOT___rrSelOH_T))))))) 
           << 3U) | (4U & (((~ ((IData)(__PVT__mshr_task_arb__DOT___rrSelOH_T) 
                                | ((IData)(__PVT__mshr_task_arb__DOT___rrSelOH_T) 
                                   >> 1U))) << 2U) 
                           & (IData)(__PVT__mshr_task_arb__DOT___rrSelOH_T)))) 
         | (((IData)((2U == (3U & (IData)(__PVT__mshr_task_arb__DOT___rrSelOH_T)))) 
             << 1U) | (1U & (IData)(__PVT__mshr_task_arb__DOT___rrSelOH_T))));
    vlSelfRef.__PVT__source_a_arb__DOT___pendingMask_T_2 
        = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__io_out_a_q_io_enq_ready) 
           & (0U != (IData)(vlSelfRef.__PVT__source_a_arb__DOT__valids)));
    vlSelfRef.__PVT__source_b_arb__DOT__rrSelOH = (
                                                   (((IData)(
                                                             (((IData)(__PVT__source_b_arb__DOT___rrSelOH_T) 
                                                               >> 3U) 
                                                              & (~ (IData)(
                                                                           (0U 
                                                                            != 
                                                                            (7U 
                                                                             & (IData)(__PVT__source_b_arb__DOT___rrSelOH_T))))))) 
                                                     << 3U) 
                                                    | (4U 
                                                       & (((~ 
                                                            ((IData)(__PVT__source_b_arb__DOT___rrSelOH_T) 
                                                             | ((IData)(__PVT__source_b_arb__DOT___rrSelOH_T) 
                                                                >> 1U))) 
                                                           << 2U) 
                                                          & (IData)(__PVT__source_b_arb__DOT___rrSelOH_T)))) 
                                                   | (((IData)(
                                                               (2U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(__PVT__source_b_arb__DOT___rrSelOH_T)))) 
                                                       << 1U) 
                                                      | (1U 
                                                         & (IData)(__PVT__source_b_arb__DOT___rrSelOH_T))));
    vlSelfRef.io_toMainPipe_mshr_alloc_ptr = (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & ((IData)(vlSelfRef.__PVT__mshrSelector_io_out_bits) 
                                                            >> 2U)))) 
                                               << 1U) 
                                              | (IData)(
                                                        (0U 
                                                         != 
                                                         (0xaU 
                                                          & (IData)(vlSelfRef.__PVT__mshrSelector_io_out_bits)))));
    vlSelfRef.__PVT__mshrs_0_io_alloc_valid = ((IData)(vlSelfRef.__PVT__mshrSelector_io_out_bits) 
                                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_valid));
    vlSelfRef.__PVT__mshrs_1_io_alloc_valid = (((IData)(vlSelfRef.__PVT__mshrSelector_io_out_bits) 
                                                >> 1U) 
                                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_valid));
    vlSelfRef.__PVT__mshrs_2_io_alloc_valid = (((IData)(vlSelfRef.__PVT__mshrSelector_io_out_bits) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_valid));
    vlSelfRef.__PVT__mshrs_3_io_alloc_valid = (((IData)(vlSelfRef.__PVT__mshrSelector_io_out_bits) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_valid));
    vlSelfRef.__PVT__acquire_period = (((IData)(vlSelfRef.__PVT__mshrs_0_io_resps_sink_d_valid)
                                         ? (vlSelf->__PVT__mshrs_0->__PVT__timer 
                                            - (QData)((IData)(vlSelf->__PVT__mshrs_0->__PVT__acquire_ts)))
                                         : 0ULL) | 
                                       (((IData)(vlSelfRef.__PVT__mshrs_1_io_resps_sink_d_valid)
                                          ? (vlSelf->__PVT__mshrs_1->__PVT__timer 
                                             - (QData)((IData)(vlSelf->__PVT__mshrs_1->__PVT__acquire_ts)))
                                          : 0ULL) | 
                                        (((IData)(vlSelfRef.__PVT__mshrs_2_io_resps_sink_d_valid)
                                           ? (vlSelf->__PVT__mshrs_2->__PVT__timer 
                                              - (QData)((IData)(vlSelf->__PVT__mshrs_2->__PVT__acquire_ts)))
                                           : 0ULL) 
                                         | ((IData)(vlSelfRef.__PVT__mshrs_3_io_resps_sink_d_valid)
                                             ? (vlSelf->__PVT__mshrs_3->__PVT__timer 
                                                - (QData)((IData)(vlSelf->__PVT__mshrs_3->__PVT__acquire_ts)))
                                             : 0ULL))));
    vlSelfRef.__PVT__release_period = (((IData)(vlSelfRef.__PVT__mshrs_0_io_resps_sink_d_valid)
                                         ? (vlSelf->__PVT__mshrs_0->__PVT__timer 
                                            - (QData)((IData)(vlSelf->__PVT__mshrs_0->__PVT__release_ts)))
                                         : 0ULL) | 
                                       (((IData)(vlSelfRef.__PVT__mshrs_1_io_resps_sink_d_valid)
                                          ? (vlSelf->__PVT__mshrs_1->__PVT__timer 
                                             - (QData)((IData)(vlSelf->__PVT__mshrs_1->__PVT__release_ts)))
                                          : 0ULL) | 
                                        (((IData)(vlSelfRef.__PVT__mshrs_2_io_resps_sink_d_valid)
                                           ? (vlSelf->__PVT__mshrs_2->__PVT__timer 
                                              - (QData)((IData)(vlSelf->__PVT__mshrs_2->__PVT__release_ts)))
                                           : 0ULL) 
                                         | ((IData)(vlSelfRef.__PVT__mshrs_3_io_resps_sink_d_valid)
                                             ? (vlSelf->__PVT__mshrs_3->__PVT__timer 
                                                - (QData)((IData)(vlSelf->__PVT__mshrs_3->__PVT__release_ts)))
                                             : 0ULL))));
    vlSelfRef.__PVT__next_counter = (vlSelfRef.__PVT__counter 
                                     + (QData)((IData)(
                                                       (3U 
                                                        <= (IData)(vlSelfRef.__PVT___mshrFull_T_1)))));
    vlSelfRef.__PVT__next_counter_1 = (vlSelfRef.__PVT__counter_1 
                                       + (QData)((IData)(
                                                         (4U 
                                                          <= (IData)(vlSelfRef.__PVT___mshrFull_T_1)))));
    vlSelfRef.__PVT__source_a_arb__DOT__chosenOH = 
        ((0U != ((IData)(vlSelfRef.__PVT__source_a_arb__DOT__rrSelOH) 
                 & (IData)(vlSelfRef.__PVT__source_a_arb__DOT__valids)))
          ? (IData)(vlSelfRef.__PVT__source_a_arb__DOT__rrSelOH)
          : (((8U & (((~ ((~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__state_s_acquire)) 
                          | ((~ (IData)(vlSelf->__PVT__mshrs_1->__PVT__state_s_acquire)) 
                             | (~ (IData)(vlSelf->__PVT__mshrs_2->__PVT__state_s_acquire))))) 
                      & (~ (IData)(vlSelf->__PVT__mshrs_3->__PVT__state_s_acquire))) 
                     << 3U)) | (4U & (((~ ((~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__state_s_acquire)) 
                                           | (~ (IData)(vlSelf->__PVT__mshrs_1->__PVT__state_s_acquire)))) 
                                       & (~ (IData)(vlSelf->__PVT__mshrs_2->__PVT__state_s_acquire))) 
                                      << 2U))) | ((
                                                   ((IData)(vlSelf->__PVT__mshrs_0->__PVT__state_s_acquire) 
                                                    & (~ (IData)(vlSelf->__PVT__mshrs_1->__PVT__state_s_acquire))) 
                                                   << 1U) 
                                                  | (1U 
                                                     & (~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__state_s_acquire))))));
}

VL_ATTR_COLD void VVerifyTop_MSHRCtl___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__1(VVerifyTop_MSHRCtl* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_MSHRCtl___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __PVT__source_b_arb_io_out_bits_tag;
    __PVT__source_b_arb_io_out_bits_tag = 0;
    CData/*0:0*/ __PVT__source_b_arb_io_out_bits_set;
    __PVT__source_b_arb_io_out_bits_set = 0;
    // Body
    vlSelfRef.io_nestedwbDataId_bits = (((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_nestedwbData) 
                                         | (IData)(vlSelf->__PVT__mshrs_1->__PVT__io_nestedwbData))
                                         ? (1U & (~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__io_nestedwbData)))
                                         : ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_nestedwbData)
                                             ? 2U : 3U));
    vlSelfRef.io_nestedwbDataId_valid = ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_nestedwbData) 
                                         | ((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_nestedwbData) 
                                            | ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_nestedwbData) 
                                               | ((IData)(vlSelf->__PVT__mshrs_3->__PVT__nestedwb_match) 
                                                  & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_nestedwb_c_set_dirty)))));
    vlSelfRef.__PVT__source_b_arb__DOT__valids = ((
                                                   ((IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_source_b_valid) 
                                                    << 3U) 
                                                   | ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_source_b_valid) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_source_b_valid) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_source_b_valid)));
    vlSelfRef.__PVT__mshr_task_arb__DOT__valids = (
                                                   (((IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_mainpipe_valid) 
                                                     << 3U) 
                                                    | ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_mainpipe_valid) 
                                                       << 2U)) 
                                                   | (((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_mainpipe_valid) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_mainpipe_valid)));
    vlSelfRef.__PVT__source_b_arb__DOT___pendingMask_T_2 
        = ((IData)(vlSelfRef.__PVT__sourceB_io_task_ready) 
           & (0U != (IData)(vlSelfRef.__PVT__source_b_arb__DOT__valids)));
    vlSelfRef.__PVT__source_b_arb__DOT__chosenOH = 
        ((0U != ((IData)(vlSelfRef.__PVT__source_b_arb__DOT__rrSelOH) 
                 & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__valids)))
          ? (IData)(vlSelfRef.__PVT__source_b_arb__DOT__rrSelOH)
          : (((((~ ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_source_b_valid) 
                    | ((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_source_b_valid) 
                       | (IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_source_b_valid)))) 
                & (IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_source_b_valid)) 
               << 3U) | (((~ ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_source_b_valid) 
                              | (IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_source_b_valid))) 
                          & (IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_source_b_valid)) 
                         << 2U)) | ((((~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_source_b_valid)) 
                                      & (IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_source_b_valid)) 
                                     << 1U) | (IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_source_b_valid))));
    vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH = 
        ((0U != ((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__rrSelOH) 
                 & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__valids)))
          ? (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__rrSelOH)
          : (((((~ ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_mainpipe_valid) 
                    | ((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_mainpipe_valid) 
                       | (IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_mainpipe_valid)))) 
                & (IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_mainpipe_valid)) 
               << 3U) | (((~ ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_mainpipe_valid) 
                              | (IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_mainpipe_valid))) 
                          & (IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_mainpipe_valid)) 
                         << 2U)) | ((((~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_mainpipe_valid)) 
                                      & (IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_mainpipe_valid)) 
                                     << 1U) | (IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_mainpipe_valid))));
    vlSelfRef.__PVT__mshr_task_arb__DOT___pendingMask_T_2 
        = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb.io_mshrTask_ready) 
           & (0U != (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__valids)));
    __PVT__source_b_arb_io_out_bits_tag = ((((1U & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                              ? (IData)(vlSelf->__PVT__mshrs_0->__PVT__dirResult_tag)
                                              : 0U) 
                                            | ((2U 
                                                & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                ? (IData)(vlSelf->__PVT__mshrs_1->__PVT__dirResult_tag)
                                                : 0U)) 
                                           | (((4U 
                                                & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                ? (IData)(vlSelf->__PVT__mshrs_2->__PVT__dirResult_tag)
                                                : 0U) 
                                              | ((8U 
                                                  & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                  ? (IData)(vlSelf->__PVT__mshrs_3->__PVT__dirResult_tag)
                                                  : 0U)));
    __PVT__source_b_arb_io_out_bits_set = (((IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH) 
                                            & (IData)(vlSelf->__PVT__mshrs_0->__PVT__dirResult_set)) 
                                           | ((((IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH) 
                                                >> 1U) 
                                               & (IData)(vlSelf->__PVT__mshrs_1->__PVT__dirResult_set)) 
                                              | ((((IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH) 
                                                   >> 2U) 
                                                  & (IData)(vlSelf->__PVT__mshrs_2->__PVT__dirResult_set)) 
                                                 | (((IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH) 
                                                     >> 3U) 
                                                    & (IData)(vlSelf->__PVT__mshrs_3->__PVT__dirResult_set)))));
    vlSelfRef.__PVT__mshr_task_arb_io_in_0_ready = 
        ((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
         & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb.io_mshrTask_ready));
    vlSelfRef.__PVT__mshr_task_arb_io_in_1_ready = 
        (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
          >> 1U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb.io_mshrTask_ready));
    vlSelfRef.__PVT__mshr_task_arb_io_in_2_ready = 
        (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
          >> 2U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb.io_mshrTask_ready));
    vlSelfRef.__PVT__mshr_task_arb_io_in_3_ready = 
        (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
          >> 3U) & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb.io_mshrTask_ready));
    vlSelfRef.__PVT__sourceB__DOT__conflictMask_0 = 
        ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_0_valid) 
         & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_0_bits_set) 
             == (IData)(__PVT__source_b_arb_io_out_bits_set)) 
            & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_0_bits_tag) 
               == (IData)(__PVT__source_b_arb_io_out_bits_tag))));
    vlSelfRef.__PVT__sourceB__DOT__conflictMask_1 = 
        ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_1_valid) 
         & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_1_bits_set) 
             == (IData)(__PVT__source_b_arb_io_out_bits_set)) 
            & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_1_bits_tag) 
               == (IData)(__PVT__source_b_arb_io_out_bits_tag))));
    vlSelfRef.__PVT__sourceB__DOT__conflictMask_2 = 
        ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_2_valid) 
         & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_2_bits_set) 
             == (IData)(__PVT__source_b_arb_io_out_bits_set)) 
            & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_2_bits_tag) 
               == (IData)(__PVT__source_b_arb_io_out_bits_tag))));
    vlSelfRef.__PVT__sourceB__DOT__conflictMask_3 = 
        ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_3_valid) 
         & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_3_bits_set) 
             == (IData)(__PVT__source_b_arb_io_out_bits_set)) 
            & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__grantBuf.__PVT__inflightGrant_3_bits_tag) 
               == (IData)(__PVT__source_b_arb_io_out_bits_tag))));
}
