// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestTop_L2L3L2.h for the primary calling header

#include "VTestTop_L2L3L2__pch.h"
#include "VTestTop_L2L3L2_MSHR.h"
#include "VTestTop_L2L3L2_MSHRCtl.h"
#include "VTestTop_L2L3L2__Syms.h"

VL_ATTR_COLD void VTestTop_L2L3L2_MSHRCtl___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__1(VTestTop_L2L3L2_MSHRCtl* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_MSHRCtl___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ io_mshrTask_bits_size;
    io_mshrTask_bits_size = 0;
    CData/*0:0*/ io_mshrTask_bits_aliasTask;
    io_mshrTask_bits_aliasTask = 0;
    CData/*3:0*/ io_mshrTask_bits_wayMask;
    io_mshrTask_bits_wayMask = 0;
    CData/*0:0*/ __VdfgRegularize_h515af8c5_2_0;
    __VdfgRegularize_h515af8c5_2_0 = 0;
    CData/*0:0*/ __VdfgRegularize_h515af8c5_2_1;
    __VdfgRegularize_h515af8c5_2_1 = 0;
    CData/*0:0*/ __VdfgRegularize_h515af8c5_2_2;
    __VdfgRegularize_h515af8c5_2_2 = 0;
    CData/*0:0*/ __VdfgRegularize_h515af8c5_2_3;
    __VdfgRegularize_h515af8c5_2_3 = 0;
    CData/*0:0*/ __VdfgRegularize_h515af8c5_50_0;
    __VdfgRegularize_h515af8c5_50_0 = 0;
    CData/*0:0*/ __VdfgRegularize_h515af8c5_50_1;
    __VdfgRegularize_h515af8c5_50_1 = 0;
    CData/*0:0*/ __VdfgRegularize_h515af8c5_50_2;
    __VdfgRegularize_h515af8c5_50_2 = 0;
    CData/*0:0*/ __VdfgRegularize_h515af8c5_50_3;
    __VdfgRegularize_h515af8c5_50_3 = 0;
    CData/*7:0*/ __PVT__sourceB__DOT__probes_waitG_hi_1;
    __PVT__sourceB__DOT__probes_waitG_hi_1 = 0;
    CData/*7:0*/ __PVT__sourceB__DOT___probes_waitG_T_2;
    __PVT__sourceB__DOT___probes_waitG_T_2 = 0;
    CData/*3:0*/ __PVT__sourceB__DOT___probes_waitG_T_4;
    __PVT__sourceB__DOT___probes_waitG_T_4 = 0;
    CData/*0:0*/ sourceB__DOT____VdfgRegularize_h16434914_2_4;
    sourceB__DOT____VdfgRegularize_h16434914_2_4 = 0;
    // Body
    vlSelfRef.__PVT__resp_sinkC_match_vec_0 = ((~ ((IData)(vlSelf->__PVT__mshrs_0->__PVT__state_w_rprobeacklast) 
                                                   & ((IData)(vlSelf->__PVT__mshrs_0->__PVT__state_w_pprobeack) 
                                                      & (IData)(vlSelf->__PVT__mshrs_0->__PVT__state_w_pprobeacklast)))) 
                                               & ((IData)(vlSelf->__PVT__mshrs_0->__PVT__req_valid) 
                                                  & (((0x7fU 
                                                       & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                          >> 1U)) 
                                                      == (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_set)) 
                                                     & ((0xffU 
                                                         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                            >> 8U)) 
                                                        == 
                                                        ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_status_bits_needsRepl)
                                                          ? (IData)(vlSelf->__PVT__mshrs_0->__PVT__dirResult_tag)
                                                          : (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_tag))))));
    vlSelfRef.__PVT__resp_sinkC_match_vec_1 = ((~ ((IData)(vlSelf->__PVT__mshrs_1->__PVT__state_w_rprobeacklast) 
                                                   & ((IData)(vlSelf->__PVT__mshrs_1->__PVT__state_w_pprobeack) 
                                                      & (IData)(vlSelf->__PVT__mshrs_1->__PVT__state_w_pprobeacklast)))) 
                                               & ((IData)(vlSelf->__PVT__mshrs_1->__PVT__req_valid) 
                                                  & (((0x7fU 
                                                       & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                          >> 1U)) 
                                                      == (IData)(vlSelf->__PVT__mshrs_1->__PVT__req_set)) 
                                                     & ((0xffU 
                                                         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                            >> 8U)) 
                                                        == 
                                                        ((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_status_bits_needsRepl)
                                                          ? (IData)(vlSelf->__PVT__mshrs_1->__PVT__dirResult_tag)
                                                          : (IData)(vlSelf->__PVT__mshrs_1->__PVT__req_tag))))));
    __VdfgRegularize_h515af8c5_50_0 = ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_nestedwbData) 
                                       | (IData)(vlSelf->__PVT__mshrs_1->__PVT__io_nestedwbData));
    vlSelfRef.__PVT__resp_sinkC_match_vec_2 = ((~ ((IData)(vlSelf->__PVT__mshrs_2->__PVT__state_w_rprobeacklast) 
                                                   & ((IData)(vlSelf->__PVT__mshrs_2->__PVT__state_w_pprobeack) 
                                                      & (IData)(vlSelf->__PVT__mshrs_2->__PVT__state_w_pprobeacklast)))) 
                                               & ((IData)(vlSelf->__PVT__mshrs_2->__PVT__req_valid) 
                                                  & (((0x7fU 
                                                       & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                          >> 1U)) 
                                                      == (IData)(vlSelf->__PVT__mshrs_2->__PVT__req_set)) 
                                                     & ((0xffU 
                                                         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                            >> 8U)) 
                                                        == 
                                                        ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_status_bits_needsRepl)
                                                          ? (IData)(vlSelf->__PVT__mshrs_2->__PVT__dirResult_tag)
                                                          : (IData)(vlSelf->__PVT__mshrs_2->__PVT__req_tag))))));
    vlSelfRef.__PVT__resp_sinkC_match_vec_3 = ((~ ((IData)(vlSelf->__PVT__mshrs_3->__PVT__state_w_rprobeacklast) 
                                                   & ((IData)(vlSelf->__PVT__mshrs_3->__PVT__state_w_pprobeack) 
                                                      & (IData)(vlSelf->__PVT__mshrs_3->__PVT__state_w_pprobeacklast)))) 
                                               & ((IData)(vlSelf->__PVT__mshrs_3->__PVT__req_valid) 
                                                  & (((0x7fU 
                                                       & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                          >> 1U)) 
                                                      == (IData)(vlSelf->__PVT__mshrs_3->__PVT__req_set)) 
                                                     & ((0xffU 
                                                         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                            >> 8U)) 
                                                        == 
                                                        ((IData)(vlSelf->__PVT__mshrs_3->__PVT__io_status_bits_needsRepl)
                                                          ? (IData)(vlSelf->__PVT__mshrs_3->__PVT__dirResult_tag)
                                                          : (IData)(vlSelf->__PVT__mshrs_3->__PVT__req_tag))))));
    vlSelfRef.__PVT__resp_sinkC_match_vec_4 = ((~ ((IData)(vlSelf->__PVT__mshrs_4->__PVT__state_w_rprobeacklast) 
                                                   & ((IData)(vlSelf->__PVT__mshrs_4->__PVT__state_w_pprobeack) 
                                                      & (IData)(vlSelf->__PVT__mshrs_4->__PVT__state_w_pprobeacklast)))) 
                                               & ((IData)(vlSelf->__PVT__mshrs_4->__PVT__req_valid) 
                                                  & (((0x7fU 
                                                       & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                          >> 1U)) 
                                                      == (IData)(vlSelf->__PVT__mshrs_4->__PVT__req_set)) 
                                                     & ((0xffU 
                                                         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                            >> 8U)) 
                                                        == 
                                                        ((IData)(vlSelf->__PVT__mshrs_4->__PVT__io_status_bits_needsRepl)
                                                          ? (IData)(vlSelf->__PVT__mshrs_4->__PVT__dirResult_tag)
                                                          : (IData)(vlSelf->__PVT__mshrs_4->__PVT__req_tag))))));
    vlSelfRef.__PVT__resp_sinkC_match_vec_5 = ((~ ((IData)(vlSelf->__PVT__mshrs_5->__PVT__state_w_rprobeacklast) 
                                                   & ((IData)(vlSelf->__PVT__mshrs_5->__PVT__state_w_pprobeack) 
                                                      & (IData)(vlSelf->__PVT__mshrs_5->__PVT__state_w_pprobeacklast)))) 
                                               & ((IData)(vlSelf->__PVT__mshrs_5->__PVT__req_valid) 
                                                  & (((0x7fU 
                                                       & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                          >> 1U)) 
                                                      == (IData)(vlSelf->__PVT__mshrs_5->__PVT__req_set)) 
                                                     & ((0xffU 
                                                         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                            >> 8U)) 
                                                        == 
                                                        ((IData)(vlSelf->__PVT__mshrs_5->__PVT__io_status_bits_needsRepl)
                                                          ? (IData)(vlSelf->__PVT__mshrs_5->__PVT__dirResult_tag)
                                                          : (IData)(vlSelf->__PVT__mshrs_5->__PVT__req_tag))))));
    __VdfgRegularize_h515af8c5_50_1 = ((IData)(vlSelf->__PVT__mshrs_4->__PVT__io_nestedwbData) 
                                       | (IData)(vlSelf->__PVT__mshrs_5->__PVT__io_nestedwbData));
    vlSelfRef.__PVT__resp_sinkC_match_vec_6 = ((~ ((IData)(vlSelf->__PVT__mshrs_6->__PVT__state_w_rprobeacklast) 
                                                   & ((IData)(vlSelf->__PVT__mshrs_6->__PVT__state_w_pprobeack) 
                                                      & (IData)(vlSelf->__PVT__mshrs_6->__PVT__state_w_pprobeacklast)))) 
                                               & ((IData)(vlSelf->__PVT__mshrs_6->__PVT__req_valid) 
                                                  & (((0x7fU 
                                                       & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                          >> 1U)) 
                                                      == (IData)(vlSelf->__PVT__mshrs_6->__PVT__req_set)) 
                                                     & ((0xffU 
                                                         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                            >> 8U)) 
                                                        == 
                                                        ((IData)(vlSelf->__PVT__mshrs_6->__PVT__io_status_bits_needsRepl)
                                                          ? (IData)(vlSelf->__PVT__mshrs_6->__PVT__dirResult_tag)
                                                          : (IData)(vlSelf->__PVT__mshrs_6->__PVT__req_tag))))));
    vlSelfRef.__PVT__resp_sinkC_match_vec_7 = ((~ ((IData)(vlSelf->__PVT__mshrs_7->__PVT__state_w_rprobeacklast) 
                                                   & ((IData)(vlSelf->__PVT__mshrs_7->__PVT__state_w_pprobeack) 
                                                      & (IData)(vlSelf->__PVT__mshrs_7->__PVT__state_w_pprobeacklast)))) 
                                               & ((IData)(vlSelf->__PVT__mshrs_7->__PVT__req_valid) 
                                                  & (((0x7fU 
                                                       & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                          >> 1U)) 
                                                      == (IData)(vlSelf->__PVT__mshrs_7->__PVT__req_set)) 
                                                     & ((0xffU 
                                                         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                            >> 8U)) 
                                                        == 
                                                        ((IData)(vlSelf->__PVT__mshrs_7->__PVT__io_status_bits_needsRepl)
                                                          ? (IData)(vlSelf->__PVT__mshrs_7->__PVT__dirResult_tag)
                                                          : (IData)(vlSelf->__PVT__mshrs_7->__PVT__req_tag))))));
    vlSelfRef.__PVT__resp_sinkC_match_vec_8 = ((~ ((IData)(vlSelf->__PVT__mshrs_8->__PVT__state_w_rprobeacklast) 
                                                   & ((IData)(vlSelf->__PVT__mshrs_8->__PVT__state_w_pprobeack) 
                                                      & (IData)(vlSelf->__PVT__mshrs_8->__PVT__state_w_pprobeacklast)))) 
                                               & ((IData)(vlSelf->__PVT__mshrs_8->__PVT__req_valid) 
                                                  & (((0x7fU 
                                                       & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                          >> 1U)) 
                                                      == (IData)(vlSelf->__PVT__mshrs_8->__PVT__req_set)) 
                                                     & ((0xffU 
                                                         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                            >> 8U)) 
                                                        == 
                                                        ((IData)(vlSelf->__PVT__mshrs_8->__PVT__io_status_bits_needsRepl)
                                                          ? (IData)(vlSelf->__PVT__mshrs_8->__PVT__dirResult_tag)
                                                          : (IData)(vlSelf->__PVT__mshrs_8->__PVT__req_tag))))));
    vlSelfRef.__PVT__resp_sinkC_match_vec_9 = ((~ ((IData)(vlSelf->__PVT__mshrs_9->__PVT__state_w_rprobeacklast) 
                                                   & ((IData)(vlSelf->__PVT__mshrs_9->__PVT__state_w_pprobeack) 
                                                      & (IData)(vlSelf->__PVT__mshrs_9->__PVT__state_w_pprobeacklast)))) 
                                               & ((IData)(vlSelf->__PVT__mshrs_9->__PVT__req_valid) 
                                                  & (((0x7fU 
                                                       & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                          >> 1U)) 
                                                      == (IData)(vlSelf->__PVT__mshrs_9->__PVT__req_set)) 
                                                     & ((0xffU 
                                                         & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                            >> 8U)) 
                                                        == 
                                                        ((IData)(vlSelf->__PVT__mshrs_9->__PVT__io_status_bits_needsRepl)
                                                          ? (IData)(vlSelf->__PVT__mshrs_9->__PVT__dirResult_tag)
                                                          : (IData)(vlSelf->__PVT__mshrs_9->__PVT__req_tag))))));
    __VdfgRegularize_h515af8c5_50_3 = ((IData)(vlSelf->__PVT__mshrs_8->__PVT__io_nestedwbData) 
                                       | (IData)(vlSelf->__PVT__mshrs_9->__PVT__io_nestedwbData));
    vlSelfRef.__PVT__resp_sinkC_match_vec_10 = ((~ 
                                                 ((IData)(vlSelf->__PVT__mshrs_10->__PVT__state_w_rprobeacklast) 
                                                  & ((IData)(vlSelf->__PVT__mshrs_10->__PVT__state_w_pprobeack) 
                                                     & (IData)(vlSelf->__PVT__mshrs_10->__PVT__state_w_pprobeacklast)))) 
                                                & ((IData)(vlSelf->__PVT__mshrs_10->__PVT__req_valid) 
                                                   & (((0x7fU 
                                                        & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                           >> 1U)) 
                                                       == (IData)(vlSelf->__PVT__mshrs_10->__PVT__req_set)) 
                                                      & ((0xffU 
                                                          & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                             >> 8U)) 
                                                         == 
                                                         ((IData)(vlSelf->__PVT__mshrs_10->__PVT__io_status_bits_needsRepl)
                                                           ? (IData)(vlSelf->__PVT__mshrs_10->__PVT__dirResult_tag)
                                                           : (IData)(vlSelf->__PVT__mshrs_10->__PVT__req_tag))))));
    vlSelfRef.__PVT__resp_sinkC_match_vec_11 = ((~ 
                                                 ((IData)(vlSelf->__PVT__mshrs_11->__PVT__state_w_rprobeacklast) 
                                                  & ((IData)(vlSelf->__PVT__mshrs_11->__PVT__state_w_pprobeack) 
                                                     & (IData)(vlSelf->__PVT__mshrs_11->__PVT__state_w_pprobeacklast)))) 
                                                & ((IData)(vlSelf->__PVT__mshrs_11->__PVT__req_valid) 
                                                   & (((0x7fU 
                                                        & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                           >> 1U)) 
                                                       == (IData)(vlSelf->__PVT__mshrs_11->__PVT__req_set)) 
                                                      & ((0xffU 
                                                          & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                             >> 8U)) 
                                                         == 
                                                         ((IData)(vlSelf->__PVT__mshrs_11->__PVT__io_status_bits_needsRepl)
                                                           ? (IData)(vlSelf->__PVT__mshrs_11->__PVT__dirResult_tag)
                                                           : (IData)(vlSelf->__PVT__mshrs_11->__PVT__req_tag))))));
    vlSelfRef.__PVT__resp_sinkC_match_vec_12 = ((~ 
                                                 ((IData)(vlSelf->__PVT__mshrs_12->__PVT__state_w_rprobeacklast) 
                                                  & ((IData)(vlSelf->__PVT__mshrs_12->__PVT__state_w_pprobeack) 
                                                     & (IData)(vlSelf->__PVT__mshrs_12->__PVT__state_w_pprobeacklast)))) 
                                                & ((IData)(vlSelf->__PVT__mshrs_12->__PVT__req_valid) 
                                                   & (((0x7fU 
                                                        & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                           >> 1U)) 
                                                       == (IData)(vlSelf->__PVT__mshrs_12->__PVT__req_set)) 
                                                      & ((0xffU 
                                                          & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                             >> 8U)) 
                                                         == 
                                                         ((IData)(vlSelf->__PVT__mshrs_12->__PVT__io_status_bits_needsRepl)
                                                           ? (IData)(vlSelf->__PVT__mshrs_12->__PVT__dirResult_tag)
                                                           : (IData)(vlSelf->__PVT__mshrs_12->__PVT__req_tag))))));
    vlSelfRef.__PVT__resp_sinkC_match_vec_13 = ((~ 
                                                 ((IData)(vlSelf->__PVT__mshrs_13->__PVT__state_w_rprobeacklast) 
                                                  & ((IData)(vlSelf->__PVT__mshrs_13->__PVT__state_w_pprobeack) 
                                                     & (IData)(vlSelf->__PVT__mshrs_13->__PVT__state_w_pprobeacklast)))) 
                                                & ((IData)(vlSelf->__PVT__mshrs_13->__PVT__req_valid) 
                                                   & (((0x7fU 
                                                        & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                           >> 1U)) 
                                                       == (IData)(vlSelf->__PVT__mshrs_13->__PVT__req_set)) 
                                                      & ((0xffU 
                                                          & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                             >> 8U)) 
                                                         == 
                                                         ((IData)(vlSelf->__PVT__mshrs_13->__PVT__io_status_bits_needsRepl)
                                                           ? (IData)(vlSelf->__PVT__mshrs_13->__PVT__dirResult_tag)
                                                           : (IData)(vlSelf->__PVT__mshrs_13->__PVT__req_tag))))));
    vlSelfRef.__PVT__resp_sinkC_match_vec_14 = ((~ 
                                                 ((IData)(vlSelf->__PVT__mshrs_14->__PVT__state_w_rprobeacklast) 
                                                  & ((IData)(vlSelf->__PVT__mshrs_14->__PVT__state_w_pprobeack) 
                                                     & (IData)(vlSelf->__PVT__mshrs_14->__PVT__state_w_pprobeacklast)))) 
                                                & ((IData)(vlSelf->__PVT__mshrs_14->__PVT__req_valid) 
                                                   & (((0x7fU 
                                                        & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                           >> 1U)) 
                                                       == (IData)(vlSelf->__PVT__mshrs_14->__PVT__req_set)) 
                                                      & ((0xffU 
                                                          & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                                             >> 8U)) 
                                                         == 
                                                         ((IData)(vlSelf->__PVT__mshrs_14->__PVT__io_status_bits_needsRepl)
                                                           ? (IData)(vlSelf->__PVT__mshrs_14->__PVT__dirResult_tag)
                                                           : (IData)(vlSelf->__PVT__mshrs_14->__PVT__req_tag))))));
    vlSelfRef.__PVT__source_a_arb_io_out_bits_param 
        = ((((1U & (IData)(vlSelfRef.__PVT__source_a_arb__DOT__chosenOH))
              ? ((IData)(vlSelf->__PVT__mshrs_0->__PVT__req_needT)
                  ? ((IData)(vlSelf->__PVT__mshrs_0->__PVT__dirResult_hit)
                      ? 2U : 1U) : 0U) : 0U) | ((2U 
                                                 & (IData)(vlSelfRef.__PVT__source_a_arb__DOT__chosenOH))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__mshrs_1->__PVT__req_needT)
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__mshrs_1->__PVT__dirResult_hit)
                                                   ? 2U
                                                   : 1U)
                                                  : 0U)
                                                 : 0U)) 
           | ((((4U & (IData)(vlSelfRef.__PVT__source_a_arb__DOT__chosenOH))
                 ? ((IData)(vlSelf->__PVT__mshrs_2->__PVT__req_needT)
                     ? ((IData)(vlSelf->__PVT__mshrs_2->__PVT__dirResult_hit)
                         ? 2U : 1U) : 0U) : 0U) | (
                                                   (8U 
                                                    & (IData)(vlSelfRef.__PVT__source_a_arb__DOT__chosenOH))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__mshrs_3->__PVT__req_needT)
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__mshrs_3->__PVT__dirResult_hit)
                                                      ? 2U
                                                      : 1U)
                                                     : 0U)
                                                    : 0U)) 
              | (((0x10U & (IData)(vlSelfRef.__PVT__source_a_arb__DOT__chosenOH))
                   ? ((IData)(vlSelf->__PVT__mshrs_4->__PVT__req_needT)
                       ? ((IData)(vlSelf->__PVT__mshrs_4->__PVT__dirResult_hit)
                           ? 2U : 1U) : 0U) : 0U) | 
                 (((0x20U & (IData)(vlSelfRef.__PVT__source_a_arb__DOT__chosenOH))
                    ? ((IData)(vlSelf->__PVT__mshrs_5->__PVT__req_needT)
                        ? ((IData)(vlSelf->__PVT__mshrs_5->__PVT__dirResult_hit)
                            ? 2U : 1U) : 0U) : 0U) 
                  | (((0x40U & (IData)(vlSelfRef.__PVT__source_a_arb__DOT__chosenOH))
                       ? ((IData)(vlSelf->__PVT__mshrs_6->__PVT__req_needT)
                           ? ((IData)(vlSelf->__PVT__mshrs_6->__PVT__dirResult_hit)
                               ? 2U : 1U) : 0U) : 0U) 
                     | (((0x80U & (IData)(vlSelfRef.__PVT__source_a_arb__DOT__chosenOH))
                          ? ((IData)(vlSelf->__PVT__mshrs_7->__PVT__req_needT)
                              ? ((IData)(vlSelf->__PVT__mshrs_7->__PVT__dirResult_hit)
                                  ? 2U : 1U) : 0U) : 0U) 
                        | (((0x100U & (IData)(vlSelfRef.__PVT__source_a_arb__DOT__chosenOH))
                             ? ((IData)(vlSelf->__PVT__mshrs_8->__PVT__req_needT)
                                 ? ((IData)(vlSelf->__PVT__mshrs_8->__PVT__dirResult_hit)
                                     ? 2U : 1U) : 0U)
                             : 0U) | (((0x200U & (IData)(vlSelfRef.__PVT__source_a_arb__DOT__chosenOH))
                                        ? ((IData)(vlSelf->__PVT__mshrs_9->__PVT__req_needT)
                                            ? ((IData)(vlSelf->__PVT__mshrs_9->__PVT__dirResult_hit)
                                                ? 2U
                                                : 1U)
                                            : 0U) : 0U) 
                                      | (((0x400U & (IData)(vlSelfRef.__PVT__source_a_arb__DOT__chosenOH))
                                           ? ((IData)(vlSelf->__PVT__mshrs_10->__PVT__req_needT)
                                               ? ((IData)(vlSelf->__PVT__mshrs_10->__PVT__dirResult_hit)
                                                   ? 2U
                                                   : 1U)
                                               : 0U)
                                           : 0U) | 
                                         (((0x800U 
                                            & (IData)(vlSelfRef.__PVT__source_a_arb__DOT__chosenOH))
                                            ? ((IData)(vlSelf->__PVT__mshrs_11->__PVT__req_needT)
                                                ? ((IData)(vlSelf->__PVT__mshrs_11->__PVT__dirResult_hit)
                                                    ? 2U
                                                    : 1U)
                                                : 0U)
                                            : 0U) | 
                                          (((0x1000U 
                                             & (IData)(vlSelfRef.__PVT__source_a_arb__DOT__chosenOH))
                                             ? ((IData)(vlSelf->__PVT__mshrs_12->__PVT__req_needT)
                                                 ? 
                                                ((IData)(vlSelf->__PVT__mshrs_12->__PVT__dirResult_hit)
                                                  ? 2U
                                                  : 1U)
                                                 : 0U)
                                             : 0U) 
                                           | (((0x2000U 
                                                & (IData)(vlSelfRef.__PVT__source_a_arb__DOT__chosenOH))
                                                ? ((IData)(vlSelf->__PVT__mshrs_13->__PVT__req_needT)
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__mshrs_13->__PVT__dirResult_hit)
                                                     ? 2U
                                                     : 1U)
                                                    : 0U)
                                                : 0U) 
                                              | (((0x4000U 
                                                   & (IData)(vlSelfRef.__PVT__source_a_arb__DOT__chosenOH))
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__mshrs_14->__PVT__req_needT)
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__mshrs_14->__PVT__dirResult_hit)
                                                     ? 2U
                                                     : 1U)
                                                    : 0U)
                                                   : 0U) 
                                                 | ((0x8000U 
                                                     & (IData)(vlSelfRef.__PVT__source_a_arb__DOT__chosenOH))
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__mshrs_15->__PVT__req_needT)
                                                      ? 
                                                     ((IData)(vlSelf->__PVT__mshrs_15->__PVT__dirResult_hit)
                                                       ? 2U
                                                       : 1U)
                                                      : 0U)
                                                     : 0U))))))))))))));
    vlSelfRef.__PVT__source_b_arb__DOT__valids = ((
                                                   ((((IData)(vlSelf->__PVT__mshrs_15->__PVT__io_tasks_source_b_valid) 
                                                      << 0xfU) 
                                                     | ((IData)(vlSelf->__PVT__mshrs_14->__PVT__io_tasks_source_b_valid) 
                                                        << 0xeU)) 
                                                    | (((IData)(vlSelf->__PVT__mshrs_13->__PVT__io_tasks_source_b_valid) 
                                                        << 0xdU) 
                                                       | ((IData)(vlSelf->__PVT__mshrs_12->__PVT__io_tasks_source_b_valid) 
                                                          << 0xcU))) 
                                                   | ((((IData)(vlSelf->__PVT__mshrs_11->__PVT__io_tasks_source_b_valid) 
                                                        << 0xbU) 
                                                       | ((IData)(vlSelf->__PVT__mshrs_10->__PVT__io_tasks_source_b_valid) 
                                                          << 0xaU)) 
                                                      | (((IData)(vlSelf->__PVT__mshrs_9->__PVT__io_tasks_source_b_valid) 
                                                          << 9U) 
                                                         | ((IData)(vlSelf->__PVT__mshrs_8->__PVT__io_tasks_source_b_valid) 
                                                            << 8U)))) 
                                                  | (((((IData)(vlSelf->__PVT__mshrs_7->__PVT__io_tasks_source_b_valid) 
                                                        << 7U) 
                                                       | ((IData)(vlSelf->__PVT__mshrs_6->__PVT__io_tasks_source_b_valid) 
                                                          << 6U)) 
                                                      | (((IData)(vlSelf->__PVT__mshrs_5->__PVT__io_tasks_source_b_valid) 
                                                          << 5U) 
                                                         | ((IData)(vlSelf->__PVT__mshrs_4->__PVT__io_tasks_source_b_valid) 
                                                            << 4U))) 
                                                     | ((((IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_source_b_valid) 
                                                          << 3U) 
                                                         | ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_source_b_valid) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_source_b_valid) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_source_b_valid)))));
    vlSelfRef.__PVT__mshrs_15_io_resps_sink_c_valid 
        = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_resp_valid) 
           & ((~ ((IData)(vlSelf->__PVT__mshrs_15->__PVT__state_w_rprobeacklast) 
                  & ((IData)(vlSelf->__PVT__mshrs_15->__PVT__state_w_pprobeack) 
                     & (IData)(vlSelf->__PVT__mshrs_15->__PVT__state_w_pprobeacklast)))) 
              & ((IData)(vlSelf->__PVT__mshrs_15->__PVT__req_valid) 
                 & (((0x7fU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                               >> 1U)) == (IData)(vlSelf->__PVT__mshrs_15->__PVT__req_set)) 
                    & ((0xffU & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__logger_1_auto_out_c_bits_address) 
                                 >> 8U)) == ((IData)(vlSelf->__PVT__mshrs_15->__PVT__io_status_bits_needsRepl)
                                              ? (IData)(vlSelf->__PVT__mshrs_15->__PVT__dirResult_tag)
                                              : (IData)(vlSelf->__PVT__mshrs_15->__PVT__req_tag)))))));
    vlSelfRef.io_nestedwbDataId_valid = ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_nestedwbData) 
                                         | ((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_nestedwbData) 
                                            | ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_nestedwbData) 
                                               | ((IData)(vlSelf->__PVT__mshrs_3->__PVT__io_nestedwbData) 
                                                  | ((IData)(vlSelf->__PVT__mshrs_4->__PVT__io_nestedwbData) 
                                                     | ((IData)(vlSelf->__PVT__mshrs_5->__PVT__io_nestedwbData) 
                                                        | ((IData)(vlSelf->__PVT__mshrs_6->__PVT__io_nestedwbData) 
                                                           | ((IData)(vlSelf->__PVT__mshrs_7->__PVT__io_nestedwbData) 
                                                              | ((IData)(vlSelf->__PVT__mshrs_8->__PVT__io_nestedwbData) 
                                                                 | ((IData)(vlSelf->__PVT__mshrs_9->__PVT__io_nestedwbData) 
                                                                    | ((IData)(vlSelf->__PVT__mshrs_10->__PVT__io_nestedwbData) 
                                                                       | ((IData)(vlSelf->__PVT__mshrs_11->__PVT__io_nestedwbData) 
                                                                          | ((IData)(vlSelf->__PVT__mshrs_12->__PVT__io_nestedwbData) 
                                                                             | ((IData)(vlSelf->__PVT__mshrs_13->__PVT__io_nestedwbData) 
                                                                                | ((IData)(vlSelf->__PVT__mshrs_14->__PVT__io_nestedwbData) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_15->__PVT__io_nestedwbData))))))))))))))));
    vlSelfRef.__PVT__mshr_task_arb__DOT__valids = (
                                                   (((((IData)(vlSelf->__PVT__mshrs_15->__PVT__io_tasks_mainpipe_valid) 
                                                       << 0xfU) 
                                                      | ((IData)(vlSelf->__PVT__mshrs_14->__PVT__io_tasks_mainpipe_valid) 
                                                         << 0xeU)) 
                                                     | (((IData)(vlSelf->__PVT__mshrs_13->__PVT__io_tasks_mainpipe_valid) 
                                                         << 0xdU) 
                                                        | ((IData)(vlSelf->__PVT__mshrs_12->__PVT__io_tasks_mainpipe_valid) 
                                                           << 0xcU))) 
                                                    | ((((IData)(vlSelf->__PVT__mshrs_11->__PVT__io_tasks_mainpipe_valid) 
                                                         << 0xbU) 
                                                        | ((IData)(vlSelf->__PVT__mshrs_10->__PVT__io_tasks_mainpipe_valid) 
                                                           << 0xaU)) 
                                                       | (((IData)(vlSelf->__PVT__mshrs_9->__PVT__io_tasks_mainpipe_valid) 
                                                           << 9U) 
                                                          | ((IData)(vlSelf->__PVT__mshrs_8->__PVT__io_tasks_mainpipe_valid) 
                                                             << 8U)))) 
                                                   | (((((IData)(vlSelf->__PVT__mshrs_7->__PVT__io_tasks_mainpipe_valid) 
                                                         << 7U) 
                                                        | ((IData)(vlSelf->__PVT__mshrs_6->__PVT__io_tasks_mainpipe_valid) 
                                                           << 6U)) 
                                                       | (((IData)(vlSelf->__PVT__mshrs_5->__PVT__io_tasks_mainpipe_valid) 
                                                           << 5U) 
                                                          | ((IData)(vlSelf->__PVT__mshrs_4->__PVT__io_tasks_mainpipe_valid) 
                                                             << 4U))) 
                                                      | ((((IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_mainpipe_valid) 
                                                           << 3U) 
                                                          | ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_mainpipe_valid) 
                                                             << 2U)) 
                                                         | (((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_mainpipe_valid) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_mainpipe_valid)))));
    vlSelfRef.__PVT__mshrs_0_io_alloc_valid = ((IData)(vlSelfRef.__PVT__mshrSelector_io_out_bits) 
                                               & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_valid));
    vlSelfRef.__PVT__mshrs_1_io_alloc_valid = (((IData)(vlSelfRef.__PVT__mshrSelector_io_out_bits) 
                                                >> 1U) 
                                               & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_valid));
    vlSelfRef.__PVT__mshrs_2_io_alloc_valid = (((IData)(vlSelfRef.__PVT__mshrSelector_io_out_bits) 
                                                >> 2U) 
                                               & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_valid));
    vlSelfRef.__PVT__mshrs_3_io_alloc_valid = (((IData)(vlSelfRef.__PVT__mshrSelector_io_out_bits) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_valid));
    vlSelfRef.__PVT__mshrs_4_io_alloc_valid = (((IData)(vlSelfRef.__PVT__mshrSelector_io_out_bits) 
                                                >> 4U) 
                                               & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_valid));
    vlSelfRef.__PVT__mshrs_5_io_alloc_valid = (((IData)(vlSelfRef.__PVT__mshrSelector_io_out_bits) 
                                                >> 5U) 
                                               & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_valid));
    vlSelfRef.__PVT__mshrs_6_io_alloc_valid = (((IData)(vlSelfRef.__PVT__mshrSelector_io_out_bits) 
                                                >> 6U) 
                                               & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_valid));
    vlSelfRef.__PVT__mshrs_7_io_alloc_valid = (((IData)(vlSelfRef.__PVT__mshrSelector_io_out_bits) 
                                                >> 7U) 
                                               & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_valid));
    vlSelfRef.__PVT__mshrs_8_io_alloc_valid = (((IData)(vlSelfRef.__PVT__mshrSelector_io_out_bits) 
                                                >> 8U) 
                                               & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_valid));
    vlSelfRef.__PVT__mshrs_9_io_alloc_valid = (((IData)(vlSelfRef.__PVT__mshrSelector_io_out_bits) 
                                                >> 9U) 
                                               & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_valid));
    vlSelfRef.__PVT__mshrs_10_io_alloc_valid = (((IData)(vlSelfRef.__PVT__mshrSelector_io_out_bits) 
                                                 >> 0xaU) 
                                                & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_valid));
    vlSelfRef.__PVT__mshrs_11_io_alloc_valid = (((IData)(vlSelfRef.__PVT__mshrSelector_io_out_bits) 
                                                 >> 0xbU) 
                                                & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_valid));
    vlSelfRef.__PVT__mshrs_12_io_alloc_valid = (((IData)(vlSelfRef.__PVT__mshrSelector_io_out_bits) 
                                                 >> 0xcU) 
                                                & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_valid));
    vlSelfRef.__PVT__mshrs_13_io_alloc_valid = (((IData)(vlSelfRef.__PVT__mshrSelector_io_out_bits) 
                                                 >> 0xdU) 
                                                & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_valid));
    vlSelfRef.__PVT__mshrs_14_io_alloc_valid = (((IData)(vlSelfRef.__PVT__mshrSelector_io_out_bits) 
                                                 >> 0xeU) 
                                                & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_valid));
    vlSelfRef.__PVT__mshrs_15_io_alloc_valid = (((IData)(vlSelfRef.__PVT__mshrSelector_io_out_bits) 
                                                 >> 0xfU) 
                                                & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toMSHRCtl_mshr_alloc_s3_valid));
    vlSelfRef.__PVT__mshrs_0_io_resps_sink_c_valid 
        = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_resp_valid) 
           & (IData)(vlSelfRef.__PVT__resp_sinkC_match_vec_0));
    vlSelfRef.__PVT__mshrs_1_io_resps_sink_c_valid 
        = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_resp_valid) 
           & (IData)(vlSelfRef.__PVT__resp_sinkC_match_vec_1));
    __VdfgRegularize_h515af8c5_2_0 = ((IData)(vlSelfRef.__PVT__resp_sinkC_match_vec_0) 
                                      | (IData)(vlSelfRef.__PVT__resp_sinkC_match_vec_1));
    __VdfgRegularize_h515af8c5_50_2 = ((IData)(__VdfgRegularize_h515af8c5_50_0) 
                                       | ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_nestedwbData) 
                                          | (IData)(vlSelf->__PVT__mshrs_3->__PVT__io_nestedwbData)));
    vlSelfRef.__PVT__mshrs_2_io_resps_sink_c_valid 
        = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_resp_valid) 
           & (IData)(vlSelfRef.__PVT__resp_sinkC_match_vec_2));
    vlSelfRef.__PVT__mshrs_3_io_resps_sink_c_valid 
        = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_resp_valid) 
           & (IData)(vlSelfRef.__PVT__resp_sinkC_match_vec_3));
    vlSelfRef.__PVT__mshrs_4_io_resps_sink_c_valid 
        = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_resp_valid) 
           & (IData)(vlSelfRef.__PVT__resp_sinkC_match_vec_4));
    vlSelfRef.__PVT__mshrs_5_io_resps_sink_c_valid 
        = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_resp_valid) 
           & (IData)(vlSelfRef.__PVT__resp_sinkC_match_vec_5));
    __VdfgRegularize_h515af8c5_2_1 = ((IData)(vlSelfRef.__PVT__resp_sinkC_match_vec_4) 
                                      | (IData)(vlSelfRef.__PVT__resp_sinkC_match_vec_5));
    vlSelfRef.__PVT__mshrs_6_io_resps_sink_c_valid 
        = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_resp_valid) 
           & (IData)(vlSelfRef.__PVT__resp_sinkC_match_vec_6));
    vlSelfRef.__PVT__mshrs_7_io_resps_sink_c_valid 
        = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_resp_valid) 
           & (IData)(vlSelfRef.__PVT__resp_sinkC_match_vec_7));
    vlSelfRef.__PVT__mshrs_8_io_resps_sink_c_valid 
        = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_resp_valid) 
           & (IData)(vlSelfRef.__PVT__resp_sinkC_match_vec_8));
    vlSelfRef.__PVT__mshrs_9_io_resps_sink_c_valid 
        = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_resp_valid) 
           & (IData)(vlSelfRef.__PVT__resp_sinkC_match_vec_9));
    __VdfgRegularize_h515af8c5_2_3 = ((IData)(vlSelfRef.__PVT__resp_sinkC_match_vec_8) 
                                      | (IData)(vlSelfRef.__PVT__resp_sinkC_match_vec_9));
    vlSelfRef.__PVT__mshrs_10_io_resps_sink_c_valid 
        = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_resp_valid) 
           & (IData)(vlSelfRef.__PVT__resp_sinkC_match_vec_10));
    vlSelfRef.__PVT__mshrs_11_io_resps_sink_c_valid 
        = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_resp_valid) 
           & (IData)(vlSelfRef.__PVT__resp_sinkC_match_vec_11));
    vlSelfRef.__PVT__mshrs_12_io_resps_sink_c_valid 
        = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_resp_valid) 
           & (IData)(vlSelfRef.__PVT__resp_sinkC_match_vec_12));
    vlSelfRef.__PVT__mshrs_13_io_resps_sink_c_valid 
        = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_resp_valid) 
           & (IData)(vlSelfRef.__PVT__resp_sinkC_match_vec_13));
    vlSelfRef.__PVT__mshrs_14_io_resps_sink_c_valid 
        = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_resp_valid) 
           & (IData)(vlSelfRef.__PVT__resp_sinkC_match_vec_14));
    vlSelfRef.__PVT__sourceB__DOT__alloc = ((IData)(vlSelfRef.__PVT__sourceB_io_task_ready) 
                                            & (0U != (IData)(vlSelfRef.__PVT__source_b_arb__DOT__valids)));
    vlSelfRef.__PVT__source_b_arb__DOT__chosenOH = 
        ((0U != ((IData)(vlSelfRef.__PVT__source_b_arb__DOT__rrSelOH) 
                 & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__valids)))
          ? (IData)(vlSelfRef.__PVT__source_b_arb__DOT__rrSelOH)
          : (((((((~ ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_source_b_valid) 
                      | ((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_source_b_valid) 
                         | ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_source_b_valid) 
                            | ((IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_source_b_valid) 
                               | ((IData)(vlSelf->__PVT__mshrs_4->__PVT__io_tasks_source_b_valid) 
                                  | ((IData)(vlSelf->__PVT__mshrs_5->__PVT__io_tasks_source_b_valid) 
                                     | ((IData)(vlSelf->__PVT__mshrs_6->__PVT__io_tasks_source_b_valid) 
                                        | ((IData)(vlSelf->__PVT__mshrs_7->__PVT__io_tasks_source_b_valid) 
                                           | ((IData)(vlSelf->__PVT__mshrs_8->__PVT__io_tasks_source_b_valid) 
                                              | ((IData)(vlSelf->__PVT__mshrs_9->__PVT__io_tasks_source_b_valid) 
                                                 | ((IData)(vlSelf->__PVT__mshrs_10->__PVT__io_tasks_source_b_valid) 
                                                    | ((IData)(vlSelf->__PVT__mshrs_11->__PVT__io_tasks_source_b_valid) 
                                                       | ((IData)(vlSelf->__PVT__mshrs_12->__PVT__io_tasks_source_b_valid) 
                                                          | ((IData)(vlSelf->__PVT__mshrs_13->__PVT__io_tasks_source_b_valid) 
                                                             | (IData)(vlSelf->__PVT__mshrs_14->__PVT__io_tasks_source_b_valid)))))))))))))))) 
                  & (IData)(vlSelf->__PVT__mshrs_15->__PVT__io_tasks_source_b_valid)) 
                 << 0xfU) | (((~ ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_source_b_valid) 
                                  | ((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_source_b_valid) 
                                     | ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_source_b_valid) 
                                        | ((IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_source_b_valid) 
                                           | ((IData)(vlSelf->__PVT__mshrs_4->__PVT__io_tasks_source_b_valid) 
                                              | ((IData)(vlSelf->__PVT__mshrs_5->__PVT__io_tasks_source_b_valid) 
                                                 | ((IData)(vlSelf->__PVT__mshrs_6->__PVT__io_tasks_source_b_valid) 
                                                    | ((IData)(vlSelf->__PVT__mshrs_7->__PVT__io_tasks_source_b_valid) 
                                                       | ((IData)(vlSelf->__PVT__mshrs_8->__PVT__io_tasks_source_b_valid) 
                                                          | ((IData)(vlSelf->__PVT__mshrs_9->__PVT__io_tasks_source_b_valid) 
                                                             | ((IData)(vlSelf->__PVT__mshrs_10->__PVT__io_tasks_source_b_valid) 
                                                                | ((IData)(vlSelf->__PVT__mshrs_11->__PVT__io_tasks_source_b_valid) 
                                                                   | ((IData)(vlSelf->__PVT__mshrs_12->__PVT__io_tasks_source_b_valid) 
                                                                      | (IData)(vlSelf->__PVT__mshrs_13->__PVT__io_tasks_source_b_valid))))))))))))))) 
                              & (IData)(vlSelf->__PVT__mshrs_14->__PVT__io_tasks_source_b_valid)) 
                             << 0xeU)) | ((((~ ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_source_b_valid) 
                                                | ((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_source_b_valid) 
                                                   | ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_source_b_valid) 
                                                      | ((IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_source_b_valid) 
                                                         | ((IData)(vlSelf->__PVT__mshrs_4->__PVT__io_tasks_source_b_valid) 
                                                            | ((IData)(vlSelf->__PVT__mshrs_5->__PVT__io_tasks_source_b_valid) 
                                                               | ((IData)(vlSelf->__PVT__mshrs_6->__PVT__io_tasks_source_b_valid) 
                                                                  | ((IData)(vlSelf->__PVT__mshrs_7->__PVT__io_tasks_source_b_valid) 
                                                                     | ((IData)(vlSelf->__PVT__mshrs_8->__PVT__io_tasks_source_b_valid) 
                                                                        | ((IData)(vlSelf->__PVT__mshrs_9->__PVT__io_tasks_source_b_valid) 
                                                                           | ((IData)(vlSelf->__PVT__mshrs_10->__PVT__io_tasks_source_b_valid) 
                                                                              | ((IData)(vlSelf->__PVT__mshrs_11->__PVT__io_tasks_source_b_valid) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_12->__PVT__io_tasks_source_b_valid)))))))))))))) 
                                            & (IData)(vlSelf->__PVT__mshrs_13->__PVT__io_tasks_source_b_valid)) 
                                           << 0xdU) 
                                          | (((~ ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_source_b_valid) 
                                                  | ((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_source_b_valid) 
                                                     | ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_source_b_valid) 
                                                        | ((IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_source_b_valid) 
                                                           | ((IData)(vlSelf->__PVT__mshrs_4->__PVT__io_tasks_source_b_valid) 
                                                              | ((IData)(vlSelf->__PVT__mshrs_5->__PVT__io_tasks_source_b_valid) 
                                                                 | ((IData)(vlSelf->__PVT__mshrs_6->__PVT__io_tasks_source_b_valid) 
                                                                    | ((IData)(vlSelf->__PVT__mshrs_7->__PVT__io_tasks_source_b_valid) 
                                                                       | ((IData)(vlSelf->__PVT__mshrs_8->__PVT__io_tasks_source_b_valid) 
                                                                          | ((IData)(vlSelf->__PVT__mshrs_9->__PVT__io_tasks_source_b_valid) 
                                                                             | ((IData)(vlSelf->__PVT__mshrs_10->__PVT__io_tasks_source_b_valid) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_11->__PVT__io_tasks_source_b_valid))))))))))))) 
                                              & (IData)(vlSelf->__PVT__mshrs_12->__PVT__io_tasks_source_b_valid)) 
                                             << 0xcU))) 
              | (((((~ ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_source_b_valid) 
                        | ((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_source_b_valid) 
                           | ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_source_b_valid) 
                              | ((IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_source_b_valid) 
                                 | ((IData)(vlSelf->__PVT__mshrs_4->__PVT__io_tasks_source_b_valid) 
                                    | ((IData)(vlSelf->__PVT__mshrs_5->__PVT__io_tasks_source_b_valid) 
                                       | ((IData)(vlSelf->__PVT__mshrs_6->__PVT__io_tasks_source_b_valid) 
                                          | ((IData)(vlSelf->__PVT__mshrs_7->__PVT__io_tasks_source_b_valid) 
                                             | ((IData)(vlSelf->__PVT__mshrs_8->__PVT__io_tasks_source_b_valid) 
                                                | ((IData)(vlSelf->__PVT__mshrs_9->__PVT__io_tasks_source_b_valid) 
                                                   | (IData)(vlSelf->__PVT__mshrs_10->__PVT__io_tasks_source_b_valid)))))))))))) 
                    & (IData)(vlSelf->__PVT__mshrs_11->__PVT__io_tasks_source_b_valid)) 
                   << 0xbU) | (((~ ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_source_b_valid) 
                                    | ((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_source_b_valid) 
                                       | ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_source_b_valid) 
                                          | ((IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_source_b_valid) 
                                             | ((IData)(vlSelf->__PVT__mshrs_4->__PVT__io_tasks_source_b_valid) 
                                                | ((IData)(vlSelf->__PVT__mshrs_5->__PVT__io_tasks_source_b_valid) 
                                                   | ((IData)(vlSelf->__PVT__mshrs_6->__PVT__io_tasks_source_b_valid) 
                                                      | ((IData)(vlSelf->__PVT__mshrs_7->__PVT__io_tasks_source_b_valid) 
                                                         | ((IData)(vlSelf->__PVT__mshrs_8->__PVT__io_tasks_source_b_valid) 
                                                            | (IData)(vlSelf->__PVT__mshrs_9->__PVT__io_tasks_source_b_valid))))))))))) 
                                & (IData)(vlSelf->__PVT__mshrs_10->__PVT__io_tasks_source_b_valid)) 
                               << 0xaU)) | ((((~ ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_source_b_valid) 
                                                  | ((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_source_b_valid) 
                                                     | ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_source_b_valid) 
                                                        | ((IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_source_b_valid) 
                                                           | ((IData)(vlSelf->__PVT__mshrs_4->__PVT__io_tasks_source_b_valid) 
                                                              | ((IData)(vlSelf->__PVT__mshrs_5->__PVT__io_tasks_source_b_valid) 
                                                                 | ((IData)(vlSelf->__PVT__mshrs_6->__PVT__io_tasks_source_b_valid) 
                                                                    | ((IData)(vlSelf->__PVT__mshrs_7->__PVT__io_tasks_source_b_valid) 
                                                                       | (IData)(vlSelf->__PVT__mshrs_8->__PVT__io_tasks_source_b_valid)))))))))) 
                                              & (IData)(vlSelf->__PVT__mshrs_9->__PVT__io_tasks_source_b_valid)) 
                                             << 9U) 
                                            | (((~ 
                                                 ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_source_b_valid) 
                                                  | ((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_source_b_valid) 
                                                     | ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_source_b_valid) 
                                                        | ((IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_source_b_valid) 
                                                           | ((IData)(vlSelf->__PVT__mshrs_4->__PVT__io_tasks_source_b_valid) 
                                                              | ((IData)(vlSelf->__PVT__mshrs_5->__PVT__io_tasks_source_b_valid) 
                                                                 | ((IData)(vlSelf->__PVT__mshrs_6->__PVT__io_tasks_source_b_valid) 
                                                                    | (IData)(vlSelf->__PVT__mshrs_7->__PVT__io_tasks_source_b_valid))))))))) 
                                                & (IData)(vlSelf->__PVT__mshrs_8->__PVT__io_tasks_source_b_valid)) 
                                               << 8U)))) 
             | ((((((~ ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_source_b_valid) 
                        | ((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_source_b_valid) 
                           | ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_source_b_valid) 
                              | ((IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_source_b_valid) 
                                 | ((IData)(vlSelf->__PVT__mshrs_4->__PVT__io_tasks_source_b_valid) 
                                    | ((IData)(vlSelf->__PVT__mshrs_5->__PVT__io_tasks_source_b_valid) 
                                       | (IData)(vlSelf->__PVT__mshrs_6->__PVT__io_tasks_source_b_valid)))))))) 
                    & (IData)(vlSelf->__PVT__mshrs_7->__PVT__io_tasks_source_b_valid)) 
                   << 7U) | (((~ ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_source_b_valid) 
                                  | ((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_source_b_valid) 
                                     | ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_source_b_valid) 
                                        | ((IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_source_b_valid) 
                                           | ((IData)(vlSelf->__PVT__mshrs_4->__PVT__io_tasks_source_b_valid) 
                                              | (IData)(vlSelf->__PVT__mshrs_5->__PVT__io_tasks_source_b_valid))))))) 
                              & (IData)(vlSelf->__PVT__mshrs_6->__PVT__io_tasks_source_b_valid)) 
                             << 6U)) | ((((~ ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_source_b_valid) 
                                              | ((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_source_b_valid) 
                                                 | ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_source_b_valid) 
                                                    | ((IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_source_b_valid) 
                                                       | (IData)(vlSelf->__PVT__mshrs_4->__PVT__io_tasks_source_b_valid)))))) 
                                          & (IData)(vlSelf->__PVT__mshrs_5->__PVT__io_tasks_source_b_valid)) 
                                         << 5U) | (
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_source_b_valid) 
                                                      | ((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_source_b_valid) 
                                                         | ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_source_b_valid) 
                                                            | (IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_source_b_valid))))) 
                                                    & (IData)(vlSelf->__PVT__mshrs_4->__PVT__io_tasks_source_b_valid)) 
                                                   << 4U))) 
                | (((((~ ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_source_b_valid) 
                          | ((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_source_b_valid) 
                             | (IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_source_b_valid)))) 
                      & (IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_source_b_valid)) 
                     << 3U) | (((~ ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_source_b_valid) 
                                    | (IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_source_b_valid))) 
                                & (IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_source_b_valid)) 
                               << 2U)) | ((((~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_source_b_valid)) 
                                            & (IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_source_b_valid)) 
                                           << 1U) | (IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_source_b_valid))))));
    vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH = 
        ((0U != ((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__rrSelOH) 
                 & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__valids)))
          ? (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__rrSelOH)
          : (((((((~ ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_mainpipe_valid) 
                      | ((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_mainpipe_valid) 
                         | ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_mainpipe_valid) 
                            | ((IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_mainpipe_valid) 
                               | ((IData)(vlSelf->__PVT__mshrs_4->__PVT__io_tasks_mainpipe_valid) 
                                  | ((IData)(vlSelf->__PVT__mshrs_5->__PVT__io_tasks_mainpipe_valid) 
                                     | ((IData)(vlSelf->__PVT__mshrs_6->__PVT__io_tasks_mainpipe_valid) 
                                        | ((IData)(vlSelf->__PVT__mshrs_7->__PVT__io_tasks_mainpipe_valid) 
                                           | ((IData)(vlSelf->__PVT__mshrs_8->__PVT__io_tasks_mainpipe_valid) 
                                              | ((IData)(vlSelf->__PVT__mshrs_9->__PVT__io_tasks_mainpipe_valid) 
                                                 | ((IData)(vlSelf->__PVT__mshrs_10->__PVT__io_tasks_mainpipe_valid) 
                                                    | ((IData)(vlSelf->__PVT__mshrs_11->__PVT__io_tasks_mainpipe_valid) 
                                                       | ((IData)(vlSelf->__PVT__mshrs_12->__PVT__io_tasks_mainpipe_valid) 
                                                          | ((IData)(vlSelf->__PVT__mshrs_13->__PVT__io_tasks_mainpipe_valid) 
                                                             | (IData)(vlSelf->__PVT__mshrs_14->__PVT__io_tasks_mainpipe_valid)))))))))))))))) 
                  & (IData)(vlSelf->__PVT__mshrs_15->__PVT__io_tasks_mainpipe_valid)) 
                 << 0xfU) | (((~ ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_mainpipe_valid) 
                                  | ((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_mainpipe_valid) 
                                     | ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_mainpipe_valid) 
                                        | ((IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_mainpipe_valid) 
                                           | ((IData)(vlSelf->__PVT__mshrs_4->__PVT__io_tasks_mainpipe_valid) 
                                              | ((IData)(vlSelf->__PVT__mshrs_5->__PVT__io_tasks_mainpipe_valid) 
                                                 | ((IData)(vlSelf->__PVT__mshrs_6->__PVT__io_tasks_mainpipe_valid) 
                                                    | ((IData)(vlSelf->__PVT__mshrs_7->__PVT__io_tasks_mainpipe_valid) 
                                                       | ((IData)(vlSelf->__PVT__mshrs_8->__PVT__io_tasks_mainpipe_valid) 
                                                          | ((IData)(vlSelf->__PVT__mshrs_9->__PVT__io_tasks_mainpipe_valid) 
                                                             | ((IData)(vlSelf->__PVT__mshrs_10->__PVT__io_tasks_mainpipe_valid) 
                                                                | ((IData)(vlSelf->__PVT__mshrs_11->__PVT__io_tasks_mainpipe_valid) 
                                                                   | ((IData)(vlSelf->__PVT__mshrs_12->__PVT__io_tasks_mainpipe_valid) 
                                                                      | (IData)(vlSelf->__PVT__mshrs_13->__PVT__io_tasks_mainpipe_valid))))))))))))))) 
                              & (IData)(vlSelf->__PVT__mshrs_14->__PVT__io_tasks_mainpipe_valid)) 
                             << 0xeU)) | ((((~ ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_mainpipe_valid) 
                                                | ((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_mainpipe_valid) 
                                                   | ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_mainpipe_valid) 
                                                      | ((IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_mainpipe_valid) 
                                                         | ((IData)(vlSelf->__PVT__mshrs_4->__PVT__io_tasks_mainpipe_valid) 
                                                            | ((IData)(vlSelf->__PVT__mshrs_5->__PVT__io_tasks_mainpipe_valid) 
                                                               | ((IData)(vlSelf->__PVT__mshrs_6->__PVT__io_tasks_mainpipe_valid) 
                                                                  | ((IData)(vlSelf->__PVT__mshrs_7->__PVT__io_tasks_mainpipe_valid) 
                                                                     | ((IData)(vlSelf->__PVT__mshrs_8->__PVT__io_tasks_mainpipe_valid) 
                                                                        | ((IData)(vlSelf->__PVT__mshrs_9->__PVT__io_tasks_mainpipe_valid) 
                                                                           | ((IData)(vlSelf->__PVT__mshrs_10->__PVT__io_tasks_mainpipe_valid) 
                                                                              | ((IData)(vlSelf->__PVT__mshrs_11->__PVT__io_tasks_mainpipe_valid) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_12->__PVT__io_tasks_mainpipe_valid)))))))))))))) 
                                            & (IData)(vlSelf->__PVT__mshrs_13->__PVT__io_tasks_mainpipe_valid)) 
                                           << 0xdU) 
                                          | (((~ ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_mainpipe_valid) 
                                                  | ((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_mainpipe_valid) 
                                                     | ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_mainpipe_valid) 
                                                        | ((IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_mainpipe_valid) 
                                                           | ((IData)(vlSelf->__PVT__mshrs_4->__PVT__io_tasks_mainpipe_valid) 
                                                              | ((IData)(vlSelf->__PVT__mshrs_5->__PVT__io_tasks_mainpipe_valid) 
                                                                 | ((IData)(vlSelf->__PVT__mshrs_6->__PVT__io_tasks_mainpipe_valid) 
                                                                    | ((IData)(vlSelf->__PVT__mshrs_7->__PVT__io_tasks_mainpipe_valid) 
                                                                       | ((IData)(vlSelf->__PVT__mshrs_8->__PVT__io_tasks_mainpipe_valid) 
                                                                          | ((IData)(vlSelf->__PVT__mshrs_9->__PVT__io_tasks_mainpipe_valid) 
                                                                             | ((IData)(vlSelf->__PVT__mshrs_10->__PVT__io_tasks_mainpipe_valid) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_11->__PVT__io_tasks_mainpipe_valid))))))))))))) 
                                              & (IData)(vlSelf->__PVT__mshrs_12->__PVT__io_tasks_mainpipe_valid)) 
                                             << 0xcU))) 
              | (((((~ ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_mainpipe_valid) 
                        | ((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_mainpipe_valid) 
                           | ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_mainpipe_valid) 
                              | ((IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_mainpipe_valid) 
                                 | ((IData)(vlSelf->__PVT__mshrs_4->__PVT__io_tasks_mainpipe_valid) 
                                    | ((IData)(vlSelf->__PVT__mshrs_5->__PVT__io_tasks_mainpipe_valid) 
                                       | ((IData)(vlSelf->__PVT__mshrs_6->__PVT__io_tasks_mainpipe_valid) 
                                          | ((IData)(vlSelf->__PVT__mshrs_7->__PVT__io_tasks_mainpipe_valid) 
                                             | ((IData)(vlSelf->__PVT__mshrs_8->__PVT__io_tasks_mainpipe_valid) 
                                                | ((IData)(vlSelf->__PVT__mshrs_9->__PVT__io_tasks_mainpipe_valid) 
                                                   | (IData)(vlSelf->__PVT__mshrs_10->__PVT__io_tasks_mainpipe_valid)))))))))))) 
                    & (IData)(vlSelf->__PVT__mshrs_11->__PVT__io_tasks_mainpipe_valid)) 
                   << 0xbU) | (((~ ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_mainpipe_valid) 
                                    | ((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_mainpipe_valid) 
                                       | ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_mainpipe_valid) 
                                          | ((IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_mainpipe_valid) 
                                             | ((IData)(vlSelf->__PVT__mshrs_4->__PVT__io_tasks_mainpipe_valid) 
                                                | ((IData)(vlSelf->__PVT__mshrs_5->__PVT__io_tasks_mainpipe_valid) 
                                                   | ((IData)(vlSelf->__PVT__mshrs_6->__PVT__io_tasks_mainpipe_valid) 
                                                      | ((IData)(vlSelf->__PVT__mshrs_7->__PVT__io_tasks_mainpipe_valid) 
                                                         | ((IData)(vlSelf->__PVT__mshrs_8->__PVT__io_tasks_mainpipe_valid) 
                                                            | (IData)(vlSelf->__PVT__mshrs_9->__PVT__io_tasks_mainpipe_valid))))))))))) 
                                & (IData)(vlSelf->__PVT__mshrs_10->__PVT__io_tasks_mainpipe_valid)) 
                               << 0xaU)) | ((((~ ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_mainpipe_valid) 
                                                  | ((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_mainpipe_valid) 
                                                     | ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_mainpipe_valid) 
                                                        | ((IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_mainpipe_valid) 
                                                           | ((IData)(vlSelf->__PVT__mshrs_4->__PVT__io_tasks_mainpipe_valid) 
                                                              | ((IData)(vlSelf->__PVT__mshrs_5->__PVT__io_tasks_mainpipe_valid) 
                                                                 | ((IData)(vlSelf->__PVT__mshrs_6->__PVT__io_tasks_mainpipe_valid) 
                                                                    | ((IData)(vlSelf->__PVT__mshrs_7->__PVT__io_tasks_mainpipe_valid) 
                                                                       | (IData)(vlSelf->__PVT__mshrs_8->__PVT__io_tasks_mainpipe_valid)))))))))) 
                                              & (IData)(vlSelf->__PVT__mshrs_9->__PVT__io_tasks_mainpipe_valid)) 
                                             << 9U) 
                                            | (((~ 
                                                 ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_mainpipe_valid) 
                                                  | ((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_mainpipe_valid) 
                                                     | ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_mainpipe_valid) 
                                                        | ((IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_mainpipe_valid) 
                                                           | ((IData)(vlSelf->__PVT__mshrs_4->__PVT__io_tasks_mainpipe_valid) 
                                                              | ((IData)(vlSelf->__PVT__mshrs_5->__PVT__io_tasks_mainpipe_valid) 
                                                                 | ((IData)(vlSelf->__PVT__mshrs_6->__PVT__io_tasks_mainpipe_valid) 
                                                                    | (IData)(vlSelf->__PVT__mshrs_7->__PVT__io_tasks_mainpipe_valid))))))))) 
                                                & (IData)(vlSelf->__PVT__mshrs_8->__PVT__io_tasks_mainpipe_valid)) 
                                               << 8U)))) 
             | ((((((~ ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_mainpipe_valid) 
                        | ((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_mainpipe_valid) 
                           | ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_mainpipe_valid) 
                              | ((IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_mainpipe_valid) 
                                 | ((IData)(vlSelf->__PVT__mshrs_4->__PVT__io_tasks_mainpipe_valid) 
                                    | ((IData)(vlSelf->__PVT__mshrs_5->__PVT__io_tasks_mainpipe_valid) 
                                       | (IData)(vlSelf->__PVT__mshrs_6->__PVT__io_tasks_mainpipe_valid)))))))) 
                    & (IData)(vlSelf->__PVT__mshrs_7->__PVT__io_tasks_mainpipe_valid)) 
                   << 7U) | (((~ ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_mainpipe_valid) 
                                  | ((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_mainpipe_valid) 
                                     | ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_mainpipe_valid) 
                                        | ((IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_mainpipe_valid) 
                                           | ((IData)(vlSelf->__PVT__mshrs_4->__PVT__io_tasks_mainpipe_valid) 
                                              | (IData)(vlSelf->__PVT__mshrs_5->__PVT__io_tasks_mainpipe_valid))))))) 
                              & (IData)(vlSelf->__PVT__mshrs_6->__PVT__io_tasks_mainpipe_valid)) 
                             << 6U)) | ((((~ ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_mainpipe_valid) 
                                              | ((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_mainpipe_valid) 
                                                 | ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_mainpipe_valid) 
                                                    | ((IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_mainpipe_valid) 
                                                       | (IData)(vlSelf->__PVT__mshrs_4->__PVT__io_tasks_mainpipe_valid)))))) 
                                          & (IData)(vlSelf->__PVT__mshrs_5->__PVT__io_tasks_mainpipe_valid)) 
                                         << 5U) | (
                                                   ((~ 
                                                     ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_mainpipe_valid) 
                                                      | ((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_mainpipe_valid) 
                                                         | ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_mainpipe_valid) 
                                                            | (IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_mainpipe_valid))))) 
                                                    & (IData)(vlSelf->__PVT__mshrs_4->__PVT__io_tasks_mainpipe_valid)) 
                                                   << 4U))) 
                | (((((~ ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_mainpipe_valid) 
                          | ((IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_mainpipe_valid) 
                             | (IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_mainpipe_valid)))) 
                      & (IData)(vlSelf->__PVT__mshrs_3->__PVT__io_tasks_mainpipe_valid)) 
                     << 3U) | (((~ ((IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_mainpipe_valid) 
                                    | (IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_mainpipe_valid))) 
                                & (IData)(vlSelf->__PVT__mshrs_2->__PVT__io_tasks_mainpipe_valid)) 
                               << 2U)) | ((((~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_mainpipe_valid)) 
                                            & (IData)(vlSelf->__PVT__mshrs_1->__PVT__io_tasks_mainpipe_valid)) 
                                           << 1U) | (IData)(vlSelf->__PVT__mshrs_0->__PVT__io_tasks_mainpipe_valid))))));
    __VdfgRegularize_h515af8c5_2_2 = ((IData)(__VdfgRegularize_h515af8c5_2_0) 
                                      | ((IData)(vlSelfRef.__PVT__resp_sinkC_match_vec_2) 
                                         | (IData)(vlSelfRef.__PVT__resp_sinkC_match_vec_3)));
    vlSelfRef.io_nestedwbDataId_bits = (((IData)(__VdfgRegularize_h515af8c5_50_2) 
                                         | ((IData)(__VdfgRegularize_h515af8c5_50_1) 
                                            | ((IData)(vlSelf->__PVT__mshrs_6->__PVT__io_nestedwbData) 
                                               | (IData)(vlSelf->__PVT__mshrs_7->__PVT__io_nestedwbData))))
                                         ? ((IData)(__VdfgRegularize_h515af8c5_50_2)
                                             ? ((IData)(__VdfgRegularize_h515af8c5_50_0)
                                                 ? 
                                                (1U 
                                                 & (~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__io_nestedwbData)))
                                                 : 
                                                ((IData)(vlSelf->__PVT__mshrs_2->__PVT__io_nestedwbData)
                                                  ? 2U
                                                  : 3U))
                                             : ((IData)(__VdfgRegularize_h515af8c5_50_1)
                                                 ? 
                                                ((IData)(vlSelf->__PVT__mshrs_4->__PVT__io_nestedwbData)
                                                  ? 4U
                                                  : 5U)
                                                 : 
                                                ((IData)(vlSelf->__PVT__mshrs_6->__PVT__io_nestedwbData)
                                                  ? 6U
                                                  : 7U)))
                                         : (((IData)(__VdfgRegularize_h515af8c5_50_3) 
                                             | ((IData)(vlSelf->__PVT__mshrs_10->__PVT__io_nestedwbData) 
                                                | (IData)(vlSelf->__PVT__mshrs_11->__PVT__io_nestedwbData)))
                                             ? ((IData)(__VdfgRegularize_h515af8c5_50_3)
                                                 ? 
                                                ((IData)(vlSelf->__PVT__mshrs_8->__PVT__io_nestedwbData)
                                                  ? 8U
                                                  : 9U)
                                                 : 
                                                ((IData)(vlSelf->__PVT__mshrs_10->__PVT__io_nestedwbData)
                                                  ? 0xaU
                                                  : 0xbU))
                                             : (((IData)(vlSelf->__PVT__mshrs_12->__PVT__io_nestedwbData) 
                                                 | (IData)(vlSelf->__PVT__mshrs_13->__PVT__io_nestedwbData))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__mshrs_12->__PVT__io_nestedwbData)
                                                  ? 0xcU
                                                  : 0xdU)
                                                 : 
                                                ((IData)(vlSelf->__PVT__mshrs_14->__PVT__io_nestedwbData)
                                                  ? 0xeU
                                                  : 0xfU))));
    vlSelfRef.__PVT__source_b_arb_io_out_bits_opcode 
        = ((((1U & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
              ? 6U : 0U) | ((2U & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                             ? 6U : 0U)) | ((((4U & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                               ? 6U
                                               : 0U) 
                                             | ((8U 
                                                 & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                 ? 6U
                                                 : 0U)) 
                                            | (((0x10U 
                                                 & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                 ? 6U
                                                 : 0U) 
                                               | (((0x20U 
                                                    & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                    ? 6U
                                                    : 0U) 
                                                  | (((0x40U 
                                                       & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                       ? 6U
                                                       : 0U) 
                                                     | (((0x80U 
                                                          & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                          ? 6U
                                                          : 0U) 
                                                        | (((0x100U 
                                                             & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                             ? 6U
                                                             : 0U) 
                                                           | (((0x200U 
                                                                & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                                ? 6U
                                                                : 0U) 
                                                              | (((0x400U 
                                                                   & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                                   ? 6U
                                                                   : 0U) 
                                                                 | (((0x800U 
                                                                      & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                                      ? 6U
                                                                      : 0U) 
                                                                    | (((0x1000U 
                                                                         & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                                         ? 6U
                                                                         : 0U) 
                                                                       | (((0x2000U 
                                                                            & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                                            ? 6U
                                                                            : 0U) 
                                                                          | (((0x4000U 
                                                                               & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                                               ? 6U
                                                                               : 0U) 
                                                                             | ((0x8000U 
                                                                                & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                                                 ? 6U
                                                                                 : 0U))))))))))))));
    vlSelfRef.__PVT__source_b_arb_io_out_bits_alias 
        = ((((1U & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
              ? (IData)(vlSelf->__PVT__mshrs_0->__PVT__dirResult_meta_alias)
              : 0U) | ((2U & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                        ? (IData)(vlSelf->__PVT__mshrs_1->__PVT__dirResult_meta_alias)
                        : 0U)) | ((((4U & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                     ? (IData)(vlSelf->__PVT__mshrs_2->__PVT__dirResult_meta_alias)
                                     : 0U) | ((8U & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                               ? (IData)(vlSelf->__PVT__mshrs_3->__PVT__dirResult_meta_alias)
                                               : 0U)) 
                                  | (((0x10U & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                       ? (IData)(vlSelf->__PVT__mshrs_4->__PVT__dirResult_meta_alias)
                                       : 0U) | (((0x20U 
                                                  & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                  ? (IData)(vlSelf->__PVT__mshrs_5->__PVT__dirResult_meta_alias)
                                                  : 0U) 
                                                | (((0x40U 
                                                     & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                     ? (IData)(vlSelf->__PVT__mshrs_6->__PVT__dirResult_meta_alias)
                                                     : 0U) 
                                                   | (((0x80U 
                                                        & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                        ? (IData)(vlSelf->__PVT__mshrs_7->__PVT__dirResult_meta_alias)
                                                        : 0U) 
                                                      | (((0x100U 
                                                           & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                           ? (IData)(vlSelf->__PVT__mshrs_8->__PVT__dirResult_meta_alias)
                                                           : 0U) 
                                                         | (((0x200U 
                                                              & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                              ? (IData)(vlSelf->__PVT__mshrs_9->__PVT__dirResult_meta_alias)
                                                              : 0U) 
                                                            | (((0x400U 
                                                                 & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                                 ? (IData)(vlSelf->__PVT__mshrs_10->__PVT__dirResult_meta_alias)
                                                                 : 0U) 
                                                               | (((0x800U 
                                                                    & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                                    ? (IData)(vlSelf->__PVT__mshrs_11->__PVT__dirResult_meta_alias)
                                                                    : 0U) 
                                                                  | (((0x1000U 
                                                                       & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                                       ? (IData)(vlSelf->__PVT__mshrs_12->__PVT__dirResult_meta_alias)
                                                                       : 0U) 
                                                                     | (((0x2000U 
                                                                          & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                                          ? (IData)(vlSelf->__PVT__mshrs_13->__PVT__dirResult_meta_alias)
                                                                          : 0U) 
                                                                        | (((0x4000U 
                                                                             & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                                             ? (IData)(vlSelf->__PVT__mshrs_14->__PVT__dirResult_meta_alias)
                                                                             : 0U) 
                                                                           | ((0x8000U 
                                                                               & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                                               ? (IData)(vlSelf->__PVT__mshrs_15->__PVT__dirResult_meta_alias)
                                                                               : 0U))))))))))))));
    vlSelfRef.__PVT__source_b_arb_io_out_bits_param 
        = (3U & ((((1U & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                    ? ((IData)(vlSelf->__PVT__mshrs_0->__PVT__state_s_pprobe)
                        ? (((4U == (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_opcode)) 
                            & ((IData)(vlSelf->__PVT__mshrs_0->__PVT__dirResult_hit) 
                               & (2U == (IData)(vlSelf->__PVT__mshrs_0->__PVT__dirResult_meta_state))))
                            ? 1U : 2U) : (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_param))
                    : 0U) | ((2U & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                              ? ((IData)(vlSelf->__PVT__mshrs_1->__PVT__state_s_pprobe)
                                  ? (((4U == (IData)(vlSelf->__PVT__mshrs_1->__PVT__req_opcode)) 
                                      & ((IData)(vlSelf->__PVT__mshrs_1->__PVT__dirResult_hit) 
                                         & (2U == (IData)(vlSelf->__PVT__mshrs_1->__PVT__dirResult_meta_state))))
                                      ? 1U : 2U) : (IData)(vlSelf->__PVT__mshrs_1->__PVT__req_param))
                              : 0U)) | ((((4U & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                           ? ((IData)(vlSelf->__PVT__mshrs_2->__PVT__state_s_pprobe)
                                               ? ((
                                                   (4U 
                                                    == (IData)(vlSelf->__PVT__mshrs_2->__PVT__req_opcode)) 
                                                   & ((IData)(vlSelf->__PVT__mshrs_2->__PVT__dirResult_hit) 
                                                      & (2U 
                                                         == (IData)(vlSelf->__PVT__mshrs_2->__PVT__dirResult_meta_state))))
                                                   ? 1U
                                                   : 2U)
                                               : (IData)(vlSelf->__PVT__mshrs_2->__PVT__req_param))
                                           : 0U) | 
                                         ((8U & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                           ? ((IData)(vlSelf->__PVT__mshrs_3->__PVT__state_s_pprobe)
                                               ? ((
                                                   (4U 
                                                    == (IData)(vlSelf->__PVT__mshrs_3->__PVT__req_opcode)) 
                                                   & ((IData)(vlSelf->__PVT__mshrs_3->__PVT__dirResult_hit) 
                                                      & (2U 
                                                         == (IData)(vlSelf->__PVT__mshrs_3->__PVT__dirResult_meta_state))))
                                                   ? 1U
                                                   : 2U)
                                               : (IData)(vlSelf->__PVT__mshrs_3->__PVT__req_param))
                                           : 0U)) | 
                                        (((0x10U & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                           ? ((IData)(vlSelf->__PVT__mshrs_4->__PVT__state_s_pprobe)
                                               ? ((
                                                   (4U 
                                                    == (IData)(vlSelf->__PVT__mshrs_4->__PVT__req_opcode)) 
                                                   & ((IData)(vlSelf->__PVT__mshrs_4->__PVT__dirResult_hit) 
                                                      & (2U 
                                                         == (IData)(vlSelf->__PVT__mshrs_4->__PVT__dirResult_meta_state))))
                                                   ? 1U
                                                   : 2U)
                                               : (IData)(vlSelf->__PVT__mshrs_4->__PVT__req_param))
                                           : 0U) | 
                                         (((0x20U & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                            ? ((IData)(vlSelf->__PVT__mshrs_5->__PVT__state_s_pprobe)
                                                ? (
                                                   ((4U 
                                                     == (IData)(vlSelf->__PVT__mshrs_5->__PVT__req_opcode)) 
                                                    & ((IData)(vlSelf->__PVT__mshrs_5->__PVT__dirResult_hit) 
                                                       & (2U 
                                                          == (IData)(vlSelf->__PVT__mshrs_5->__PVT__dirResult_meta_state))))
                                                    ? 1U
                                                    : 2U)
                                                : (IData)(vlSelf->__PVT__mshrs_5->__PVT__req_param))
                                            : 0U) | 
                                          (((0x40U 
                                             & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                             ? ((IData)(vlSelf->__PVT__mshrs_6->__PVT__state_s_pprobe)
                                                 ? 
                                                (((4U 
                                                   == (IData)(vlSelf->__PVT__mshrs_6->__PVT__req_opcode)) 
                                                  & ((IData)(vlSelf->__PVT__mshrs_6->__PVT__dirResult_hit) 
                                                     & (2U 
                                                        == (IData)(vlSelf->__PVT__mshrs_6->__PVT__dirResult_meta_state))))
                                                  ? 1U
                                                  : 2U)
                                                 : (IData)(vlSelf->__PVT__mshrs_6->__PVT__req_param))
                                             : 0U) 
                                           | (((0x80U 
                                                & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                ? ((IData)(vlSelf->__PVT__mshrs_7->__PVT__state_s_pprobe)
                                                    ? 
                                                   (((4U 
                                                      == (IData)(vlSelf->__PVT__mshrs_7->__PVT__req_opcode)) 
                                                     & ((IData)(vlSelf->__PVT__mshrs_7->__PVT__dirResult_hit) 
                                                        & (2U 
                                                           == (IData)(vlSelf->__PVT__mshrs_7->__PVT__dirResult_meta_state))))
                                                     ? 1U
                                                     : 2U)
                                                    : (IData)(vlSelf->__PVT__mshrs_7->__PVT__req_param))
                                                : 0U) 
                                              | (((0x100U 
                                                   & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__mshrs_8->__PVT__state_s_pprobe)
                                                    ? 
                                                   (((4U 
                                                      == (IData)(vlSelf->__PVT__mshrs_8->__PVT__req_opcode)) 
                                                     & ((IData)(vlSelf->__PVT__mshrs_8->__PVT__dirResult_hit) 
                                                        & (2U 
                                                           == (IData)(vlSelf->__PVT__mshrs_8->__PVT__dirResult_meta_state))))
                                                     ? 1U
                                                     : 2U)
                                                    : (IData)(vlSelf->__PVT__mshrs_8->__PVT__req_param))
                                                   : 0U) 
                                                 | (((0x200U 
                                                      & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                      ? 
                                                     ((IData)(vlSelf->__PVT__mshrs_9->__PVT__state_s_pprobe)
                                                       ? 
                                                      (((4U 
                                                         == (IData)(vlSelf->__PVT__mshrs_9->__PVT__req_opcode)) 
                                                        & ((IData)(vlSelf->__PVT__mshrs_9->__PVT__dirResult_hit) 
                                                           & (2U 
                                                              == (IData)(vlSelf->__PVT__mshrs_9->__PVT__dirResult_meta_state))))
                                                        ? 1U
                                                        : 2U)
                                                       : (IData)(vlSelf->__PVT__mshrs_9->__PVT__req_param))
                                                      : 0U) 
                                                    | (((0x400U 
                                                         & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                         ? 
                                                        ((IData)(vlSelf->__PVT__mshrs_10->__PVT__state_s_pprobe)
                                                          ? 
                                                         (((4U 
                                                            == (IData)(vlSelf->__PVT__mshrs_10->__PVT__req_opcode)) 
                                                           & ((IData)(vlSelf->__PVT__mshrs_10->__PVT__dirResult_hit) 
                                                              & (2U 
                                                                 == (IData)(vlSelf->__PVT__mshrs_10->__PVT__dirResult_meta_state))))
                                                           ? 1U
                                                           : 2U)
                                                          : (IData)(vlSelf->__PVT__mshrs_10->__PVT__req_param))
                                                         : 0U) 
                                                       | (((0x800U 
                                                            & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                            ? 
                                                           ((IData)(vlSelf->__PVT__mshrs_11->__PVT__state_s_pprobe)
                                                             ? 
                                                            (((4U 
                                                               == (IData)(vlSelf->__PVT__mshrs_11->__PVT__req_opcode)) 
                                                              & ((IData)(vlSelf->__PVT__mshrs_11->__PVT__dirResult_hit) 
                                                                 & (2U 
                                                                    == (IData)(vlSelf->__PVT__mshrs_11->__PVT__dirResult_meta_state))))
                                                              ? 1U
                                                              : 2U)
                                                             : (IData)(vlSelf->__PVT__mshrs_11->__PVT__req_param))
                                                            : 0U) 
                                                          | (((0x1000U 
                                                               & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                               ? 
                                                              ((IData)(vlSelf->__PVT__mshrs_12->__PVT__state_s_pprobe)
                                                                ? 
                                                               (((4U 
                                                                  == (IData)(vlSelf->__PVT__mshrs_12->__PVT__req_opcode)) 
                                                                 & ((IData)(vlSelf->__PVT__mshrs_12->__PVT__dirResult_hit) 
                                                                    & (2U 
                                                                       == (IData)(vlSelf->__PVT__mshrs_12->__PVT__dirResult_meta_state))))
                                                                 ? 1U
                                                                 : 2U)
                                                                : (IData)(vlSelf->__PVT__mshrs_12->__PVT__req_param))
                                                               : 0U) 
                                                             | (((0x2000U 
                                                                  & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                                  ? 
                                                                 ((IData)(vlSelf->__PVT__mshrs_13->__PVT__state_s_pprobe)
                                                                   ? 
                                                                  (((4U 
                                                                     == (IData)(vlSelf->__PVT__mshrs_13->__PVT__req_opcode)) 
                                                                    & ((IData)(vlSelf->__PVT__mshrs_13->__PVT__dirResult_hit) 
                                                                       & (2U 
                                                                          == (IData)(vlSelf->__PVT__mshrs_13->__PVT__dirResult_meta_state))))
                                                                    ? 1U
                                                                    : 2U)
                                                                   : (IData)(vlSelf->__PVT__mshrs_13->__PVT__req_param))
                                                                  : 0U) 
                                                                | (((0x4000U 
                                                                     & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                                     ? 
                                                                    ((IData)(vlSelf->__PVT__mshrs_14->__PVT__state_s_pprobe)
                                                                      ? 
                                                                     (((4U 
                                                                        == (IData)(vlSelf->__PVT__mshrs_14->__PVT__req_opcode)) 
                                                                       & ((IData)(vlSelf->__PVT__mshrs_14->__PVT__dirResult_hit) 
                                                                          & (2U 
                                                                             == (IData)(vlSelf->__PVT__mshrs_14->__PVT__dirResult_meta_state))))
                                                                       ? 1U
                                                                       : 2U)
                                                                      : (IData)(vlSelf->__PVT__mshrs_14->__PVT__req_param))
                                                                     : 0U) 
                                                                   | ((0x8000U 
                                                                       & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                                       ? 
                                                                      ((IData)(vlSelf->__PVT__mshrs_15->__PVT__state_s_pprobe)
                                                                        ? 
                                                                       (((4U 
                                                                          == (IData)(vlSelf->__PVT__mshrs_15->__PVT__req_opcode)) 
                                                                         & ((IData)(vlSelf->__PVT__mshrs_15->__PVT__dirResult_hit) 
                                                                            & (2U 
                                                                               == (IData)(vlSelf->__PVT__mshrs_15->__PVT__dirResult_meta_state))))
                                                                         ? 1U
                                                                         : 2U)
                                                                        : (IData)(vlSelf->__PVT__mshrs_15->__PVT__req_param))
                                                                       : 0U)))))))))))))));
    vlSelfRef.__PVT__source_b_arb_io_out_bits_tag = 
        ((((1U & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
            ? (IData)(vlSelf->__PVT__mshrs_0->__PVT__dirResult_tag)
            : 0U) | ((2U & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                      ? (IData)(vlSelf->__PVT__mshrs_1->__PVT__dirResult_tag)
                      : 0U)) | ((((4U & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                   ? (IData)(vlSelf->__PVT__mshrs_2->__PVT__dirResult_tag)
                                   : 0U) | ((8U & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                             ? (IData)(vlSelf->__PVT__mshrs_3->__PVT__dirResult_tag)
                                             : 0U)) 
                                | (((0x10U & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                     ? (IData)(vlSelf->__PVT__mshrs_4->__PVT__dirResult_tag)
                                     : 0U) | (((0x20U 
                                                & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                ? (IData)(vlSelf->__PVT__mshrs_5->__PVT__dirResult_tag)
                                                : 0U) 
                                              | (((0x40U 
                                                   & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                   ? (IData)(vlSelf->__PVT__mshrs_6->__PVT__dirResult_tag)
                                                   : 0U) 
                                                 | (((0x80U 
                                                      & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                      ? (IData)(vlSelf->__PVT__mshrs_7->__PVT__dirResult_tag)
                                                      : 0U) 
                                                    | (((0x100U 
                                                         & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                         ? (IData)(vlSelf->__PVT__mshrs_8->__PVT__dirResult_tag)
                                                         : 0U) 
                                                       | (((0x200U 
                                                            & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                            ? (IData)(vlSelf->__PVT__mshrs_9->__PVT__dirResult_tag)
                                                            : 0U) 
                                                          | (((0x400U 
                                                               & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                               ? (IData)(vlSelf->__PVT__mshrs_10->__PVT__dirResult_tag)
                                                               : 0U) 
                                                             | (((0x800U 
                                                                  & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                                  ? (IData)(vlSelf->__PVT__mshrs_11->__PVT__dirResult_tag)
                                                                  : 0U) 
                                                                | (((0x1000U 
                                                                     & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                                     ? (IData)(vlSelf->__PVT__mshrs_12->__PVT__dirResult_tag)
                                                                     : 0U) 
                                                                   | (((0x2000U 
                                                                        & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                                        ? (IData)(vlSelf->__PVT__mshrs_13->__PVT__dirResult_tag)
                                                                        : 0U) 
                                                                      | (((0x4000U 
                                                                           & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                                           ? (IData)(vlSelf->__PVT__mshrs_14->__PVT__dirResult_tag)
                                                                           : 0U) 
                                                                         | ((0x8000U 
                                                                             & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                                             ? (IData)(vlSelf->__PVT__mshrs_15->__PVT__dirResult_tag)
                                                                             : 0U))))))))))))));
    vlSelfRef.__PVT__source_b_arb_io_out_bits_set = 
        ((((1U & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
            ? (IData)(vlSelf->__PVT__mshrs_0->__PVT__dirResult_set)
            : 0U) | ((2U & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                      ? (IData)(vlSelf->__PVT__mshrs_1->__PVT__dirResult_set)
                      : 0U)) | ((((4U & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                   ? (IData)(vlSelf->__PVT__mshrs_2->__PVT__dirResult_set)
                                   : 0U) | ((8U & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                             ? (IData)(vlSelf->__PVT__mshrs_3->__PVT__dirResult_set)
                                             : 0U)) 
                                | (((0x10U & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                     ? (IData)(vlSelf->__PVT__mshrs_4->__PVT__dirResult_set)
                                     : 0U) | (((0x20U 
                                                & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                ? (IData)(vlSelf->__PVT__mshrs_5->__PVT__dirResult_set)
                                                : 0U) 
                                              | (((0x40U 
                                                   & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                   ? (IData)(vlSelf->__PVT__mshrs_6->__PVT__dirResult_set)
                                                   : 0U) 
                                                 | (((0x80U 
                                                      & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                      ? (IData)(vlSelf->__PVT__mshrs_7->__PVT__dirResult_set)
                                                      : 0U) 
                                                    | (((0x100U 
                                                         & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                         ? (IData)(vlSelf->__PVT__mshrs_8->__PVT__dirResult_set)
                                                         : 0U) 
                                                       | (((0x200U 
                                                            & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                            ? (IData)(vlSelf->__PVT__mshrs_9->__PVT__dirResult_set)
                                                            : 0U) 
                                                          | (((0x400U 
                                                               & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                               ? (IData)(vlSelf->__PVT__mshrs_10->__PVT__dirResult_set)
                                                               : 0U) 
                                                             | (((0x800U 
                                                                  & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                                  ? (IData)(vlSelf->__PVT__mshrs_11->__PVT__dirResult_set)
                                                                  : 0U) 
                                                                | (((0x1000U 
                                                                     & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                                     ? (IData)(vlSelf->__PVT__mshrs_12->__PVT__dirResult_set)
                                                                     : 0U) 
                                                                   | (((0x2000U 
                                                                        & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                                        ? (IData)(vlSelf->__PVT__mshrs_13->__PVT__dirResult_set)
                                                                        : 0U) 
                                                                      | (((0x4000U 
                                                                           & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                                           ? (IData)(vlSelf->__PVT__mshrs_14->__PVT__dirResult_set)
                                                                           : 0U) 
                                                                         | ((0x8000U 
                                                                             & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH))
                                                                             ? (IData)(vlSelf->__PVT__mshrs_15->__PVT__dirResult_set)
                                                                             : 0U))))))))))))));
    vlSelfRef.io_mshrTask_bits_mshrId = (((2U & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                           ? 1U : 0U) 
                                         | ((((4U & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                               ? 2U
                                               : 0U) 
                                             | ((8U 
                                                 & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                 ? 3U
                                                 : 0U)) 
                                            | (((0x10U 
                                                 & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                 ? 4U
                                                 : 0U) 
                                               | (((0x20U 
                                                    & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                    ? 5U
                                                    : 0U) 
                                                  | (((0x40U 
                                                       & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                       ? 6U
                                                       : 0U) 
                                                     | (((0x80U 
                                                          & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                          ? 7U
                                                          : 0U) 
                                                        | (((0x100U 
                                                             & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                             ? 8U
                                                             : 0U) 
                                                           | (((0x200U 
                                                                & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                ? 9U
                                                                : 0U) 
                                                              | (((0x400U 
                                                                   & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                   ? 0xaU
                                                                   : 0U) 
                                                                 | (((0x800U 
                                                                      & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                      ? 0xbU
                                                                      : 0U) 
                                                                    | (((0x1000U 
                                                                         & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                         ? 0xcU
                                                                         : 0U) 
                                                                       | (((0x2000U 
                                                                            & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                            ? 0xdU
                                                                            : 0U) 
                                                                          | (((0x4000U 
                                                                               & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                               ? 0xeU
                                                                               : 0U) 
                                                                             | ((0x8000U 
                                                                                & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                                 ? 0xfU
                                                                                 : 0U))))))))))))));
    vlSelfRef.io_mshrTask_bits_way = ((((1U & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                         ? (IData)(vlSelf->__PVT__mshrs_0->__PVT__dirResult_way)
                                         : 0U) | ((2U 
                                                   & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                   ? (IData)(vlSelf->__PVT__mshrs_1->__PVT__dirResult_way)
                                                   : 0U)) 
                                      | ((((4U & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? (IData)(vlSelf->__PVT__mshrs_2->__PVT__dirResult_way)
                                            : 0U) | 
                                          ((8U & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? (IData)(vlSelf->__PVT__mshrs_3->__PVT__dirResult_way)
                                            : 0U)) 
                                         | (((0x10U 
                                              & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                              ? (IData)(vlSelf->__PVT__mshrs_4->__PVT__dirResult_way)
                                              : 0U) 
                                            | (((0x20U 
                                                 & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                 ? (IData)(vlSelf->__PVT__mshrs_5->__PVT__dirResult_way)
                                                 : 0U) 
                                               | (((0x40U 
                                                    & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                    ? (IData)(vlSelf->__PVT__mshrs_6->__PVT__dirResult_way)
                                                    : 0U) 
                                                  | (((0x80U 
                                                       & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                       ? (IData)(vlSelf->__PVT__mshrs_7->__PVT__dirResult_way)
                                                       : 0U) 
                                                     | (((0x100U 
                                                          & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                          ? (IData)(vlSelf->__PVT__mshrs_8->__PVT__dirResult_way)
                                                          : 0U) 
                                                        | (((0x200U 
                                                             & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                             ? (IData)(vlSelf->__PVT__mshrs_9->__PVT__dirResult_way)
                                                             : 0U) 
                                                           | (((0x400U 
                                                                & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                ? (IData)(vlSelf->__PVT__mshrs_10->__PVT__dirResult_way)
                                                                : 0U) 
                                                              | (((0x800U 
                                                                   & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                   ? (IData)(vlSelf->__PVT__mshrs_11->__PVT__dirResult_way)
                                                                   : 0U) 
                                                                 | (((0x1000U 
                                                                      & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                      ? (IData)(vlSelf->__PVT__mshrs_12->__PVT__dirResult_way)
                                                                      : 0U) 
                                                                    | (((0x2000U 
                                                                         & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                         ? (IData)(vlSelf->__PVT__mshrs_13->__PVT__dirResult_way)
                                                                         : 0U) 
                                                                       | (((0x4000U 
                                                                            & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                            ? (IData)(vlSelf->__PVT__mshrs_14->__PVT__dirResult_way)
                                                                            : 0U) 
                                                                          | ((0x8000U 
                                                                              & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                              ? (IData)(vlSelf->__PVT__mshrs_15->__PVT__dirResult_way)
                                                                              : 0U))))))))))))));
    vlSelfRef.io_mshrTask_bits_reqSource = ((((1U & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                               ? (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_reqSource)
                                               : 0U) 
                                             | ((2U 
                                                 & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                 ? (IData)(vlSelf->__PVT__mshrs_1->__PVT__req_reqSource)
                                                 : 0U)) 
                                            | ((((4U 
                                                  & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                  ? (IData)(vlSelf->__PVT__mshrs_2->__PVT__req_reqSource)
                                                  : 0U) 
                                                | ((8U 
                                                    & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                    ? (IData)(vlSelf->__PVT__mshrs_3->__PVT__req_reqSource)
                                                    : 0U)) 
                                               | (((0x10U 
                                                    & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                    ? (IData)(vlSelf->__PVT__mshrs_4->__PVT__req_reqSource)
                                                    : 0U) 
                                                  | (((0x20U 
                                                       & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                       ? (IData)(vlSelf->__PVT__mshrs_5->__PVT__req_reqSource)
                                                       : 0U) 
                                                     | (((0x40U 
                                                          & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                          ? (IData)(vlSelf->__PVT__mshrs_6->__PVT__req_reqSource)
                                                          : 0U) 
                                                        | (((0x80U 
                                                             & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                             ? (IData)(vlSelf->__PVT__mshrs_7->__PVT__req_reqSource)
                                                             : 0U) 
                                                           | (((0x100U 
                                                                & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                ? (IData)(vlSelf->__PVT__mshrs_8->__PVT__req_reqSource)
                                                                : 0U) 
                                                              | (((0x200U 
                                                                   & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                   ? (IData)(vlSelf->__PVT__mshrs_9->__PVT__req_reqSource)
                                                                   : 0U) 
                                                                 | (((0x400U 
                                                                      & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                      ? (IData)(vlSelf->__PVT__mshrs_10->__PVT__req_reqSource)
                                                                      : 0U) 
                                                                    | (((0x800U 
                                                                         & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                         ? (IData)(vlSelf->__PVT__mshrs_11->__PVT__req_reqSource)
                                                                         : 0U) 
                                                                       | (((0x1000U 
                                                                            & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                            ? (IData)(vlSelf->__PVT__mshrs_12->__PVT__req_reqSource)
                                                                            : 0U) 
                                                                          | (((0x2000U 
                                                                               & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                               ? (IData)(vlSelf->__PVT__mshrs_13->__PVT__req_reqSource)
                                                                               : 0U) 
                                                                             | (((0x4000U 
                                                                                & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                                 ? (IData)(vlSelf->__PVT__mshrs_14->__PVT__req_reqSource)
                                                                                 : 0U) 
                                                                                | ((0x8000U 
                                                                                & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                                 ? (IData)(vlSelf->__PVT__mshrs_15->__PVT__req_reqSource)
                                                                                 : 0U))))))))))))));
    vlSelfRef.io_mshrTask_bits_alias = ((((1U & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                           ? ((IData)(vlSelf->__PVT__mshrs_0->__VdfgRegularize_h47ff5784_2_9)
                                               ? (IData)(vlSelf->__PVT__mshrs_0->__PVT___io_tasks_mainpipe_bits_T_1_alias)
                                               : 0U)
                                           : 0U) | 
                                         ((2U & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                           ? ((IData)(vlSelf->__PVT__mshrs_1->__VdfgRegularize_h47ff5784_2_9)
                                               ? (IData)(vlSelf->__PVT__mshrs_1->__PVT___io_tasks_mainpipe_bits_T_1_alias)
                                               : 0U)
                                           : 0U)) | 
                                        ((((4U & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? ((IData)(vlSelf->__PVT__mshrs_2->__VdfgRegularize_h47ff5784_2_9)
                                                ? (IData)(vlSelf->__PVT__mshrs_2->__PVT___io_tasks_mainpipe_bits_T_1_alias)
                                                : 0U)
                                            : 0U) | 
                                          ((8U & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? ((IData)(vlSelf->__PVT__mshrs_3->__VdfgRegularize_h47ff5784_2_9)
                                                ? (IData)(vlSelf->__PVT__mshrs_3->__PVT___io_tasks_mainpipe_bits_T_1_alias)
                                                : 0U)
                                            : 0U)) 
                                         | (((0x10U 
                                              & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                              ? ((IData)(vlSelf->__PVT__mshrs_4->__VdfgRegularize_h47ff5784_2_9)
                                                  ? (IData)(vlSelf->__PVT__mshrs_4->__PVT___io_tasks_mainpipe_bits_T_1_alias)
                                                  : 0U)
                                              : 0U) 
                                            | (((0x20U 
                                                 & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__mshrs_5->__VdfgRegularize_h47ff5784_2_9)
                                                  ? (IData)(vlSelf->__PVT__mshrs_5->__PVT___io_tasks_mainpipe_bits_T_1_alias)
                                                  : 0U)
                                                 : 0U) 
                                               | (((0x40U 
                                                    & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__mshrs_6->__VdfgRegularize_h47ff5784_2_9)
                                                     ? (IData)(vlSelf->__PVT__mshrs_6->__PVT___io_tasks_mainpipe_bits_T_1_alias)
                                                     : 0U)
                                                    : 0U) 
                                                  | (((0x80U 
                                                       & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__mshrs_7->__VdfgRegularize_h47ff5784_2_9)
                                                        ? (IData)(vlSelf->__PVT__mshrs_7->__PVT___io_tasks_mainpipe_bits_T_1_alias)
                                                        : 0U)
                                                       : 0U) 
                                                     | (((0x100U 
                                                          & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                          ? 
                                                         ((IData)(vlSelf->__PVT__mshrs_8->__VdfgRegularize_h47ff5784_2_9)
                                                           ? (IData)(vlSelf->__PVT__mshrs_8->__PVT___io_tasks_mainpipe_bits_T_1_alias)
                                                           : 0U)
                                                          : 0U) 
                                                        | (((0x200U 
                                                             & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                             ? 
                                                            ((IData)(vlSelf->__PVT__mshrs_9->__VdfgRegularize_h47ff5784_2_9)
                                                              ? (IData)(vlSelf->__PVT__mshrs_9->__PVT___io_tasks_mainpipe_bits_T_1_alias)
                                                              : 0U)
                                                             : 0U) 
                                                           | (((0x400U 
                                                                & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                ? 
                                                               ((IData)(vlSelf->__PVT__mshrs_10->__VdfgRegularize_h47ff5784_2_9)
                                                                 ? (IData)(vlSelf->__PVT__mshrs_10->__PVT___io_tasks_mainpipe_bits_T_1_alias)
                                                                 : 0U)
                                                                : 0U) 
                                                              | (((0x800U 
                                                                   & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                   ? 
                                                                  ((IData)(vlSelf->__PVT__mshrs_11->__VdfgRegularize_h47ff5784_2_9)
                                                                    ? (IData)(vlSelf->__PVT__mshrs_11->__PVT___io_tasks_mainpipe_bits_T_1_alias)
                                                                    : 0U)
                                                                   : 0U) 
                                                                 | (((0x1000U 
                                                                      & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                      ? 
                                                                     ((IData)(vlSelf->__PVT__mshrs_12->__VdfgRegularize_h47ff5784_2_9)
                                                                       ? (IData)(vlSelf->__PVT__mshrs_12->__PVT___io_tasks_mainpipe_bits_T_1_alias)
                                                                       : 0U)
                                                                      : 0U) 
                                                                    | (((0x2000U 
                                                                         & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                         ? 
                                                                        ((IData)(vlSelf->__PVT__mshrs_13->__VdfgRegularize_h47ff5784_2_9)
                                                                          ? (IData)(vlSelf->__PVT__mshrs_13->__PVT___io_tasks_mainpipe_bits_T_1_alias)
                                                                          : 0U)
                                                                         : 0U) 
                                                                       | (((0x4000U 
                                                                            & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                            ? 
                                                                           ((IData)(vlSelf->__PVT__mshrs_14->__VdfgRegularize_h47ff5784_2_9)
                                                                             ? (IData)(vlSelf->__PVT__mshrs_14->__PVT___io_tasks_mainpipe_bits_T_1_alias)
                                                                             : 0U)
                                                                            : 0U) 
                                                                          | ((0x8000U 
                                                                              & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                              ? 
                                                                             ((IData)(vlSelf->__PVT__mshrs_15->__VdfgRegularize_h47ff5784_2_9)
                                                                               ? (IData)(vlSelf->__PVT__mshrs_15->__PVT___io_tasks_mainpipe_bits_T_1_alias)
                                                                               : 0U)
                                                                              : 0U))))))))))))));
    io_mshrTask_bits_size = (1U & (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                    & ((~ (IData)(vlSelf->__PVT__mshrs_0->__VdfgRegularize_h47ff5784_2_9)) 
                                       & (~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__mp_probeack_valid)))) 
                                   | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                        >> 1U) & ((~ (IData)(vlSelf->__PVT__mshrs_1->__VdfgRegularize_h47ff5784_2_9)) 
                                                  & (~ (IData)(vlSelf->__PVT__mshrs_1->__PVT__mp_probeack_valid)))) 
                                      | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                           >> 2U) & 
                                          ((~ (IData)(vlSelf->__PVT__mshrs_2->__VdfgRegularize_h47ff5784_2_9)) 
                                           & (~ (IData)(vlSelf->__PVT__mshrs_2->__PVT__mp_probeack_valid)))) 
                                         | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                              >> 3U) 
                                             & ((~ (IData)(vlSelf->__PVT__mshrs_3->__VdfgRegularize_h47ff5784_2_9)) 
                                                & (~ (IData)(vlSelf->__PVT__mshrs_3->__PVT__mp_probeack_valid)))) 
                                            | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                 >> 4U) 
                                                & ((~ (IData)(vlSelf->__PVT__mshrs_4->__VdfgRegularize_h47ff5784_2_9)) 
                                                   & (~ (IData)(vlSelf->__PVT__mshrs_4->__PVT__mp_probeack_valid)))) 
                                               | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                    >> 5U) 
                                                   & ((~ (IData)(vlSelf->__PVT__mshrs_5->__VdfgRegularize_h47ff5784_2_9)) 
                                                      & (~ (IData)(vlSelf->__PVT__mshrs_5->__PVT__mp_probeack_valid)))) 
                                                  | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                       >> 6U) 
                                                      & ((~ (IData)(vlSelf->__PVT__mshrs_6->__VdfgRegularize_h47ff5784_2_9)) 
                                                         & (~ (IData)(vlSelf->__PVT__mshrs_6->__PVT__mp_probeack_valid)))) 
                                                     | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                          >> 7U) 
                                                         & ((~ (IData)(vlSelf->__PVT__mshrs_7->__VdfgRegularize_h47ff5784_2_9)) 
                                                            & (~ (IData)(vlSelf->__PVT__mshrs_7->__PVT__mp_probeack_valid)))) 
                                                        | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                             >> 8U) 
                                                            & ((~ (IData)(vlSelf->__PVT__mshrs_8->__VdfgRegularize_h47ff5784_2_9)) 
                                                               & (~ (IData)(vlSelf->__PVT__mshrs_8->__PVT__mp_probeack_valid)))) 
                                                           | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                >> 9U) 
                                                               & ((~ (IData)(vlSelf->__PVT__mshrs_9->__VdfgRegularize_h47ff5784_2_9)) 
                                                                  & (~ (IData)(vlSelf->__PVT__mshrs_9->__PVT__mp_probeack_valid)))) 
                                                              | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                   >> 0xaU) 
                                                                  & ((~ (IData)(vlSelf->__PVT__mshrs_10->__VdfgRegularize_h47ff5784_2_9)) 
                                                                     & (~ (IData)(vlSelf->__PVT__mshrs_10->__PVT__mp_probeack_valid)))) 
                                                                 | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                      >> 0xbU) 
                                                                     & ((~ (IData)(vlSelf->__PVT__mshrs_11->__VdfgRegularize_h47ff5784_2_9)) 
                                                                        & (~ (IData)(vlSelf->__PVT__mshrs_11->__PVT__mp_probeack_valid)))) 
                                                                    | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                         >> 0xcU) 
                                                                        & ((~ (IData)(vlSelf->__PVT__mshrs_12->__VdfgRegularize_h47ff5784_2_9)) 
                                                                           & (~ (IData)(vlSelf->__PVT__mshrs_12->__PVT__mp_probeack_valid)))) 
                                                                       | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                            >> 0xdU) 
                                                                           & ((~ (IData)(vlSelf->__PVT__mshrs_13->__VdfgRegularize_h47ff5784_2_9)) 
                                                                              & (~ (IData)(vlSelf->__PVT__mshrs_13->__PVT__mp_probeack_valid)))) 
                                                                          | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                               >> 0xeU) 
                                                                              & ((~ (IData)(vlSelf->__PVT__mshrs_14->__VdfgRegularize_h47ff5784_2_9)) 
                                                                                & (~ (IData)(vlSelf->__PVT__mshrs_14->__PVT__mp_probeack_valid)))) 
                                                                             | (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xfU) 
                                                                                & ((~ (IData)(vlSelf->__PVT__mshrs_15->__VdfgRegularize_h47ff5784_2_9)) 
                                                                                & (~ (IData)(vlSelf->__PVT__mshrs_15->__PVT__mp_probeack_valid))))))))))))))))))));
    vlSelfRef.io_mshrTask_bits_metaWen = (1U & (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                 & ((~ (IData)(vlSelf->__PVT__mshrs_0->__VdfgRegularize_h47ff5784_2_9)) 
                                                    | (IData)(vlSelf->__PVT__mshrs_0->__PVT__mp_grant_valid))) 
                                                | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                     >> 1U) 
                                                    & ((~ (IData)(vlSelf->__PVT__mshrs_1->__VdfgRegularize_h47ff5784_2_9)) 
                                                       | (IData)(vlSelf->__PVT__mshrs_1->__PVT__mp_grant_valid))) 
                                                   | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                        >> 2U) 
                                                       & ((~ (IData)(vlSelf->__PVT__mshrs_2->__VdfgRegularize_h47ff5784_2_9)) 
                                                          | (IData)(vlSelf->__PVT__mshrs_2->__PVT__mp_grant_valid))) 
                                                      | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                           >> 3U) 
                                                          & ((~ (IData)(vlSelf->__PVT__mshrs_3->__VdfgRegularize_h47ff5784_2_9)) 
                                                             | (IData)(vlSelf->__PVT__mshrs_3->__PVT__mp_grant_valid))) 
                                                         | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                              >> 4U) 
                                                             & ((~ (IData)(vlSelf->__PVT__mshrs_4->__VdfgRegularize_h47ff5784_2_9)) 
                                                                | (IData)(vlSelf->__PVT__mshrs_4->__PVT__mp_grant_valid))) 
                                                            | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                 >> 5U) 
                                                                & ((~ (IData)(vlSelf->__PVT__mshrs_5->__VdfgRegularize_h47ff5784_2_9)) 
                                                                   | (IData)(vlSelf->__PVT__mshrs_5->__PVT__mp_grant_valid))) 
                                                               | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                    >> 6U) 
                                                                   & ((~ (IData)(vlSelf->__PVT__mshrs_6->__VdfgRegularize_h47ff5784_2_9)) 
                                                                      | (IData)(vlSelf->__PVT__mshrs_6->__PVT__mp_grant_valid))) 
                                                                  | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                       >> 7U) 
                                                                      & ((~ (IData)(vlSelf->__PVT__mshrs_7->__VdfgRegularize_h47ff5784_2_9)) 
                                                                         | (IData)(vlSelf->__PVT__mshrs_7->__PVT__mp_grant_valid))) 
                                                                     | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                          >> 8U) 
                                                                         & ((~ (IData)(vlSelf->__PVT__mshrs_8->__VdfgRegularize_h47ff5784_2_9)) 
                                                                            | (IData)(vlSelf->__PVT__mshrs_8->__PVT__mp_grant_valid))) 
                                                                        | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                             >> 9U) 
                                                                            & ((~ (IData)(vlSelf->__PVT__mshrs_9->__VdfgRegularize_h47ff5784_2_9)) 
                                                                               | (IData)(vlSelf->__PVT__mshrs_9->__PVT__mp_grant_valid))) 
                                                                           | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xaU) 
                                                                               & ((~ (IData)(vlSelf->__PVT__mshrs_10->__VdfgRegularize_h47ff5784_2_9)) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_10->__PVT__mp_grant_valid))) 
                                                                              | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xbU) 
                                                                                & ((~ (IData)(vlSelf->__PVT__mshrs_11->__VdfgRegularize_h47ff5784_2_9)) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_11->__PVT__mp_grant_valid))) 
                                                                                | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xcU) 
                                                                                & ((~ (IData)(vlSelf->__PVT__mshrs_12->__VdfgRegularize_h47ff5784_2_9)) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_12->__PVT__mp_grant_valid))) 
                                                                                | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xdU) 
                                                                                & ((~ (IData)(vlSelf->__PVT__mshrs_13->__VdfgRegularize_h47ff5784_2_9)) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_13->__PVT__mp_grant_valid))) 
                                                                                | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xeU) 
                                                                                & ((~ (IData)(vlSelf->__PVT__mshrs_14->__VdfgRegularize_h47ff5784_2_9)) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_14->__PVT__mp_grant_valid))) 
                                                                                | (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xfU) 
                                                                                & ((~ (IData)(vlSelf->__PVT__mshrs_15->__VdfgRegularize_h47ff5784_2_9)) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_15->__PVT__mp_grant_valid)))))))))))))))))));
    io_mshrTask_bits_wayMask = ((((1U & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                   ? ((IData)(vlSelf->__PVT__mshrs_0->__VdfgRegularize_h47ff5784_2_9)
                                       ? 0U : ((IData)(vlSelf->__PVT__mshrs_0->__PVT__mp_probeack_valid)
                                                ? 0U
                                                : 0xfU))
                                   : 0U) | ((2U & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                             ? ((IData)(vlSelf->__PVT__mshrs_1->__VdfgRegularize_h47ff5784_2_9)
                                                 ? 0U
                                                 : 
                                                ((IData)(vlSelf->__PVT__mshrs_1->__PVT__mp_probeack_valid)
                                                  ? 0U
                                                  : 0xfU))
                                             : 0U)) 
                                | ((((4U & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                      ? ((IData)(vlSelf->__PVT__mshrs_2->__VdfgRegularize_h47ff5784_2_9)
                                          ? 0U : ((IData)(vlSelf->__PVT__mshrs_2->__PVT__mp_probeack_valid)
                                                   ? 0U
                                                   : 0xfU))
                                      : 0U) | ((8U 
                                                & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                ? ((IData)(vlSelf->__PVT__mshrs_3->__VdfgRegularize_h47ff5784_2_9)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->__PVT__mshrs_3->__PVT__mp_probeack_valid)
                                                     ? 0U
                                                     : 0xfU))
                                                : 0U)) 
                                   | (((0x10U & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                        ? ((IData)(vlSelf->__PVT__mshrs_4->__VdfgRegularize_h47ff5784_2_9)
                                            ? 0U : 
                                           ((IData)(vlSelf->__PVT__mshrs_4->__PVT__mp_probeack_valid)
                                             ? 0U : 0xfU))
                                        : 0U) | (((0x20U 
                                                   & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__mshrs_5->__VdfgRegularize_h47ff5784_2_9)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->__PVT__mshrs_5->__PVT__mp_probeack_valid)
                                                     ? 0U
                                                     : 0xfU))
                                                   : 0U) 
                                                 | (((0x40U 
                                                      & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                      ? 
                                                     ((IData)(vlSelf->__PVT__mshrs_6->__VdfgRegularize_h47ff5784_2_9)
                                                       ? 0U
                                                       : 
                                                      ((IData)(vlSelf->__PVT__mshrs_6->__PVT__mp_probeack_valid)
                                                        ? 0U
                                                        : 0xfU))
                                                      : 0U) 
                                                    | (((0x80U 
                                                         & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                         ? 
                                                        ((IData)(vlSelf->__PVT__mshrs_7->__VdfgRegularize_h47ff5784_2_9)
                                                          ? 0U
                                                          : 
                                                         ((IData)(vlSelf->__PVT__mshrs_7->__PVT__mp_probeack_valid)
                                                           ? 0U
                                                           : 0xfU))
                                                         : 0U) 
                                                       | (((0x100U 
                                                            & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                            ? 
                                                           ((IData)(vlSelf->__PVT__mshrs_8->__VdfgRegularize_h47ff5784_2_9)
                                                             ? 0U
                                                             : 
                                                            ((IData)(vlSelf->__PVT__mshrs_8->__PVT__mp_probeack_valid)
                                                              ? 0U
                                                              : 0xfU))
                                                            : 0U) 
                                                          | (((0x200U 
                                                               & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                               ? 
                                                              ((IData)(vlSelf->__PVT__mshrs_9->__VdfgRegularize_h47ff5784_2_9)
                                                                ? 0U
                                                                : 
                                                               ((IData)(vlSelf->__PVT__mshrs_9->__PVT__mp_probeack_valid)
                                                                 ? 0U
                                                                 : 0xfU))
                                                               : 0U) 
                                                             | (((0x400U 
                                                                  & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                  ? 
                                                                 ((IData)(vlSelf->__PVT__mshrs_10->__VdfgRegularize_h47ff5784_2_9)
                                                                   ? 0U
                                                                   : 
                                                                  ((IData)(vlSelf->__PVT__mshrs_10->__PVT__mp_probeack_valid)
                                                                    ? 0U
                                                                    : 0xfU))
                                                                  : 0U) 
                                                                | (((0x800U 
                                                                     & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                     ? 
                                                                    ((IData)(vlSelf->__PVT__mshrs_11->__VdfgRegularize_h47ff5784_2_9)
                                                                      ? 0U
                                                                      : 
                                                                     ((IData)(vlSelf->__PVT__mshrs_11->__PVT__mp_probeack_valid)
                                                                       ? 0U
                                                                       : 0xfU))
                                                                     : 0U) 
                                                                   | (((0x1000U 
                                                                        & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                        ? 
                                                                       ((IData)(vlSelf->__PVT__mshrs_12->__VdfgRegularize_h47ff5784_2_9)
                                                                         ? 0U
                                                                         : 
                                                                        ((IData)(vlSelf->__PVT__mshrs_12->__PVT__mp_probeack_valid)
                                                                          ? 0U
                                                                          : 0xfU))
                                                                        : 0U) 
                                                                      | (((0x2000U 
                                                                           & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                           ? 
                                                                          ((IData)(vlSelf->__PVT__mshrs_13->__VdfgRegularize_h47ff5784_2_9)
                                                                            ? 0U
                                                                            : 
                                                                           ((IData)(vlSelf->__PVT__mshrs_13->__PVT__mp_probeack_valid)
                                                                             ? 0U
                                                                             : 0xfU))
                                                                           : 0U) 
                                                                         | (((0x4000U 
                                                                              & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                              ? 
                                                                             ((IData)(vlSelf->__PVT__mshrs_14->__VdfgRegularize_h47ff5784_2_9)
                                                                               ? 0U
                                                                               : 
                                                                              ((IData)(vlSelf->__PVT__mshrs_14->__PVT__mp_probeack_valid)
                                                                                ? 0U
                                                                                : 0xfU))
                                                                              : 0U) 
                                                                            | ((0x8000U 
                                                                                & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                                ? 
                                                                               ((IData)(vlSelf->__PVT__mshrs_15->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((IData)(vlSelf->__PVT__mshrs_15->__PVT__mp_probeack_valid)
                                                                                 ? 0U
                                                                                 : 0xfU))
                                                                                : 0U))))))))))))));
    vlSelfRef.io_mshrTask_bits_sourceId = ((((1U & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                              ? ((IData)(vlSelf->__PVT__mshrs_0->__VdfgRegularize_h47ff5784_2_9)
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__mshrs_0->__PVT__mp_grant_valid)
                                                   ? (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_sourceId)
                                                   : 0U)
                                                  : 0U)
                                              : 0U) 
                                            | ((2U 
                                                & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                ? ((IData)(vlSelf->__PVT__mshrs_1->__VdfgRegularize_h47ff5784_2_9)
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__mshrs_1->__PVT__mp_grant_valid)
                                                     ? (IData)(vlSelf->__PVT__mshrs_1->__PVT__req_sourceId)
                                                     : 0U)
                                                    : 0U)
                                                : 0U)) 
                                           | ((((4U 
                                                 & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__mshrs_2->__VdfgRegularize_h47ff5784_2_9)
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__mshrs_2->__PVT__mp_grant_valid)
                                                   ? (IData)(vlSelf->__PVT__mshrs_2->__PVT__req_sourceId)
                                                   : 0U)
                                                  : 0U)
                                                 : 0U) 
                                               | ((8U 
                                                   & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__mshrs_3->__VdfgRegularize_h47ff5784_2_9)
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__mshrs_3->__PVT__mp_grant_valid)
                                                     ? (IData)(vlSelf->__PVT__mshrs_3->__PVT__req_sourceId)
                                                     : 0U)
                                                    : 0U)
                                                   : 0U)) 
                                              | (((0x10U 
                                                   & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__mshrs_4->__VdfgRegularize_h47ff5784_2_9)
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__mshrs_4->__PVT__mp_grant_valid)
                                                     ? (IData)(vlSelf->__PVT__mshrs_4->__PVT__req_sourceId)
                                                     : 0U)
                                                    : 0U)
                                                   : 0U) 
                                                 | (((0x20U 
                                                      & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                      ? 
                                                     ((IData)(vlSelf->__PVT__mshrs_5->__VdfgRegularize_h47ff5784_2_9)
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__mshrs_5->__PVT__mp_grant_valid)
                                                        ? (IData)(vlSelf->__PVT__mshrs_5->__PVT__req_sourceId)
                                                        : 0U)
                                                       : 0U)
                                                      : 0U) 
                                                    | (((0x40U 
                                                         & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                         ? 
                                                        ((IData)(vlSelf->__PVT__mshrs_6->__VdfgRegularize_h47ff5784_2_9)
                                                          ? 
                                                         ((IData)(vlSelf->__PVT__mshrs_6->__PVT__mp_grant_valid)
                                                           ? (IData)(vlSelf->__PVT__mshrs_6->__PVT__req_sourceId)
                                                           : 0U)
                                                          : 0U)
                                                         : 0U) 
                                                       | (((0x80U 
                                                            & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                            ? 
                                                           ((IData)(vlSelf->__PVT__mshrs_7->__VdfgRegularize_h47ff5784_2_9)
                                                             ? 
                                                            ((IData)(vlSelf->__PVT__mshrs_7->__PVT__mp_grant_valid)
                                                              ? (IData)(vlSelf->__PVT__mshrs_7->__PVT__req_sourceId)
                                                              : 0U)
                                                             : 0U)
                                                            : 0U) 
                                                          | (((0x100U 
                                                               & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                               ? 
                                                              ((IData)(vlSelf->__PVT__mshrs_8->__VdfgRegularize_h47ff5784_2_9)
                                                                ? 
                                                               ((IData)(vlSelf->__PVT__mshrs_8->__PVT__mp_grant_valid)
                                                                 ? (IData)(vlSelf->__PVT__mshrs_8->__PVT__req_sourceId)
                                                                 : 0U)
                                                                : 0U)
                                                               : 0U) 
                                                             | (((0x200U 
                                                                  & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                  ? 
                                                                 ((IData)(vlSelf->__PVT__mshrs_9->__VdfgRegularize_h47ff5784_2_9)
                                                                   ? 
                                                                  ((IData)(vlSelf->__PVT__mshrs_9->__PVT__mp_grant_valid)
                                                                    ? (IData)(vlSelf->__PVT__mshrs_9->__PVT__req_sourceId)
                                                                    : 0U)
                                                                   : 0U)
                                                                  : 0U) 
                                                                | (((0x400U 
                                                                     & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                     ? 
                                                                    ((IData)(vlSelf->__PVT__mshrs_10->__VdfgRegularize_h47ff5784_2_9)
                                                                      ? 
                                                                     ((IData)(vlSelf->__PVT__mshrs_10->__PVT__mp_grant_valid)
                                                                       ? (IData)(vlSelf->__PVT__mshrs_10->__PVT__req_sourceId)
                                                                       : 0U)
                                                                      : 0U)
                                                                     : 0U) 
                                                                   | (((0x800U 
                                                                        & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                        ? 
                                                                       ((IData)(vlSelf->__PVT__mshrs_11->__VdfgRegularize_h47ff5784_2_9)
                                                                         ? 
                                                                        ((IData)(vlSelf->__PVT__mshrs_11->__PVT__mp_grant_valid)
                                                                          ? (IData)(vlSelf->__PVT__mshrs_11->__PVT__req_sourceId)
                                                                          : 0U)
                                                                         : 0U)
                                                                        : 0U) 
                                                                      | (((0x1000U 
                                                                           & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                           ? 
                                                                          ((IData)(vlSelf->__PVT__mshrs_12->__VdfgRegularize_h47ff5784_2_9)
                                                                            ? 
                                                                           ((IData)(vlSelf->__PVT__mshrs_12->__PVT__mp_grant_valid)
                                                                             ? (IData)(vlSelf->__PVT__mshrs_12->__PVT__req_sourceId)
                                                                             : 0U)
                                                                            : 0U)
                                                                           : 0U) 
                                                                         | (((0x2000U 
                                                                              & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                              ? 
                                                                             ((IData)(vlSelf->__PVT__mshrs_13->__VdfgRegularize_h47ff5784_2_9)
                                                                               ? 
                                                                              ((IData)(vlSelf->__PVT__mshrs_13->__PVT__mp_grant_valid)
                                                                                ? (IData)(vlSelf->__PVT__mshrs_13->__PVT__req_sourceId)
                                                                                : 0U)
                                                                               : 0U)
                                                                              : 0U) 
                                                                            | (((0x4000U 
                                                                                & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_14->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_14->__PVT__mp_grant_valid)
                                                                                 ? (IData)(vlSelf->__PVT__mshrs_14->__PVT__req_sourceId)
                                                                                 : 0U)
                                                                                 : 0U)
                                                                                 : 0U) 
                                                                               | ((0x8000U 
                                                                                & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_15->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_15->__PVT__mp_grant_valid)
                                                                                 ? (IData)(vlSelf->__PVT__mshrs_15->__PVT__req_sourceId)
                                                                                 : 0U)
                                                                                 : 0U)
                                                                                 : 0U))))))))))))));
    io_mshrTask_bits_aliasTask = (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                   & ((IData)(vlSelf->__PVT__mshrs_0->__VdfgRegularize_h47ff5784_2_9) 
                                      & ((IData)(vlSelf->__PVT__mshrs_0->__PVT__mp_grant_valid) 
                                         & (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_aliasTask)))) 
                                  | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                       >> 1U) & ((IData)(vlSelf->__PVT__mshrs_1->__VdfgRegularize_h47ff5784_2_9) 
                                                 & ((IData)(vlSelf->__PVT__mshrs_1->__PVT__mp_grant_valid) 
                                                    & (IData)(vlSelf->__PVT__mshrs_1->__PVT__req_aliasTask)))) 
                                     | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                          >> 2U) & 
                                         ((IData)(vlSelf->__PVT__mshrs_2->__VdfgRegularize_h47ff5784_2_9) 
                                          & ((IData)(vlSelf->__PVT__mshrs_2->__PVT__mp_grant_valid) 
                                             & (IData)(vlSelf->__PVT__mshrs_2->__PVT__req_aliasTask)))) 
                                        | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                             >> 3U) 
                                            & ((IData)(vlSelf->__PVT__mshrs_3->__VdfgRegularize_h47ff5784_2_9) 
                                               & ((IData)(vlSelf->__PVT__mshrs_3->__PVT__mp_grant_valid) 
                                                  & (IData)(vlSelf->__PVT__mshrs_3->__PVT__req_aliasTask)))) 
                                           | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                >> 4U) 
                                               & ((IData)(vlSelf->__PVT__mshrs_4->__VdfgRegularize_h47ff5784_2_9) 
                                                  & ((IData)(vlSelf->__PVT__mshrs_4->__PVT__mp_grant_valid) 
                                                     & (IData)(vlSelf->__PVT__mshrs_4->__PVT__req_aliasTask)))) 
                                              | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                   >> 5U) 
                                                  & ((IData)(vlSelf->__PVT__mshrs_5->__VdfgRegularize_h47ff5784_2_9) 
                                                     & ((IData)(vlSelf->__PVT__mshrs_5->__PVT__mp_grant_valid) 
                                                        & (IData)(vlSelf->__PVT__mshrs_5->__PVT__req_aliasTask)))) 
                                                 | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                      >> 6U) 
                                                     & ((IData)(vlSelf->__PVT__mshrs_6->__VdfgRegularize_h47ff5784_2_9) 
                                                        & ((IData)(vlSelf->__PVT__mshrs_6->__PVT__mp_grant_valid) 
                                                           & (IData)(vlSelf->__PVT__mshrs_6->__PVT__req_aliasTask)))) 
                                                    | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                         >> 7U) 
                                                        & ((IData)(vlSelf->__PVT__mshrs_7->__VdfgRegularize_h47ff5784_2_9) 
                                                           & ((IData)(vlSelf->__PVT__mshrs_7->__PVT__mp_grant_valid) 
                                                              & (IData)(vlSelf->__PVT__mshrs_7->__PVT__req_aliasTask)))) 
                                                       | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                            >> 8U) 
                                                           & ((IData)(vlSelf->__PVT__mshrs_8->__VdfgRegularize_h47ff5784_2_9) 
                                                              & ((IData)(vlSelf->__PVT__mshrs_8->__PVT__mp_grant_valid) 
                                                                 & (IData)(vlSelf->__PVT__mshrs_8->__PVT__req_aliasTask)))) 
                                                          | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                               >> 9U) 
                                                              & ((IData)(vlSelf->__PVT__mshrs_9->__VdfgRegularize_h47ff5784_2_9) 
                                                                 & ((IData)(vlSelf->__PVT__mshrs_9->__PVT__mp_grant_valid) 
                                                                    & (IData)(vlSelf->__PVT__mshrs_9->__PVT__req_aliasTask)))) 
                                                             | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                  >> 0xaU) 
                                                                 & ((IData)(vlSelf->__PVT__mshrs_10->__VdfgRegularize_h47ff5784_2_9) 
                                                                    & ((IData)(vlSelf->__PVT__mshrs_10->__PVT__mp_grant_valid) 
                                                                       & (IData)(vlSelf->__PVT__mshrs_10->__PVT__req_aliasTask)))) 
                                                                | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                     >> 0xbU) 
                                                                    & ((IData)(vlSelf->__PVT__mshrs_11->__VdfgRegularize_h47ff5784_2_9) 
                                                                       & ((IData)(vlSelf->__PVT__mshrs_11->__PVT__mp_grant_valid) 
                                                                          & (IData)(vlSelf->__PVT__mshrs_11->__PVT__req_aliasTask)))) 
                                                                   | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                        >> 0xcU) 
                                                                       & ((IData)(vlSelf->__PVT__mshrs_12->__VdfgRegularize_h47ff5784_2_9) 
                                                                          & ((IData)(vlSelf->__PVT__mshrs_12->__PVT__mp_grant_valid) 
                                                                             & (IData)(vlSelf->__PVT__mshrs_12->__PVT__req_aliasTask)))) 
                                                                      | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                           >> 0xdU) 
                                                                          & ((IData)(vlSelf->__PVT__mshrs_13->__VdfgRegularize_h47ff5784_2_9) 
                                                                             & ((IData)(vlSelf->__PVT__mshrs_13->__PVT__mp_grant_valid) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_13->__PVT__req_aliasTask)))) 
                                                                         | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                              >> 0xeU) 
                                                                             & ((IData)(vlSelf->__PVT__mshrs_14->__VdfgRegularize_h47ff5784_2_9) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_14->__PVT__mp_grant_valid) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_14->__PVT__req_aliasTask)))) 
                                                                            | (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xfU) 
                                                                               & ((IData)(vlSelf->__PVT__mshrs_15->__VdfgRegularize_h47ff5784_2_9) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_15->__PVT__mp_grant_valid) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_15->__PVT__req_aliasTask)))))))))))))))))));
    vlSelfRef.io_mshrTask_bits_dirty = (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                         & ((IData)(vlSelf->__PVT__mshrs_0->__VdfgRegularize_h47ff5784_2_9)
                                             ? ((~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__mp_grant_valid)) 
                                                & (IData)(vlSelf->__PVT__mshrs_0->__PVT__mp_release_dirty))
                                             : (IData)(vlSelf->__PVT__mshrs_0->__PVT__mp_release_dirty))) 
                                        | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                             >> 1U) 
                                            & ((IData)(vlSelf->__PVT__mshrs_1->__VdfgRegularize_h47ff5784_2_9)
                                                ? (
                                                   (~ (IData)(vlSelf->__PVT__mshrs_1->__PVT__mp_grant_valid)) 
                                                   & (IData)(vlSelf->__PVT__mshrs_1->__PVT__mp_release_dirty))
                                                : (IData)(vlSelf->__PVT__mshrs_1->__PVT__mp_release_dirty))) 
                                           | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                >> 2U) 
                                               & ((IData)(vlSelf->__PVT__mshrs_2->__VdfgRegularize_h47ff5784_2_9)
                                                   ? 
                                                  ((~ (IData)(vlSelf->__PVT__mshrs_2->__PVT__mp_grant_valid)) 
                                                   & (IData)(vlSelf->__PVT__mshrs_2->__PVT__mp_release_dirty))
                                                   : (IData)(vlSelf->__PVT__mshrs_2->__PVT__mp_release_dirty))) 
                                              | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                   >> 3U) 
                                                  & ((IData)(vlSelf->__PVT__mshrs_3->__VdfgRegularize_h47ff5784_2_9)
                                                      ? 
                                                     ((~ (IData)(vlSelf->__PVT__mshrs_3->__PVT__mp_grant_valid)) 
                                                      & (IData)(vlSelf->__PVT__mshrs_3->__PVT__mp_release_dirty))
                                                      : (IData)(vlSelf->__PVT__mshrs_3->__PVT__mp_release_dirty))) 
                                                 | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                      >> 4U) 
                                                     & ((IData)(vlSelf->__PVT__mshrs_4->__VdfgRegularize_h47ff5784_2_9)
                                                         ? 
                                                        ((~ (IData)(vlSelf->__PVT__mshrs_4->__PVT__mp_grant_valid)) 
                                                         & (IData)(vlSelf->__PVT__mshrs_4->__PVT__mp_release_dirty))
                                                         : (IData)(vlSelf->__PVT__mshrs_4->__PVT__mp_release_dirty))) 
                                                    | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                         >> 5U) 
                                                        & ((IData)(vlSelf->__PVT__mshrs_5->__VdfgRegularize_h47ff5784_2_9)
                                                            ? 
                                                           ((~ (IData)(vlSelf->__PVT__mshrs_5->__PVT__mp_grant_valid)) 
                                                            & (IData)(vlSelf->__PVT__mshrs_5->__PVT__mp_release_dirty))
                                                            : (IData)(vlSelf->__PVT__mshrs_5->__PVT__mp_release_dirty))) 
                                                       | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                            >> 6U) 
                                                           & ((IData)(vlSelf->__PVT__mshrs_6->__VdfgRegularize_h47ff5784_2_9)
                                                               ? 
                                                              ((~ (IData)(vlSelf->__PVT__mshrs_6->__PVT__mp_grant_valid)) 
                                                               & (IData)(vlSelf->__PVT__mshrs_6->__PVT__mp_release_dirty))
                                                               : (IData)(vlSelf->__PVT__mshrs_6->__PVT__mp_release_dirty))) 
                                                          | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                               >> 7U) 
                                                              & ((IData)(vlSelf->__PVT__mshrs_7->__VdfgRegularize_h47ff5784_2_9)
                                                                  ? 
                                                                 ((~ (IData)(vlSelf->__PVT__mshrs_7->__PVT__mp_grant_valid)) 
                                                                  & (IData)(vlSelf->__PVT__mshrs_7->__PVT__mp_release_dirty))
                                                                  : (IData)(vlSelf->__PVT__mshrs_7->__PVT__mp_release_dirty))) 
                                                             | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                  >> 8U) 
                                                                 & ((IData)(vlSelf->__PVT__mshrs_8->__VdfgRegularize_h47ff5784_2_9)
                                                                     ? 
                                                                    ((~ (IData)(vlSelf->__PVT__mshrs_8->__PVT__mp_grant_valid)) 
                                                                     & (IData)(vlSelf->__PVT__mshrs_8->__PVT__mp_release_dirty))
                                                                     : (IData)(vlSelf->__PVT__mshrs_8->__PVT__mp_release_dirty))) 
                                                                | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                     >> 9U) 
                                                                    & ((IData)(vlSelf->__PVT__mshrs_9->__VdfgRegularize_h47ff5784_2_9)
                                                                        ? 
                                                                       ((~ (IData)(vlSelf->__PVT__mshrs_9->__PVT__mp_grant_valid)) 
                                                                        & (IData)(vlSelf->__PVT__mshrs_9->__PVT__mp_release_dirty))
                                                                        : (IData)(vlSelf->__PVT__mshrs_9->__PVT__mp_release_dirty))) 
                                                                   | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                        >> 0xaU) 
                                                                       & ((IData)(vlSelf->__PVT__mshrs_10->__VdfgRegularize_h47ff5784_2_9)
                                                                           ? 
                                                                          ((~ (IData)(vlSelf->__PVT__mshrs_10->__PVT__mp_grant_valid)) 
                                                                           & (IData)(vlSelf->__PVT__mshrs_10->__PVT__mp_release_dirty))
                                                                           : (IData)(vlSelf->__PVT__mshrs_10->__PVT__mp_release_dirty))) 
                                                                      | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                           >> 0xbU) 
                                                                          & ((IData)(vlSelf->__PVT__mshrs_11->__VdfgRegularize_h47ff5784_2_9)
                                                                              ? 
                                                                             ((~ (IData)(vlSelf->__PVT__mshrs_11->__PVT__mp_grant_valid)) 
                                                                              & (IData)(vlSelf->__PVT__mshrs_11->__PVT__mp_release_dirty))
                                                                              : (IData)(vlSelf->__PVT__mshrs_11->__PVT__mp_release_dirty))) 
                                                                         | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                              >> 0xcU) 
                                                                             & ((IData)(vlSelf->__PVT__mshrs_12->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((~ (IData)(vlSelf->__PVT__mshrs_12->__PVT__mp_grant_valid)) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_12->__PVT__mp_release_dirty))
                                                                                 : (IData)(vlSelf->__PVT__mshrs_12->__PVT__mp_release_dirty))) 
                                                                            | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xdU) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_13->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((~ (IData)(vlSelf->__PVT__mshrs_13->__PVT__mp_grant_valid)) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_13->__PVT__mp_release_dirty))
                                                                                 : (IData)(vlSelf->__PVT__mshrs_13->__PVT__mp_release_dirty))) 
                                                                               | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xeU) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_14->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((~ (IData)(vlSelf->__PVT__mshrs_14->__PVT__mp_grant_valid)) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_14->__PVT__mp_release_dirty))
                                                                                 : (IData)(vlSelf->__PVT__mshrs_14->__PVT__mp_release_dirty))) 
                                                                                | (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xfU) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_15->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((~ (IData)(vlSelf->__PVT__mshrs_15->__PVT__mp_grant_valid)) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_15->__PVT__mp_release_dirty))
                                                                                 : (IData)(vlSelf->__PVT__mshrs_15->__PVT__mp_release_dirty))))))))))))))))));
    vlSelfRef.io_mshrTask_bits_meta_alias = ((((1U 
                                                & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                ? ((IData)(vlSelf->__PVT__mshrs_0->__VdfgRegularize_h47ff5784_2_9)
                                                    ? (IData)(vlSelf->__PVT__mshrs_0->__PVT___io_tasks_mainpipe_bits_T_1_alias)
                                                    : (IData)(vlSelf->__PVT__mshrs_0->__PVT__dirResult_meta_alias))
                                                : 0U) 
                                              | ((2U 
                                                  & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__mshrs_1->__VdfgRegularize_h47ff5784_2_9)
                                                   ? (IData)(vlSelf->__PVT__mshrs_1->__PVT___io_tasks_mainpipe_bits_T_1_alias)
                                                   : (IData)(vlSelf->__PVT__mshrs_1->__PVT__dirResult_meta_alias))
                                                  : 0U)) 
                                             | ((((4U 
                                                   & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__mshrs_2->__VdfgRegularize_h47ff5784_2_9)
                                                    ? (IData)(vlSelf->__PVT__mshrs_2->__PVT___io_tasks_mainpipe_bits_T_1_alias)
                                                    : (IData)(vlSelf->__PVT__mshrs_2->__PVT__dirResult_meta_alias))
                                                   : 0U) 
                                                 | ((8U 
                                                     & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__mshrs_3->__VdfgRegularize_h47ff5784_2_9)
                                                      ? (IData)(vlSelf->__PVT__mshrs_3->__PVT___io_tasks_mainpipe_bits_T_1_alias)
                                                      : (IData)(vlSelf->__PVT__mshrs_3->__PVT__dirResult_meta_alias))
                                                     : 0U)) 
                                                | (((0x10U 
                                                     & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__mshrs_4->__VdfgRegularize_h47ff5784_2_9)
                                                      ? (IData)(vlSelf->__PVT__mshrs_4->__PVT___io_tasks_mainpipe_bits_T_1_alias)
                                                      : (IData)(vlSelf->__PVT__mshrs_4->__PVT__dirResult_meta_alias))
                                                     : 0U) 
                                                   | (((0x20U 
                                                        & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                        ? 
                                                       ((IData)(vlSelf->__PVT__mshrs_5->__VdfgRegularize_h47ff5784_2_9)
                                                         ? (IData)(vlSelf->__PVT__mshrs_5->__PVT___io_tasks_mainpipe_bits_T_1_alias)
                                                         : (IData)(vlSelf->__PVT__mshrs_5->__PVT__dirResult_meta_alias))
                                                        : 0U) 
                                                      | (((0x40U 
                                                           & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                           ? 
                                                          ((IData)(vlSelf->__PVT__mshrs_6->__VdfgRegularize_h47ff5784_2_9)
                                                            ? (IData)(vlSelf->__PVT__mshrs_6->__PVT___io_tasks_mainpipe_bits_T_1_alias)
                                                            : (IData)(vlSelf->__PVT__mshrs_6->__PVT__dirResult_meta_alias))
                                                           : 0U) 
                                                         | (((0x80U 
                                                              & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                              ? 
                                                             ((IData)(vlSelf->__PVT__mshrs_7->__VdfgRegularize_h47ff5784_2_9)
                                                               ? (IData)(vlSelf->__PVT__mshrs_7->__PVT___io_tasks_mainpipe_bits_T_1_alias)
                                                               : (IData)(vlSelf->__PVT__mshrs_7->__PVT__dirResult_meta_alias))
                                                              : 0U) 
                                                            | (((0x100U 
                                                                 & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                 ? 
                                                                ((IData)(vlSelf->__PVT__mshrs_8->__VdfgRegularize_h47ff5784_2_9)
                                                                  ? (IData)(vlSelf->__PVT__mshrs_8->__PVT___io_tasks_mainpipe_bits_T_1_alias)
                                                                  : (IData)(vlSelf->__PVT__mshrs_8->__PVT__dirResult_meta_alias))
                                                                 : 0U) 
                                                               | (((0x200U 
                                                                    & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                    ? 
                                                                   ((IData)(vlSelf->__PVT__mshrs_9->__VdfgRegularize_h47ff5784_2_9)
                                                                     ? (IData)(vlSelf->__PVT__mshrs_9->__PVT___io_tasks_mainpipe_bits_T_1_alias)
                                                                     : (IData)(vlSelf->__PVT__mshrs_9->__PVT__dirResult_meta_alias))
                                                                    : 0U) 
                                                                  | (((0x400U 
                                                                       & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                       ? 
                                                                      ((IData)(vlSelf->__PVT__mshrs_10->__VdfgRegularize_h47ff5784_2_9)
                                                                        ? (IData)(vlSelf->__PVT__mshrs_10->__PVT___io_tasks_mainpipe_bits_T_1_alias)
                                                                        : (IData)(vlSelf->__PVT__mshrs_10->__PVT__dirResult_meta_alias))
                                                                       : 0U) 
                                                                     | (((0x800U 
                                                                          & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                          ? 
                                                                         ((IData)(vlSelf->__PVT__mshrs_11->__VdfgRegularize_h47ff5784_2_9)
                                                                           ? (IData)(vlSelf->__PVT__mshrs_11->__PVT___io_tasks_mainpipe_bits_T_1_alias)
                                                                           : (IData)(vlSelf->__PVT__mshrs_11->__PVT__dirResult_meta_alias))
                                                                          : 0U) 
                                                                        | (((0x1000U 
                                                                             & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                             ? 
                                                                            ((IData)(vlSelf->__PVT__mshrs_12->__VdfgRegularize_h47ff5784_2_9)
                                                                              ? (IData)(vlSelf->__PVT__mshrs_12->__PVT___io_tasks_mainpipe_bits_T_1_alias)
                                                                              : (IData)(vlSelf->__PVT__mshrs_12->__PVT__dirResult_meta_alias))
                                                                             : 0U) 
                                                                           | (((0x2000U 
                                                                                & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                                ? 
                                                                               ((IData)(vlSelf->__PVT__mshrs_13->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? (IData)(vlSelf->__PVT__mshrs_13->__PVT___io_tasks_mainpipe_bits_T_1_alias)
                                                                                 : (IData)(vlSelf->__PVT__mshrs_13->__PVT__dirResult_meta_alias))
                                                                                : 0U) 
                                                                              | (((0x4000U 
                                                                                & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_14->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? (IData)(vlSelf->__PVT__mshrs_14->__PVT___io_tasks_mainpipe_bits_T_1_alias)
                                                                                 : (IData)(vlSelf->__PVT__mshrs_14->__PVT__dirResult_meta_alias))
                                                                                 : 0U) 
                                                                                | ((0x8000U 
                                                                                & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_15->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? (IData)(vlSelf->__PVT__mshrs_15->__PVT___io_tasks_mainpipe_bits_T_1_alias)
                                                                                 : (IData)(vlSelf->__PVT__mshrs_15->__PVT__dirResult_meta_alias))
                                                                                 : 0U))))))))))))));
    vlSelfRef.io_mshrTask_bits_tagWen = (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                          & ((IData)(vlSelf->__PVT__mshrs_0->__VdfgRegularize_h47ff5784_2_9) 
                                             & ((~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__dirResult_hit)) 
                                                & (IData)(vlSelf->__PVT__mshrs_0->__PVT__mp_grant_valid)))) 
                                         | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                              >> 1U) 
                                             & ((IData)(vlSelf->__PVT__mshrs_1->__VdfgRegularize_h47ff5784_2_9) 
                                                & ((~ (IData)(vlSelf->__PVT__mshrs_1->__PVT__dirResult_hit)) 
                                                   & (IData)(vlSelf->__PVT__mshrs_1->__PVT__mp_grant_valid)))) 
                                            | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                 >> 2U) 
                                                & ((IData)(vlSelf->__PVT__mshrs_2->__VdfgRegularize_h47ff5784_2_9) 
                                                   & ((~ (IData)(vlSelf->__PVT__mshrs_2->__PVT__dirResult_hit)) 
                                                      & (IData)(vlSelf->__PVT__mshrs_2->__PVT__mp_grant_valid)))) 
                                               | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                    >> 3U) 
                                                   & ((IData)(vlSelf->__PVT__mshrs_3->__VdfgRegularize_h47ff5784_2_9) 
                                                      & ((~ (IData)(vlSelf->__PVT__mshrs_3->__PVT__dirResult_hit)) 
                                                         & (IData)(vlSelf->__PVT__mshrs_3->__PVT__mp_grant_valid)))) 
                                                  | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                       >> 4U) 
                                                      & ((IData)(vlSelf->__PVT__mshrs_4->__VdfgRegularize_h47ff5784_2_9) 
                                                         & ((~ (IData)(vlSelf->__PVT__mshrs_4->__PVT__dirResult_hit)) 
                                                            & (IData)(vlSelf->__PVT__mshrs_4->__PVT__mp_grant_valid)))) 
                                                     | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                          >> 5U) 
                                                         & ((IData)(vlSelf->__PVT__mshrs_5->__VdfgRegularize_h47ff5784_2_9) 
                                                            & ((~ (IData)(vlSelf->__PVT__mshrs_5->__PVT__dirResult_hit)) 
                                                               & (IData)(vlSelf->__PVT__mshrs_5->__PVT__mp_grant_valid)))) 
                                                        | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                             >> 6U) 
                                                            & ((IData)(vlSelf->__PVT__mshrs_6->__VdfgRegularize_h47ff5784_2_9) 
                                                               & ((~ (IData)(vlSelf->__PVT__mshrs_6->__PVT__dirResult_hit)) 
                                                                  & (IData)(vlSelf->__PVT__mshrs_6->__PVT__mp_grant_valid)))) 
                                                           | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                >> 7U) 
                                                               & ((IData)(vlSelf->__PVT__mshrs_7->__VdfgRegularize_h47ff5784_2_9) 
                                                                  & ((~ (IData)(vlSelf->__PVT__mshrs_7->__PVT__dirResult_hit)) 
                                                                     & (IData)(vlSelf->__PVT__mshrs_7->__PVT__mp_grant_valid)))) 
                                                              | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                   >> 8U) 
                                                                  & ((IData)(vlSelf->__PVT__mshrs_8->__VdfgRegularize_h47ff5784_2_9) 
                                                                     & ((~ (IData)(vlSelf->__PVT__mshrs_8->__PVT__dirResult_hit)) 
                                                                        & (IData)(vlSelf->__PVT__mshrs_8->__PVT__mp_grant_valid)))) 
                                                                 | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                      >> 9U) 
                                                                     & ((IData)(vlSelf->__PVT__mshrs_9->__VdfgRegularize_h47ff5784_2_9) 
                                                                        & ((~ (IData)(vlSelf->__PVT__mshrs_9->__PVT__dirResult_hit)) 
                                                                           & (IData)(vlSelf->__PVT__mshrs_9->__PVT__mp_grant_valid)))) 
                                                                    | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                         >> 0xaU) 
                                                                        & ((IData)(vlSelf->__PVT__mshrs_10->__VdfgRegularize_h47ff5784_2_9) 
                                                                           & ((~ (IData)(vlSelf->__PVT__mshrs_10->__PVT__dirResult_hit)) 
                                                                              & (IData)(vlSelf->__PVT__mshrs_10->__PVT__mp_grant_valid)))) 
                                                                       | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                            >> 0xbU) 
                                                                           & ((IData)(vlSelf->__PVT__mshrs_11->__VdfgRegularize_h47ff5784_2_9) 
                                                                              & ((~ (IData)(vlSelf->__PVT__mshrs_11->__PVT__dirResult_hit)) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_11->__PVT__mp_grant_valid)))) 
                                                                          | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                               >> 0xcU) 
                                                                              & ((IData)(vlSelf->__PVT__mshrs_12->__VdfgRegularize_h47ff5784_2_9) 
                                                                                & ((~ (IData)(vlSelf->__PVT__mshrs_12->__PVT__dirResult_hit)) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_12->__PVT__mp_grant_valid)))) 
                                                                             | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xdU) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_13->__VdfgRegularize_h47ff5784_2_9) 
                                                                                & ((~ (IData)(vlSelf->__PVT__mshrs_13->__PVT__dirResult_hit)) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_13->__PVT__mp_grant_valid)))) 
                                                                                | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xeU) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_14->__VdfgRegularize_h47ff5784_2_9) 
                                                                                & ((~ (IData)(vlSelf->__PVT__mshrs_14->__PVT__dirResult_hit)) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_14->__PVT__mp_grant_valid)))) 
                                                                                | (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xfU) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_15->__VdfgRegularize_h47ff5784_2_9) 
                                                                                & ((~ (IData)(vlSelf->__PVT__mshrs_15->__PVT__dirResult_hit)) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_15->__PVT__mp_grant_valid)))))))))))))))))));
    vlSelfRef.io_mshrTask_bits_channel = ((((1U & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                             ? ((IData)(vlSelf->__PVT__mshrs_0->__VdfgRegularize_h47ff5784_2_9)
                                                 ? (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_channel)
                                                 : 
                                                ((IData)(vlSelf->__PVT__mshrs_0->__PVT__mp_probeack_valid)
                                                  ? (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_channel)
                                                  : (IData)(vlSelf->__PVT__mshrs_0->__PVT__task_channel)))
                                             : 0U) 
                                           | ((2U & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                               ? ((IData)(vlSelf->__PVT__mshrs_1->__VdfgRegularize_h47ff5784_2_9)
                                                   ? (IData)(vlSelf->__PVT__mshrs_1->__PVT__req_channel)
                                                   : 
                                                  ((IData)(vlSelf->__PVT__mshrs_1->__PVT__mp_probeack_valid)
                                                    ? (IData)(vlSelf->__PVT__mshrs_1->__PVT__req_channel)
                                                    : (IData)(vlSelf->__PVT__mshrs_1->__PVT__task_channel)))
                                               : 0U)) 
                                          | ((((4U 
                                                & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                ? ((IData)(vlSelf->__PVT__mshrs_2->__VdfgRegularize_h47ff5784_2_9)
                                                    ? (IData)(vlSelf->__PVT__mshrs_2->__PVT__req_channel)
                                                    : 
                                                   ((IData)(vlSelf->__PVT__mshrs_2->__PVT__mp_probeack_valid)
                                                     ? (IData)(vlSelf->__PVT__mshrs_2->__PVT__req_channel)
                                                     : (IData)(vlSelf->__PVT__mshrs_2->__PVT__task_channel)))
                                                : 0U) 
                                              | ((8U 
                                                  & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__mshrs_3->__VdfgRegularize_h47ff5784_2_9)
                                                   ? (IData)(vlSelf->__PVT__mshrs_3->__PVT__req_channel)
                                                   : 
                                                  ((IData)(vlSelf->__PVT__mshrs_3->__PVT__mp_probeack_valid)
                                                    ? (IData)(vlSelf->__PVT__mshrs_3->__PVT__req_channel)
                                                    : (IData)(vlSelf->__PVT__mshrs_3->__PVT__task_channel)))
                                                  : 0U)) 
                                             | (((0x10U 
                                                  & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__mshrs_4->__VdfgRegularize_h47ff5784_2_9)
                                                   ? (IData)(vlSelf->__PVT__mshrs_4->__PVT__req_channel)
                                                   : 
                                                  ((IData)(vlSelf->__PVT__mshrs_4->__PVT__mp_probeack_valid)
                                                    ? (IData)(vlSelf->__PVT__mshrs_4->__PVT__req_channel)
                                                    : (IData)(vlSelf->__PVT__mshrs_4->__PVT__task_channel)))
                                                  : 0U) 
                                                | (((0x20U 
                                                     & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__mshrs_5->__VdfgRegularize_h47ff5784_2_9)
                                                      ? (IData)(vlSelf->__PVT__mshrs_5->__PVT__req_channel)
                                                      : 
                                                     ((IData)(vlSelf->__PVT__mshrs_5->__PVT__mp_probeack_valid)
                                                       ? (IData)(vlSelf->__PVT__mshrs_5->__PVT__req_channel)
                                                       : (IData)(vlSelf->__PVT__mshrs_5->__PVT__task_channel)))
                                                     : 0U) 
                                                   | (((0x40U 
                                                        & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                        ? 
                                                       ((IData)(vlSelf->__PVT__mshrs_6->__VdfgRegularize_h47ff5784_2_9)
                                                         ? (IData)(vlSelf->__PVT__mshrs_6->__PVT__req_channel)
                                                         : 
                                                        ((IData)(vlSelf->__PVT__mshrs_6->__PVT__mp_probeack_valid)
                                                          ? (IData)(vlSelf->__PVT__mshrs_6->__PVT__req_channel)
                                                          : (IData)(vlSelf->__PVT__mshrs_6->__PVT__task_channel)))
                                                        : 0U) 
                                                      | (((0x80U 
                                                           & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                           ? 
                                                          ((IData)(vlSelf->__PVT__mshrs_7->__VdfgRegularize_h47ff5784_2_9)
                                                            ? (IData)(vlSelf->__PVT__mshrs_7->__PVT__req_channel)
                                                            : 
                                                           ((IData)(vlSelf->__PVT__mshrs_7->__PVT__mp_probeack_valid)
                                                             ? (IData)(vlSelf->__PVT__mshrs_7->__PVT__req_channel)
                                                             : (IData)(vlSelf->__PVT__mshrs_7->__PVT__task_channel)))
                                                           : 0U) 
                                                         | (((0x100U 
                                                              & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                              ? 
                                                             ((IData)(vlSelf->__PVT__mshrs_8->__VdfgRegularize_h47ff5784_2_9)
                                                               ? (IData)(vlSelf->__PVT__mshrs_8->__PVT__req_channel)
                                                               : 
                                                              ((IData)(vlSelf->__PVT__mshrs_8->__PVT__mp_probeack_valid)
                                                                ? (IData)(vlSelf->__PVT__mshrs_8->__PVT__req_channel)
                                                                : (IData)(vlSelf->__PVT__mshrs_8->__PVT__task_channel)))
                                                              : 0U) 
                                                            | (((0x200U 
                                                                 & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                 ? 
                                                                ((IData)(vlSelf->__PVT__mshrs_9->__VdfgRegularize_h47ff5784_2_9)
                                                                  ? (IData)(vlSelf->__PVT__mshrs_9->__PVT__req_channel)
                                                                  : 
                                                                 ((IData)(vlSelf->__PVT__mshrs_9->__PVT__mp_probeack_valid)
                                                                   ? (IData)(vlSelf->__PVT__mshrs_9->__PVT__req_channel)
                                                                   : (IData)(vlSelf->__PVT__mshrs_9->__PVT__task_channel)))
                                                                 : 0U) 
                                                               | (((0x400U 
                                                                    & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                    ? 
                                                                   ((IData)(vlSelf->__PVT__mshrs_10->__VdfgRegularize_h47ff5784_2_9)
                                                                     ? (IData)(vlSelf->__PVT__mshrs_10->__PVT__req_channel)
                                                                     : 
                                                                    ((IData)(vlSelf->__PVT__mshrs_10->__PVT__mp_probeack_valid)
                                                                      ? (IData)(vlSelf->__PVT__mshrs_10->__PVT__req_channel)
                                                                      : (IData)(vlSelf->__PVT__mshrs_10->__PVT__task_channel)))
                                                                    : 0U) 
                                                                  | (((0x800U 
                                                                       & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                       ? 
                                                                      ((IData)(vlSelf->__PVT__mshrs_11->__VdfgRegularize_h47ff5784_2_9)
                                                                        ? (IData)(vlSelf->__PVT__mshrs_11->__PVT__req_channel)
                                                                        : 
                                                                       ((IData)(vlSelf->__PVT__mshrs_11->__PVT__mp_probeack_valid)
                                                                         ? (IData)(vlSelf->__PVT__mshrs_11->__PVT__req_channel)
                                                                         : (IData)(vlSelf->__PVT__mshrs_11->__PVT__task_channel)))
                                                                       : 0U) 
                                                                     | (((0x1000U 
                                                                          & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                          ? 
                                                                         ((IData)(vlSelf->__PVT__mshrs_12->__VdfgRegularize_h47ff5784_2_9)
                                                                           ? (IData)(vlSelf->__PVT__mshrs_12->__PVT__req_channel)
                                                                           : 
                                                                          ((IData)(vlSelf->__PVT__mshrs_12->__PVT__mp_probeack_valid)
                                                                            ? (IData)(vlSelf->__PVT__mshrs_12->__PVT__req_channel)
                                                                            : (IData)(vlSelf->__PVT__mshrs_12->__PVT__task_channel)))
                                                                          : 0U) 
                                                                        | (((0x2000U 
                                                                             & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                             ? 
                                                                            ((IData)(vlSelf->__PVT__mshrs_13->__VdfgRegularize_h47ff5784_2_9)
                                                                              ? (IData)(vlSelf->__PVT__mshrs_13->__PVT__req_channel)
                                                                              : 
                                                                             ((IData)(vlSelf->__PVT__mshrs_13->__PVT__mp_probeack_valid)
                                                                               ? (IData)(vlSelf->__PVT__mshrs_13->__PVT__req_channel)
                                                                               : (IData)(vlSelf->__PVT__mshrs_13->__PVT__task_channel)))
                                                                             : 0U) 
                                                                           | (((0x4000U 
                                                                                & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                                ? 
                                                                               ((IData)(vlSelf->__PVT__mshrs_14->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? (IData)(vlSelf->__PVT__mshrs_14->__PVT__req_channel)
                                                                                 : 
                                                                                ((IData)(vlSelf->__PVT__mshrs_14->__PVT__mp_probeack_valid)
                                                                                 ? (IData)(vlSelf->__PVT__mshrs_14->__PVT__req_channel)
                                                                                 : (IData)(vlSelf->__PVT__mshrs_14->__PVT__task_channel)))
                                                                                : 0U) 
                                                                              | ((0x8000U 
                                                                                & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_15->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? (IData)(vlSelf->__PVT__mshrs_15->__PVT__req_channel)
                                                                                 : 
                                                                                ((IData)(vlSelf->__PVT__mshrs_15->__PVT__mp_probeack_valid)
                                                                                 ? (IData)(vlSelf->__PVT__mshrs_15->__PVT__req_channel)
                                                                                 : (IData)(vlSelf->__PVT__mshrs_15->__PVT__task_channel)))
                                                                                 : 0U))))))))))))));
    vlSelfRef.io_mshrTask_bits_set = ((((1U & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                         ? ((IData)(vlSelf->__PVT__mshrs_0->__VdfgRegularize_h47ff5784_2_9)
                                             ? (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_set)
                                             : ((IData)(vlSelf->__PVT__mshrs_0->__PVT__mp_probeack_valid)
                                                 ? (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_set)
                                                 : (IData)(vlSelf->__PVT__mshrs_0->__PVT__task_set)))
                                         : 0U) | ((2U 
                                                   & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__mshrs_1->__VdfgRegularize_h47ff5784_2_9)
                                                    ? (IData)(vlSelf->__PVT__mshrs_1->__PVT__req_set)
                                                    : 
                                                   ((IData)(vlSelf->__PVT__mshrs_1->__PVT__mp_probeack_valid)
                                                     ? (IData)(vlSelf->__PVT__mshrs_1->__PVT__req_set)
                                                     : (IData)(vlSelf->__PVT__mshrs_1->__PVT__task_set)))
                                                   : 0U)) 
                                      | ((((4U & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? ((IData)(vlSelf->__PVT__mshrs_2->__VdfgRegularize_h47ff5784_2_9)
                                                ? (IData)(vlSelf->__PVT__mshrs_2->__PVT__req_set)
                                                : ((IData)(vlSelf->__PVT__mshrs_2->__PVT__mp_probeack_valid)
                                                    ? (IData)(vlSelf->__PVT__mshrs_2->__PVT__req_set)
                                                    : (IData)(vlSelf->__PVT__mshrs_2->__PVT__task_set)))
                                            : 0U) | 
                                          ((8U & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? ((IData)(vlSelf->__PVT__mshrs_3->__VdfgRegularize_h47ff5784_2_9)
                                                ? (IData)(vlSelf->__PVT__mshrs_3->__PVT__req_set)
                                                : ((IData)(vlSelf->__PVT__mshrs_3->__PVT__mp_probeack_valid)
                                                    ? (IData)(vlSelf->__PVT__mshrs_3->__PVT__req_set)
                                                    : (IData)(vlSelf->__PVT__mshrs_3->__PVT__task_set)))
                                            : 0U)) 
                                         | (((0x10U 
                                              & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                              ? ((IData)(vlSelf->__PVT__mshrs_4->__VdfgRegularize_h47ff5784_2_9)
                                                  ? (IData)(vlSelf->__PVT__mshrs_4->__PVT__req_set)
                                                  : 
                                                 ((IData)(vlSelf->__PVT__mshrs_4->__PVT__mp_probeack_valid)
                                                   ? (IData)(vlSelf->__PVT__mshrs_4->__PVT__req_set)
                                                   : (IData)(vlSelf->__PVT__mshrs_4->__PVT__task_set)))
                                              : 0U) 
                                            | (((0x20U 
                                                 & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__mshrs_5->__VdfgRegularize_h47ff5784_2_9)
                                                  ? (IData)(vlSelf->__PVT__mshrs_5->__PVT__req_set)
                                                  : 
                                                 ((IData)(vlSelf->__PVT__mshrs_5->__PVT__mp_probeack_valid)
                                                   ? (IData)(vlSelf->__PVT__mshrs_5->__PVT__req_set)
                                                   : (IData)(vlSelf->__PVT__mshrs_5->__PVT__task_set)))
                                                 : 0U) 
                                               | (((0x40U 
                                                    & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__mshrs_6->__VdfgRegularize_h47ff5784_2_9)
                                                     ? (IData)(vlSelf->__PVT__mshrs_6->__PVT__req_set)
                                                     : 
                                                    ((IData)(vlSelf->__PVT__mshrs_6->__PVT__mp_probeack_valid)
                                                      ? (IData)(vlSelf->__PVT__mshrs_6->__PVT__req_set)
                                                      : (IData)(vlSelf->__PVT__mshrs_6->__PVT__task_set)))
                                                    : 0U) 
                                                  | (((0x80U 
                                                       & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__mshrs_7->__VdfgRegularize_h47ff5784_2_9)
                                                        ? (IData)(vlSelf->__PVT__mshrs_7->__PVT__req_set)
                                                        : 
                                                       ((IData)(vlSelf->__PVT__mshrs_7->__PVT__mp_probeack_valid)
                                                         ? (IData)(vlSelf->__PVT__mshrs_7->__PVT__req_set)
                                                         : (IData)(vlSelf->__PVT__mshrs_7->__PVT__task_set)))
                                                       : 0U) 
                                                     | (((0x100U 
                                                          & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                          ? 
                                                         ((IData)(vlSelf->__PVT__mshrs_8->__VdfgRegularize_h47ff5784_2_9)
                                                           ? (IData)(vlSelf->__PVT__mshrs_8->__PVT__req_set)
                                                           : 
                                                          ((IData)(vlSelf->__PVT__mshrs_8->__PVT__mp_probeack_valid)
                                                            ? (IData)(vlSelf->__PVT__mshrs_8->__PVT__req_set)
                                                            : (IData)(vlSelf->__PVT__mshrs_8->__PVT__task_set)))
                                                          : 0U) 
                                                        | (((0x200U 
                                                             & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                             ? 
                                                            ((IData)(vlSelf->__PVT__mshrs_9->__VdfgRegularize_h47ff5784_2_9)
                                                              ? (IData)(vlSelf->__PVT__mshrs_9->__PVT__req_set)
                                                              : 
                                                             ((IData)(vlSelf->__PVT__mshrs_9->__PVT__mp_probeack_valid)
                                                               ? (IData)(vlSelf->__PVT__mshrs_9->__PVT__req_set)
                                                               : (IData)(vlSelf->__PVT__mshrs_9->__PVT__task_set)))
                                                             : 0U) 
                                                           | (((0x400U 
                                                                & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                ? 
                                                               ((IData)(vlSelf->__PVT__mshrs_10->__VdfgRegularize_h47ff5784_2_9)
                                                                 ? (IData)(vlSelf->__PVT__mshrs_10->__PVT__req_set)
                                                                 : 
                                                                ((IData)(vlSelf->__PVT__mshrs_10->__PVT__mp_probeack_valid)
                                                                  ? (IData)(vlSelf->__PVT__mshrs_10->__PVT__req_set)
                                                                  : (IData)(vlSelf->__PVT__mshrs_10->__PVT__task_set)))
                                                                : 0U) 
                                                              | (((0x800U 
                                                                   & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                   ? 
                                                                  ((IData)(vlSelf->__PVT__mshrs_11->__VdfgRegularize_h47ff5784_2_9)
                                                                    ? (IData)(vlSelf->__PVT__mshrs_11->__PVT__req_set)
                                                                    : 
                                                                   ((IData)(vlSelf->__PVT__mshrs_11->__PVT__mp_probeack_valid)
                                                                     ? (IData)(vlSelf->__PVT__mshrs_11->__PVT__req_set)
                                                                     : (IData)(vlSelf->__PVT__mshrs_11->__PVT__task_set)))
                                                                   : 0U) 
                                                                 | (((0x1000U 
                                                                      & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                      ? 
                                                                     ((IData)(vlSelf->__PVT__mshrs_12->__VdfgRegularize_h47ff5784_2_9)
                                                                       ? (IData)(vlSelf->__PVT__mshrs_12->__PVT__req_set)
                                                                       : 
                                                                      ((IData)(vlSelf->__PVT__mshrs_12->__PVT__mp_probeack_valid)
                                                                        ? (IData)(vlSelf->__PVT__mshrs_12->__PVT__req_set)
                                                                        : (IData)(vlSelf->__PVT__mshrs_12->__PVT__task_set)))
                                                                      : 0U) 
                                                                    | (((0x2000U 
                                                                         & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                         ? 
                                                                        ((IData)(vlSelf->__PVT__mshrs_13->__VdfgRegularize_h47ff5784_2_9)
                                                                          ? (IData)(vlSelf->__PVT__mshrs_13->__PVT__req_set)
                                                                          : 
                                                                         ((IData)(vlSelf->__PVT__mshrs_13->__PVT__mp_probeack_valid)
                                                                           ? (IData)(vlSelf->__PVT__mshrs_13->__PVT__req_set)
                                                                           : (IData)(vlSelf->__PVT__mshrs_13->__PVT__task_set)))
                                                                         : 0U) 
                                                                       | (((0x4000U 
                                                                            & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                            ? 
                                                                           ((IData)(vlSelf->__PVT__mshrs_14->__VdfgRegularize_h47ff5784_2_9)
                                                                             ? (IData)(vlSelf->__PVT__mshrs_14->__PVT__req_set)
                                                                             : 
                                                                            ((IData)(vlSelf->__PVT__mshrs_14->__PVT__mp_probeack_valid)
                                                                              ? (IData)(vlSelf->__PVT__mshrs_14->__PVT__req_set)
                                                                              : (IData)(vlSelf->__PVT__mshrs_14->__PVT__task_set)))
                                                                            : 0U) 
                                                                          | ((0x8000U 
                                                                              & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                              ? 
                                                                             ((IData)(vlSelf->__PVT__mshrs_15->__VdfgRegularize_h47ff5784_2_9)
                                                                               ? (IData)(vlSelf->__PVT__mshrs_15->__PVT__req_set)
                                                                               : 
                                                                              ((IData)(vlSelf->__PVT__mshrs_15->__PVT__mp_probeack_valid)
                                                                                ? (IData)(vlSelf->__PVT__mshrs_15->__PVT__req_set)
                                                                                : (IData)(vlSelf->__PVT__mshrs_15->__PVT__task_set)))
                                                                              : 0U))))))))))))));
    vlSelfRef.io_mshrTask_bits_replTask = (1U & (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                  & ((IData)(vlSelf->__PVT__mshrs_0->__VdfgRegularize_h47ff5784_2_9)
                                                      ? 
                                                     ((~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__mp_grant_valid)) 
                                                      | (~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__dirResult_hit)))
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__mp_probeack_valid)))) 
                                                 | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                      >> 1U) 
                                                     & ((IData)(vlSelf->__PVT__mshrs_1->__VdfgRegularize_h47ff5784_2_9)
                                                         ? 
                                                        ((~ (IData)(vlSelf->__PVT__mshrs_1->__PVT__mp_grant_valid)) 
                                                         | (~ (IData)(vlSelf->__PVT__mshrs_1->__PVT__dirResult_hit)))
                                                         : 
                                                        (~ (IData)(vlSelf->__PVT__mshrs_1->__PVT__mp_probeack_valid)))) 
                                                    | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                         >> 2U) 
                                                        & ((IData)(vlSelf->__PVT__mshrs_2->__VdfgRegularize_h47ff5784_2_9)
                                                            ? 
                                                           ((~ (IData)(vlSelf->__PVT__mshrs_2->__PVT__mp_grant_valid)) 
                                                            | (~ (IData)(vlSelf->__PVT__mshrs_2->__PVT__dirResult_hit)))
                                                            : 
                                                           (~ (IData)(vlSelf->__PVT__mshrs_2->__PVT__mp_probeack_valid)))) 
                                                       | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                            >> 3U) 
                                                           & ((IData)(vlSelf->__PVT__mshrs_3->__VdfgRegularize_h47ff5784_2_9)
                                                               ? 
                                                              ((~ (IData)(vlSelf->__PVT__mshrs_3->__PVT__mp_grant_valid)) 
                                                               | (~ (IData)(vlSelf->__PVT__mshrs_3->__PVT__dirResult_hit)))
                                                               : 
                                                              (~ (IData)(vlSelf->__PVT__mshrs_3->__PVT__mp_probeack_valid)))) 
                                                          | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                               >> 4U) 
                                                              & ((IData)(vlSelf->__PVT__mshrs_4->__VdfgRegularize_h47ff5784_2_9)
                                                                  ? 
                                                                 ((~ (IData)(vlSelf->__PVT__mshrs_4->__PVT__mp_grant_valid)) 
                                                                  | (~ (IData)(vlSelf->__PVT__mshrs_4->__PVT__dirResult_hit)))
                                                                  : 
                                                                 (~ (IData)(vlSelf->__PVT__mshrs_4->__PVT__mp_probeack_valid)))) 
                                                             | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                  >> 5U) 
                                                                 & ((IData)(vlSelf->__PVT__mshrs_5->__VdfgRegularize_h47ff5784_2_9)
                                                                     ? 
                                                                    ((~ (IData)(vlSelf->__PVT__mshrs_5->__PVT__mp_grant_valid)) 
                                                                     | (~ (IData)(vlSelf->__PVT__mshrs_5->__PVT__dirResult_hit)))
                                                                     : 
                                                                    (~ (IData)(vlSelf->__PVT__mshrs_5->__PVT__mp_probeack_valid)))) 
                                                                | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                     >> 6U) 
                                                                    & ((IData)(vlSelf->__PVT__mshrs_6->__VdfgRegularize_h47ff5784_2_9)
                                                                        ? 
                                                                       ((~ (IData)(vlSelf->__PVT__mshrs_6->__PVT__mp_grant_valid)) 
                                                                        | (~ (IData)(vlSelf->__PVT__mshrs_6->__PVT__dirResult_hit)))
                                                                        : 
                                                                       (~ (IData)(vlSelf->__PVT__mshrs_6->__PVT__mp_probeack_valid)))) 
                                                                   | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                        >> 7U) 
                                                                       & ((IData)(vlSelf->__PVT__mshrs_7->__VdfgRegularize_h47ff5784_2_9)
                                                                           ? 
                                                                          ((~ (IData)(vlSelf->__PVT__mshrs_7->__PVT__mp_grant_valid)) 
                                                                           | (~ (IData)(vlSelf->__PVT__mshrs_7->__PVT__dirResult_hit)))
                                                                           : 
                                                                          (~ (IData)(vlSelf->__PVT__mshrs_7->__PVT__mp_probeack_valid)))) 
                                                                      | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                           >> 8U) 
                                                                          & ((IData)(vlSelf->__PVT__mshrs_8->__VdfgRegularize_h47ff5784_2_9)
                                                                              ? 
                                                                             ((~ (IData)(vlSelf->__PVT__mshrs_8->__PVT__mp_grant_valid)) 
                                                                              | (~ (IData)(vlSelf->__PVT__mshrs_8->__PVT__dirResult_hit)))
                                                                              : 
                                                                             (~ (IData)(vlSelf->__PVT__mshrs_8->__PVT__mp_probeack_valid)))) 
                                                                         | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                              >> 9U) 
                                                                             & ((IData)(vlSelf->__PVT__mshrs_9->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((~ (IData)(vlSelf->__PVT__mshrs_9->__PVT__mp_grant_valid)) 
                                                                                | (~ (IData)(vlSelf->__PVT__mshrs_9->__PVT__dirResult_hit)))
                                                                                 : 
                                                                                (~ (IData)(vlSelf->__PVT__mshrs_9->__PVT__mp_probeack_valid)))) 
                                                                            | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xaU) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_10->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((~ (IData)(vlSelf->__PVT__mshrs_10->__PVT__mp_grant_valid)) 
                                                                                | (~ (IData)(vlSelf->__PVT__mshrs_10->__PVT__dirResult_hit)))
                                                                                 : 
                                                                                (~ (IData)(vlSelf->__PVT__mshrs_10->__PVT__mp_probeack_valid)))) 
                                                                               | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xbU) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_11->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((~ (IData)(vlSelf->__PVT__mshrs_11->__PVT__mp_grant_valid)) 
                                                                                | (~ (IData)(vlSelf->__PVT__mshrs_11->__PVT__dirResult_hit)))
                                                                                 : 
                                                                                (~ (IData)(vlSelf->__PVT__mshrs_11->__PVT__mp_probeack_valid)))) 
                                                                                | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xcU) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_12->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((~ (IData)(vlSelf->__PVT__mshrs_12->__PVT__mp_grant_valid)) 
                                                                                | (~ (IData)(vlSelf->__PVT__mshrs_12->__PVT__dirResult_hit)))
                                                                                 : 
                                                                                (~ (IData)(vlSelf->__PVT__mshrs_12->__PVT__mp_probeack_valid)))) 
                                                                                | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xdU) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_13->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((~ (IData)(vlSelf->__PVT__mshrs_13->__PVT__mp_grant_valid)) 
                                                                                | (~ (IData)(vlSelf->__PVT__mshrs_13->__PVT__dirResult_hit)))
                                                                                 : 
                                                                                (~ (IData)(vlSelf->__PVT__mshrs_13->__PVT__mp_probeack_valid)))) 
                                                                                | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xeU) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_14->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((~ (IData)(vlSelf->__PVT__mshrs_14->__PVT__mp_grant_valid)) 
                                                                                | (~ (IData)(vlSelf->__PVT__mshrs_14->__PVT__dirResult_hit)))
                                                                                 : 
                                                                                (~ (IData)(vlSelf->__PVT__mshrs_14->__PVT__mp_probeack_valid)))) 
                                                                                | (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xfU) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_15->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((~ (IData)(vlSelf->__PVT__mshrs_15->__PVT__mp_grant_valid)) 
                                                                                | (~ (IData)(vlSelf->__PVT__mshrs_15->__PVT__dirResult_hit)))
                                                                                 : 
                                                                                (~ (IData)(vlSelf->__PVT__mshrs_15->__PVT__mp_probeack_valid))))))))))))))))))));
    vlSelfRef.io_mshrTask_bits_off = (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                       & ((IData)(vlSelf->__PVT__mshrs_0->__VdfgRegularize_h47ff5784_2_9)
                                           ? ((IData)(vlSelf->__PVT__mshrs_0->__PVT__mp_grant_valid) 
                                              & (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_off))
                                           : ((IData)(vlSelf->__PVT__mshrs_0->__PVT__mp_probeack_valid)
                                               ? (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_off)
                                               : (IData)(vlSelf->__PVT__mshrs_0->__PVT__task_off)))) 
                                      | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                           >> 1U) & 
                                          ((IData)(vlSelf->__PVT__mshrs_1->__VdfgRegularize_h47ff5784_2_9)
                                            ? ((IData)(vlSelf->__PVT__mshrs_1->__PVT__mp_grant_valid) 
                                               & (IData)(vlSelf->__PVT__mshrs_1->__PVT__req_off))
                                            : ((IData)(vlSelf->__PVT__mshrs_1->__PVT__mp_probeack_valid)
                                                ? (IData)(vlSelf->__PVT__mshrs_1->__PVT__req_off)
                                                : (IData)(vlSelf->__PVT__mshrs_1->__PVT__task_off)))) 
                                         | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                              >> 2U) 
                                             & ((IData)(vlSelf->__PVT__mshrs_2->__VdfgRegularize_h47ff5784_2_9)
                                                 ? 
                                                ((IData)(vlSelf->__PVT__mshrs_2->__PVT__mp_grant_valid) 
                                                 & (IData)(vlSelf->__PVT__mshrs_2->__PVT__req_off))
                                                 : 
                                                ((IData)(vlSelf->__PVT__mshrs_2->__PVT__mp_probeack_valid)
                                                  ? (IData)(vlSelf->__PVT__mshrs_2->__PVT__req_off)
                                                  : (IData)(vlSelf->__PVT__mshrs_2->__PVT__task_off)))) 
                                            | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->__PVT__mshrs_3->__VdfgRegularize_h47ff5784_2_9)
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__mshrs_3->__PVT__mp_grant_valid) 
                                                    & (IData)(vlSelf->__PVT__mshrs_3->__PVT__req_off))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__mshrs_3->__PVT__mp_probeack_valid)
                                                     ? (IData)(vlSelf->__PVT__mshrs_3->__PVT__req_off)
                                                     : (IData)(vlSelf->__PVT__mshrs_3->__PVT__task_off)))) 
                                               | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                    >> 4U) 
                                                   & ((IData)(vlSelf->__PVT__mshrs_4->__VdfgRegularize_h47ff5784_2_9)
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__mshrs_4->__PVT__mp_grant_valid) 
                                                       & (IData)(vlSelf->__PVT__mshrs_4->__PVT__req_off))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__mshrs_4->__PVT__mp_probeack_valid)
                                                        ? (IData)(vlSelf->__PVT__mshrs_4->__PVT__req_off)
                                                        : (IData)(vlSelf->__PVT__mshrs_4->__PVT__task_off)))) 
                                                  | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                       >> 5U) 
                                                      & ((IData)(vlSelf->__PVT__mshrs_5->__VdfgRegularize_h47ff5784_2_9)
                                                          ? 
                                                         ((IData)(vlSelf->__PVT__mshrs_5->__PVT__mp_grant_valid) 
                                                          & (IData)(vlSelf->__PVT__mshrs_5->__PVT__req_off))
                                                          : 
                                                         ((IData)(vlSelf->__PVT__mshrs_5->__PVT__mp_probeack_valid)
                                                           ? (IData)(vlSelf->__PVT__mshrs_5->__PVT__req_off)
                                                           : (IData)(vlSelf->__PVT__mshrs_5->__PVT__task_off)))) 
                                                     | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                          >> 6U) 
                                                         & ((IData)(vlSelf->__PVT__mshrs_6->__VdfgRegularize_h47ff5784_2_9)
                                                             ? 
                                                            ((IData)(vlSelf->__PVT__mshrs_6->__PVT__mp_grant_valid) 
                                                             & (IData)(vlSelf->__PVT__mshrs_6->__PVT__req_off))
                                                             : 
                                                            ((IData)(vlSelf->__PVT__mshrs_6->__PVT__mp_probeack_valid)
                                                              ? (IData)(vlSelf->__PVT__mshrs_6->__PVT__req_off)
                                                              : (IData)(vlSelf->__PVT__mshrs_6->__PVT__task_off)))) 
                                                        | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                             >> 7U) 
                                                            & ((IData)(vlSelf->__PVT__mshrs_7->__VdfgRegularize_h47ff5784_2_9)
                                                                ? 
                                                               ((IData)(vlSelf->__PVT__mshrs_7->__PVT__mp_grant_valid) 
                                                                & (IData)(vlSelf->__PVT__mshrs_7->__PVT__req_off))
                                                                : 
                                                               ((IData)(vlSelf->__PVT__mshrs_7->__PVT__mp_probeack_valid)
                                                                 ? (IData)(vlSelf->__PVT__mshrs_7->__PVT__req_off)
                                                                 : (IData)(vlSelf->__PVT__mshrs_7->__PVT__task_off)))) 
                                                           | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                >> 8U) 
                                                               & ((IData)(vlSelf->__PVT__mshrs_8->__VdfgRegularize_h47ff5784_2_9)
                                                                   ? 
                                                                  ((IData)(vlSelf->__PVT__mshrs_8->__PVT__mp_grant_valid) 
                                                                   & (IData)(vlSelf->__PVT__mshrs_8->__PVT__req_off))
                                                                   : 
                                                                  ((IData)(vlSelf->__PVT__mshrs_8->__PVT__mp_probeack_valid)
                                                                    ? (IData)(vlSelf->__PVT__mshrs_8->__PVT__req_off)
                                                                    : (IData)(vlSelf->__PVT__mshrs_8->__PVT__task_off)))) 
                                                              | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                   >> 9U) 
                                                                  & ((IData)(vlSelf->__PVT__mshrs_9->__VdfgRegularize_h47ff5784_2_9)
                                                                      ? 
                                                                     ((IData)(vlSelf->__PVT__mshrs_9->__PVT__mp_grant_valid) 
                                                                      & (IData)(vlSelf->__PVT__mshrs_9->__PVT__req_off))
                                                                      : 
                                                                     ((IData)(vlSelf->__PVT__mshrs_9->__PVT__mp_probeack_valid)
                                                                       ? (IData)(vlSelf->__PVT__mshrs_9->__PVT__req_off)
                                                                       : (IData)(vlSelf->__PVT__mshrs_9->__PVT__task_off)))) 
                                                                 | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                      >> 0xaU) 
                                                                     & ((IData)(vlSelf->__PVT__mshrs_10->__VdfgRegularize_h47ff5784_2_9)
                                                                         ? 
                                                                        ((IData)(vlSelf->__PVT__mshrs_10->__PVT__mp_grant_valid) 
                                                                         & (IData)(vlSelf->__PVT__mshrs_10->__PVT__req_off))
                                                                         : 
                                                                        ((IData)(vlSelf->__PVT__mshrs_10->__PVT__mp_probeack_valid)
                                                                          ? (IData)(vlSelf->__PVT__mshrs_10->__PVT__req_off)
                                                                          : (IData)(vlSelf->__PVT__mshrs_10->__PVT__task_off)))) 
                                                                    | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                         >> 0xbU) 
                                                                        & ((IData)(vlSelf->__PVT__mshrs_11->__VdfgRegularize_h47ff5784_2_9)
                                                                            ? 
                                                                           ((IData)(vlSelf->__PVT__mshrs_11->__PVT__mp_grant_valid) 
                                                                            & (IData)(vlSelf->__PVT__mshrs_11->__PVT__req_off))
                                                                            : 
                                                                           ((IData)(vlSelf->__PVT__mshrs_11->__PVT__mp_probeack_valid)
                                                                             ? (IData)(vlSelf->__PVT__mshrs_11->__PVT__req_off)
                                                                             : (IData)(vlSelf->__PVT__mshrs_11->__PVT__task_off)))) 
                                                                       | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                            >> 0xcU) 
                                                                           & ((IData)(vlSelf->__PVT__mshrs_12->__VdfgRegularize_h47ff5784_2_9)
                                                                               ? 
                                                                              ((IData)(vlSelf->__PVT__mshrs_12->__PVT__mp_grant_valid) 
                                                                               & (IData)(vlSelf->__PVT__mshrs_12->__PVT__req_off))
                                                                               : 
                                                                              ((IData)(vlSelf->__PVT__mshrs_12->__PVT__mp_probeack_valid)
                                                                                ? (IData)(vlSelf->__PVT__mshrs_12->__PVT__req_off)
                                                                                : (IData)(vlSelf->__PVT__mshrs_12->__PVT__task_off)))) 
                                                                          | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                               >> 0xdU) 
                                                                              & ((IData)(vlSelf->__PVT__mshrs_13->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_13->__PVT__mp_grant_valid) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_13->__PVT__req_off))
                                                                                 : 
                                                                                ((IData)(vlSelf->__PVT__mshrs_13->__PVT__mp_probeack_valid)
                                                                                 ? (IData)(vlSelf->__PVT__mshrs_13->__PVT__req_off)
                                                                                 : (IData)(vlSelf->__PVT__mshrs_13->__PVT__task_off)))) 
                                                                             | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xeU) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_14->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_14->__PVT__mp_grant_valid) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_14->__PVT__req_off))
                                                                                 : 
                                                                                ((IData)(vlSelf->__PVT__mshrs_14->__PVT__mp_probeack_valid)
                                                                                 ? (IData)(vlSelf->__PVT__mshrs_14->__PVT__req_off)
                                                                                 : (IData)(vlSelf->__PVT__mshrs_14->__PVT__task_off)))) 
                                                                                | (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xfU) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_15->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_15->__PVT__mp_grant_valid) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_15->__PVT__req_off))
                                                                                 : 
                                                                                ((IData)(vlSelf->__PVT__mshrs_15->__PVT__mp_probeack_valid)
                                                                                 ? (IData)(vlSelf->__PVT__mshrs_15->__PVT__req_off)
                                                                                 : (IData)(vlSelf->__PVT__mshrs_15->__PVT__task_off)))))))))))))))))));
    vlSelfRef.io_mshrTask_bits_tag = ((((1U & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                         ? ((IData)(vlSelf->__PVT__mshrs_0->__VdfgRegularize_h47ff5784_2_9)
                                             ? ((IData)(vlSelf->__PVT__mshrs_0->__PVT__mp_grant_valid)
                                                 ? (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_tag)
                                                 : (IData)(vlSelf->__PVT__mshrs_0->__PVT__dirResult_tag))
                                             : ((IData)(vlSelf->__PVT__mshrs_0->__PVT__mp_probeack_valid)
                                                 ? (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_tag)
                                                 : (IData)(vlSelf->__PVT__mshrs_0->__PVT__task_tag)))
                                         : 0U) | ((2U 
                                                   & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__mshrs_1->__VdfgRegularize_h47ff5784_2_9)
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__mshrs_1->__PVT__mp_grant_valid)
                                                     ? (IData)(vlSelf->__PVT__mshrs_1->__PVT__req_tag)
                                                     : (IData)(vlSelf->__PVT__mshrs_1->__PVT__dirResult_tag))
                                                    : 
                                                   ((IData)(vlSelf->__PVT__mshrs_1->__PVT__mp_probeack_valid)
                                                     ? (IData)(vlSelf->__PVT__mshrs_1->__PVT__req_tag)
                                                     : (IData)(vlSelf->__PVT__mshrs_1->__PVT__task_tag)))
                                                   : 0U)) 
                                      | ((((4U & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? ((IData)(vlSelf->__PVT__mshrs_2->__VdfgRegularize_h47ff5784_2_9)
                                                ? ((IData)(vlSelf->__PVT__mshrs_2->__PVT__mp_grant_valid)
                                                    ? (IData)(vlSelf->__PVT__mshrs_2->__PVT__req_tag)
                                                    : (IData)(vlSelf->__PVT__mshrs_2->__PVT__dirResult_tag))
                                                : ((IData)(vlSelf->__PVT__mshrs_2->__PVT__mp_probeack_valid)
                                                    ? (IData)(vlSelf->__PVT__mshrs_2->__PVT__req_tag)
                                                    : (IData)(vlSelf->__PVT__mshrs_2->__PVT__task_tag)))
                                            : 0U) | 
                                          ((8U & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? ((IData)(vlSelf->__PVT__mshrs_3->__VdfgRegularize_h47ff5784_2_9)
                                                ? ((IData)(vlSelf->__PVT__mshrs_3->__PVT__mp_grant_valid)
                                                    ? (IData)(vlSelf->__PVT__mshrs_3->__PVT__req_tag)
                                                    : (IData)(vlSelf->__PVT__mshrs_3->__PVT__dirResult_tag))
                                                : ((IData)(vlSelf->__PVT__mshrs_3->__PVT__mp_probeack_valid)
                                                    ? (IData)(vlSelf->__PVT__mshrs_3->__PVT__req_tag)
                                                    : (IData)(vlSelf->__PVT__mshrs_3->__PVT__task_tag)))
                                            : 0U)) 
                                         | (((0x10U 
                                              & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                              ? ((IData)(vlSelf->__PVT__mshrs_4->__VdfgRegularize_h47ff5784_2_9)
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__mshrs_4->__PVT__mp_grant_valid)
                                                   ? (IData)(vlSelf->__PVT__mshrs_4->__PVT__req_tag)
                                                   : (IData)(vlSelf->__PVT__mshrs_4->__PVT__dirResult_tag))
                                                  : 
                                                 ((IData)(vlSelf->__PVT__mshrs_4->__PVT__mp_probeack_valid)
                                                   ? (IData)(vlSelf->__PVT__mshrs_4->__PVT__req_tag)
                                                   : (IData)(vlSelf->__PVT__mshrs_4->__PVT__task_tag)))
                                              : 0U) 
                                            | (((0x20U 
                                                 & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__mshrs_5->__VdfgRegularize_h47ff5784_2_9)
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__mshrs_5->__PVT__mp_grant_valid)
                                                   ? (IData)(vlSelf->__PVT__mshrs_5->__PVT__req_tag)
                                                   : (IData)(vlSelf->__PVT__mshrs_5->__PVT__dirResult_tag))
                                                  : 
                                                 ((IData)(vlSelf->__PVT__mshrs_5->__PVT__mp_probeack_valid)
                                                   ? (IData)(vlSelf->__PVT__mshrs_5->__PVT__req_tag)
                                                   : (IData)(vlSelf->__PVT__mshrs_5->__PVT__task_tag)))
                                                 : 0U) 
                                               | (((0x40U 
                                                    & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__mshrs_6->__VdfgRegularize_h47ff5784_2_9)
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__mshrs_6->__PVT__mp_grant_valid)
                                                      ? (IData)(vlSelf->__PVT__mshrs_6->__PVT__req_tag)
                                                      : (IData)(vlSelf->__PVT__mshrs_6->__PVT__dirResult_tag))
                                                     : 
                                                    ((IData)(vlSelf->__PVT__mshrs_6->__PVT__mp_probeack_valid)
                                                      ? (IData)(vlSelf->__PVT__mshrs_6->__PVT__req_tag)
                                                      : (IData)(vlSelf->__PVT__mshrs_6->__PVT__task_tag)))
                                                    : 0U) 
                                                  | (((0x80U 
                                                       & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__mshrs_7->__VdfgRegularize_h47ff5784_2_9)
                                                        ? 
                                                       ((IData)(vlSelf->__PVT__mshrs_7->__PVT__mp_grant_valid)
                                                         ? (IData)(vlSelf->__PVT__mshrs_7->__PVT__req_tag)
                                                         : (IData)(vlSelf->__PVT__mshrs_7->__PVT__dirResult_tag))
                                                        : 
                                                       ((IData)(vlSelf->__PVT__mshrs_7->__PVT__mp_probeack_valid)
                                                         ? (IData)(vlSelf->__PVT__mshrs_7->__PVT__req_tag)
                                                         : (IData)(vlSelf->__PVT__mshrs_7->__PVT__task_tag)))
                                                       : 0U) 
                                                     | (((0x100U 
                                                          & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                          ? 
                                                         ((IData)(vlSelf->__PVT__mshrs_8->__VdfgRegularize_h47ff5784_2_9)
                                                           ? 
                                                          ((IData)(vlSelf->__PVT__mshrs_8->__PVT__mp_grant_valid)
                                                            ? (IData)(vlSelf->__PVT__mshrs_8->__PVT__req_tag)
                                                            : (IData)(vlSelf->__PVT__mshrs_8->__PVT__dirResult_tag))
                                                           : 
                                                          ((IData)(vlSelf->__PVT__mshrs_8->__PVT__mp_probeack_valid)
                                                            ? (IData)(vlSelf->__PVT__mshrs_8->__PVT__req_tag)
                                                            : (IData)(vlSelf->__PVT__mshrs_8->__PVT__task_tag)))
                                                          : 0U) 
                                                        | (((0x200U 
                                                             & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                             ? 
                                                            ((IData)(vlSelf->__PVT__mshrs_9->__VdfgRegularize_h47ff5784_2_9)
                                                              ? 
                                                             ((IData)(vlSelf->__PVT__mshrs_9->__PVT__mp_grant_valid)
                                                               ? (IData)(vlSelf->__PVT__mshrs_9->__PVT__req_tag)
                                                               : (IData)(vlSelf->__PVT__mshrs_9->__PVT__dirResult_tag))
                                                              : 
                                                             ((IData)(vlSelf->__PVT__mshrs_9->__PVT__mp_probeack_valid)
                                                               ? (IData)(vlSelf->__PVT__mshrs_9->__PVT__req_tag)
                                                               : (IData)(vlSelf->__PVT__mshrs_9->__PVT__task_tag)))
                                                             : 0U) 
                                                           | (((0x400U 
                                                                & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                ? 
                                                               ((IData)(vlSelf->__PVT__mshrs_10->__VdfgRegularize_h47ff5784_2_9)
                                                                 ? 
                                                                ((IData)(vlSelf->__PVT__mshrs_10->__PVT__mp_grant_valid)
                                                                  ? (IData)(vlSelf->__PVT__mshrs_10->__PVT__req_tag)
                                                                  : (IData)(vlSelf->__PVT__mshrs_10->__PVT__dirResult_tag))
                                                                 : 
                                                                ((IData)(vlSelf->__PVT__mshrs_10->__PVT__mp_probeack_valid)
                                                                  ? (IData)(vlSelf->__PVT__mshrs_10->__PVT__req_tag)
                                                                  : (IData)(vlSelf->__PVT__mshrs_10->__PVT__task_tag)))
                                                                : 0U) 
                                                              | (((0x800U 
                                                                   & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                   ? 
                                                                  ((IData)(vlSelf->__PVT__mshrs_11->__VdfgRegularize_h47ff5784_2_9)
                                                                    ? 
                                                                   ((IData)(vlSelf->__PVT__mshrs_11->__PVT__mp_grant_valid)
                                                                     ? (IData)(vlSelf->__PVT__mshrs_11->__PVT__req_tag)
                                                                     : (IData)(vlSelf->__PVT__mshrs_11->__PVT__dirResult_tag))
                                                                    : 
                                                                   ((IData)(vlSelf->__PVT__mshrs_11->__PVT__mp_probeack_valid)
                                                                     ? (IData)(vlSelf->__PVT__mshrs_11->__PVT__req_tag)
                                                                     : (IData)(vlSelf->__PVT__mshrs_11->__PVT__task_tag)))
                                                                   : 0U) 
                                                                 | (((0x1000U 
                                                                      & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                      ? 
                                                                     ((IData)(vlSelf->__PVT__mshrs_12->__VdfgRegularize_h47ff5784_2_9)
                                                                       ? 
                                                                      ((IData)(vlSelf->__PVT__mshrs_12->__PVT__mp_grant_valid)
                                                                        ? (IData)(vlSelf->__PVT__mshrs_12->__PVT__req_tag)
                                                                        : (IData)(vlSelf->__PVT__mshrs_12->__PVT__dirResult_tag))
                                                                       : 
                                                                      ((IData)(vlSelf->__PVT__mshrs_12->__PVT__mp_probeack_valid)
                                                                        ? (IData)(vlSelf->__PVT__mshrs_12->__PVT__req_tag)
                                                                        : (IData)(vlSelf->__PVT__mshrs_12->__PVT__task_tag)))
                                                                      : 0U) 
                                                                    | (((0x2000U 
                                                                         & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                         ? 
                                                                        ((IData)(vlSelf->__PVT__mshrs_13->__VdfgRegularize_h47ff5784_2_9)
                                                                          ? 
                                                                         ((IData)(vlSelf->__PVT__mshrs_13->__PVT__mp_grant_valid)
                                                                           ? (IData)(vlSelf->__PVT__mshrs_13->__PVT__req_tag)
                                                                           : (IData)(vlSelf->__PVT__mshrs_13->__PVT__dirResult_tag))
                                                                          : 
                                                                         ((IData)(vlSelf->__PVT__mshrs_13->__PVT__mp_probeack_valid)
                                                                           ? (IData)(vlSelf->__PVT__mshrs_13->__PVT__req_tag)
                                                                           : (IData)(vlSelf->__PVT__mshrs_13->__PVT__task_tag)))
                                                                         : 0U) 
                                                                       | (((0x4000U 
                                                                            & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                            ? 
                                                                           ((IData)(vlSelf->__PVT__mshrs_14->__VdfgRegularize_h47ff5784_2_9)
                                                                             ? 
                                                                            ((IData)(vlSelf->__PVT__mshrs_14->__PVT__mp_grant_valid)
                                                                              ? (IData)(vlSelf->__PVT__mshrs_14->__PVT__req_tag)
                                                                              : (IData)(vlSelf->__PVT__mshrs_14->__PVT__dirResult_tag))
                                                                             : 
                                                                            ((IData)(vlSelf->__PVT__mshrs_14->__PVT__mp_probeack_valid)
                                                                              ? (IData)(vlSelf->__PVT__mshrs_14->__PVT__req_tag)
                                                                              : (IData)(vlSelf->__PVT__mshrs_14->__PVT__task_tag)))
                                                                            : 0U) 
                                                                          | ((0x8000U 
                                                                              & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                              ? 
                                                                             ((IData)(vlSelf->__PVT__mshrs_15->__VdfgRegularize_h47ff5784_2_9)
                                                                               ? 
                                                                              ((IData)(vlSelf->__PVT__mshrs_15->__PVT__mp_grant_valid)
                                                                                ? (IData)(vlSelf->__PVT__mshrs_15->__PVT__req_tag)
                                                                                : (IData)(vlSelf->__PVT__mshrs_15->__PVT__dirResult_tag))
                                                                               : 
                                                                              ((IData)(vlSelf->__PVT__mshrs_15->__PVT__mp_probeack_valid)
                                                                                ? (IData)(vlSelf->__PVT__mshrs_15->__PVT__req_tag)
                                                                                : (IData)(vlSelf->__PVT__mshrs_15->__PVT__task_tag)))
                                                                              : 0U))))))))))))));
    vlSelfRef.io_mshrTask_bits_useProbeData = (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                & ((IData)(vlSelf->__PVT__mshrs_0->__VdfgRegularize_h47ff5784_2_9)
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__mshrs_0->__PVT__mp_grant_valid) 
                                                    & (((IData)(vlSelf->__PVT__mshrs_0->__PVT__dirResult_hit) 
                                                        & (4U 
                                                           == (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_opcode))) 
                                                       | (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_aliasTask)))
                                                    : (IData)(vlSelf->__PVT__mshrs_0->__PVT__mp_probeack_valid))) 
                                               | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                    >> 1U) 
                                                   & ((IData)(vlSelf->__PVT__mshrs_1->__VdfgRegularize_h47ff5784_2_9)
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__mshrs_1->__PVT__mp_grant_valid) 
                                                       & (((IData)(vlSelf->__PVT__mshrs_1->__PVT__dirResult_hit) 
                                                           & (4U 
                                                              == (IData)(vlSelf->__PVT__mshrs_1->__PVT__req_opcode))) 
                                                          | (IData)(vlSelf->__PVT__mshrs_1->__PVT__req_aliasTask)))
                                                       : (IData)(vlSelf->__PVT__mshrs_1->__PVT__mp_probeack_valid))) 
                                                  | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                       >> 2U) 
                                                      & ((IData)(vlSelf->__PVT__mshrs_2->__VdfgRegularize_h47ff5784_2_9)
                                                          ? 
                                                         ((IData)(vlSelf->__PVT__mshrs_2->__PVT__mp_grant_valid) 
                                                          & (((IData)(vlSelf->__PVT__mshrs_2->__PVT__dirResult_hit) 
                                                              & (4U 
                                                                 == (IData)(vlSelf->__PVT__mshrs_2->__PVT__req_opcode))) 
                                                             | (IData)(vlSelf->__PVT__mshrs_2->__PVT__req_aliasTask)))
                                                          : (IData)(vlSelf->__PVT__mshrs_2->__PVT__mp_probeack_valid))) 
                                                     | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                          >> 3U) 
                                                         & ((IData)(vlSelf->__PVT__mshrs_3->__VdfgRegularize_h47ff5784_2_9)
                                                             ? 
                                                            ((IData)(vlSelf->__PVT__mshrs_3->__PVT__mp_grant_valid) 
                                                             & (((IData)(vlSelf->__PVT__mshrs_3->__PVT__dirResult_hit) 
                                                                 & (4U 
                                                                    == (IData)(vlSelf->__PVT__mshrs_3->__PVT__req_opcode))) 
                                                                | (IData)(vlSelf->__PVT__mshrs_3->__PVT__req_aliasTask)))
                                                             : (IData)(vlSelf->__PVT__mshrs_3->__PVT__mp_probeack_valid))) 
                                                        | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                             >> 4U) 
                                                            & ((IData)(vlSelf->__PVT__mshrs_4->__VdfgRegularize_h47ff5784_2_9)
                                                                ? 
                                                               ((IData)(vlSelf->__PVT__mshrs_4->__PVT__mp_grant_valid) 
                                                                & (((IData)(vlSelf->__PVT__mshrs_4->__PVT__dirResult_hit) 
                                                                    & (4U 
                                                                       == (IData)(vlSelf->__PVT__mshrs_4->__PVT__req_opcode))) 
                                                                   | (IData)(vlSelf->__PVT__mshrs_4->__PVT__req_aliasTask)))
                                                                : (IData)(vlSelf->__PVT__mshrs_4->__PVT__mp_probeack_valid))) 
                                                           | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                >> 5U) 
                                                               & ((IData)(vlSelf->__PVT__mshrs_5->__VdfgRegularize_h47ff5784_2_9)
                                                                   ? 
                                                                  ((IData)(vlSelf->__PVT__mshrs_5->__PVT__mp_grant_valid) 
                                                                   & (((IData)(vlSelf->__PVT__mshrs_5->__PVT__dirResult_hit) 
                                                                       & (4U 
                                                                          == (IData)(vlSelf->__PVT__mshrs_5->__PVT__req_opcode))) 
                                                                      | (IData)(vlSelf->__PVT__mshrs_5->__PVT__req_aliasTask)))
                                                                   : (IData)(vlSelf->__PVT__mshrs_5->__PVT__mp_probeack_valid))) 
                                                              | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                   >> 6U) 
                                                                  & ((IData)(vlSelf->__PVT__mshrs_6->__VdfgRegularize_h47ff5784_2_9)
                                                                      ? 
                                                                     ((IData)(vlSelf->__PVT__mshrs_6->__PVT__mp_grant_valid) 
                                                                      & (((IData)(vlSelf->__PVT__mshrs_6->__PVT__dirResult_hit) 
                                                                          & (4U 
                                                                             == (IData)(vlSelf->__PVT__mshrs_6->__PVT__req_opcode))) 
                                                                         | (IData)(vlSelf->__PVT__mshrs_6->__PVT__req_aliasTask)))
                                                                      : (IData)(vlSelf->__PVT__mshrs_6->__PVT__mp_probeack_valid))) 
                                                                 | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                      >> 7U) 
                                                                     & ((IData)(vlSelf->__PVT__mshrs_7->__VdfgRegularize_h47ff5784_2_9)
                                                                         ? 
                                                                        ((IData)(vlSelf->__PVT__mshrs_7->__PVT__mp_grant_valid) 
                                                                         & (((IData)(vlSelf->__PVT__mshrs_7->__PVT__dirResult_hit) 
                                                                             & (4U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_7->__PVT__req_opcode))) 
                                                                            | (IData)(vlSelf->__PVT__mshrs_7->__PVT__req_aliasTask)))
                                                                         : (IData)(vlSelf->__PVT__mshrs_7->__PVT__mp_probeack_valid))) 
                                                                    | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                         >> 8U) 
                                                                        & ((IData)(vlSelf->__PVT__mshrs_8->__VdfgRegularize_h47ff5784_2_9)
                                                                            ? 
                                                                           ((IData)(vlSelf->__PVT__mshrs_8->__PVT__mp_grant_valid) 
                                                                            & (((IData)(vlSelf->__PVT__mshrs_8->__PVT__dirResult_hit) 
                                                                                & (4U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_8->__PVT__req_opcode))) 
                                                                               | (IData)(vlSelf->__PVT__mshrs_8->__PVT__req_aliasTask)))
                                                                            : (IData)(vlSelf->__PVT__mshrs_8->__PVT__mp_probeack_valid))) 
                                                                       | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                            >> 9U) 
                                                                           & ((IData)(vlSelf->__PVT__mshrs_9->__VdfgRegularize_h47ff5784_2_9)
                                                                               ? 
                                                                              ((IData)(vlSelf->__PVT__mshrs_9->__PVT__mp_grant_valid) 
                                                                               & (((IData)(vlSelf->__PVT__mshrs_9->__PVT__dirResult_hit) 
                                                                                & (4U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_9->__PVT__req_opcode))) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_9->__PVT__req_aliasTask)))
                                                                               : (IData)(vlSelf->__PVT__mshrs_9->__PVT__mp_probeack_valid))) 
                                                                          | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                               >> 0xaU) 
                                                                              & ((IData)(vlSelf->__PVT__mshrs_10->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_10->__PVT__mp_grant_valid) 
                                                                                & (((IData)(vlSelf->__PVT__mshrs_10->__PVT__dirResult_hit) 
                                                                                & (4U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_10->__PVT__req_opcode))) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_10->__PVT__req_aliasTask)))
                                                                                 : (IData)(vlSelf->__PVT__mshrs_10->__PVT__mp_probeack_valid))) 
                                                                             | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xbU) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_11->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_11->__PVT__mp_grant_valid) 
                                                                                & (((IData)(vlSelf->__PVT__mshrs_11->__PVT__dirResult_hit) 
                                                                                & (4U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_11->__PVT__req_opcode))) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_11->__PVT__req_aliasTask)))
                                                                                 : (IData)(vlSelf->__PVT__mshrs_11->__PVT__mp_probeack_valid))) 
                                                                                | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xcU) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_12->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_12->__PVT__mp_grant_valid) 
                                                                                & (((IData)(vlSelf->__PVT__mshrs_12->__PVT__dirResult_hit) 
                                                                                & (4U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_12->__PVT__req_opcode))) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_12->__PVT__req_aliasTask)))
                                                                                 : (IData)(vlSelf->__PVT__mshrs_12->__PVT__mp_probeack_valid))) 
                                                                                | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xdU) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_13->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_13->__PVT__mp_grant_valid) 
                                                                                & (((IData)(vlSelf->__PVT__mshrs_13->__PVT__dirResult_hit) 
                                                                                & (4U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_13->__PVT__req_opcode))) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_13->__PVT__req_aliasTask)))
                                                                                 : (IData)(vlSelf->__PVT__mshrs_13->__PVT__mp_probeack_valid))) 
                                                                                | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xeU) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_14->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_14->__PVT__mp_grant_valid) 
                                                                                & (((IData)(vlSelf->__PVT__mshrs_14->__PVT__dirResult_hit) 
                                                                                & (4U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_14->__PVT__req_opcode))) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_14->__PVT__req_aliasTask)))
                                                                                 : (IData)(vlSelf->__PVT__mshrs_14->__PVT__mp_probeack_valid))) 
                                                                                | (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xfU) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_15->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_15->__PVT__mp_grant_valid) 
                                                                                & (((IData)(vlSelf->__PVT__mshrs_15->__PVT__dirResult_hit) 
                                                                                & (4U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_15->__PVT__req_opcode))) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_15->__PVT__req_aliasTask)))
                                                                                 : (IData)(vlSelf->__PVT__mshrs_15->__PVT__mp_probeack_valid))))))))))))))))));
    vlSelfRef.io_mshrTask_bits_meta_dirty = (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                              & ((IData)(vlSelf->__PVT__mshrs_0->__VdfgRegularize_h47ff5784_2_9) 
                                                 & ((IData)(vlSelf->__PVT__mshrs_0->__PVT__mp_grant_valid) 
                                                    & ((IData)(vlSelf->__PVT__mshrs_0->__PVT__gotDirty) 
                                                       | ((IData)(vlSelf->__PVT__mshrs_0->__PVT__dirResult_hit) 
                                                          & ((IData)(vlSelf->__PVT__mshrs_0->__PVT__dirResult_meta_dirty) 
                                                             | (IData)(vlSelf->__PVT__mshrs_0->__PVT__probeDirty))))))) 
                                             | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                  >> 1U) 
                                                 & ((IData)(vlSelf->__PVT__mshrs_1->__VdfgRegularize_h47ff5784_2_9) 
                                                    & ((IData)(vlSelf->__PVT__mshrs_1->__PVT__mp_grant_valid) 
                                                       & ((IData)(vlSelf->__PVT__mshrs_1->__PVT__gotDirty) 
                                                          | ((IData)(vlSelf->__PVT__mshrs_1->__PVT__dirResult_hit) 
                                                             & ((IData)(vlSelf->__PVT__mshrs_1->__PVT__dirResult_meta_dirty) 
                                                                | (IData)(vlSelf->__PVT__mshrs_1->__PVT__probeDirty))))))) 
                                                | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                     >> 2U) 
                                                    & ((IData)(vlSelf->__PVT__mshrs_2->__VdfgRegularize_h47ff5784_2_9) 
                                                       & ((IData)(vlSelf->__PVT__mshrs_2->__PVT__mp_grant_valid) 
                                                          & ((IData)(vlSelf->__PVT__mshrs_2->__PVT__gotDirty) 
                                                             | ((IData)(vlSelf->__PVT__mshrs_2->__PVT__dirResult_hit) 
                                                                & ((IData)(vlSelf->__PVT__mshrs_2->__PVT__dirResult_meta_dirty) 
                                                                   | (IData)(vlSelf->__PVT__mshrs_2->__PVT__probeDirty))))))) 
                                                   | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                        >> 3U) 
                                                       & ((IData)(vlSelf->__PVT__mshrs_3->__VdfgRegularize_h47ff5784_2_9) 
                                                          & ((IData)(vlSelf->__PVT__mshrs_3->__PVT__mp_grant_valid) 
                                                             & ((IData)(vlSelf->__PVT__mshrs_3->__PVT__gotDirty) 
                                                                | ((IData)(vlSelf->__PVT__mshrs_3->__PVT__dirResult_hit) 
                                                                   & ((IData)(vlSelf->__PVT__mshrs_3->__PVT__dirResult_meta_dirty) 
                                                                      | (IData)(vlSelf->__PVT__mshrs_3->__PVT__probeDirty))))))) 
                                                      | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                           >> 4U) 
                                                          & ((IData)(vlSelf->__PVT__mshrs_4->__VdfgRegularize_h47ff5784_2_9) 
                                                             & ((IData)(vlSelf->__PVT__mshrs_4->__PVT__mp_grant_valid) 
                                                                & ((IData)(vlSelf->__PVT__mshrs_4->__PVT__gotDirty) 
                                                                   | ((IData)(vlSelf->__PVT__mshrs_4->__PVT__dirResult_hit) 
                                                                      & ((IData)(vlSelf->__PVT__mshrs_4->__PVT__dirResult_meta_dirty) 
                                                                         | (IData)(vlSelf->__PVT__mshrs_4->__PVT__probeDirty))))))) 
                                                         | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                              >> 5U) 
                                                             & ((IData)(vlSelf->__PVT__mshrs_5->__VdfgRegularize_h47ff5784_2_9) 
                                                                & ((IData)(vlSelf->__PVT__mshrs_5->__PVT__mp_grant_valid) 
                                                                   & ((IData)(vlSelf->__PVT__mshrs_5->__PVT__gotDirty) 
                                                                      | ((IData)(vlSelf->__PVT__mshrs_5->__PVT__dirResult_hit) 
                                                                         & ((IData)(vlSelf->__PVT__mshrs_5->__PVT__dirResult_meta_dirty) 
                                                                            | (IData)(vlSelf->__PVT__mshrs_5->__PVT__probeDirty))))))) 
                                                            | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                 >> 6U) 
                                                                & ((IData)(vlSelf->__PVT__mshrs_6->__VdfgRegularize_h47ff5784_2_9) 
                                                                   & ((IData)(vlSelf->__PVT__mshrs_6->__PVT__mp_grant_valid) 
                                                                      & ((IData)(vlSelf->__PVT__mshrs_6->__PVT__gotDirty) 
                                                                         | ((IData)(vlSelf->__PVT__mshrs_6->__PVT__dirResult_hit) 
                                                                            & ((IData)(vlSelf->__PVT__mshrs_6->__PVT__dirResult_meta_dirty) 
                                                                               | (IData)(vlSelf->__PVT__mshrs_6->__PVT__probeDirty))))))) 
                                                               | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                    >> 7U) 
                                                                   & ((IData)(vlSelf->__PVT__mshrs_7->__VdfgRegularize_h47ff5784_2_9) 
                                                                      & ((IData)(vlSelf->__PVT__mshrs_7->__PVT__mp_grant_valid) 
                                                                         & ((IData)(vlSelf->__PVT__mshrs_7->__PVT__gotDirty) 
                                                                            | ((IData)(vlSelf->__PVT__mshrs_7->__PVT__dirResult_hit) 
                                                                               & ((IData)(vlSelf->__PVT__mshrs_7->__PVT__dirResult_meta_dirty) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_7->__PVT__probeDirty))))))) 
                                                                  | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                       >> 8U) 
                                                                      & ((IData)(vlSelf->__PVT__mshrs_8->__VdfgRegularize_h47ff5784_2_9) 
                                                                         & ((IData)(vlSelf->__PVT__mshrs_8->__PVT__mp_grant_valid) 
                                                                            & ((IData)(vlSelf->__PVT__mshrs_8->__PVT__gotDirty) 
                                                                               | ((IData)(vlSelf->__PVT__mshrs_8->__PVT__dirResult_hit) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_8->__PVT__dirResult_meta_dirty) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_8->__PVT__probeDirty))))))) 
                                                                     | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                          >> 9U) 
                                                                         & ((IData)(vlSelf->__PVT__mshrs_9->__VdfgRegularize_h47ff5784_2_9) 
                                                                            & ((IData)(vlSelf->__PVT__mshrs_9->__PVT__mp_grant_valid) 
                                                                               & ((IData)(vlSelf->__PVT__mshrs_9->__PVT__gotDirty) 
                                                                                | ((IData)(vlSelf->__PVT__mshrs_9->__PVT__dirResult_hit) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_9->__PVT__dirResult_meta_dirty) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_9->__PVT__probeDirty))))))) 
                                                                        | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                             >> 0xaU) 
                                                                            & ((IData)(vlSelf->__PVT__mshrs_10->__VdfgRegularize_h47ff5784_2_9) 
                                                                               & ((IData)(vlSelf->__PVT__mshrs_10->__PVT__mp_grant_valid) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_10->__PVT__gotDirty) 
                                                                                | ((IData)(vlSelf->__PVT__mshrs_10->__PVT__dirResult_hit) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_10->__PVT__dirResult_meta_dirty) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_10->__PVT__probeDirty))))))) 
                                                                           | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xbU) 
                                                                               & ((IData)(vlSelf->__PVT__mshrs_11->__VdfgRegularize_h47ff5784_2_9) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_11->__PVT__mp_grant_valid) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_11->__PVT__gotDirty) 
                                                                                | ((IData)(vlSelf->__PVT__mshrs_11->__PVT__dirResult_hit) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_11->__PVT__dirResult_meta_dirty) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_11->__PVT__probeDirty))))))) 
                                                                              | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xcU) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_12->__VdfgRegularize_h47ff5784_2_9) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_12->__PVT__mp_grant_valid) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_12->__PVT__gotDirty) 
                                                                                | ((IData)(vlSelf->__PVT__mshrs_12->__PVT__dirResult_hit) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_12->__PVT__dirResult_meta_dirty) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_12->__PVT__probeDirty))))))) 
                                                                                | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xdU) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_13->__VdfgRegularize_h47ff5784_2_9) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_13->__PVT__mp_grant_valid) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_13->__PVT__gotDirty) 
                                                                                | ((IData)(vlSelf->__PVT__mshrs_13->__PVT__dirResult_hit) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_13->__PVT__dirResult_meta_dirty) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_13->__PVT__probeDirty))))))) 
                                                                                | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xeU) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_14->__VdfgRegularize_h47ff5784_2_9) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_14->__PVT__mp_grant_valid) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_14->__PVT__gotDirty) 
                                                                                | ((IData)(vlSelf->__PVT__mshrs_14->__PVT__dirResult_hit) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_14->__PVT__dirResult_meta_dirty) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_14->__PVT__probeDirty))))))) 
                                                                                | (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xfU) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_15->__VdfgRegularize_h47ff5784_2_9) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_15->__PVT__mp_grant_valid) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_15->__PVT__gotDirty) 
                                                                                | ((IData)(vlSelf->__PVT__mshrs_15->__PVT__dirResult_hit) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_15->__PVT__dirResult_meta_dirty) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_15->__PVT__probeDirty))))))))))))))))))))));
    vlSelfRef.io_mshrTask_bits_meta_clients = (1U & 
                                               (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                 & ((IData)(vlSelf->__PVT__mshrs_0->__VdfgRegularize_h47ff5784_2_9)
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__mshrs_0->__PVT__mp_grant_valid) 
                                                     & ((5U 
                                                         == (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_opcode))
                                                         ? 
                                                        ((IData)(vlSelf->__PVT__mshrs_0->__PVT__dirResult_hit) 
                                                         & (IData)(vlSelf->__PVT__mshrs_0->__PVT__dirResult_meta_clients))
                                                         : 
                                                        (~ 
                                                         ((4U 
                                                           == (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_opcode)) 
                                                          & ((~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__dirResult_hit)) 
                                                             | ((~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__dirResult_meta_clients)) 
                                                                | (IData)(vlSelf->__PVT__mshrs_0->__PVT__probeGotN)))))))
                                                     : 
                                                    (~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__probeGotN)))) 
                                                | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                     >> 1U) 
                                                    & ((IData)(vlSelf->__PVT__mshrs_1->__VdfgRegularize_h47ff5784_2_9)
                                                        ? 
                                                       ((IData)(vlSelf->__PVT__mshrs_1->__PVT__mp_grant_valid) 
                                                        & ((5U 
                                                            == (IData)(vlSelf->__PVT__mshrs_1->__PVT__req_opcode))
                                                            ? 
                                                           ((IData)(vlSelf->__PVT__mshrs_1->__PVT__dirResult_hit) 
                                                            & (IData)(vlSelf->__PVT__mshrs_1->__PVT__dirResult_meta_clients))
                                                            : 
                                                           (~ 
                                                            ((4U 
                                                              == (IData)(vlSelf->__PVT__mshrs_1->__PVT__req_opcode)) 
                                                             & ((~ (IData)(vlSelf->__PVT__mshrs_1->__PVT__dirResult_hit)) 
                                                                | ((~ (IData)(vlSelf->__PVT__mshrs_1->__PVT__dirResult_meta_clients)) 
                                                                   | (IData)(vlSelf->__PVT__mshrs_1->__PVT__probeGotN)))))))
                                                        : 
                                                       (~ (IData)(vlSelf->__PVT__mshrs_1->__PVT__probeGotN)))) 
                                                   | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                        >> 2U) 
                                                       & ((IData)(vlSelf->__PVT__mshrs_2->__VdfgRegularize_h47ff5784_2_9)
                                                           ? 
                                                          ((IData)(vlSelf->__PVT__mshrs_2->__PVT__mp_grant_valid) 
                                                           & ((5U 
                                                               == (IData)(vlSelf->__PVT__mshrs_2->__PVT__req_opcode))
                                                               ? 
                                                              ((IData)(vlSelf->__PVT__mshrs_2->__PVT__dirResult_hit) 
                                                               & (IData)(vlSelf->__PVT__mshrs_2->__PVT__dirResult_meta_clients))
                                                               : 
                                                              (~ 
                                                               ((4U 
                                                                 == (IData)(vlSelf->__PVT__mshrs_2->__PVT__req_opcode)) 
                                                                & ((~ (IData)(vlSelf->__PVT__mshrs_2->__PVT__dirResult_hit)) 
                                                                   | ((~ (IData)(vlSelf->__PVT__mshrs_2->__PVT__dirResult_meta_clients)) 
                                                                      | (IData)(vlSelf->__PVT__mshrs_2->__PVT__probeGotN)))))))
                                                           : 
                                                          (~ (IData)(vlSelf->__PVT__mshrs_2->__PVT__probeGotN)))) 
                                                      | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                           >> 3U) 
                                                          & ((IData)(vlSelf->__PVT__mshrs_3->__VdfgRegularize_h47ff5784_2_9)
                                                              ? 
                                                             ((IData)(vlSelf->__PVT__mshrs_3->__PVT__mp_grant_valid) 
                                                              & ((5U 
                                                                  == (IData)(vlSelf->__PVT__mshrs_3->__PVT__req_opcode))
                                                                  ? 
                                                                 ((IData)(vlSelf->__PVT__mshrs_3->__PVT__dirResult_hit) 
                                                                  & (IData)(vlSelf->__PVT__mshrs_3->__PVT__dirResult_meta_clients))
                                                                  : 
                                                                 (~ 
                                                                  ((4U 
                                                                    == (IData)(vlSelf->__PVT__mshrs_3->__PVT__req_opcode)) 
                                                                   & ((~ (IData)(vlSelf->__PVT__mshrs_3->__PVT__dirResult_hit)) 
                                                                      | ((~ (IData)(vlSelf->__PVT__mshrs_3->__PVT__dirResult_meta_clients)) 
                                                                         | (IData)(vlSelf->__PVT__mshrs_3->__PVT__probeGotN)))))))
                                                              : 
                                                             (~ (IData)(vlSelf->__PVT__mshrs_3->__PVT__probeGotN)))) 
                                                         | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                              >> 4U) 
                                                             & ((IData)(vlSelf->__PVT__mshrs_4->__VdfgRegularize_h47ff5784_2_9)
                                                                 ? 
                                                                ((IData)(vlSelf->__PVT__mshrs_4->__PVT__mp_grant_valid) 
                                                                 & ((5U 
                                                                     == (IData)(vlSelf->__PVT__mshrs_4->__PVT__req_opcode))
                                                                     ? 
                                                                    ((IData)(vlSelf->__PVT__mshrs_4->__PVT__dirResult_hit) 
                                                                     & (IData)(vlSelf->__PVT__mshrs_4->__PVT__dirResult_meta_clients))
                                                                     : 
                                                                    (~ 
                                                                     ((4U 
                                                                       == (IData)(vlSelf->__PVT__mshrs_4->__PVT__req_opcode)) 
                                                                      & ((~ (IData)(vlSelf->__PVT__mshrs_4->__PVT__dirResult_hit)) 
                                                                         | ((~ (IData)(vlSelf->__PVT__mshrs_4->__PVT__dirResult_meta_clients)) 
                                                                            | (IData)(vlSelf->__PVT__mshrs_4->__PVT__probeGotN)))))))
                                                                 : 
                                                                (~ (IData)(vlSelf->__PVT__mshrs_4->__PVT__probeGotN)))) 
                                                            | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                 >> 5U) 
                                                                & ((IData)(vlSelf->__PVT__mshrs_5->__VdfgRegularize_h47ff5784_2_9)
                                                                    ? 
                                                                   ((IData)(vlSelf->__PVT__mshrs_5->__PVT__mp_grant_valid) 
                                                                    & ((5U 
                                                                        == (IData)(vlSelf->__PVT__mshrs_5->__PVT__req_opcode))
                                                                        ? 
                                                                       ((IData)(vlSelf->__PVT__mshrs_5->__PVT__dirResult_hit) 
                                                                        & (IData)(vlSelf->__PVT__mshrs_5->__PVT__dirResult_meta_clients))
                                                                        : 
                                                                       (~ 
                                                                        ((4U 
                                                                          == (IData)(vlSelf->__PVT__mshrs_5->__PVT__req_opcode)) 
                                                                         & ((~ (IData)(vlSelf->__PVT__mshrs_5->__PVT__dirResult_hit)) 
                                                                            | ((~ (IData)(vlSelf->__PVT__mshrs_5->__PVT__dirResult_meta_clients)) 
                                                                               | (IData)(vlSelf->__PVT__mshrs_5->__PVT__probeGotN)))))))
                                                                    : 
                                                                   (~ (IData)(vlSelf->__PVT__mshrs_5->__PVT__probeGotN)))) 
                                                               | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                    >> 6U) 
                                                                   & ((IData)(vlSelf->__PVT__mshrs_6->__VdfgRegularize_h47ff5784_2_9)
                                                                       ? 
                                                                      ((IData)(vlSelf->__PVT__mshrs_6->__PVT__mp_grant_valid) 
                                                                       & ((5U 
                                                                           == (IData)(vlSelf->__PVT__mshrs_6->__PVT__req_opcode))
                                                                           ? 
                                                                          ((IData)(vlSelf->__PVT__mshrs_6->__PVT__dirResult_hit) 
                                                                           & (IData)(vlSelf->__PVT__mshrs_6->__PVT__dirResult_meta_clients))
                                                                           : 
                                                                          (~ 
                                                                           ((4U 
                                                                             == (IData)(vlSelf->__PVT__mshrs_6->__PVT__req_opcode)) 
                                                                            & ((~ (IData)(vlSelf->__PVT__mshrs_6->__PVT__dirResult_hit)) 
                                                                               | ((~ (IData)(vlSelf->__PVT__mshrs_6->__PVT__dirResult_meta_clients)) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_6->__PVT__probeGotN)))))))
                                                                       : 
                                                                      (~ (IData)(vlSelf->__PVT__mshrs_6->__PVT__probeGotN)))) 
                                                                  | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                       >> 7U) 
                                                                      & ((IData)(vlSelf->__PVT__mshrs_7->__VdfgRegularize_h47ff5784_2_9)
                                                                          ? 
                                                                         ((IData)(vlSelf->__PVT__mshrs_7->__PVT__mp_grant_valid) 
                                                                          & ((5U 
                                                                              == (IData)(vlSelf->__PVT__mshrs_7->__PVT__req_opcode))
                                                                              ? 
                                                                             ((IData)(vlSelf->__PVT__mshrs_7->__PVT__dirResult_hit) 
                                                                              & (IData)(vlSelf->__PVT__mshrs_7->__PVT__dirResult_meta_clients))
                                                                              : 
                                                                             (~ 
                                                                              ((4U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_7->__PVT__req_opcode)) 
                                                                               & ((~ (IData)(vlSelf->__PVT__mshrs_7->__PVT__dirResult_hit)) 
                                                                                | ((~ (IData)(vlSelf->__PVT__mshrs_7->__PVT__dirResult_meta_clients)) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_7->__PVT__probeGotN)))))))
                                                                          : 
                                                                         (~ (IData)(vlSelf->__PVT__mshrs_7->__PVT__probeGotN)))) 
                                                                     | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                          >> 8U) 
                                                                         & ((IData)(vlSelf->__PVT__mshrs_8->__VdfgRegularize_h47ff5784_2_9)
                                                                             ? 
                                                                            ((IData)(vlSelf->__PVT__mshrs_8->__PVT__mp_grant_valid) 
                                                                             & ((5U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_8->__PVT__req_opcode))
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_8->__PVT__dirResult_hit) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_8->__PVT__dirResult_meta_clients))
                                                                                 : 
                                                                                (~ 
                                                                                ((4U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_8->__PVT__req_opcode)) 
                                                                                & ((~ (IData)(vlSelf->__PVT__mshrs_8->__PVT__dirResult_hit)) 
                                                                                | ((~ (IData)(vlSelf->__PVT__mshrs_8->__PVT__dirResult_meta_clients)) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_8->__PVT__probeGotN)))))))
                                                                             : 
                                                                            (~ (IData)(vlSelf->__PVT__mshrs_8->__PVT__probeGotN)))) 
                                                                        | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                             >> 9U) 
                                                                            & ((IData)(vlSelf->__PVT__mshrs_9->__VdfgRegularize_h47ff5784_2_9)
                                                                                ? 
                                                                               ((IData)(vlSelf->__PVT__mshrs_9->__PVT__mp_grant_valid) 
                                                                                & ((5U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_9->__PVT__req_opcode))
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_9->__PVT__dirResult_hit) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_9->__PVT__dirResult_meta_clients))
                                                                                 : 
                                                                                (~ 
                                                                                ((4U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_9->__PVT__req_opcode)) 
                                                                                & ((~ (IData)(vlSelf->__PVT__mshrs_9->__PVT__dirResult_hit)) 
                                                                                | ((~ (IData)(vlSelf->__PVT__mshrs_9->__PVT__dirResult_meta_clients)) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_9->__PVT__probeGotN)))))))
                                                                                : 
                                                                               (~ (IData)(vlSelf->__PVT__mshrs_9->__PVT__probeGotN)))) 
                                                                           | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xaU) 
                                                                               & ((IData)(vlSelf->__PVT__mshrs_10->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_10->__PVT__mp_grant_valid) 
                                                                                & ((5U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_10->__PVT__req_opcode))
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_10->__PVT__dirResult_hit) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_10->__PVT__dirResult_meta_clients))
                                                                                 : 
                                                                                (~ 
                                                                                ((4U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_10->__PVT__req_opcode)) 
                                                                                & ((~ (IData)(vlSelf->__PVT__mshrs_10->__PVT__dirResult_hit)) 
                                                                                | ((~ (IData)(vlSelf->__PVT__mshrs_10->__PVT__dirResult_meta_clients)) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_10->__PVT__probeGotN)))))))
                                                                                 : 
                                                                                (~ (IData)(vlSelf->__PVT__mshrs_10->__PVT__probeGotN)))) 
                                                                              | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xbU) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_11->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_11->__PVT__mp_grant_valid) 
                                                                                & ((5U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_11->__PVT__req_opcode))
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_11->__PVT__dirResult_hit) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_11->__PVT__dirResult_meta_clients))
                                                                                 : 
                                                                                (~ 
                                                                                ((4U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_11->__PVT__req_opcode)) 
                                                                                & ((~ (IData)(vlSelf->__PVT__mshrs_11->__PVT__dirResult_hit)) 
                                                                                | ((~ (IData)(vlSelf->__PVT__mshrs_11->__PVT__dirResult_meta_clients)) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_11->__PVT__probeGotN)))))))
                                                                                 : 
                                                                                (~ (IData)(vlSelf->__PVT__mshrs_11->__PVT__probeGotN)))) 
                                                                                | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xcU) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_12->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_12->__PVT__mp_grant_valid) 
                                                                                & ((5U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_12->__PVT__req_opcode))
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_12->__PVT__dirResult_hit) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_12->__PVT__dirResult_meta_clients))
                                                                                 : 
                                                                                (~ 
                                                                                ((4U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_12->__PVT__req_opcode)) 
                                                                                & ((~ (IData)(vlSelf->__PVT__mshrs_12->__PVT__dirResult_hit)) 
                                                                                | ((~ (IData)(vlSelf->__PVT__mshrs_12->__PVT__dirResult_meta_clients)) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_12->__PVT__probeGotN)))))))
                                                                                 : 
                                                                                (~ (IData)(vlSelf->__PVT__mshrs_12->__PVT__probeGotN)))) 
                                                                                | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xdU) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_13->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_13->__PVT__mp_grant_valid) 
                                                                                & ((5U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_13->__PVT__req_opcode))
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_13->__PVT__dirResult_hit) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_13->__PVT__dirResult_meta_clients))
                                                                                 : 
                                                                                (~ 
                                                                                ((4U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_13->__PVT__req_opcode)) 
                                                                                & ((~ (IData)(vlSelf->__PVT__mshrs_13->__PVT__dirResult_hit)) 
                                                                                | ((~ (IData)(vlSelf->__PVT__mshrs_13->__PVT__dirResult_meta_clients)) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_13->__PVT__probeGotN)))))))
                                                                                 : 
                                                                                (~ (IData)(vlSelf->__PVT__mshrs_13->__PVT__probeGotN)))) 
                                                                                | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xeU) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_14->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_14->__PVT__mp_grant_valid) 
                                                                                & ((5U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_14->__PVT__req_opcode))
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_14->__PVT__dirResult_hit) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_14->__PVT__dirResult_meta_clients))
                                                                                 : 
                                                                                (~ 
                                                                                ((4U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_14->__PVT__req_opcode)) 
                                                                                & ((~ (IData)(vlSelf->__PVT__mshrs_14->__PVT__dirResult_hit)) 
                                                                                | ((~ (IData)(vlSelf->__PVT__mshrs_14->__PVT__dirResult_meta_clients)) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_14->__PVT__probeGotN)))))))
                                                                                 : 
                                                                                (~ (IData)(vlSelf->__PVT__mshrs_14->__PVT__probeGotN)))) 
                                                                                | (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xfU) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_15->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_15->__PVT__mp_grant_valid) 
                                                                                & ((5U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_15->__PVT__req_opcode))
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_15->__PVT__dirResult_hit) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_15->__PVT__dirResult_meta_clients))
                                                                                 : 
                                                                                (~ 
                                                                                ((4U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_15->__PVT__req_opcode)) 
                                                                                & ((~ (IData)(vlSelf->__PVT__mshrs_15->__PVT__dirResult_hit)) 
                                                                                | ((~ (IData)(vlSelf->__PVT__mshrs_15->__PVT__dirResult_meta_clients)) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_15->__PVT__probeGotN)))))))
                                                                                 : 
                                                                                (~ (IData)(vlSelf->__PVT__mshrs_15->__PVT__probeGotN))))))))))))))))))));
    vlSelfRef.io_mshrTask_bits_opcode = ((((1U & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? ((IData)(vlSelf->__PVT__mshrs_0->__VdfgRegularize_h47ff5784_2_9)
                                                ? ((IData)(vlSelf->__PVT__mshrs_0->__PVT__mp_grant_valid)
                                                    ? 
                                                   ((7U 
                                                     == (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_opcode))
                                                     ? 4U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_opcode))
                                                      ? 5U
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_opcode))
                                                       ? 2U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_opcode))
                                                        ? 1U
                                                        : 
                                                       ((3U 
                                                         == (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_opcode))
                                                         ? 1U
                                                         : 
                                                        ((2U 
                                                          == (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_opcode))
                                                          ? 1U
                                                          : 0U))))))
                                                    : 7U)
                                                : ((IData)(vlSelf->__PVT__mshrs_0->__PVT__mp_probeack_valid)
                                                    ? 
                                                   (((IData)(vlSelf->__PVT__mshrs_0->__PVT___mp_probeack_task_mp_probeack_opcode_T_2) 
                                                     | (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_needProbeAckData))
                                                     ? 5U
                                                     : 4U)
                                                    : 
                                                   (((IData)(vlSelf->__PVT__mshrs_0->__PVT___mp_probeack_task_mp_probeack_opcode_T_2) 
                                                     | (IData)(vlSelf->__PVT__mshrs_0->__PVT__task_needProbeAckData))
                                                     ? 5U
                                                     : 4U)))
                                            : 0U) | 
                                          ((2U & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? ((IData)(vlSelf->__PVT__mshrs_1->__VdfgRegularize_h47ff5784_2_9)
                                                ? ((IData)(vlSelf->__PVT__mshrs_1->__PVT__mp_grant_valid)
                                                    ? 
                                                   ((7U 
                                                     == (IData)(vlSelf->__PVT__mshrs_1->__PVT__req_opcode))
                                                     ? 4U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__PVT__mshrs_1->__PVT__req_opcode))
                                                      ? 5U
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->__PVT__mshrs_1->__PVT__req_opcode))
                                                       ? 2U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelf->__PVT__mshrs_1->__PVT__req_opcode))
                                                        ? 1U
                                                        : 
                                                       ((3U 
                                                         == (IData)(vlSelf->__PVT__mshrs_1->__PVT__req_opcode))
                                                         ? 1U
                                                         : 
                                                        ((2U 
                                                          == (IData)(vlSelf->__PVT__mshrs_1->__PVT__req_opcode))
                                                          ? 1U
                                                          : 0U))))))
                                                    : 7U)
                                                : ((IData)(vlSelf->__PVT__mshrs_1->__PVT__mp_probeack_valid)
                                                    ? 
                                                   (((IData)(vlSelf->__PVT__mshrs_1->__PVT___mp_probeack_task_mp_probeack_opcode_T_2) 
                                                     | (IData)(vlSelf->__PVT__mshrs_1->__PVT__req_needProbeAckData))
                                                     ? 5U
                                                     : 4U)
                                                    : 
                                                   (((IData)(vlSelf->__PVT__mshrs_1->__PVT___mp_probeack_task_mp_probeack_opcode_T_2) 
                                                     | (IData)(vlSelf->__PVT__mshrs_1->__PVT__task_needProbeAckData))
                                                     ? 5U
                                                     : 4U)))
                                            : 0U)) 
                                         | ((((4U & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                               ? ((IData)(vlSelf->__PVT__mshrs_2->__VdfgRegularize_h47ff5784_2_9)
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__mshrs_2->__PVT__mp_grant_valid)
                                                    ? 
                                                   ((7U 
                                                     == (IData)(vlSelf->__PVT__mshrs_2->__PVT__req_opcode))
                                                     ? 4U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__PVT__mshrs_2->__PVT__req_opcode))
                                                      ? 5U
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->__PVT__mshrs_2->__PVT__req_opcode))
                                                       ? 2U
                                                       : 
                                                      ((4U 
                                                        == (IData)(vlSelf->__PVT__mshrs_2->__PVT__req_opcode))
                                                        ? 1U
                                                        : 
                                                       ((3U 
                                                         == (IData)(vlSelf->__PVT__mshrs_2->__PVT__req_opcode))
                                                         ? 1U
                                                         : 
                                                        ((2U 
                                                          == (IData)(vlSelf->__PVT__mshrs_2->__PVT__req_opcode))
                                                          ? 1U
                                                          : 0U))))))
                                                    : 7U)
                                                   : 
                                                  ((IData)(vlSelf->__PVT__mshrs_2->__PVT__mp_probeack_valid)
                                                    ? 
                                                   (((IData)(vlSelf->__PVT__mshrs_2->__PVT___mp_probeack_task_mp_probeack_opcode_T_2) 
                                                     | (IData)(vlSelf->__PVT__mshrs_2->__PVT__req_needProbeAckData))
                                                     ? 5U
                                                     : 4U)
                                                    : 
                                                   (((IData)(vlSelf->__PVT__mshrs_2->__PVT___mp_probeack_task_mp_probeack_opcode_T_2) 
                                                     | (IData)(vlSelf->__PVT__mshrs_2->__PVT__task_needProbeAckData))
                                                     ? 5U
                                                     : 4U)))
                                               : 0U) 
                                             | ((8U 
                                                 & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__mshrs_3->__VdfgRegularize_h47ff5784_2_9)
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__mshrs_3->__PVT__mp_grant_valid)
                                                   ? 
                                                  ((7U 
                                                    == (IData)(vlSelf->__PVT__mshrs_3->__PVT__req_opcode))
                                                    ? 4U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__PVT__mshrs_3->__PVT__req_opcode))
                                                     ? 5U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->__PVT__mshrs_3->__PVT__req_opcode))
                                                      ? 2U
                                                      : 
                                                     ((4U 
                                                       == (IData)(vlSelf->__PVT__mshrs_3->__PVT__req_opcode))
                                                       ? 1U
                                                       : 
                                                      ((3U 
                                                        == (IData)(vlSelf->__PVT__mshrs_3->__PVT__req_opcode))
                                                        ? 1U
                                                        : 
                                                       ((2U 
                                                         == (IData)(vlSelf->__PVT__mshrs_3->__PVT__req_opcode))
                                                         ? 1U
                                                         : 0U))))))
                                                   : 7U)
                                                  : 
                                                 ((IData)(vlSelf->__PVT__mshrs_3->__PVT__mp_probeack_valid)
                                                   ? 
                                                  (((IData)(vlSelf->__PVT__mshrs_3->__PVT___mp_probeack_task_mp_probeack_opcode_T_2) 
                                                    | (IData)(vlSelf->__PVT__mshrs_3->__PVT__req_needProbeAckData))
                                                    ? 5U
                                                    : 4U)
                                                   : 
                                                  (((IData)(vlSelf->__PVT__mshrs_3->__PVT___mp_probeack_task_mp_probeack_opcode_T_2) 
                                                    | (IData)(vlSelf->__PVT__mshrs_3->__PVT__task_needProbeAckData))
                                                    ? 5U
                                                    : 4U)))
                                                 : 0U)) 
                                            | (((0x10U 
                                                 & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__mshrs_4->__VdfgRegularize_h47ff5784_2_9)
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__mshrs_4->__PVT__mp_grant_valid)
                                                   ? 
                                                  ((7U 
                                                    == (IData)(vlSelf->__PVT__mshrs_4->__PVT__req_opcode))
                                                    ? 4U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__PVT__mshrs_4->__PVT__req_opcode))
                                                     ? 5U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->__PVT__mshrs_4->__PVT__req_opcode))
                                                      ? 2U
                                                      : 
                                                     ((4U 
                                                       == (IData)(vlSelf->__PVT__mshrs_4->__PVT__req_opcode))
                                                       ? 1U
                                                       : 
                                                      ((3U 
                                                        == (IData)(vlSelf->__PVT__mshrs_4->__PVT__req_opcode))
                                                        ? 1U
                                                        : 
                                                       ((2U 
                                                         == (IData)(vlSelf->__PVT__mshrs_4->__PVT__req_opcode))
                                                         ? 1U
                                                         : 0U))))))
                                                   : 7U)
                                                  : 
                                                 ((IData)(vlSelf->__PVT__mshrs_4->__PVT__mp_probeack_valid)
                                                   ? 
                                                  (((IData)(vlSelf->__PVT__mshrs_4->__PVT___mp_probeack_task_mp_probeack_opcode_T_2) 
                                                    | (IData)(vlSelf->__PVT__mshrs_4->__PVT__req_needProbeAckData))
                                                    ? 5U
                                                    : 4U)
                                                   : 
                                                  (((IData)(vlSelf->__PVT__mshrs_4->__PVT___mp_probeack_task_mp_probeack_opcode_T_2) 
                                                    | (IData)(vlSelf->__PVT__mshrs_4->__PVT__task_needProbeAckData))
                                                    ? 5U
                                                    : 4U)))
                                                 : 0U) 
                                               | (((0x20U 
                                                    & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__mshrs_5->__VdfgRegularize_h47ff5784_2_9)
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__mshrs_5->__PVT__mp_grant_valid)
                                                      ? 
                                                     ((7U 
                                                       == (IData)(vlSelf->__PVT__mshrs_5->__PVT__req_opcode))
                                                       ? 4U
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->__PVT__mshrs_5->__PVT__req_opcode))
                                                        ? 5U
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelf->__PVT__mshrs_5->__PVT__req_opcode))
                                                         ? 2U
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlSelf->__PVT__mshrs_5->__PVT__req_opcode))
                                                          ? 1U
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlSelf->__PVT__mshrs_5->__PVT__req_opcode))
                                                           ? 1U
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelf->__PVT__mshrs_5->__PVT__req_opcode))
                                                            ? 1U
                                                            : 0U))))))
                                                      : 7U)
                                                     : 
                                                    ((IData)(vlSelf->__PVT__mshrs_5->__PVT__mp_probeack_valid)
                                                      ? 
                                                     (((IData)(vlSelf->__PVT__mshrs_5->__PVT___mp_probeack_task_mp_probeack_opcode_T_2) 
                                                       | (IData)(vlSelf->__PVT__mshrs_5->__PVT__req_needProbeAckData))
                                                       ? 5U
                                                       : 4U)
                                                      : 
                                                     (((IData)(vlSelf->__PVT__mshrs_5->__PVT___mp_probeack_task_mp_probeack_opcode_T_2) 
                                                       | (IData)(vlSelf->__PVT__mshrs_5->__PVT__task_needProbeAckData))
                                                       ? 5U
                                                       : 4U)))
                                                    : 0U) 
                                                  | (((0x40U 
                                                       & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__mshrs_6->__VdfgRegularize_h47ff5784_2_9)
                                                        ? 
                                                       ((IData)(vlSelf->__PVT__mshrs_6->__PVT__mp_grant_valid)
                                                         ? 
                                                        ((7U 
                                                          == (IData)(vlSelf->__PVT__mshrs_6->__PVT__req_opcode))
                                                          ? 4U
                                                          : 
                                                         ((6U 
                                                           == (IData)(vlSelf->__PVT__mshrs_6->__PVT__req_opcode))
                                                           ? 5U
                                                           : 
                                                          ((5U 
                                                            == (IData)(vlSelf->__PVT__mshrs_6->__PVT__req_opcode))
                                                            ? 2U
                                                            : 
                                                           ((4U 
                                                             == (IData)(vlSelf->__PVT__mshrs_6->__PVT__req_opcode))
                                                             ? 1U
                                                             : 
                                                            ((3U 
                                                              == (IData)(vlSelf->__PVT__mshrs_6->__PVT__req_opcode))
                                                              ? 1U
                                                              : 
                                                             ((2U 
                                                               == (IData)(vlSelf->__PVT__mshrs_6->__PVT__req_opcode))
                                                               ? 1U
                                                               : 0U))))))
                                                         : 7U)
                                                        : 
                                                       ((IData)(vlSelf->__PVT__mshrs_6->__PVT__mp_probeack_valid)
                                                         ? 
                                                        (((IData)(vlSelf->__PVT__mshrs_6->__PVT___mp_probeack_task_mp_probeack_opcode_T_2) 
                                                          | (IData)(vlSelf->__PVT__mshrs_6->__PVT__req_needProbeAckData))
                                                          ? 5U
                                                          : 4U)
                                                         : 
                                                        (((IData)(vlSelf->__PVT__mshrs_6->__PVT___mp_probeack_task_mp_probeack_opcode_T_2) 
                                                          | (IData)(vlSelf->__PVT__mshrs_6->__PVT__task_needProbeAckData))
                                                          ? 5U
                                                          : 4U)))
                                                       : 0U) 
                                                     | (((0x80U 
                                                          & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                          ? 
                                                         ((IData)(vlSelf->__PVT__mshrs_7->__VdfgRegularize_h47ff5784_2_9)
                                                           ? 
                                                          ((IData)(vlSelf->__PVT__mshrs_7->__PVT__mp_grant_valid)
                                                            ? 
                                                           ((7U 
                                                             == (IData)(vlSelf->__PVT__mshrs_7->__PVT__req_opcode))
                                                             ? 4U
                                                             : 
                                                            ((6U 
                                                              == (IData)(vlSelf->__PVT__mshrs_7->__PVT__req_opcode))
                                                              ? 5U
                                                              : 
                                                             ((5U 
                                                               == (IData)(vlSelf->__PVT__mshrs_7->__PVT__req_opcode))
                                                               ? 2U
                                                               : 
                                                              ((4U 
                                                                == (IData)(vlSelf->__PVT__mshrs_7->__PVT__req_opcode))
                                                                ? 1U
                                                                : 
                                                               ((3U 
                                                                 == (IData)(vlSelf->__PVT__mshrs_7->__PVT__req_opcode))
                                                                 ? 1U
                                                                 : 
                                                                ((2U 
                                                                  == (IData)(vlSelf->__PVT__mshrs_7->__PVT__req_opcode))
                                                                  ? 1U
                                                                  : 0U))))))
                                                            : 7U)
                                                           : 
                                                          ((IData)(vlSelf->__PVT__mshrs_7->__PVT__mp_probeack_valid)
                                                            ? 
                                                           (((IData)(vlSelf->__PVT__mshrs_7->__PVT___mp_probeack_task_mp_probeack_opcode_T_2) 
                                                             | (IData)(vlSelf->__PVT__mshrs_7->__PVT__req_needProbeAckData))
                                                             ? 5U
                                                             : 4U)
                                                            : 
                                                           (((IData)(vlSelf->__PVT__mshrs_7->__PVT___mp_probeack_task_mp_probeack_opcode_T_2) 
                                                             | (IData)(vlSelf->__PVT__mshrs_7->__PVT__task_needProbeAckData))
                                                             ? 5U
                                                             : 4U)))
                                                          : 0U) 
                                                        | (((0x100U 
                                                             & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                             ? 
                                                            ((IData)(vlSelf->__PVT__mshrs_8->__VdfgRegularize_h47ff5784_2_9)
                                                              ? 
                                                             ((IData)(vlSelf->__PVT__mshrs_8->__PVT__mp_grant_valid)
                                                               ? 
                                                              ((7U 
                                                                == (IData)(vlSelf->__PVT__mshrs_8->__PVT__req_opcode))
                                                                ? 4U
                                                                : 
                                                               ((6U 
                                                                 == (IData)(vlSelf->__PVT__mshrs_8->__PVT__req_opcode))
                                                                 ? 5U
                                                                 : 
                                                                ((5U 
                                                                  == (IData)(vlSelf->__PVT__mshrs_8->__PVT__req_opcode))
                                                                  ? 2U
                                                                  : 
                                                                 ((4U 
                                                                   == (IData)(vlSelf->__PVT__mshrs_8->__PVT__req_opcode))
                                                                   ? 1U
                                                                   : 
                                                                  ((3U 
                                                                    == (IData)(vlSelf->__PVT__mshrs_8->__PVT__req_opcode))
                                                                    ? 1U
                                                                    : 
                                                                   ((2U 
                                                                     == (IData)(vlSelf->__PVT__mshrs_8->__PVT__req_opcode))
                                                                     ? 1U
                                                                     : 0U))))))
                                                               : 7U)
                                                              : 
                                                             ((IData)(vlSelf->__PVT__mshrs_8->__PVT__mp_probeack_valid)
                                                               ? 
                                                              (((IData)(vlSelf->__PVT__mshrs_8->__PVT___mp_probeack_task_mp_probeack_opcode_T_2) 
                                                                | (IData)(vlSelf->__PVT__mshrs_8->__PVT__req_needProbeAckData))
                                                                ? 5U
                                                                : 4U)
                                                               : 
                                                              (((IData)(vlSelf->__PVT__mshrs_8->__PVT___mp_probeack_task_mp_probeack_opcode_T_2) 
                                                                | (IData)(vlSelf->__PVT__mshrs_8->__PVT__task_needProbeAckData))
                                                                ? 5U
                                                                : 4U)))
                                                             : 0U) 
                                                           | (((0x200U 
                                                                & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                ? 
                                                               ((IData)(vlSelf->__PVT__mshrs_9->__VdfgRegularize_h47ff5784_2_9)
                                                                 ? 
                                                                ((IData)(vlSelf->__PVT__mshrs_9->__PVT__mp_grant_valid)
                                                                  ? 
                                                                 ((7U 
                                                                   == (IData)(vlSelf->__PVT__mshrs_9->__PVT__req_opcode))
                                                                   ? 4U
                                                                   : 
                                                                  ((6U 
                                                                    == (IData)(vlSelf->__PVT__mshrs_9->__PVT__req_opcode))
                                                                    ? 5U
                                                                    : 
                                                                   ((5U 
                                                                     == (IData)(vlSelf->__PVT__mshrs_9->__PVT__req_opcode))
                                                                     ? 2U
                                                                     : 
                                                                    ((4U 
                                                                      == (IData)(vlSelf->__PVT__mshrs_9->__PVT__req_opcode))
                                                                      ? 1U
                                                                      : 
                                                                     ((3U 
                                                                       == (IData)(vlSelf->__PVT__mshrs_9->__PVT__req_opcode))
                                                                       ? 1U
                                                                       : 
                                                                      ((2U 
                                                                        == (IData)(vlSelf->__PVT__mshrs_9->__PVT__req_opcode))
                                                                        ? 1U
                                                                        : 0U))))))
                                                                  : 7U)
                                                                 : 
                                                                ((IData)(vlSelf->__PVT__mshrs_9->__PVT__mp_probeack_valid)
                                                                  ? 
                                                                 (((IData)(vlSelf->__PVT__mshrs_9->__PVT___mp_probeack_task_mp_probeack_opcode_T_2) 
                                                                   | (IData)(vlSelf->__PVT__mshrs_9->__PVT__req_needProbeAckData))
                                                                   ? 5U
                                                                   : 4U)
                                                                  : 
                                                                 (((IData)(vlSelf->__PVT__mshrs_9->__PVT___mp_probeack_task_mp_probeack_opcode_T_2) 
                                                                   | (IData)(vlSelf->__PVT__mshrs_9->__PVT__task_needProbeAckData))
                                                                   ? 5U
                                                                   : 4U)))
                                                                : 0U) 
                                                              | (((0x400U 
                                                                   & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                   ? 
                                                                  ((IData)(vlSelf->__PVT__mshrs_10->__VdfgRegularize_h47ff5784_2_9)
                                                                    ? 
                                                                   ((IData)(vlSelf->__PVT__mshrs_10->__PVT__mp_grant_valid)
                                                                     ? 
                                                                    ((7U 
                                                                      == (IData)(vlSelf->__PVT__mshrs_10->__PVT__req_opcode))
                                                                      ? 4U
                                                                      : 
                                                                     ((6U 
                                                                       == (IData)(vlSelf->__PVT__mshrs_10->__PVT__req_opcode))
                                                                       ? 5U
                                                                       : 
                                                                      ((5U 
                                                                        == (IData)(vlSelf->__PVT__mshrs_10->__PVT__req_opcode))
                                                                        ? 2U
                                                                        : 
                                                                       ((4U 
                                                                         == (IData)(vlSelf->__PVT__mshrs_10->__PVT__req_opcode))
                                                                         ? 1U
                                                                         : 
                                                                        ((3U 
                                                                          == (IData)(vlSelf->__PVT__mshrs_10->__PVT__req_opcode))
                                                                          ? 1U
                                                                          : 
                                                                         ((2U 
                                                                           == (IData)(vlSelf->__PVT__mshrs_10->__PVT__req_opcode))
                                                                           ? 1U
                                                                           : 0U))))))
                                                                     : 7U)
                                                                    : 
                                                                   ((IData)(vlSelf->__PVT__mshrs_10->__PVT__mp_probeack_valid)
                                                                     ? 
                                                                    (((IData)(vlSelf->__PVT__mshrs_10->__PVT___mp_probeack_task_mp_probeack_opcode_T_2) 
                                                                      | (IData)(vlSelf->__PVT__mshrs_10->__PVT__req_needProbeAckData))
                                                                      ? 5U
                                                                      : 4U)
                                                                     : 
                                                                    (((IData)(vlSelf->__PVT__mshrs_10->__PVT___mp_probeack_task_mp_probeack_opcode_T_2) 
                                                                      | (IData)(vlSelf->__PVT__mshrs_10->__PVT__task_needProbeAckData))
                                                                      ? 5U
                                                                      : 4U)))
                                                                   : 0U) 
                                                                 | (((0x800U 
                                                                      & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                      ? 
                                                                     ((IData)(vlSelf->__PVT__mshrs_11->__VdfgRegularize_h47ff5784_2_9)
                                                                       ? 
                                                                      ((IData)(vlSelf->__PVT__mshrs_11->__PVT__mp_grant_valid)
                                                                        ? 
                                                                       ((7U 
                                                                         == (IData)(vlSelf->__PVT__mshrs_11->__PVT__req_opcode))
                                                                         ? 4U
                                                                         : 
                                                                        ((6U 
                                                                          == (IData)(vlSelf->__PVT__mshrs_11->__PVT__req_opcode))
                                                                          ? 5U
                                                                          : 
                                                                         ((5U 
                                                                           == (IData)(vlSelf->__PVT__mshrs_11->__PVT__req_opcode))
                                                                           ? 2U
                                                                           : 
                                                                          ((4U 
                                                                            == (IData)(vlSelf->__PVT__mshrs_11->__PVT__req_opcode))
                                                                            ? 1U
                                                                            : 
                                                                           ((3U 
                                                                             == (IData)(vlSelf->__PVT__mshrs_11->__PVT__req_opcode))
                                                                             ? 1U
                                                                             : 
                                                                            ((2U 
                                                                              == (IData)(vlSelf->__PVT__mshrs_11->__PVT__req_opcode))
                                                                              ? 1U
                                                                              : 0U))))))
                                                                        : 7U)
                                                                       : 
                                                                      ((IData)(vlSelf->__PVT__mshrs_11->__PVT__mp_probeack_valid)
                                                                        ? 
                                                                       (((IData)(vlSelf->__PVT__mshrs_11->__PVT___mp_probeack_task_mp_probeack_opcode_T_2) 
                                                                         | (IData)(vlSelf->__PVT__mshrs_11->__PVT__req_needProbeAckData))
                                                                         ? 5U
                                                                         : 4U)
                                                                        : 
                                                                       (((IData)(vlSelf->__PVT__mshrs_11->__PVT___mp_probeack_task_mp_probeack_opcode_T_2) 
                                                                         | (IData)(vlSelf->__PVT__mshrs_11->__PVT__task_needProbeAckData))
                                                                         ? 5U
                                                                         : 4U)))
                                                                      : 0U) 
                                                                    | (((0x1000U 
                                                                         & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                         ? 
                                                                        ((IData)(vlSelf->__PVT__mshrs_12->__VdfgRegularize_h47ff5784_2_9)
                                                                          ? 
                                                                         ((IData)(vlSelf->__PVT__mshrs_12->__PVT__mp_grant_valid)
                                                                           ? 
                                                                          ((7U 
                                                                            == (IData)(vlSelf->__PVT__mshrs_12->__PVT__req_opcode))
                                                                            ? 4U
                                                                            : 
                                                                           ((6U 
                                                                             == (IData)(vlSelf->__PVT__mshrs_12->__PVT__req_opcode))
                                                                             ? 5U
                                                                             : 
                                                                            ((5U 
                                                                              == (IData)(vlSelf->__PVT__mshrs_12->__PVT__req_opcode))
                                                                              ? 2U
                                                                              : 
                                                                             ((4U 
                                                                               == (IData)(vlSelf->__PVT__mshrs_12->__PVT__req_opcode))
                                                                               ? 1U
                                                                               : 
                                                                              ((3U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_12->__PVT__req_opcode))
                                                                                ? 1U
                                                                                : 
                                                                               ((2U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_12->__PVT__req_opcode))
                                                                                 ? 1U
                                                                                 : 0U))))))
                                                                           : 7U)
                                                                          : 
                                                                         ((IData)(vlSelf->__PVT__mshrs_12->__PVT__mp_probeack_valid)
                                                                           ? 
                                                                          (((IData)(vlSelf->__PVT__mshrs_12->__PVT___mp_probeack_task_mp_probeack_opcode_T_2) 
                                                                            | (IData)(vlSelf->__PVT__mshrs_12->__PVT__req_needProbeAckData))
                                                                            ? 5U
                                                                            : 4U)
                                                                           : 
                                                                          (((IData)(vlSelf->__PVT__mshrs_12->__PVT___mp_probeack_task_mp_probeack_opcode_T_2) 
                                                                            | (IData)(vlSelf->__PVT__mshrs_12->__PVT__task_needProbeAckData))
                                                                            ? 5U
                                                                            : 4U)))
                                                                         : 0U) 
                                                                       | (((0x2000U 
                                                                            & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                            ? 
                                                                           ((IData)(vlSelf->__PVT__mshrs_13->__VdfgRegularize_h47ff5784_2_9)
                                                                             ? 
                                                                            ((IData)(vlSelf->__PVT__mshrs_13->__PVT__mp_grant_valid)
                                                                              ? 
                                                                             ((7U 
                                                                               == (IData)(vlSelf->__PVT__mshrs_13->__PVT__req_opcode))
                                                                               ? 4U
                                                                               : 
                                                                              ((6U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_13->__PVT__req_opcode))
                                                                                ? 5U
                                                                                : 
                                                                               ((5U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_13->__PVT__req_opcode))
                                                                                 ? 2U
                                                                                 : 
                                                                                ((4U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_13->__PVT__req_opcode))
                                                                                 ? 1U
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_13->__PVT__req_opcode))
                                                                                 ? 1U
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_13->__PVT__req_opcode))
                                                                                 ? 1U
                                                                                 : 0U))))))
                                                                              : 7U)
                                                                             : 
                                                                            ((IData)(vlSelf->__PVT__mshrs_13->__PVT__mp_probeack_valid)
                                                                              ? 
                                                                             (((IData)(vlSelf->__PVT__mshrs_13->__PVT___mp_probeack_task_mp_probeack_opcode_T_2) 
                                                                               | (IData)(vlSelf->__PVT__mshrs_13->__PVT__req_needProbeAckData))
                                                                               ? 5U
                                                                               : 4U)
                                                                              : 
                                                                             (((IData)(vlSelf->__PVT__mshrs_13->__PVT___mp_probeack_task_mp_probeack_opcode_T_2) 
                                                                               | (IData)(vlSelf->__PVT__mshrs_13->__PVT__task_needProbeAckData))
                                                                               ? 5U
                                                                               : 4U)))
                                                                            : 0U) 
                                                                          | (((0x4000U 
                                                                               & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                               ? 
                                                                              ((IData)(vlSelf->__PVT__mshrs_14->__VdfgRegularize_h47ff5784_2_9)
                                                                                ? 
                                                                               ((IData)(vlSelf->__PVT__mshrs_14->__PVT__mp_grant_valid)
                                                                                 ? 
                                                                                ((7U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_14->__PVT__req_opcode))
                                                                                 ? 4U
                                                                                 : 
                                                                                ((6U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_14->__PVT__req_opcode))
                                                                                 ? 5U
                                                                                 : 
                                                                                ((5U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_14->__PVT__req_opcode))
                                                                                 ? 2U
                                                                                 : 
                                                                                ((4U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_14->__PVT__req_opcode))
                                                                                 ? 1U
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_14->__PVT__req_opcode))
                                                                                 ? 1U
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_14->__PVT__req_opcode))
                                                                                 ? 1U
                                                                                 : 0U))))))
                                                                                 : 7U)
                                                                                : 
                                                                               ((IData)(vlSelf->__PVT__mshrs_14->__PVT__mp_probeack_valid)
                                                                                 ? 
                                                                                (((IData)(vlSelf->__PVT__mshrs_14->__PVT___mp_probeack_task_mp_probeack_opcode_T_2) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_14->__PVT__req_needProbeAckData))
                                                                                 ? 5U
                                                                                 : 4U)
                                                                                 : 
                                                                                (((IData)(vlSelf->__PVT__mshrs_14->__PVT___mp_probeack_task_mp_probeack_opcode_T_2) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_14->__PVT__task_needProbeAckData))
                                                                                 ? 5U
                                                                                 : 4U)))
                                                                               : 0U) 
                                                                             | ((0x8000U 
                                                                                & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_15->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_15->__PVT__mp_grant_valid)
                                                                                 ? 
                                                                                ((7U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_15->__PVT__req_opcode))
                                                                                 ? 4U
                                                                                 : 
                                                                                ((6U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_15->__PVT__req_opcode))
                                                                                 ? 5U
                                                                                 : 
                                                                                ((5U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_15->__PVT__req_opcode))
                                                                                 ? 2U
                                                                                 : 
                                                                                ((4U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_15->__PVT__req_opcode))
                                                                                 ? 1U
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_15->__PVT__req_opcode))
                                                                                 ? 1U
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_15->__PVT__req_opcode))
                                                                                 ? 1U
                                                                                 : 0U))))))
                                                                                 : 7U)
                                                                                 : 
                                                                                ((IData)(vlSelf->__PVT__mshrs_15->__PVT__mp_probeack_valid)
                                                                                 ? 
                                                                                (((IData)(vlSelf->__PVT__mshrs_15->__PVT___mp_probeack_task_mp_probeack_opcode_T_2) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_15->__PVT__req_needProbeAckData))
                                                                                 ? 5U
                                                                                 : 4U)
                                                                                 : 
                                                                                (((IData)(vlSelf->__PVT__mshrs_15->__PVT___mp_probeack_task_mp_probeack_opcode_T_2) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_15->__PVT__task_needProbeAckData))
                                                                                 ? 5U
                                                                                 : 4U)))
                                                                                 : 0U))))))))))))));
    vlSelfRef.io_mshrTask_bits_meta_accessed = (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                 & ((IData)(vlSelf->__PVT__mshrs_0->__VdfgRegularize_h47ff5784_2_9)
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__mshrs_0->__PVT__mp_grant_valid) 
                                                     & (IData)(vlSelf->__PVT__mshrs_0->__PVT___req_promoteT_T))
                                                     : 
                                                    ((IData)(vlSelf->__PVT__mshrs_0->__PVT__mp_probeack_valid)
                                                      ? 
                                                     ((2U 
                                                       != (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_param)) 
                                                      & (IData)(vlSelf->__PVT__mshrs_0->__PVT__dirResult_meta_accessed))
                                                      : 
                                                     ((2U 
                                                       != (IData)(vlSelf->__PVT__mshrs_0->__PVT__task_param)) 
                                                      & (IData)(vlSelf->__PVT__mshrs_0->__PVT__dirResult_meta_accessed))))) 
                                                | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                     >> 1U) 
                                                    & ((IData)(vlSelf->__PVT__mshrs_1->__VdfgRegularize_h47ff5784_2_9)
                                                        ? 
                                                       ((IData)(vlSelf->__PVT__mshrs_1->__PVT__mp_grant_valid) 
                                                        & (IData)(vlSelf->__PVT__mshrs_1->__PVT___req_promoteT_T))
                                                        : 
                                                       ((IData)(vlSelf->__PVT__mshrs_1->__PVT__mp_probeack_valid)
                                                         ? 
                                                        ((2U 
                                                          != (IData)(vlSelf->__PVT__mshrs_1->__PVT__req_param)) 
                                                         & (IData)(vlSelf->__PVT__mshrs_1->__PVT__dirResult_meta_accessed))
                                                         : 
                                                        ((2U 
                                                          != (IData)(vlSelf->__PVT__mshrs_1->__PVT__task_param)) 
                                                         & (IData)(vlSelf->__PVT__mshrs_1->__PVT__dirResult_meta_accessed))))) 
                                                   | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                        >> 2U) 
                                                       & ((IData)(vlSelf->__PVT__mshrs_2->__VdfgRegularize_h47ff5784_2_9)
                                                           ? 
                                                          ((IData)(vlSelf->__PVT__mshrs_2->__PVT__mp_grant_valid) 
                                                           & (IData)(vlSelf->__PVT__mshrs_2->__PVT___req_promoteT_T))
                                                           : 
                                                          ((IData)(vlSelf->__PVT__mshrs_2->__PVT__mp_probeack_valid)
                                                            ? 
                                                           ((2U 
                                                             != (IData)(vlSelf->__PVT__mshrs_2->__PVT__req_param)) 
                                                            & (IData)(vlSelf->__PVT__mshrs_2->__PVT__dirResult_meta_accessed))
                                                            : 
                                                           ((2U 
                                                             != (IData)(vlSelf->__PVT__mshrs_2->__PVT__task_param)) 
                                                            & (IData)(vlSelf->__PVT__mshrs_2->__PVT__dirResult_meta_accessed))))) 
                                                      | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                           >> 3U) 
                                                          & ((IData)(vlSelf->__PVT__mshrs_3->__VdfgRegularize_h47ff5784_2_9)
                                                              ? 
                                                             ((IData)(vlSelf->__PVT__mshrs_3->__PVT__mp_grant_valid) 
                                                              & (IData)(vlSelf->__PVT__mshrs_3->__PVT___req_promoteT_T))
                                                              : 
                                                             ((IData)(vlSelf->__PVT__mshrs_3->__PVT__mp_probeack_valid)
                                                               ? 
                                                              ((2U 
                                                                != (IData)(vlSelf->__PVT__mshrs_3->__PVT__req_param)) 
                                                               & (IData)(vlSelf->__PVT__mshrs_3->__PVT__dirResult_meta_accessed))
                                                               : 
                                                              ((2U 
                                                                != (IData)(vlSelf->__PVT__mshrs_3->__PVT__task_param)) 
                                                               & (IData)(vlSelf->__PVT__mshrs_3->__PVT__dirResult_meta_accessed))))) 
                                                         | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                              >> 4U) 
                                                             & ((IData)(vlSelf->__PVT__mshrs_4->__VdfgRegularize_h47ff5784_2_9)
                                                                 ? 
                                                                ((IData)(vlSelf->__PVT__mshrs_4->__PVT__mp_grant_valid) 
                                                                 & (IData)(vlSelf->__PVT__mshrs_4->__PVT___req_promoteT_T))
                                                                 : 
                                                                ((IData)(vlSelf->__PVT__mshrs_4->__PVT__mp_probeack_valid)
                                                                  ? 
                                                                 ((2U 
                                                                   != (IData)(vlSelf->__PVT__mshrs_4->__PVT__req_param)) 
                                                                  & (IData)(vlSelf->__PVT__mshrs_4->__PVT__dirResult_meta_accessed))
                                                                  : 
                                                                 ((2U 
                                                                   != (IData)(vlSelf->__PVT__mshrs_4->__PVT__task_param)) 
                                                                  & (IData)(vlSelf->__PVT__mshrs_4->__PVT__dirResult_meta_accessed))))) 
                                                            | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                 >> 5U) 
                                                                & ((IData)(vlSelf->__PVT__mshrs_5->__VdfgRegularize_h47ff5784_2_9)
                                                                    ? 
                                                                   ((IData)(vlSelf->__PVT__mshrs_5->__PVT__mp_grant_valid) 
                                                                    & (IData)(vlSelf->__PVT__mshrs_5->__PVT___req_promoteT_T))
                                                                    : 
                                                                   ((IData)(vlSelf->__PVT__mshrs_5->__PVT__mp_probeack_valid)
                                                                     ? 
                                                                    ((2U 
                                                                      != (IData)(vlSelf->__PVT__mshrs_5->__PVT__req_param)) 
                                                                     & (IData)(vlSelf->__PVT__mshrs_5->__PVT__dirResult_meta_accessed))
                                                                     : 
                                                                    ((2U 
                                                                      != (IData)(vlSelf->__PVT__mshrs_5->__PVT__task_param)) 
                                                                     & (IData)(vlSelf->__PVT__mshrs_5->__PVT__dirResult_meta_accessed))))) 
                                                               | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                    >> 6U) 
                                                                   & ((IData)(vlSelf->__PVT__mshrs_6->__VdfgRegularize_h47ff5784_2_9)
                                                                       ? 
                                                                      ((IData)(vlSelf->__PVT__mshrs_6->__PVT__mp_grant_valid) 
                                                                       & (IData)(vlSelf->__PVT__mshrs_6->__PVT___req_promoteT_T))
                                                                       : 
                                                                      ((IData)(vlSelf->__PVT__mshrs_6->__PVT__mp_probeack_valid)
                                                                        ? 
                                                                       ((2U 
                                                                         != (IData)(vlSelf->__PVT__mshrs_6->__PVT__req_param)) 
                                                                        & (IData)(vlSelf->__PVT__mshrs_6->__PVT__dirResult_meta_accessed))
                                                                        : 
                                                                       ((2U 
                                                                         != (IData)(vlSelf->__PVT__mshrs_6->__PVT__task_param)) 
                                                                        & (IData)(vlSelf->__PVT__mshrs_6->__PVT__dirResult_meta_accessed))))) 
                                                                  | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                       >> 7U) 
                                                                      & ((IData)(vlSelf->__PVT__mshrs_7->__VdfgRegularize_h47ff5784_2_9)
                                                                          ? 
                                                                         ((IData)(vlSelf->__PVT__mshrs_7->__PVT__mp_grant_valid) 
                                                                          & (IData)(vlSelf->__PVT__mshrs_7->__PVT___req_promoteT_T))
                                                                          : 
                                                                         ((IData)(vlSelf->__PVT__mshrs_7->__PVT__mp_probeack_valid)
                                                                           ? 
                                                                          ((2U 
                                                                            != (IData)(vlSelf->__PVT__mshrs_7->__PVT__req_param)) 
                                                                           & (IData)(vlSelf->__PVT__mshrs_7->__PVT__dirResult_meta_accessed))
                                                                           : 
                                                                          ((2U 
                                                                            != (IData)(vlSelf->__PVT__mshrs_7->__PVT__task_param)) 
                                                                           & (IData)(vlSelf->__PVT__mshrs_7->__PVT__dirResult_meta_accessed))))) 
                                                                     | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                          >> 8U) 
                                                                         & ((IData)(vlSelf->__PVT__mshrs_8->__VdfgRegularize_h47ff5784_2_9)
                                                                             ? 
                                                                            ((IData)(vlSelf->__PVT__mshrs_8->__PVT__mp_grant_valid) 
                                                                             & (IData)(vlSelf->__PVT__mshrs_8->__PVT___req_promoteT_T))
                                                                             : 
                                                                            ((IData)(vlSelf->__PVT__mshrs_8->__PVT__mp_probeack_valid)
                                                                              ? 
                                                                             ((2U 
                                                                               != (IData)(vlSelf->__PVT__mshrs_8->__PVT__req_param)) 
                                                                              & (IData)(vlSelf->__PVT__mshrs_8->__PVT__dirResult_meta_accessed))
                                                                              : 
                                                                             ((2U 
                                                                               != (IData)(vlSelf->__PVT__mshrs_8->__PVT__task_param)) 
                                                                              & (IData)(vlSelf->__PVT__mshrs_8->__PVT__dirResult_meta_accessed))))) 
                                                                        | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                             >> 9U) 
                                                                            & ((IData)(vlSelf->__PVT__mshrs_9->__VdfgRegularize_h47ff5784_2_9)
                                                                                ? 
                                                                               ((IData)(vlSelf->__PVT__mshrs_9->__PVT__mp_grant_valid) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_9->__PVT___req_promoteT_T))
                                                                                : 
                                                                               ((IData)(vlSelf->__PVT__mshrs_9->__PVT__mp_probeack_valid)
                                                                                 ? 
                                                                                ((2U 
                                                                                != (IData)(vlSelf->__PVT__mshrs_9->__PVT__req_param)) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_9->__PVT__dirResult_meta_accessed))
                                                                                 : 
                                                                                ((2U 
                                                                                != (IData)(vlSelf->__PVT__mshrs_9->__PVT__task_param)) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_9->__PVT__dirResult_meta_accessed))))) 
                                                                           | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xaU) 
                                                                               & ((IData)(vlSelf->__PVT__mshrs_10->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_10->__PVT__mp_grant_valid) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_10->__PVT___req_promoteT_T))
                                                                                 : 
                                                                                ((IData)(vlSelf->__PVT__mshrs_10->__PVT__mp_probeack_valid)
                                                                                 ? 
                                                                                ((2U 
                                                                                != (IData)(vlSelf->__PVT__mshrs_10->__PVT__req_param)) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_10->__PVT__dirResult_meta_accessed))
                                                                                 : 
                                                                                ((2U 
                                                                                != (IData)(vlSelf->__PVT__mshrs_10->__PVT__task_param)) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_10->__PVT__dirResult_meta_accessed))))) 
                                                                              | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xbU) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_11->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_11->__PVT__mp_grant_valid) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_11->__PVT___req_promoteT_T))
                                                                                 : 
                                                                                ((IData)(vlSelf->__PVT__mshrs_11->__PVT__mp_probeack_valid)
                                                                                 ? 
                                                                                ((2U 
                                                                                != (IData)(vlSelf->__PVT__mshrs_11->__PVT__req_param)) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_11->__PVT__dirResult_meta_accessed))
                                                                                 : 
                                                                                ((2U 
                                                                                != (IData)(vlSelf->__PVT__mshrs_11->__PVT__task_param)) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_11->__PVT__dirResult_meta_accessed))))) 
                                                                                | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xcU) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_12->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_12->__PVT__mp_grant_valid) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_12->__PVT___req_promoteT_T))
                                                                                 : 
                                                                                ((IData)(vlSelf->__PVT__mshrs_12->__PVT__mp_probeack_valid)
                                                                                 ? 
                                                                                ((2U 
                                                                                != (IData)(vlSelf->__PVT__mshrs_12->__PVT__req_param)) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_12->__PVT__dirResult_meta_accessed))
                                                                                 : 
                                                                                ((2U 
                                                                                != (IData)(vlSelf->__PVT__mshrs_12->__PVT__task_param)) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_12->__PVT__dirResult_meta_accessed))))) 
                                                                                | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xdU) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_13->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_13->__PVT__mp_grant_valid) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_13->__PVT___req_promoteT_T))
                                                                                 : 
                                                                                ((IData)(vlSelf->__PVT__mshrs_13->__PVT__mp_probeack_valid)
                                                                                 ? 
                                                                                ((2U 
                                                                                != (IData)(vlSelf->__PVT__mshrs_13->__PVT__req_param)) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_13->__PVT__dirResult_meta_accessed))
                                                                                 : 
                                                                                ((2U 
                                                                                != (IData)(vlSelf->__PVT__mshrs_13->__PVT__task_param)) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_13->__PVT__dirResult_meta_accessed))))) 
                                                                                | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xeU) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_14->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_14->__PVT__mp_grant_valid) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_14->__PVT___req_promoteT_T))
                                                                                 : 
                                                                                ((IData)(vlSelf->__PVT__mshrs_14->__PVT__mp_probeack_valid)
                                                                                 ? 
                                                                                ((2U 
                                                                                != (IData)(vlSelf->__PVT__mshrs_14->__PVT__req_param)) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_14->__PVT__dirResult_meta_accessed))
                                                                                 : 
                                                                                ((2U 
                                                                                != (IData)(vlSelf->__PVT__mshrs_14->__PVT__task_param)) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_14->__PVT__dirResult_meta_accessed))))) 
                                                                                | (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xfU) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_15->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_15->__PVT__mp_grant_valid) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_15->__PVT___req_promoteT_T))
                                                                                 : 
                                                                                ((IData)(vlSelf->__PVT__mshrs_15->__PVT__mp_probeack_valid)
                                                                                 ? 
                                                                                ((2U 
                                                                                != (IData)(vlSelf->__PVT__mshrs_15->__PVT__req_param)) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_15->__PVT__dirResult_meta_accessed))
                                                                                 : 
                                                                                ((2U 
                                                                                != (IData)(vlSelf->__PVT__mshrs_15->__PVT__task_param)) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_15->__PVT__dirResult_meta_accessed))))))))))))))))))));
    vlSelfRef.io_mshrTask_bits_param = ((((1U & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                           ? ((IData)(vlSelf->__PVT__mshrs_0->__VdfgRegularize_h47ff5784_2_9)
                                               ? ((IData)(vlSelf->__PVT__mshrs_0->__PVT__mp_grant_valid)
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__mshrs_0->__PVT___mp_grant_task_mp_grant_param_T)
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_param))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_param))
                                                      ? 0U
                                                      : 
                                                     ((0U 
                                                       == (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_param))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__mshrs_0->__PVT__req_promoteT)
                                                        ? 0U
                                                        : 1U)
                                                       : (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_param)))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->__PVT__mshrs_0->__PVT__dirResult_meta_state))
                                                    ? 1U
                                                    : 2U))
                                               : ((IData)(vlSelf->__PVT__mshrs_0->__PVT__mp_probeack_valid)
                                                   ? 
                                                  (((2U 
                                                     == (IData)(vlSelf->__PVT__mshrs_0->__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                     ? 2U
                                                     : 0U) 
                                                   | ((6U 
                                                       == (IData)(vlSelf->__PVT__mshrs_0->__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                       ? 1U
                                                       : 0U))
                                                   : 
                                                  (((2U 
                                                     == (IData)(vlSelf->__PVT__mshrs_0->__PVT___mp_merge_probeack_param_T_2))
                                                     ? 2U
                                                     : 0U) 
                                                   | ((6U 
                                                       == (IData)(vlSelf->__PVT__mshrs_0->__PVT___mp_merge_probeack_param_T_2))
                                                       ? 1U
                                                       : 0U))))
                                           : 0U) | 
                                         ((2U & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                           ? ((IData)(vlSelf->__PVT__mshrs_1->__VdfgRegularize_h47ff5784_2_9)
                                               ? ((IData)(vlSelf->__PVT__mshrs_1->__PVT__mp_grant_valid)
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__mshrs_1->__PVT___mp_grant_task_mp_grant_param_T)
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->__PVT__mshrs_1->__PVT__req_param))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->__PVT__mshrs_1->__PVT__req_param))
                                                      ? 0U
                                                      : 
                                                     ((0U 
                                                       == (IData)(vlSelf->__PVT__mshrs_1->__PVT__req_param))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__mshrs_1->__PVT__req_promoteT)
                                                        ? 0U
                                                        : 1U)
                                                       : (IData)(vlSelf->__PVT__mshrs_1->__PVT__req_param)))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->__PVT__mshrs_1->__PVT__dirResult_meta_state))
                                                    ? 1U
                                                    : 2U))
                                               : ((IData)(vlSelf->__PVT__mshrs_1->__PVT__mp_probeack_valid)
                                                   ? 
                                                  (((2U 
                                                     == (IData)(vlSelf->__PVT__mshrs_1->__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                     ? 2U
                                                     : 0U) 
                                                   | ((6U 
                                                       == (IData)(vlSelf->__PVT__mshrs_1->__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                       ? 1U
                                                       : 0U))
                                                   : 
                                                  (((2U 
                                                     == (IData)(vlSelf->__PVT__mshrs_1->__PVT___mp_merge_probeack_param_T_2))
                                                     ? 2U
                                                     : 0U) 
                                                   | ((6U 
                                                       == (IData)(vlSelf->__PVT__mshrs_1->__PVT___mp_merge_probeack_param_T_2))
                                                       ? 1U
                                                       : 0U))))
                                           : 0U)) | 
                                        ((((4U & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? ((IData)(vlSelf->__PVT__mshrs_2->__VdfgRegularize_h47ff5784_2_9)
                                                ? ((IData)(vlSelf->__PVT__mshrs_2->__PVT__mp_grant_valid)
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__mshrs_2->__PVT___mp_grant_task_mp_grant_param_T)
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->__PVT__mshrs_2->__PVT__req_param))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->__PVT__mshrs_2->__PVT__req_param))
                                                       ? 0U
                                                       : 
                                                      ((0U 
                                                        == (IData)(vlSelf->__PVT__mshrs_2->__PVT__req_param))
                                                        ? 
                                                       ((IData)(vlSelf->__PVT__mshrs_2->__PVT__req_promoteT)
                                                         ? 0U
                                                         : 1U)
                                                        : (IData)(vlSelf->__PVT__mshrs_2->__PVT__req_param)))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__mshrs_2->__PVT__dirResult_meta_state))
                                                     ? 1U
                                                     : 2U))
                                                : ((IData)(vlSelf->__PVT__mshrs_2->__PVT__mp_probeack_valid)
                                                    ? 
                                                   (((2U 
                                                      == (IData)(vlSelf->__PVT__mshrs_2->__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                      ? 2U
                                                      : 0U) 
                                                    | ((6U 
                                                        == (IData)(vlSelf->__PVT__mshrs_2->__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                        ? 1U
                                                        : 0U))
                                                    : 
                                                   (((2U 
                                                      == (IData)(vlSelf->__PVT__mshrs_2->__PVT___mp_merge_probeack_param_T_2))
                                                      ? 2U
                                                      : 0U) 
                                                    | ((6U 
                                                        == (IData)(vlSelf->__PVT__mshrs_2->__PVT___mp_merge_probeack_param_T_2))
                                                        ? 1U
                                                        : 0U))))
                                            : 0U) | 
                                          ((8U & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                            ? ((IData)(vlSelf->__PVT__mshrs_3->__VdfgRegularize_h47ff5784_2_9)
                                                ? ((IData)(vlSelf->__PVT__mshrs_3->__PVT__mp_grant_valid)
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__mshrs_3->__PVT___mp_grant_task_mp_grant_param_T)
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->__PVT__mshrs_3->__PVT__req_param))
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->__PVT__mshrs_3->__PVT__req_param))
                                                       ? 0U
                                                       : 
                                                      ((0U 
                                                        == (IData)(vlSelf->__PVT__mshrs_3->__PVT__req_param))
                                                        ? 
                                                       ((IData)(vlSelf->__PVT__mshrs_3->__PVT__req_promoteT)
                                                         ? 0U
                                                         : 1U)
                                                        : (IData)(vlSelf->__PVT__mshrs_3->__PVT__req_param)))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->__PVT__mshrs_3->__PVT__dirResult_meta_state))
                                                     ? 1U
                                                     : 2U))
                                                : ((IData)(vlSelf->__PVT__mshrs_3->__PVT__mp_probeack_valid)
                                                    ? 
                                                   (((2U 
                                                      == (IData)(vlSelf->__PVT__mshrs_3->__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                      ? 2U
                                                      : 0U) 
                                                    | ((6U 
                                                        == (IData)(vlSelf->__PVT__mshrs_3->__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                        ? 1U
                                                        : 0U))
                                                    : 
                                                   (((2U 
                                                      == (IData)(vlSelf->__PVT__mshrs_3->__PVT___mp_merge_probeack_param_T_2))
                                                      ? 2U
                                                      : 0U) 
                                                    | ((6U 
                                                        == (IData)(vlSelf->__PVT__mshrs_3->__PVT___mp_merge_probeack_param_T_2))
                                                        ? 1U
                                                        : 0U))))
                                            : 0U)) 
                                         | (((0x10U 
                                              & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                              ? ((IData)(vlSelf->__PVT__mshrs_4->__VdfgRegularize_h47ff5784_2_9)
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__mshrs_4->__PVT__mp_grant_valid)
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__mshrs_4->__PVT___mp_grant_task_mp_grant_param_T)
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->__PVT__mshrs_4->__PVT__req_param))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->__PVT__mshrs_4->__PVT__req_param))
                                                      ? 0U
                                                      : 
                                                     ((0U 
                                                       == (IData)(vlSelf->__PVT__mshrs_4->__PVT__req_param))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__mshrs_4->__PVT__req_promoteT)
                                                        ? 0U
                                                        : 1U)
                                                       : (IData)(vlSelf->__PVT__mshrs_4->__PVT__req_param)))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->__PVT__mshrs_4->__PVT__dirResult_meta_state))
                                                    ? 1U
                                                    : 2U))
                                                  : 
                                                 ((IData)(vlSelf->__PVT__mshrs_4->__PVT__mp_probeack_valid)
                                                   ? 
                                                  (((2U 
                                                     == (IData)(vlSelf->__PVT__mshrs_4->__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                     ? 2U
                                                     : 0U) 
                                                   | ((6U 
                                                       == (IData)(vlSelf->__PVT__mshrs_4->__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                       ? 1U
                                                       : 0U))
                                                   : 
                                                  (((2U 
                                                     == (IData)(vlSelf->__PVT__mshrs_4->__PVT___mp_merge_probeack_param_T_2))
                                                     ? 2U
                                                     : 0U) 
                                                   | ((6U 
                                                       == (IData)(vlSelf->__PVT__mshrs_4->__PVT___mp_merge_probeack_param_T_2))
                                                       ? 1U
                                                       : 0U))))
                                              : 0U) 
                                            | (((0x20U 
                                                 & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                 ? 
                                                ((IData)(vlSelf->__PVT__mshrs_5->__VdfgRegularize_h47ff5784_2_9)
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__mshrs_5->__PVT__mp_grant_valid)
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__mshrs_5->__PVT___mp_grant_task_mp_grant_param_T)
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->__PVT__mshrs_5->__PVT__req_param))
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->__PVT__mshrs_5->__PVT__req_param))
                                                      ? 0U
                                                      : 
                                                     ((0U 
                                                       == (IData)(vlSelf->__PVT__mshrs_5->__PVT__req_param))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__mshrs_5->__PVT__req_promoteT)
                                                        ? 0U
                                                        : 1U)
                                                       : (IData)(vlSelf->__PVT__mshrs_5->__PVT__req_param)))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->__PVT__mshrs_5->__PVT__dirResult_meta_state))
                                                    ? 1U
                                                    : 2U))
                                                  : 
                                                 ((IData)(vlSelf->__PVT__mshrs_5->__PVT__mp_probeack_valid)
                                                   ? 
                                                  (((2U 
                                                     == (IData)(vlSelf->__PVT__mshrs_5->__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                     ? 2U
                                                     : 0U) 
                                                   | ((6U 
                                                       == (IData)(vlSelf->__PVT__mshrs_5->__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                       ? 1U
                                                       : 0U))
                                                   : 
                                                  (((2U 
                                                     == (IData)(vlSelf->__PVT__mshrs_5->__PVT___mp_merge_probeack_param_T_2))
                                                     ? 2U
                                                     : 0U) 
                                                   | ((6U 
                                                       == (IData)(vlSelf->__PVT__mshrs_5->__PVT___mp_merge_probeack_param_T_2))
                                                       ? 1U
                                                       : 0U))))
                                                 : 0U) 
                                               | (((0x40U 
                                                    & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__mshrs_6->__VdfgRegularize_h47ff5784_2_9)
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__mshrs_6->__PVT__mp_grant_valid)
                                                      ? 
                                                     ((IData)(vlSelf->__PVT__mshrs_6->__PVT___mp_grant_task_mp_grant_param_T)
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelf->__PVT__mshrs_6->__PVT__req_param))
                                                        ? 0U
                                                        : 
                                                       ((2U 
                                                         == (IData)(vlSelf->__PVT__mshrs_6->__PVT__req_param))
                                                         ? 0U
                                                         : 
                                                        ((0U 
                                                          == (IData)(vlSelf->__PVT__mshrs_6->__PVT__req_param))
                                                          ? 
                                                         ((IData)(vlSelf->__PVT__mshrs_6->__PVT__req_promoteT)
                                                           ? 0U
                                                           : 1U)
                                                          : (IData)(vlSelf->__PVT__mshrs_6->__PVT__req_param)))))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->__PVT__mshrs_6->__PVT__dirResult_meta_state))
                                                       ? 1U
                                                       : 2U))
                                                     : 
                                                    ((IData)(vlSelf->__PVT__mshrs_6->__PVT__mp_probeack_valid)
                                                      ? 
                                                     (((2U 
                                                        == (IData)(vlSelf->__PVT__mshrs_6->__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                        ? 2U
                                                        : 0U) 
                                                      | ((6U 
                                                          == (IData)(vlSelf->__PVT__mshrs_6->__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                          ? 1U
                                                          : 0U))
                                                      : 
                                                     (((2U 
                                                        == (IData)(vlSelf->__PVT__mshrs_6->__PVT___mp_merge_probeack_param_T_2))
                                                        ? 2U
                                                        : 0U) 
                                                      | ((6U 
                                                          == (IData)(vlSelf->__PVT__mshrs_6->__PVT___mp_merge_probeack_param_T_2))
                                                          ? 1U
                                                          : 0U))))
                                                    : 0U) 
                                                  | (((0x80U 
                                                       & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__mshrs_7->__VdfgRegularize_h47ff5784_2_9)
                                                        ? 
                                                       ((IData)(vlSelf->__PVT__mshrs_7->__PVT__mp_grant_valid)
                                                         ? 
                                                        ((IData)(vlSelf->__PVT__mshrs_7->__PVT___mp_grant_task_mp_grant_param_T)
                                                          ? 0U
                                                          : 
                                                         ((1U 
                                                           == (IData)(vlSelf->__PVT__mshrs_7->__PVT__req_param))
                                                           ? 0U
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelf->__PVT__mshrs_7->__PVT__req_param))
                                                            ? 0U
                                                            : 
                                                           ((0U 
                                                             == (IData)(vlSelf->__PVT__mshrs_7->__PVT__req_param))
                                                             ? 
                                                            ((IData)(vlSelf->__PVT__mshrs_7->__PVT__req_promoteT)
                                                              ? 0U
                                                              : 1U)
                                                             : (IData)(vlSelf->__PVT__mshrs_7->__PVT__req_param)))))
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelf->__PVT__mshrs_7->__PVT__dirResult_meta_state))
                                                          ? 1U
                                                          : 2U))
                                                        : 
                                                       ((IData)(vlSelf->__PVT__mshrs_7->__PVT__mp_probeack_valid)
                                                         ? 
                                                        (((2U 
                                                           == (IData)(vlSelf->__PVT__mshrs_7->__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                           ? 2U
                                                           : 0U) 
                                                         | ((6U 
                                                             == (IData)(vlSelf->__PVT__mshrs_7->__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                             ? 1U
                                                             : 0U))
                                                         : 
                                                        (((2U 
                                                           == (IData)(vlSelf->__PVT__mshrs_7->__PVT___mp_merge_probeack_param_T_2))
                                                           ? 2U
                                                           : 0U) 
                                                         | ((6U 
                                                             == (IData)(vlSelf->__PVT__mshrs_7->__PVT___mp_merge_probeack_param_T_2))
                                                             ? 1U
                                                             : 0U))))
                                                       : 0U) 
                                                     | (((0x100U 
                                                          & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                          ? 
                                                         ((IData)(vlSelf->__PVT__mshrs_8->__VdfgRegularize_h47ff5784_2_9)
                                                           ? 
                                                          ((IData)(vlSelf->__PVT__mshrs_8->__PVT__mp_grant_valid)
                                                            ? 
                                                           ((IData)(vlSelf->__PVT__mshrs_8->__PVT___mp_grant_task_mp_grant_param_T)
                                                             ? 0U
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlSelf->__PVT__mshrs_8->__PVT__req_param))
                                                              ? 0U
                                                              : 
                                                             ((2U 
                                                               == (IData)(vlSelf->__PVT__mshrs_8->__PVT__req_param))
                                                               ? 0U
                                                               : 
                                                              ((0U 
                                                                == (IData)(vlSelf->__PVT__mshrs_8->__PVT__req_param))
                                                                ? 
                                                               ((IData)(vlSelf->__PVT__mshrs_8->__PVT__req_promoteT)
                                                                 ? 0U
                                                                 : 1U)
                                                                : (IData)(vlSelf->__PVT__mshrs_8->__PVT__req_param)))))
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__mshrs_8->__PVT__dirResult_meta_state))
                                                             ? 1U
                                                             : 2U))
                                                           : 
                                                          ((IData)(vlSelf->__PVT__mshrs_8->__PVT__mp_probeack_valid)
                                                            ? 
                                                           (((2U 
                                                              == (IData)(vlSelf->__PVT__mshrs_8->__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                              ? 2U
                                                              : 0U) 
                                                            | ((6U 
                                                                == (IData)(vlSelf->__PVT__mshrs_8->__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                                ? 1U
                                                                : 0U))
                                                            : 
                                                           (((2U 
                                                              == (IData)(vlSelf->__PVT__mshrs_8->__PVT___mp_merge_probeack_param_T_2))
                                                              ? 2U
                                                              : 0U) 
                                                            | ((6U 
                                                                == (IData)(vlSelf->__PVT__mshrs_8->__PVT___mp_merge_probeack_param_T_2))
                                                                ? 1U
                                                                : 0U))))
                                                          : 0U) 
                                                        | (((0x200U 
                                                             & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                             ? 
                                                            ((IData)(vlSelf->__PVT__mshrs_9->__VdfgRegularize_h47ff5784_2_9)
                                                              ? 
                                                             ((IData)(vlSelf->__PVT__mshrs_9->__PVT__mp_grant_valid)
                                                               ? 
                                                              ((IData)(vlSelf->__PVT__mshrs_9->__PVT___mp_grant_task_mp_grant_param_T)
                                                                ? 0U
                                                                : 
                                                               ((1U 
                                                                 == (IData)(vlSelf->__PVT__mshrs_9->__PVT__req_param))
                                                                 ? 0U
                                                                 : 
                                                                ((2U 
                                                                  == (IData)(vlSelf->__PVT__mshrs_9->__PVT__req_param))
                                                                  ? 0U
                                                                  : 
                                                                 ((0U 
                                                                   == (IData)(vlSelf->__PVT__mshrs_9->__PVT__req_param))
                                                                   ? 
                                                                  ((IData)(vlSelf->__PVT__mshrs_9->__PVT__req_promoteT)
                                                                    ? 0U
                                                                    : 1U)
                                                                   : (IData)(vlSelf->__PVT__mshrs_9->__PVT__req_param)))))
                                                               : 
                                                              ((2U 
                                                                & (IData)(vlSelf->__PVT__mshrs_9->__PVT__dirResult_meta_state))
                                                                ? 1U
                                                                : 2U))
                                                              : 
                                                             ((IData)(vlSelf->__PVT__mshrs_9->__PVT__mp_probeack_valid)
                                                               ? 
                                                              (((2U 
                                                                 == (IData)(vlSelf->__PVT__mshrs_9->__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                                 ? 2U
                                                                 : 0U) 
                                                               | ((6U 
                                                                   == (IData)(vlSelf->__PVT__mshrs_9->__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                                   ? 1U
                                                                   : 0U))
                                                               : 
                                                              (((2U 
                                                                 == (IData)(vlSelf->__PVT__mshrs_9->__PVT___mp_merge_probeack_param_T_2))
                                                                 ? 2U
                                                                 : 0U) 
                                                               | ((6U 
                                                                   == (IData)(vlSelf->__PVT__mshrs_9->__PVT___mp_merge_probeack_param_T_2))
                                                                   ? 1U
                                                                   : 0U))))
                                                             : 0U) 
                                                           | (((0x400U 
                                                                & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                ? 
                                                               ((IData)(vlSelf->__PVT__mshrs_10->__VdfgRegularize_h47ff5784_2_9)
                                                                 ? 
                                                                ((IData)(vlSelf->__PVT__mshrs_10->__PVT__mp_grant_valid)
                                                                  ? 
                                                                 ((IData)(vlSelf->__PVT__mshrs_10->__PVT___mp_grant_task_mp_grant_param_T)
                                                                   ? 0U
                                                                   : 
                                                                  ((1U 
                                                                    == (IData)(vlSelf->__PVT__mshrs_10->__PVT__req_param))
                                                                    ? 0U
                                                                    : 
                                                                   ((2U 
                                                                     == (IData)(vlSelf->__PVT__mshrs_10->__PVT__req_param))
                                                                     ? 0U
                                                                     : 
                                                                    ((0U 
                                                                      == (IData)(vlSelf->__PVT__mshrs_10->__PVT__req_param))
                                                                      ? 
                                                                     ((IData)(vlSelf->__PVT__mshrs_10->__PVT__req_promoteT)
                                                                       ? 0U
                                                                       : 1U)
                                                                      : (IData)(vlSelf->__PVT__mshrs_10->__PVT__req_param)))))
                                                                  : 
                                                                 ((2U 
                                                                   & (IData)(vlSelf->__PVT__mshrs_10->__PVT__dirResult_meta_state))
                                                                   ? 1U
                                                                   : 2U))
                                                                 : 
                                                                ((IData)(vlSelf->__PVT__mshrs_10->__PVT__mp_probeack_valid)
                                                                  ? 
                                                                 (((2U 
                                                                    == (IData)(vlSelf->__PVT__mshrs_10->__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                                    ? 2U
                                                                    : 0U) 
                                                                  | ((6U 
                                                                      == (IData)(vlSelf->__PVT__mshrs_10->__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                                      ? 1U
                                                                      : 0U))
                                                                  : 
                                                                 (((2U 
                                                                    == (IData)(vlSelf->__PVT__mshrs_10->__PVT___mp_merge_probeack_param_T_2))
                                                                    ? 2U
                                                                    : 0U) 
                                                                  | ((6U 
                                                                      == (IData)(vlSelf->__PVT__mshrs_10->__PVT___mp_merge_probeack_param_T_2))
                                                                      ? 1U
                                                                      : 0U))))
                                                                : 0U) 
                                                              | (((0x800U 
                                                                   & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                   ? 
                                                                  ((IData)(vlSelf->__PVT__mshrs_11->__VdfgRegularize_h47ff5784_2_9)
                                                                    ? 
                                                                   ((IData)(vlSelf->__PVT__mshrs_11->__PVT__mp_grant_valid)
                                                                     ? 
                                                                    ((IData)(vlSelf->__PVT__mshrs_11->__PVT___mp_grant_task_mp_grant_param_T)
                                                                      ? 0U
                                                                      : 
                                                                     ((1U 
                                                                       == (IData)(vlSelf->__PVT__mshrs_11->__PVT__req_param))
                                                                       ? 0U
                                                                       : 
                                                                      ((2U 
                                                                        == (IData)(vlSelf->__PVT__mshrs_11->__PVT__req_param))
                                                                        ? 0U
                                                                        : 
                                                                       ((0U 
                                                                         == (IData)(vlSelf->__PVT__mshrs_11->__PVT__req_param))
                                                                         ? 
                                                                        ((IData)(vlSelf->__PVT__mshrs_11->__PVT__req_promoteT)
                                                                          ? 0U
                                                                          : 1U)
                                                                         : (IData)(vlSelf->__PVT__mshrs_11->__PVT__req_param)))))
                                                                     : 
                                                                    ((2U 
                                                                      & (IData)(vlSelf->__PVT__mshrs_11->__PVT__dirResult_meta_state))
                                                                      ? 1U
                                                                      : 2U))
                                                                    : 
                                                                   ((IData)(vlSelf->__PVT__mshrs_11->__PVT__mp_probeack_valid)
                                                                     ? 
                                                                    (((2U 
                                                                       == (IData)(vlSelf->__PVT__mshrs_11->__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                                       ? 2U
                                                                       : 0U) 
                                                                     | ((6U 
                                                                         == (IData)(vlSelf->__PVT__mshrs_11->__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                                         ? 1U
                                                                         : 0U))
                                                                     : 
                                                                    (((2U 
                                                                       == (IData)(vlSelf->__PVT__mshrs_11->__PVT___mp_merge_probeack_param_T_2))
                                                                       ? 2U
                                                                       : 0U) 
                                                                     | ((6U 
                                                                         == (IData)(vlSelf->__PVT__mshrs_11->__PVT___mp_merge_probeack_param_T_2))
                                                                         ? 1U
                                                                         : 0U))))
                                                                   : 0U) 
                                                                 | (((0x1000U 
                                                                      & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                      ? 
                                                                     ((IData)(vlSelf->__PVT__mshrs_12->__VdfgRegularize_h47ff5784_2_9)
                                                                       ? 
                                                                      ((IData)(vlSelf->__PVT__mshrs_12->__PVT__mp_grant_valid)
                                                                        ? 
                                                                       ((IData)(vlSelf->__PVT__mshrs_12->__PVT___mp_grant_task_mp_grant_param_T)
                                                                         ? 0U
                                                                         : 
                                                                        ((1U 
                                                                          == (IData)(vlSelf->__PVT__mshrs_12->__PVT__req_param))
                                                                          ? 0U
                                                                          : 
                                                                         ((2U 
                                                                           == (IData)(vlSelf->__PVT__mshrs_12->__PVT__req_param))
                                                                           ? 0U
                                                                           : 
                                                                          ((0U 
                                                                            == (IData)(vlSelf->__PVT__mshrs_12->__PVT__req_param))
                                                                            ? 
                                                                           ((IData)(vlSelf->__PVT__mshrs_12->__PVT__req_promoteT)
                                                                             ? 0U
                                                                             : 1U)
                                                                            : (IData)(vlSelf->__PVT__mshrs_12->__PVT__req_param)))))
                                                                        : 
                                                                       ((2U 
                                                                         & (IData)(vlSelf->__PVT__mshrs_12->__PVT__dirResult_meta_state))
                                                                         ? 1U
                                                                         : 2U))
                                                                       : 
                                                                      ((IData)(vlSelf->__PVT__mshrs_12->__PVT__mp_probeack_valid)
                                                                        ? 
                                                                       (((2U 
                                                                          == (IData)(vlSelf->__PVT__mshrs_12->__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                                          ? 2U
                                                                          : 0U) 
                                                                        | ((6U 
                                                                            == (IData)(vlSelf->__PVT__mshrs_12->__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                                            ? 1U
                                                                            : 0U))
                                                                        : 
                                                                       (((2U 
                                                                          == (IData)(vlSelf->__PVT__mshrs_12->__PVT___mp_merge_probeack_param_T_2))
                                                                          ? 2U
                                                                          : 0U) 
                                                                        | ((6U 
                                                                            == (IData)(vlSelf->__PVT__mshrs_12->__PVT___mp_merge_probeack_param_T_2))
                                                                            ? 1U
                                                                            : 0U))))
                                                                      : 0U) 
                                                                    | (((0x2000U 
                                                                         & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                         ? 
                                                                        ((IData)(vlSelf->__PVT__mshrs_13->__VdfgRegularize_h47ff5784_2_9)
                                                                          ? 
                                                                         ((IData)(vlSelf->__PVT__mshrs_13->__PVT__mp_grant_valid)
                                                                           ? 
                                                                          ((IData)(vlSelf->__PVT__mshrs_13->__PVT___mp_grant_task_mp_grant_param_T)
                                                                            ? 0U
                                                                            : 
                                                                           ((1U 
                                                                             == (IData)(vlSelf->__PVT__mshrs_13->__PVT__req_param))
                                                                             ? 0U
                                                                             : 
                                                                            ((2U 
                                                                              == (IData)(vlSelf->__PVT__mshrs_13->__PVT__req_param))
                                                                              ? 0U
                                                                              : 
                                                                             ((0U 
                                                                               == (IData)(vlSelf->__PVT__mshrs_13->__PVT__req_param))
                                                                               ? 
                                                                              ((IData)(vlSelf->__PVT__mshrs_13->__PVT__req_promoteT)
                                                                                ? 0U
                                                                                : 1U)
                                                                               : (IData)(vlSelf->__PVT__mshrs_13->__PVT__req_param)))))
                                                                           : 
                                                                          ((2U 
                                                                            & (IData)(vlSelf->__PVT__mshrs_13->__PVT__dirResult_meta_state))
                                                                            ? 1U
                                                                            : 2U))
                                                                          : 
                                                                         ((IData)(vlSelf->__PVT__mshrs_13->__PVT__mp_probeack_valid)
                                                                           ? 
                                                                          (((2U 
                                                                             == (IData)(vlSelf->__PVT__mshrs_13->__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                                             ? 2U
                                                                             : 0U) 
                                                                           | ((6U 
                                                                               == (IData)(vlSelf->__PVT__mshrs_13->__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                                               ? 1U
                                                                               : 0U))
                                                                           : 
                                                                          (((2U 
                                                                             == (IData)(vlSelf->__PVT__mshrs_13->__PVT___mp_merge_probeack_param_T_2))
                                                                             ? 2U
                                                                             : 0U) 
                                                                           | ((6U 
                                                                               == (IData)(vlSelf->__PVT__mshrs_13->__PVT___mp_merge_probeack_param_T_2))
                                                                               ? 1U
                                                                               : 0U))))
                                                                         : 0U) 
                                                                       | (((0x4000U 
                                                                            & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                            ? 
                                                                           ((IData)(vlSelf->__PVT__mshrs_14->__VdfgRegularize_h47ff5784_2_9)
                                                                             ? 
                                                                            ((IData)(vlSelf->__PVT__mshrs_14->__PVT__mp_grant_valid)
                                                                              ? 
                                                                             ((IData)(vlSelf->__PVT__mshrs_14->__PVT___mp_grant_task_mp_grant_param_T)
                                                                               ? 0U
                                                                               : 
                                                                              ((1U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_14->__PVT__req_param))
                                                                                ? 0U
                                                                                : 
                                                                               ((2U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_14->__PVT__req_param))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_14->__PVT__req_param))
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_14->__PVT__req_promoteT)
                                                                                 ? 0U
                                                                                 : 1U)
                                                                                 : (IData)(vlSelf->__PVT__mshrs_14->__PVT__req_param)))))
                                                                              : 
                                                                             ((2U 
                                                                               & (IData)(vlSelf->__PVT__mshrs_14->__PVT__dirResult_meta_state))
                                                                               ? 1U
                                                                               : 2U))
                                                                             : 
                                                                            ((IData)(vlSelf->__PVT__mshrs_14->__PVT__mp_probeack_valid)
                                                                              ? 
                                                                             (((2U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_14->__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                                                ? 2U
                                                                                : 0U) 
                                                                              | ((6U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_14->__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                                                 ? 1U
                                                                                 : 0U))
                                                                              : 
                                                                             (((2U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_14->__PVT___mp_merge_probeack_param_T_2))
                                                                                ? 2U
                                                                                : 0U) 
                                                                              | ((6U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_14->__PVT___mp_merge_probeack_param_T_2))
                                                                                 ? 1U
                                                                                 : 0U))))
                                                                            : 0U) 
                                                                          | ((0x8000U 
                                                                              & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                              ? 
                                                                             ((IData)(vlSelf->__PVT__mshrs_15->__VdfgRegularize_h47ff5784_2_9)
                                                                               ? 
                                                                              ((IData)(vlSelf->__PVT__mshrs_15->__PVT__mp_grant_valid)
                                                                                ? 
                                                                               ((IData)(vlSelf->__PVT__mshrs_15->__PVT___mp_grant_task_mp_grant_param_T)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_15->__PVT__req_param))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_15->__PVT__req_param))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_15->__PVT__req_param))
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_15->__PVT__req_promoteT)
                                                                                 ? 0U
                                                                                 : 1U)
                                                                                 : (IData)(vlSelf->__PVT__mshrs_15->__PVT__req_param)))))
                                                                                : 
                                                                               ((2U 
                                                                                & (IData)(vlSelf->__PVT__mshrs_15->__PVT__dirResult_meta_state))
                                                                                 ? 1U
                                                                                 : 2U))
                                                                               : 
                                                                              ((IData)(vlSelf->__PVT__mshrs_15->__PVT__mp_probeack_valid)
                                                                                ? 
                                                                               (((2U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_15->__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                                                 ? 2U
                                                                                 : 0U) 
                                                                                | ((6U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_15->__PVT___mp_probeack_task_mp_probeack_param_T_2))
                                                                                 ? 1U
                                                                                 : 0U))
                                                                                : 
                                                                               (((2U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_15->__PVT___mp_merge_probeack_param_T_2))
                                                                                 ? 2U
                                                                                 : 0U) 
                                                                                | ((6U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_15->__PVT___mp_merge_probeack_param_T_2))
                                                                                 ? 1U
                                                                                 : 0U))))
                                                                              : 0U))))))))))))));
    vlSelfRef.io_mshrTask_bits_meta_state = ((((1U 
                                                & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                ? ((IData)(vlSelf->__PVT__mshrs_0->__VdfgRegularize_h47ff5784_2_9)
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__mshrs_0->__PVT__mp_grant_valid)
                                                     ? 
                                                    ((4U 
                                                      == (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_opcode))
                                                      ? 
                                                     ((IData)(vlSelf->__PVT__mshrs_0->__PVT__dirResult_hit)
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__mshrs_0->__PVT__dirResult_meta_state))
                                                        ? 3U
                                                        : 1U)
                                                       : 
                                                      ((IData)(vlSelf->__PVT__mshrs_0->__PVT__req_promoteT)
                                                        ? 3U
                                                        : 1U))
                                                      : 
                                                     (((IData)(vlSelf->__PVT__mshrs_0->__PVT__req_promoteT) 
                                                       | (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_needT))
                                                       ? 
                                                      ((5U 
                                                        == (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_opcode))
                                                        ? 3U
                                                        : 2U)
                                                       : 1U))
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->__PVT__mshrs_0->__PVT__mp_probeack_valid)
                                                     ? 
                                                    ((2U 
                                                      == (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_param))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_param))
                                                       ? 1U
                                                       : (IData)(vlSelf->__PVT__mshrs_0->__PVT__dirResult_meta_state)))
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->__PVT__mshrs_0->__PVT__task_param))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelf->__PVT__mshrs_0->__PVT__task_param))
                                                       ? 1U
                                                       : (IData)(vlSelf->__PVT__mshrs_0->__PVT__dirResult_meta_state)))))
                                                : 0U) 
                                              | ((2U 
                                                  & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__mshrs_1->__VdfgRegularize_h47ff5784_2_9)
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__mshrs_1->__PVT__mp_grant_valid)
                                                    ? 
                                                   ((4U 
                                                     == (IData)(vlSelf->__PVT__mshrs_1->__PVT__req_opcode))
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__mshrs_1->__PVT__dirResult_hit)
                                                      ? 
                                                     ((2U 
                                                       & (IData)(vlSelf->__PVT__mshrs_1->__PVT__dirResult_meta_state))
                                                       ? 3U
                                                       : 1U)
                                                      : 
                                                     ((IData)(vlSelf->__PVT__mshrs_1->__PVT__req_promoteT)
                                                       ? 3U
                                                       : 1U))
                                                     : 
                                                    (((IData)(vlSelf->__PVT__mshrs_1->__PVT__req_promoteT) 
                                                      | (IData)(vlSelf->__PVT__mshrs_1->__PVT__req_needT))
                                                      ? 
                                                     ((5U 
                                                       == (IData)(vlSelf->__PVT__mshrs_1->__PVT__req_opcode))
                                                       ? 3U
                                                       : 2U)
                                                      : 1U))
                                                    : 0U)
                                                   : 
                                                  ((IData)(vlSelf->__PVT__mshrs_1->__PVT__mp_probeack_valid)
                                                    ? 
                                                   ((2U 
                                                     == (IData)(vlSelf->__PVT__mshrs_1->__PVT__req_param))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->__PVT__mshrs_1->__PVT__req_param))
                                                      ? 1U
                                                      : (IData)(vlSelf->__PVT__mshrs_1->__PVT__dirResult_meta_state)))
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->__PVT__mshrs_1->__PVT__task_param))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->__PVT__mshrs_1->__PVT__task_param))
                                                      ? 1U
                                                      : (IData)(vlSelf->__PVT__mshrs_1->__PVT__dirResult_meta_state)))))
                                                  : 0U)) 
                                             | ((((4U 
                                                   & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__mshrs_2->__VdfgRegularize_h47ff5784_2_9)
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__mshrs_2->__PVT__mp_grant_valid)
                                                     ? 
                                                    ((4U 
                                                      == (IData)(vlSelf->__PVT__mshrs_2->__PVT__req_opcode))
                                                      ? 
                                                     ((IData)(vlSelf->__PVT__mshrs_2->__PVT__dirResult_hit)
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__mshrs_2->__PVT__dirResult_meta_state))
                                                        ? 3U
                                                        : 1U)
                                                       : 
                                                      ((IData)(vlSelf->__PVT__mshrs_2->__PVT__req_promoteT)
                                                        ? 3U
                                                        : 1U))
                                                      : 
                                                     (((IData)(vlSelf->__PVT__mshrs_2->__PVT__req_promoteT) 
                                                       | (IData)(vlSelf->__PVT__mshrs_2->__PVT__req_needT))
                                                       ? 
                                                      ((5U 
                                                        == (IData)(vlSelf->__PVT__mshrs_2->__PVT__req_opcode))
                                                        ? 3U
                                                        : 2U)
                                                       : 1U))
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->__PVT__mshrs_2->__PVT__mp_probeack_valid)
                                                     ? 
                                                    ((2U 
                                                      == (IData)(vlSelf->__PVT__mshrs_2->__PVT__req_param))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelf->__PVT__mshrs_2->__PVT__req_param))
                                                       ? 1U
                                                       : (IData)(vlSelf->__PVT__mshrs_2->__PVT__dirResult_meta_state)))
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->__PVT__mshrs_2->__PVT__task_param))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelf->__PVT__mshrs_2->__PVT__task_param))
                                                       ? 1U
                                                       : (IData)(vlSelf->__PVT__mshrs_2->__PVT__dirResult_meta_state)))))
                                                   : 0U) 
                                                 | ((8U 
                                                     & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__mshrs_3->__VdfgRegularize_h47ff5784_2_9)
                                                      ? 
                                                     ((IData)(vlSelf->__PVT__mshrs_3->__PVT__mp_grant_valid)
                                                       ? 
                                                      ((4U 
                                                        == (IData)(vlSelf->__PVT__mshrs_3->__PVT__req_opcode))
                                                        ? 
                                                       ((IData)(vlSelf->__PVT__mshrs_3->__PVT__dirResult_hit)
                                                         ? 
                                                        ((2U 
                                                          & (IData)(vlSelf->__PVT__mshrs_3->__PVT__dirResult_meta_state))
                                                          ? 3U
                                                          : 1U)
                                                         : 
                                                        ((IData)(vlSelf->__PVT__mshrs_3->__PVT__req_promoteT)
                                                          ? 3U
                                                          : 1U))
                                                        : 
                                                       (((IData)(vlSelf->__PVT__mshrs_3->__PVT__req_promoteT) 
                                                         | (IData)(vlSelf->__PVT__mshrs_3->__PVT__req_needT))
                                                         ? 
                                                        ((5U 
                                                          == (IData)(vlSelf->__PVT__mshrs_3->__PVT__req_opcode))
                                                          ? 3U
                                                          : 2U)
                                                         : 1U))
                                                       : 0U)
                                                      : 
                                                     ((IData)(vlSelf->__PVT__mshrs_3->__PVT__mp_probeack_valid)
                                                       ? 
                                                      ((2U 
                                                        == (IData)(vlSelf->__PVT__mshrs_3->__PVT__req_param))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSelf->__PVT__mshrs_3->__PVT__req_param))
                                                         ? 1U
                                                         : (IData)(vlSelf->__PVT__mshrs_3->__PVT__dirResult_meta_state)))
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSelf->__PVT__mshrs_3->__PVT__task_param))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSelf->__PVT__mshrs_3->__PVT__task_param))
                                                         ? 1U
                                                         : (IData)(vlSelf->__PVT__mshrs_3->__PVT__dirResult_meta_state)))))
                                                     : 0U)) 
                                                | (((0x10U 
                                                     & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__mshrs_4->__VdfgRegularize_h47ff5784_2_9)
                                                      ? 
                                                     ((IData)(vlSelf->__PVT__mshrs_4->__PVT__mp_grant_valid)
                                                       ? 
                                                      ((4U 
                                                        == (IData)(vlSelf->__PVT__mshrs_4->__PVT__req_opcode))
                                                        ? 
                                                       ((IData)(vlSelf->__PVT__mshrs_4->__PVT__dirResult_hit)
                                                         ? 
                                                        ((2U 
                                                          & (IData)(vlSelf->__PVT__mshrs_4->__PVT__dirResult_meta_state))
                                                          ? 3U
                                                          : 1U)
                                                         : 
                                                        ((IData)(vlSelf->__PVT__mshrs_4->__PVT__req_promoteT)
                                                          ? 3U
                                                          : 1U))
                                                        : 
                                                       (((IData)(vlSelf->__PVT__mshrs_4->__PVT__req_promoteT) 
                                                         | (IData)(vlSelf->__PVT__mshrs_4->__PVT__req_needT))
                                                         ? 
                                                        ((5U 
                                                          == (IData)(vlSelf->__PVT__mshrs_4->__PVT__req_opcode))
                                                          ? 3U
                                                          : 2U)
                                                         : 1U))
                                                       : 0U)
                                                      : 
                                                     ((IData)(vlSelf->__PVT__mshrs_4->__PVT__mp_probeack_valid)
                                                       ? 
                                                      ((2U 
                                                        == (IData)(vlSelf->__PVT__mshrs_4->__PVT__req_param))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSelf->__PVT__mshrs_4->__PVT__req_param))
                                                         ? 1U
                                                         : (IData)(vlSelf->__PVT__mshrs_4->__PVT__dirResult_meta_state)))
                                                       : 
                                                      ((2U 
                                                        == (IData)(vlSelf->__PVT__mshrs_4->__PVT__task_param))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         == (IData)(vlSelf->__PVT__mshrs_4->__PVT__task_param))
                                                         ? 1U
                                                         : (IData)(vlSelf->__PVT__mshrs_4->__PVT__dirResult_meta_state)))))
                                                     : 0U) 
                                                   | (((0x20U 
                                                        & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                        ? 
                                                       ((IData)(vlSelf->__PVT__mshrs_5->__VdfgRegularize_h47ff5784_2_9)
                                                         ? 
                                                        ((IData)(vlSelf->__PVT__mshrs_5->__PVT__mp_grant_valid)
                                                          ? 
                                                         ((4U 
                                                           == (IData)(vlSelf->__PVT__mshrs_5->__PVT__req_opcode))
                                                           ? 
                                                          ((IData)(vlSelf->__PVT__mshrs_5->__PVT__dirResult_hit)
                                                            ? 
                                                           ((2U 
                                                             & (IData)(vlSelf->__PVT__mshrs_5->__PVT__dirResult_meta_state))
                                                             ? 3U
                                                             : 1U)
                                                            : 
                                                           ((IData)(vlSelf->__PVT__mshrs_5->__PVT__req_promoteT)
                                                             ? 3U
                                                             : 1U))
                                                           : 
                                                          (((IData)(vlSelf->__PVT__mshrs_5->__PVT__req_promoteT) 
                                                            | (IData)(vlSelf->__PVT__mshrs_5->__PVT__req_needT))
                                                            ? 
                                                           ((5U 
                                                             == (IData)(vlSelf->__PVT__mshrs_5->__PVT__req_opcode))
                                                             ? 3U
                                                             : 2U)
                                                            : 1U))
                                                          : 0U)
                                                         : 
                                                        ((IData)(vlSelf->__PVT__mshrs_5->__PVT__mp_probeack_valid)
                                                          ? 
                                                         ((2U 
                                                           == (IData)(vlSelf->__PVT__mshrs_5->__PVT__req_param))
                                                           ? 0U
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->__PVT__mshrs_5->__PVT__req_param))
                                                            ? 1U
                                                            : (IData)(vlSelf->__PVT__mshrs_5->__PVT__dirResult_meta_state)))
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->__PVT__mshrs_5->__PVT__task_param))
                                                           ? 0U
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->__PVT__mshrs_5->__PVT__task_param))
                                                            ? 1U
                                                            : (IData)(vlSelf->__PVT__mshrs_5->__PVT__dirResult_meta_state)))))
                                                        : 0U) 
                                                      | (((0x40U 
                                                           & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                           ? 
                                                          ((IData)(vlSelf->__PVT__mshrs_6->__VdfgRegularize_h47ff5784_2_9)
                                                            ? 
                                                           ((IData)(vlSelf->__PVT__mshrs_6->__PVT__mp_grant_valid)
                                                             ? 
                                                            ((4U 
                                                              == (IData)(vlSelf->__PVT__mshrs_6->__PVT__req_opcode))
                                                              ? 
                                                             ((IData)(vlSelf->__PVT__mshrs_6->__PVT__dirResult_hit)
                                                               ? 
                                                              ((2U 
                                                                & (IData)(vlSelf->__PVT__mshrs_6->__PVT__dirResult_meta_state))
                                                                ? 3U
                                                                : 1U)
                                                               : 
                                                              ((IData)(vlSelf->__PVT__mshrs_6->__PVT__req_promoteT)
                                                                ? 3U
                                                                : 1U))
                                                              : 
                                                             (((IData)(vlSelf->__PVT__mshrs_6->__PVT__req_promoteT) 
                                                               | (IData)(vlSelf->__PVT__mshrs_6->__PVT__req_needT))
                                                               ? 
                                                              ((5U 
                                                                == (IData)(vlSelf->__PVT__mshrs_6->__PVT__req_opcode))
                                                                ? 3U
                                                                : 2U)
                                                               : 1U))
                                                             : 0U)
                                                            : 
                                                           ((IData)(vlSelf->__PVT__mshrs_6->__PVT__mp_probeack_valid)
                                                             ? 
                                                            ((2U 
                                                              == (IData)(vlSelf->__PVT__mshrs_6->__PVT__req_param))
                                                              ? 0U
                                                              : 
                                                             ((1U 
                                                               == (IData)(vlSelf->__PVT__mshrs_6->__PVT__req_param))
                                                               ? 1U
                                                               : (IData)(vlSelf->__PVT__mshrs_6->__PVT__dirResult_meta_state)))
                                                             : 
                                                            ((2U 
                                                              == (IData)(vlSelf->__PVT__mshrs_6->__PVT__task_param))
                                                              ? 0U
                                                              : 
                                                             ((1U 
                                                               == (IData)(vlSelf->__PVT__mshrs_6->__PVT__task_param))
                                                               ? 1U
                                                               : (IData)(vlSelf->__PVT__mshrs_6->__PVT__dirResult_meta_state)))))
                                                           : 0U) 
                                                         | (((0x80U 
                                                              & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                              ? 
                                                             ((IData)(vlSelf->__PVT__mshrs_7->__VdfgRegularize_h47ff5784_2_9)
                                                               ? 
                                                              ((IData)(vlSelf->__PVT__mshrs_7->__PVT__mp_grant_valid)
                                                                ? 
                                                               ((4U 
                                                                 == (IData)(vlSelf->__PVT__mshrs_7->__PVT__req_opcode))
                                                                 ? 
                                                                ((IData)(vlSelf->__PVT__mshrs_7->__PVT__dirResult_hit)
                                                                  ? 
                                                                 ((2U 
                                                                   & (IData)(vlSelf->__PVT__mshrs_7->__PVT__dirResult_meta_state))
                                                                   ? 3U
                                                                   : 1U)
                                                                  : 
                                                                 ((IData)(vlSelf->__PVT__mshrs_7->__PVT__req_promoteT)
                                                                   ? 3U
                                                                   : 1U))
                                                                 : 
                                                                (((IData)(vlSelf->__PVT__mshrs_7->__PVT__req_promoteT) 
                                                                  | (IData)(vlSelf->__PVT__mshrs_7->__PVT__req_needT))
                                                                  ? 
                                                                 ((5U 
                                                                   == (IData)(vlSelf->__PVT__mshrs_7->__PVT__req_opcode))
                                                                   ? 3U
                                                                   : 2U)
                                                                  : 1U))
                                                                : 0U)
                                                               : 
                                                              ((IData)(vlSelf->__PVT__mshrs_7->__PVT__mp_probeack_valid)
                                                                ? 
                                                               ((2U 
                                                                 == (IData)(vlSelf->__PVT__mshrs_7->__PVT__req_param))
                                                                 ? 0U
                                                                 : 
                                                                ((1U 
                                                                  == (IData)(vlSelf->__PVT__mshrs_7->__PVT__req_param))
                                                                  ? 1U
                                                                  : (IData)(vlSelf->__PVT__mshrs_7->__PVT__dirResult_meta_state)))
                                                                : 
                                                               ((2U 
                                                                 == (IData)(vlSelf->__PVT__mshrs_7->__PVT__task_param))
                                                                 ? 0U
                                                                 : 
                                                                ((1U 
                                                                  == (IData)(vlSelf->__PVT__mshrs_7->__PVT__task_param))
                                                                  ? 1U
                                                                  : (IData)(vlSelf->__PVT__mshrs_7->__PVT__dirResult_meta_state)))))
                                                              : 0U) 
                                                            | (((0x100U 
                                                                 & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                 ? 
                                                                ((IData)(vlSelf->__PVT__mshrs_8->__VdfgRegularize_h47ff5784_2_9)
                                                                  ? 
                                                                 ((IData)(vlSelf->__PVT__mshrs_8->__PVT__mp_grant_valid)
                                                                   ? 
                                                                  ((4U 
                                                                    == (IData)(vlSelf->__PVT__mshrs_8->__PVT__req_opcode))
                                                                    ? 
                                                                   ((IData)(vlSelf->__PVT__mshrs_8->__PVT__dirResult_hit)
                                                                     ? 
                                                                    ((2U 
                                                                      & (IData)(vlSelf->__PVT__mshrs_8->__PVT__dirResult_meta_state))
                                                                      ? 3U
                                                                      : 1U)
                                                                     : 
                                                                    ((IData)(vlSelf->__PVT__mshrs_8->__PVT__req_promoteT)
                                                                      ? 3U
                                                                      : 1U))
                                                                    : 
                                                                   (((IData)(vlSelf->__PVT__mshrs_8->__PVT__req_promoteT) 
                                                                     | (IData)(vlSelf->__PVT__mshrs_8->__PVT__req_needT))
                                                                     ? 
                                                                    ((5U 
                                                                      == (IData)(vlSelf->__PVT__mshrs_8->__PVT__req_opcode))
                                                                      ? 3U
                                                                      : 2U)
                                                                     : 1U))
                                                                   : 0U)
                                                                  : 
                                                                 ((IData)(vlSelf->__PVT__mshrs_8->__PVT__mp_probeack_valid)
                                                                   ? 
                                                                  ((2U 
                                                                    == (IData)(vlSelf->__PVT__mshrs_8->__PVT__req_param))
                                                                    ? 0U
                                                                    : 
                                                                   ((1U 
                                                                     == (IData)(vlSelf->__PVT__mshrs_8->__PVT__req_param))
                                                                     ? 1U
                                                                     : (IData)(vlSelf->__PVT__mshrs_8->__PVT__dirResult_meta_state)))
                                                                   : 
                                                                  ((2U 
                                                                    == (IData)(vlSelf->__PVT__mshrs_8->__PVT__task_param))
                                                                    ? 0U
                                                                    : 
                                                                   ((1U 
                                                                     == (IData)(vlSelf->__PVT__mshrs_8->__PVT__task_param))
                                                                     ? 1U
                                                                     : (IData)(vlSelf->__PVT__mshrs_8->__PVT__dirResult_meta_state)))))
                                                                 : 0U) 
                                                               | (((0x200U 
                                                                    & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                    ? 
                                                                   ((IData)(vlSelf->__PVT__mshrs_9->__VdfgRegularize_h47ff5784_2_9)
                                                                     ? 
                                                                    ((IData)(vlSelf->__PVT__mshrs_9->__PVT__mp_grant_valid)
                                                                      ? 
                                                                     ((4U 
                                                                       == (IData)(vlSelf->__PVT__mshrs_9->__PVT__req_opcode))
                                                                       ? 
                                                                      ((IData)(vlSelf->__PVT__mshrs_9->__PVT__dirResult_hit)
                                                                        ? 
                                                                       ((2U 
                                                                         & (IData)(vlSelf->__PVT__mshrs_9->__PVT__dirResult_meta_state))
                                                                         ? 3U
                                                                         : 1U)
                                                                        : 
                                                                       ((IData)(vlSelf->__PVT__mshrs_9->__PVT__req_promoteT)
                                                                         ? 3U
                                                                         : 1U))
                                                                       : 
                                                                      (((IData)(vlSelf->__PVT__mshrs_9->__PVT__req_promoteT) 
                                                                        | (IData)(vlSelf->__PVT__mshrs_9->__PVT__req_needT))
                                                                        ? 
                                                                       ((5U 
                                                                         == (IData)(vlSelf->__PVT__mshrs_9->__PVT__req_opcode))
                                                                         ? 3U
                                                                         : 2U)
                                                                        : 1U))
                                                                      : 0U)
                                                                     : 
                                                                    ((IData)(vlSelf->__PVT__mshrs_9->__PVT__mp_probeack_valid)
                                                                      ? 
                                                                     ((2U 
                                                                       == (IData)(vlSelf->__PVT__mshrs_9->__PVT__req_param))
                                                                       ? 0U
                                                                       : 
                                                                      ((1U 
                                                                        == (IData)(vlSelf->__PVT__mshrs_9->__PVT__req_param))
                                                                        ? 1U
                                                                        : (IData)(vlSelf->__PVT__mshrs_9->__PVT__dirResult_meta_state)))
                                                                      : 
                                                                     ((2U 
                                                                       == (IData)(vlSelf->__PVT__mshrs_9->__PVT__task_param))
                                                                       ? 0U
                                                                       : 
                                                                      ((1U 
                                                                        == (IData)(vlSelf->__PVT__mshrs_9->__PVT__task_param))
                                                                        ? 1U
                                                                        : (IData)(vlSelf->__PVT__mshrs_9->__PVT__dirResult_meta_state)))))
                                                                    : 0U) 
                                                                  | (((0x400U 
                                                                       & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                       ? 
                                                                      ((IData)(vlSelf->__PVT__mshrs_10->__VdfgRegularize_h47ff5784_2_9)
                                                                        ? 
                                                                       ((IData)(vlSelf->__PVT__mshrs_10->__PVT__mp_grant_valid)
                                                                         ? 
                                                                        ((4U 
                                                                          == (IData)(vlSelf->__PVT__mshrs_10->__PVT__req_opcode))
                                                                          ? 
                                                                         ((IData)(vlSelf->__PVT__mshrs_10->__PVT__dirResult_hit)
                                                                           ? 
                                                                          ((2U 
                                                                            & (IData)(vlSelf->__PVT__mshrs_10->__PVT__dirResult_meta_state))
                                                                            ? 3U
                                                                            : 1U)
                                                                           : 
                                                                          ((IData)(vlSelf->__PVT__mshrs_10->__PVT__req_promoteT)
                                                                            ? 3U
                                                                            : 1U))
                                                                          : 
                                                                         (((IData)(vlSelf->__PVT__mshrs_10->__PVT__req_promoteT) 
                                                                           | (IData)(vlSelf->__PVT__mshrs_10->__PVT__req_needT))
                                                                           ? 
                                                                          ((5U 
                                                                            == (IData)(vlSelf->__PVT__mshrs_10->__PVT__req_opcode))
                                                                            ? 3U
                                                                            : 2U)
                                                                           : 1U))
                                                                         : 0U)
                                                                        : 
                                                                       ((IData)(vlSelf->__PVT__mshrs_10->__PVT__mp_probeack_valid)
                                                                         ? 
                                                                        ((2U 
                                                                          == (IData)(vlSelf->__PVT__mshrs_10->__PVT__req_param))
                                                                          ? 0U
                                                                          : 
                                                                         ((1U 
                                                                           == (IData)(vlSelf->__PVT__mshrs_10->__PVT__req_param))
                                                                           ? 1U
                                                                           : (IData)(vlSelf->__PVT__mshrs_10->__PVT__dirResult_meta_state)))
                                                                         : 
                                                                        ((2U 
                                                                          == (IData)(vlSelf->__PVT__mshrs_10->__PVT__task_param))
                                                                          ? 0U
                                                                          : 
                                                                         ((1U 
                                                                           == (IData)(vlSelf->__PVT__mshrs_10->__PVT__task_param))
                                                                           ? 1U
                                                                           : (IData)(vlSelf->__PVT__mshrs_10->__PVT__dirResult_meta_state)))))
                                                                       : 0U) 
                                                                     | (((0x800U 
                                                                          & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                          ? 
                                                                         ((IData)(vlSelf->__PVT__mshrs_11->__VdfgRegularize_h47ff5784_2_9)
                                                                           ? 
                                                                          ((IData)(vlSelf->__PVT__mshrs_11->__PVT__mp_grant_valid)
                                                                            ? 
                                                                           ((4U 
                                                                             == (IData)(vlSelf->__PVT__mshrs_11->__PVT__req_opcode))
                                                                             ? 
                                                                            ((IData)(vlSelf->__PVT__mshrs_11->__PVT__dirResult_hit)
                                                                              ? 
                                                                             ((2U 
                                                                               & (IData)(vlSelf->__PVT__mshrs_11->__PVT__dirResult_meta_state))
                                                                               ? 3U
                                                                               : 1U)
                                                                              : 
                                                                             ((IData)(vlSelf->__PVT__mshrs_11->__PVT__req_promoteT)
                                                                               ? 3U
                                                                               : 1U))
                                                                             : 
                                                                            (((IData)(vlSelf->__PVT__mshrs_11->__PVT__req_promoteT) 
                                                                              | (IData)(vlSelf->__PVT__mshrs_11->__PVT__req_needT))
                                                                              ? 
                                                                             ((5U 
                                                                               == (IData)(vlSelf->__PVT__mshrs_11->__PVT__req_opcode))
                                                                               ? 3U
                                                                               : 2U)
                                                                              : 1U))
                                                                            : 0U)
                                                                           : 
                                                                          ((IData)(vlSelf->__PVT__mshrs_11->__PVT__mp_probeack_valid)
                                                                            ? 
                                                                           ((2U 
                                                                             == (IData)(vlSelf->__PVT__mshrs_11->__PVT__req_param))
                                                                             ? 0U
                                                                             : 
                                                                            ((1U 
                                                                              == (IData)(vlSelf->__PVT__mshrs_11->__PVT__req_param))
                                                                              ? 1U
                                                                              : (IData)(vlSelf->__PVT__mshrs_11->__PVT__dirResult_meta_state)))
                                                                            : 
                                                                           ((2U 
                                                                             == (IData)(vlSelf->__PVT__mshrs_11->__PVT__task_param))
                                                                             ? 0U
                                                                             : 
                                                                            ((1U 
                                                                              == (IData)(vlSelf->__PVT__mshrs_11->__PVT__task_param))
                                                                              ? 1U
                                                                              : (IData)(vlSelf->__PVT__mshrs_11->__PVT__dirResult_meta_state)))))
                                                                          : 0U) 
                                                                        | (((0x1000U 
                                                                             & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                             ? 
                                                                            ((IData)(vlSelf->__PVT__mshrs_12->__VdfgRegularize_h47ff5784_2_9)
                                                                              ? 
                                                                             ((IData)(vlSelf->__PVT__mshrs_12->__PVT__mp_grant_valid)
                                                                               ? 
                                                                              ((4U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_12->__PVT__req_opcode))
                                                                                ? 
                                                                               ((IData)(vlSelf->__PVT__mshrs_12->__PVT__dirResult_hit)
                                                                                 ? 
                                                                                ((2U 
                                                                                & (IData)(vlSelf->__PVT__mshrs_12->__PVT__dirResult_meta_state))
                                                                                 ? 3U
                                                                                 : 1U)
                                                                                 : 
                                                                                ((IData)(vlSelf->__PVT__mshrs_12->__PVT__req_promoteT)
                                                                                 ? 3U
                                                                                 : 1U))
                                                                                : 
                                                                               (((IData)(vlSelf->__PVT__mshrs_12->__PVT__req_promoteT) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_12->__PVT__req_needT))
                                                                                 ? 
                                                                                ((5U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_12->__PVT__req_opcode))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 1U))
                                                                               : 0U)
                                                                              : 
                                                                             ((IData)(vlSelf->__PVT__mshrs_12->__PVT__mp_probeack_valid)
                                                                               ? 
                                                                              ((2U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_12->__PVT__req_param))
                                                                                ? 0U
                                                                                : 
                                                                               ((1U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_12->__PVT__req_param))
                                                                                 ? 1U
                                                                                 : (IData)(vlSelf->__PVT__mshrs_12->__PVT__dirResult_meta_state)))
                                                                               : 
                                                                              ((2U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_12->__PVT__task_param))
                                                                                ? 0U
                                                                                : 
                                                                               ((1U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_12->__PVT__task_param))
                                                                                 ? 1U
                                                                                 : (IData)(vlSelf->__PVT__mshrs_12->__PVT__dirResult_meta_state)))))
                                                                             : 0U) 
                                                                           | (((0x2000U 
                                                                                & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                                ? 
                                                                               ((IData)(vlSelf->__PVT__mshrs_13->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_13->__PVT__mp_grant_valid)
                                                                                 ? 
                                                                                ((4U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_13->__PVT__req_opcode))
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_13->__PVT__dirResult_hit)
                                                                                 ? 
                                                                                ((2U 
                                                                                & (IData)(vlSelf->__PVT__mshrs_13->__PVT__dirResult_meta_state))
                                                                                 ? 3U
                                                                                 : 1U)
                                                                                 : 
                                                                                ((IData)(vlSelf->__PVT__mshrs_13->__PVT__req_promoteT)
                                                                                 ? 3U
                                                                                 : 1U))
                                                                                 : 
                                                                                (((IData)(vlSelf->__PVT__mshrs_13->__PVT__req_promoteT) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_13->__PVT__req_needT))
                                                                                 ? 
                                                                                ((5U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_13->__PVT__req_opcode))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 1U))
                                                                                 : 0U)
                                                                                 : 
                                                                                ((IData)(vlSelf->__PVT__mshrs_13->__PVT__mp_probeack_valid)
                                                                                 ? 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_13->__PVT__req_param))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_13->__PVT__req_param))
                                                                                 ? 1U
                                                                                 : (IData)(vlSelf->__PVT__mshrs_13->__PVT__dirResult_meta_state)))
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_13->__PVT__task_param))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_13->__PVT__task_param))
                                                                                 ? 1U
                                                                                 : (IData)(vlSelf->__PVT__mshrs_13->__PVT__dirResult_meta_state)))))
                                                                                : 0U) 
                                                                              | (((0x4000U 
                                                                                & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_14->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_14->__PVT__mp_grant_valid)
                                                                                 ? 
                                                                                ((4U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_14->__PVT__req_opcode))
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_14->__PVT__dirResult_hit)
                                                                                 ? 
                                                                                ((2U 
                                                                                & (IData)(vlSelf->__PVT__mshrs_14->__PVT__dirResult_meta_state))
                                                                                 ? 3U
                                                                                 : 1U)
                                                                                 : 
                                                                                ((IData)(vlSelf->__PVT__mshrs_14->__PVT__req_promoteT)
                                                                                 ? 3U
                                                                                 : 1U))
                                                                                 : 
                                                                                (((IData)(vlSelf->__PVT__mshrs_14->__PVT__req_promoteT) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_14->__PVT__req_needT))
                                                                                 ? 
                                                                                ((5U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_14->__PVT__req_opcode))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 1U))
                                                                                 : 0U)
                                                                                 : 
                                                                                ((IData)(vlSelf->__PVT__mshrs_14->__PVT__mp_probeack_valid)
                                                                                 ? 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_14->__PVT__req_param))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_14->__PVT__req_param))
                                                                                 ? 1U
                                                                                 : (IData)(vlSelf->__PVT__mshrs_14->__PVT__dirResult_meta_state)))
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_14->__PVT__task_param))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_14->__PVT__task_param))
                                                                                 ? 1U
                                                                                 : (IData)(vlSelf->__PVT__mshrs_14->__PVT__dirResult_meta_state)))))
                                                                                 : 0U) 
                                                                                | ((0x8000U 
                                                                                & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH))
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_15->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_15->__PVT__mp_grant_valid)
                                                                                 ? 
                                                                                ((4U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_15->__PVT__req_opcode))
                                                                                 ? 
                                                                                ((IData)(vlSelf->__PVT__mshrs_15->__PVT__dirResult_hit)
                                                                                 ? 
                                                                                ((2U 
                                                                                & (IData)(vlSelf->__PVT__mshrs_15->__PVT__dirResult_meta_state))
                                                                                 ? 3U
                                                                                 : 1U)
                                                                                 : 
                                                                                ((IData)(vlSelf->__PVT__mshrs_15->__PVT__req_promoteT)
                                                                                 ? 3U
                                                                                 : 1U))
                                                                                 : 
                                                                                (((IData)(vlSelf->__PVT__mshrs_15->__PVT__req_promoteT) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_15->__PVT__req_needT))
                                                                                 ? 
                                                                                ((5U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_15->__PVT__req_opcode))
                                                                                 ? 3U
                                                                                 : 2U)
                                                                                 : 1U))
                                                                                 : 0U)
                                                                                 : 
                                                                                ((IData)(vlSelf->__PVT__mshrs_15->__PVT__mp_probeack_valid)
                                                                                 ? 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_15->__PVT__req_param))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_15->__PVT__req_param))
                                                                                 ? 1U
                                                                                 : (IData)(vlSelf->__PVT__mshrs_15->__PVT__dirResult_meta_state)))
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_15->__PVT__task_param))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_15->__PVT__task_param))
                                                                                 ? 1U
                                                                                 : (IData)(vlSelf->__PVT__mshrs_15->__PVT__dirResult_meta_state)))))
                                                                                 : 0U))))))))))))));
    vlSelfRef.io_mshrTask_bits_dsWen = (1U & (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                               & ((IData)(vlSelf->__PVT__mshrs_0->__VdfgRegularize_h47ff5784_2_9)
                                                   ? 
                                                  ((~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__mp_grant_valid)) 
                                                   | (((~ (IData)(vlSelf->__PVT__mshrs_0->__PVT__dirResult_hit)) 
                                                       & (IData)(vlSelf->__PVT__mshrs_0->__PVT__gotGrantData)) 
                                                      | ((IData)(vlSelf->__PVT__mshrs_0->__PVT__probeDirty) 
                                                         & ((4U 
                                                             == (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_opcode)) 
                                                            | (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_aliasTask)))))
                                                   : 
                                                  ((IData)(vlSelf->__PVT__mshrs_0->__PVT__mp_probeack_valid)
                                                    ? 
                                                   ((2U 
                                                     != (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_param)) 
                                                    & (IData)(vlSelf->__PVT__mshrs_0->__PVT__probeDirty))
                                                    : 
                                                   ((2U 
                                                     != (IData)(vlSelf->__PVT__mshrs_0->__PVT__task_param)) 
                                                    & (IData)(vlSelf->__PVT__mshrs_0->__PVT__probeDirty))))) 
                                              | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                   >> 1U) 
                                                  & ((IData)(vlSelf->__PVT__mshrs_1->__VdfgRegularize_h47ff5784_2_9)
                                                      ? 
                                                     ((~ (IData)(vlSelf->__PVT__mshrs_1->__PVT__mp_grant_valid)) 
                                                      | (((~ (IData)(vlSelf->__PVT__mshrs_1->__PVT__dirResult_hit)) 
                                                          & (IData)(vlSelf->__PVT__mshrs_1->__PVT__gotGrantData)) 
                                                         | ((IData)(vlSelf->__PVT__mshrs_1->__PVT__probeDirty) 
                                                            & ((4U 
                                                                == (IData)(vlSelf->__PVT__mshrs_1->__PVT__req_opcode)) 
                                                               | (IData)(vlSelf->__PVT__mshrs_1->__PVT__req_aliasTask)))))
                                                      : 
                                                     ((IData)(vlSelf->__PVT__mshrs_1->__PVT__mp_probeack_valid)
                                                       ? 
                                                      ((2U 
                                                        != (IData)(vlSelf->__PVT__mshrs_1->__PVT__req_param)) 
                                                       & (IData)(vlSelf->__PVT__mshrs_1->__PVT__probeDirty))
                                                       : 
                                                      ((2U 
                                                        != (IData)(vlSelf->__PVT__mshrs_1->__PVT__task_param)) 
                                                       & (IData)(vlSelf->__PVT__mshrs_1->__PVT__probeDirty))))) 
                                                 | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                      >> 2U) 
                                                     & ((IData)(vlSelf->__PVT__mshrs_2->__VdfgRegularize_h47ff5784_2_9)
                                                         ? 
                                                        ((~ (IData)(vlSelf->__PVT__mshrs_2->__PVT__mp_grant_valid)) 
                                                         | (((~ (IData)(vlSelf->__PVT__mshrs_2->__PVT__dirResult_hit)) 
                                                             & (IData)(vlSelf->__PVT__mshrs_2->__PVT__gotGrantData)) 
                                                            | ((IData)(vlSelf->__PVT__mshrs_2->__PVT__probeDirty) 
                                                               & ((4U 
                                                                   == (IData)(vlSelf->__PVT__mshrs_2->__PVT__req_opcode)) 
                                                                  | (IData)(vlSelf->__PVT__mshrs_2->__PVT__req_aliasTask)))))
                                                         : 
                                                        ((IData)(vlSelf->__PVT__mshrs_2->__PVT__mp_probeack_valid)
                                                          ? 
                                                         ((2U 
                                                           != (IData)(vlSelf->__PVT__mshrs_2->__PVT__req_param)) 
                                                          & (IData)(vlSelf->__PVT__mshrs_2->__PVT__probeDirty))
                                                          : 
                                                         ((2U 
                                                           != (IData)(vlSelf->__PVT__mshrs_2->__PVT__task_param)) 
                                                          & (IData)(vlSelf->__PVT__mshrs_2->__PVT__probeDirty))))) 
                                                    | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                         >> 3U) 
                                                        & ((IData)(vlSelf->__PVT__mshrs_3->__VdfgRegularize_h47ff5784_2_9)
                                                            ? 
                                                           ((~ (IData)(vlSelf->__PVT__mshrs_3->__PVT__mp_grant_valid)) 
                                                            | (((~ (IData)(vlSelf->__PVT__mshrs_3->__PVT__dirResult_hit)) 
                                                                & (IData)(vlSelf->__PVT__mshrs_3->__PVT__gotGrantData)) 
                                                               | ((IData)(vlSelf->__PVT__mshrs_3->__PVT__probeDirty) 
                                                                  & ((4U 
                                                                      == (IData)(vlSelf->__PVT__mshrs_3->__PVT__req_opcode)) 
                                                                     | (IData)(vlSelf->__PVT__mshrs_3->__PVT__req_aliasTask)))))
                                                            : 
                                                           ((IData)(vlSelf->__PVT__mshrs_3->__PVT__mp_probeack_valid)
                                                             ? 
                                                            ((2U 
                                                              != (IData)(vlSelf->__PVT__mshrs_3->__PVT__req_param)) 
                                                             & (IData)(vlSelf->__PVT__mshrs_3->__PVT__probeDirty))
                                                             : 
                                                            ((2U 
                                                              != (IData)(vlSelf->__PVT__mshrs_3->__PVT__task_param)) 
                                                             & (IData)(vlSelf->__PVT__mshrs_3->__PVT__probeDirty))))) 
                                                       | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                            >> 4U) 
                                                           & ((IData)(vlSelf->__PVT__mshrs_4->__VdfgRegularize_h47ff5784_2_9)
                                                               ? 
                                                              ((~ (IData)(vlSelf->__PVT__mshrs_4->__PVT__mp_grant_valid)) 
                                                               | (((~ (IData)(vlSelf->__PVT__mshrs_4->__PVT__dirResult_hit)) 
                                                                   & (IData)(vlSelf->__PVT__mshrs_4->__PVT__gotGrantData)) 
                                                                  | ((IData)(vlSelf->__PVT__mshrs_4->__PVT__probeDirty) 
                                                                     & ((4U 
                                                                         == (IData)(vlSelf->__PVT__mshrs_4->__PVT__req_opcode)) 
                                                                        | (IData)(vlSelf->__PVT__mshrs_4->__PVT__req_aliasTask)))))
                                                               : 
                                                              ((IData)(vlSelf->__PVT__mshrs_4->__PVT__mp_probeack_valid)
                                                                ? 
                                                               ((2U 
                                                                 != (IData)(vlSelf->__PVT__mshrs_4->__PVT__req_param)) 
                                                                & (IData)(vlSelf->__PVT__mshrs_4->__PVT__probeDirty))
                                                                : 
                                                               ((2U 
                                                                 != (IData)(vlSelf->__PVT__mshrs_4->__PVT__task_param)) 
                                                                & (IData)(vlSelf->__PVT__mshrs_4->__PVT__probeDirty))))) 
                                                          | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                               >> 5U) 
                                                              & ((IData)(vlSelf->__PVT__mshrs_5->__VdfgRegularize_h47ff5784_2_9)
                                                                  ? 
                                                                 ((~ (IData)(vlSelf->__PVT__mshrs_5->__PVT__mp_grant_valid)) 
                                                                  | (((~ (IData)(vlSelf->__PVT__mshrs_5->__PVT__dirResult_hit)) 
                                                                      & (IData)(vlSelf->__PVT__mshrs_5->__PVT__gotGrantData)) 
                                                                     | ((IData)(vlSelf->__PVT__mshrs_5->__PVT__probeDirty) 
                                                                        & ((4U 
                                                                            == (IData)(vlSelf->__PVT__mshrs_5->__PVT__req_opcode)) 
                                                                           | (IData)(vlSelf->__PVT__mshrs_5->__PVT__req_aliasTask)))))
                                                                  : 
                                                                 ((IData)(vlSelf->__PVT__mshrs_5->__PVT__mp_probeack_valid)
                                                                   ? 
                                                                  ((2U 
                                                                    != (IData)(vlSelf->__PVT__mshrs_5->__PVT__req_param)) 
                                                                   & (IData)(vlSelf->__PVT__mshrs_5->__PVT__probeDirty))
                                                                   : 
                                                                  ((2U 
                                                                    != (IData)(vlSelf->__PVT__mshrs_5->__PVT__task_param)) 
                                                                   & (IData)(vlSelf->__PVT__mshrs_5->__PVT__probeDirty))))) 
                                                             | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                  >> 6U) 
                                                                 & ((IData)(vlSelf->__PVT__mshrs_6->__VdfgRegularize_h47ff5784_2_9)
                                                                     ? 
                                                                    ((~ (IData)(vlSelf->__PVT__mshrs_6->__PVT__mp_grant_valid)) 
                                                                     | (((~ (IData)(vlSelf->__PVT__mshrs_6->__PVT__dirResult_hit)) 
                                                                         & (IData)(vlSelf->__PVT__mshrs_6->__PVT__gotGrantData)) 
                                                                        | ((IData)(vlSelf->__PVT__mshrs_6->__PVT__probeDirty) 
                                                                           & ((4U 
                                                                               == (IData)(vlSelf->__PVT__mshrs_6->__PVT__req_opcode)) 
                                                                              | (IData)(vlSelf->__PVT__mshrs_6->__PVT__req_aliasTask)))))
                                                                     : 
                                                                    ((IData)(vlSelf->__PVT__mshrs_6->__PVT__mp_probeack_valid)
                                                                      ? 
                                                                     ((2U 
                                                                       != (IData)(vlSelf->__PVT__mshrs_6->__PVT__req_param)) 
                                                                      & (IData)(vlSelf->__PVT__mshrs_6->__PVT__probeDirty))
                                                                      : 
                                                                     ((2U 
                                                                       != (IData)(vlSelf->__PVT__mshrs_6->__PVT__task_param)) 
                                                                      & (IData)(vlSelf->__PVT__mshrs_6->__PVT__probeDirty))))) 
                                                                | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                     >> 7U) 
                                                                    & ((IData)(vlSelf->__PVT__mshrs_7->__VdfgRegularize_h47ff5784_2_9)
                                                                        ? 
                                                                       ((~ (IData)(vlSelf->__PVT__mshrs_7->__PVT__mp_grant_valid)) 
                                                                        | (((~ (IData)(vlSelf->__PVT__mshrs_7->__PVT__dirResult_hit)) 
                                                                            & (IData)(vlSelf->__PVT__mshrs_7->__PVT__gotGrantData)) 
                                                                           | ((IData)(vlSelf->__PVT__mshrs_7->__PVT__probeDirty) 
                                                                              & ((4U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_7->__PVT__req_opcode)) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_7->__PVT__req_aliasTask)))))
                                                                        : 
                                                                       ((IData)(vlSelf->__PVT__mshrs_7->__PVT__mp_probeack_valid)
                                                                         ? 
                                                                        ((2U 
                                                                          != (IData)(vlSelf->__PVT__mshrs_7->__PVT__req_param)) 
                                                                         & (IData)(vlSelf->__PVT__mshrs_7->__PVT__probeDirty))
                                                                         : 
                                                                        ((2U 
                                                                          != (IData)(vlSelf->__PVT__mshrs_7->__PVT__task_param)) 
                                                                         & (IData)(vlSelf->__PVT__mshrs_7->__PVT__probeDirty))))) 
                                                                   | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                        >> 8U) 
                                                                       & ((IData)(vlSelf->__PVT__mshrs_8->__VdfgRegularize_h47ff5784_2_9)
                                                                           ? 
                                                                          ((~ (IData)(vlSelf->__PVT__mshrs_8->__PVT__mp_grant_valid)) 
                                                                           | (((~ (IData)(vlSelf->__PVT__mshrs_8->__PVT__dirResult_hit)) 
                                                                               & (IData)(vlSelf->__PVT__mshrs_8->__PVT__gotGrantData)) 
                                                                              | ((IData)(vlSelf->__PVT__mshrs_8->__PVT__probeDirty) 
                                                                                & ((4U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_8->__PVT__req_opcode)) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_8->__PVT__req_aliasTask)))))
                                                                           : 
                                                                          ((IData)(vlSelf->__PVT__mshrs_8->__PVT__mp_probeack_valid)
                                                                            ? 
                                                                           ((2U 
                                                                             != (IData)(vlSelf->__PVT__mshrs_8->__PVT__req_param)) 
                                                                            & (IData)(vlSelf->__PVT__mshrs_8->__PVT__probeDirty))
                                                                            : 
                                                                           ((2U 
                                                                             != (IData)(vlSelf->__PVT__mshrs_8->__PVT__task_param)) 
                                                                            & (IData)(vlSelf->__PVT__mshrs_8->__PVT__probeDirty))))) 
                                                                      | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                           >> 9U) 
                                                                          & ((IData)(vlSelf->__PVT__mshrs_9->__VdfgRegularize_h47ff5784_2_9)
                                                                              ? 
                                                                             ((~ (IData)(vlSelf->__PVT__mshrs_9->__PVT__mp_grant_valid)) 
                                                                              | (((~ (IData)(vlSelf->__PVT__mshrs_9->__PVT__dirResult_hit)) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_9->__PVT__gotGrantData)) 
                                                                                | ((IData)(vlSelf->__PVT__mshrs_9->__PVT__probeDirty) 
                                                                                & ((4U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_9->__PVT__req_opcode)) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_9->__PVT__req_aliasTask)))))
                                                                              : 
                                                                             ((IData)(vlSelf->__PVT__mshrs_9->__PVT__mp_probeack_valid)
                                                                               ? 
                                                                              ((2U 
                                                                                != (IData)(vlSelf->__PVT__mshrs_9->__PVT__req_param)) 
                                                                               & (IData)(vlSelf->__PVT__mshrs_9->__PVT__probeDirty))
                                                                               : 
                                                                              ((2U 
                                                                                != (IData)(vlSelf->__PVT__mshrs_9->__PVT__task_param)) 
                                                                               & (IData)(vlSelf->__PVT__mshrs_9->__PVT__probeDirty))))) 
                                                                         | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                              >> 0xaU) 
                                                                             & ((IData)(vlSelf->__PVT__mshrs_10->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((~ (IData)(vlSelf->__PVT__mshrs_10->__PVT__mp_grant_valid)) 
                                                                                | (((~ (IData)(vlSelf->__PVT__mshrs_10->__PVT__dirResult_hit)) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_10->__PVT__gotGrantData)) 
                                                                                | ((IData)(vlSelf->__PVT__mshrs_10->__PVT__probeDirty) 
                                                                                & ((4U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_10->__PVT__req_opcode)) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_10->__PVT__req_aliasTask)))))
                                                                                 : 
                                                                                ((IData)(vlSelf->__PVT__mshrs_10->__PVT__mp_probeack_valid)
                                                                                 ? 
                                                                                ((2U 
                                                                                != (IData)(vlSelf->__PVT__mshrs_10->__PVT__req_param)) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_10->__PVT__probeDirty))
                                                                                 : 
                                                                                ((2U 
                                                                                != (IData)(vlSelf->__PVT__mshrs_10->__PVT__task_param)) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_10->__PVT__probeDirty))))) 
                                                                            | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xbU) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_11->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((~ (IData)(vlSelf->__PVT__mshrs_11->__PVT__mp_grant_valid)) 
                                                                                | (((~ (IData)(vlSelf->__PVT__mshrs_11->__PVT__dirResult_hit)) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_11->__PVT__gotGrantData)) 
                                                                                | ((IData)(vlSelf->__PVT__mshrs_11->__PVT__probeDirty) 
                                                                                & ((4U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_11->__PVT__req_opcode)) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_11->__PVT__req_aliasTask)))))
                                                                                 : 
                                                                                ((IData)(vlSelf->__PVT__mshrs_11->__PVT__mp_probeack_valid)
                                                                                 ? 
                                                                                ((2U 
                                                                                != (IData)(vlSelf->__PVT__mshrs_11->__PVT__req_param)) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_11->__PVT__probeDirty))
                                                                                 : 
                                                                                ((2U 
                                                                                != (IData)(vlSelf->__PVT__mshrs_11->__PVT__task_param)) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_11->__PVT__probeDirty))))) 
                                                                               | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xcU) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_12->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((~ (IData)(vlSelf->__PVT__mshrs_12->__PVT__mp_grant_valid)) 
                                                                                | (((~ (IData)(vlSelf->__PVT__mshrs_12->__PVT__dirResult_hit)) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_12->__PVT__gotGrantData)) 
                                                                                | ((IData)(vlSelf->__PVT__mshrs_12->__PVT__probeDirty) 
                                                                                & ((4U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_12->__PVT__req_opcode)) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_12->__PVT__req_aliasTask)))))
                                                                                 : 
                                                                                ((IData)(vlSelf->__PVT__mshrs_12->__PVT__mp_probeack_valid)
                                                                                 ? 
                                                                                ((2U 
                                                                                != (IData)(vlSelf->__PVT__mshrs_12->__PVT__req_param)) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_12->__PVT__probeDirty))
                                                                                 : 
                                                                                ((2U 
                                                                                != (IData)(vlSelf->__PVT__mshrs_12->__PVT__task_param)) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_12->__PVT__probeDirty))))) 
                                                                                | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xdU) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_13->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((~ (IData)(vlSelf->__PVT__mshrs_13->__PVT__mp_grant_valid)) 
                                                                                | (((~ (IData)(vlSelf->__PVT__mshrs_13->__PVT__dirResult_hit)) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_13->__PVT__gotGrantData)) 
                                                                                | ((IData)(vlSelf->__PVT__mshrs_13->__PVT__probeDirty) 
                                                                                & ((4U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_13->__PVT__req_opcode)) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_13->__PVT__req_aliasTask)))))
                                                                                 : 
                                                                                ((IData)(vlSelf->__PVT__mshrs_13->__PVT__mp_probeack_valid)
                                                                                 ? 
                                                                                ((2U 
                                                                                != (IData)(vlSelf->__PVT__mshrs_13->__PVT__req_param)) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_13->__PVT__probeDirty))
                                                                                 : 
                                                                                ((2U 
                                                                                != (IData)(vlSelf->__PVT__mshrs_13->__PVT__task_param)) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_13->__PVT__probeDirty))))) 
                                                                                | ((((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xeU) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_14->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((~ (IData)(vlSelf->__PVT__mshrs_14->__PVT__mp_grant_valid)) 
                                                                                | (((~ (IData)(vlSelf->__PVT__mshrs_14->__PVT__dirResult_hit)) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_14->__PVT__gotGrantData)) 
                                                                                | ((IData)(vlSelf->__PVT__mshrs_14->__PVT__probeDirty) 
                                                                                & ((4U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_14->__PVT__req_opcode)) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_14->__PVT__req_aliasTask)))))
                                                                                 : 
                                                                                ((IData)(vlSelf->__PVT__mshrs_14->__PVT__mp_probeack_valid)
                                                                                 ? 
                                                                                ((2U 
                                                                                != (IData)(vlSelf->__PVT__mshrs_14->__PVT__req_param)) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_14->__PVT__probeDirty))
                                                                                 : 
                                                                                ((2U 
                                                                                != (IData)(vlSelf->__PVT__mshrs_14->__PVT__task_param)) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_14->__PVT__probeDirty))))) 
                                                                                | (((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                                                                >> 0xfU) 
                                                                                & ((IData)(vlSelf->__PVT__mshrs_15->__VdfgRegularize_h47ff5784_2_9)
                                                                                 ? 
                                                                                ((~ (IData)(vlSelf->__PVT__mshrs_15->__PVT__mp_grant_valid)) 
                                                                                | (((~ (IData)(vlSelf->__PVT__mshrs_15->__PVT__dirResult_hit)) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_15->__PVT__gotGrantData)) 
                                                                                | ((IData)(vlSelf->__PVT__mshrs_15->__PVT__probeDirty) 
                                                                                & ((4U 
                                                                                == (IData)(vlSelf->__PVT__mshrs_15->__PVT__req_opcode)) 
                                                                                | (IData)(vlSelf->__PVT__mshrs_15->__PVT__req_aliasTask)))))
                                                                                 : 
                                                                                ((IData)(vlSelf->__PVT__mshrs_15->__PVT__mp_probeack_valid)
                                                                                 ? 
                                                                                ((2U 
                                                                                != (IData)(vlSelf->__PVT__mshrs_15->__PVT__req_param)) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_15->__PVT__probeDirty))
                                                                                 : 
                                                                                ((2U 
                                                                                != (IData)(vlSelf->__PVT__mshrs_15->__PVT__task_param)) 
                                                                                & (IData)(vlSelf->__PVT__mshrs_15->__PVT__probeDirty)))))))))))))))))))));
    vlSelfRef.io_releaseBufWriteId = (((IData)(__VdfgRegularize_h515af8c5_2_2) 
                                       | ((IData)(__VdfgRegularize_h515af8c5_2_1) 
                                          | ((IData)(vlSelfRef.__PVT__resp_sinkC_match_vec_6) 
                                             | (IData)(vlSelfRef.__PVT__resp_sinkC_match_vec_7))))
                                       ? ((IData)(__VdfgRegularize_h515af8c5_2_2)
                                           ? ((IData)(__VdfgRegularize_h515af8c5_2_0)
                                               ? (1U 
                                                  & (~ (IData)(vlSelfRef.__PVT__resp_sinkC_match_vec_0)))
                                               : ((IData)(vlSelfRef.__PVT__resp_sinkC_match_vec_2)
                                                   ? 2U
                                                   : 3U))
                                           : ((IData)(__VdfgRegularize_h515af8c5_2_1)
                                               ? ((IData)(vlSelfRef.__PVT__resp_sinkC_match_vec_4)
                                                   ? 4U
                                                   : 5U)
                                               : ((IData)(vlSelfRef.__PVT__resp_sinkC_match_vec_6)
                                                   ? 6U
                                                   : 7U)))
                                       : (((IData)(__VdfgRegularize_h515af8c5_2_3) 
                                           | ((IData)(vlSelfRef.__PVT__resp_sinkC_match_vec_10) 
                                              | (IData)(vlSelfRef.__PVT__resp_sinkC_match_vec_11)))
                                           ? ((IData)(__VdfgRegularize_h515af8c5_2_3)
                                               ? ((IData)(vlSelfRef.__PVT__resp_sinkC_match_vec_8)
                                                   ? 8U
                                                   : 9U)
                                               : ((IData)(vlSelfRef.__PVT__resp_sinkC_match_vec_10)
                                                   ? 0xaU
                                                   : 0xbU))
                                           : (((IData)(vlSelfRef.__PVT__resp_sinkC_match_vec_12) 
                                               | (IData)(vlSelfRef.__PVT__resp_sinkC_match_vec_13))
                                               ? ((IData)(vlSelfRef.__PVT__resp_sinkC_match_vec_12)
                                                   ? 0xcU
                                                   : 0xdU)
                                               : ((IData)(vlSelfRef.__PVT__resp_sinkC_match_vec_14)
                                                   ? 0xeU
                                                   : 0xfU))));
    vlSelfRef.__PVT__sourceB__DOT__conflictMask_0 = 
        ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_0_valid) 
         & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_0_bits_set) 
             == (IData)(vlSelfRef.__PVT__source_b_arb_io_out_bits_set)) 
            & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_0_bits_tag) 
               == (IData)(vlSelfRef.__PVT__source_b_arb_io_out_bits_tag))));
    vlSelfRef.__PVT__sourceB__DOT__conflictMask_1 = 
        ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_1_valid) 
         & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_1_bits_set) 
             == (IData)(vlSelfRef.__PVT__source_b_arb_io_out_bits_set)) 
            & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_1_bits_tag) 
               == (IData)(vlSelfRef.__PVT__source_b_arb_io_out_bits_tag))));
    vlSelfRef.__PVT__sourceB__DOT__conflictMask_2 = 
        ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_2_valid) 
         & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_2_bits_set) 
             == (IData)(vlSelfRef.__PVT__source_b_arb_io_out_bits_set)) 
            & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_2_bits_tag) 
               == (IData)(vlSelfRef.__PVT__source_b_arb_io_out_bits_tag))));
    vlSelfRef.__PVT__sourceB__DOT__conflictMask_3 = 
        ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_3_valid) 
         & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_3_bits_set) 
             == (IData)(vlSelfRef.__PVT__source_b_arb_io_out_bits_set)) 
            & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_3_bits_tag) 
               == (IData)(vlSelfRef.__PVT__source_b_arb_io_out_bits_tag))));
    vlSelfRef.__PVT__sourceB__DOT__conflictMask_4 = 
        ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_4_valid) 
         & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_4_bits_set) 
             == (IData)(vlSelfRef.__PVT__source_b_arb_io_out_bits_set)) 
            & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_4_bits_tag) 
               == (IData)(vlSelfRef.__PVT__source_b_arb_io_out_bits_tag))));
    vlSelfRef.__PVT__sourceB__DOT__conflictMask_5 = 
        ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_5_valid) 
         & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_5_bits_set) 
             == (IData)(vlSelfRef.__PVT__source_b_arb_io_out_bits_set)) 
            & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_5_bits_tag) 
               == (IData)(vlSelfRef.__PVT__source_b_arb_io_out_bits_tag))));
    vlSelfRef.__PVT__sourceB__DOT__conflictMask_6 = 
        ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_6_valid) 
         & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_6_bits_set) 
             == (IData)(vlSelfRef.__PVT__source_b_arb_io_out_bits_set)) 
            & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_6_bits_tag) 
               == (IData)(vlSelfRef.__PVT__source_b_arb_io_out_bits_tag))));
    vlSelfRef.__PVT__sourceB__DOT__conflictMask_7 = 
        ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_7_valid) 
         & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_7_bits_set) 
             == (IData)(vlSelfRef.__PVT__source_b_arb_io_out_bits_set)) 
            & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_7_bits_tag) 
               == (IData)(vlSelfRef.__PVT__source_b_arb_io_out_bits_tag))));
    vlSelfRef.__PVT__sourceB__DOT__conflictMask_8 = 
        ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_8_valid) 
         & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_8_bits_set) 
             == (IData)(vlSelfRef.__PVT__source_b_arb_io_out_bits_set)) 
            & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_8_bits_tag) 
               == (IData)(vlSelfRef.__PVT__source_b_arb_io_out_bits_tag))));
    vlSelfRef.__PVT__sourceB__DOT__conflictMask_9 = 
        ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_9_valid) 
         & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_9_bits_set) 
             == (IData)(vlSelfRef.__PVT__source_b_arb_io_out_bits_set)) 
            & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_9_bits_tag) 
               == (IData)(vlSelfRef.__PVT__source_b_arb_io_out_bits_tag))));
    vlSelfRef.__PVT__sourceB__DOT__conflictMask_10 
        = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_10_valid) 
           & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_10_bits_set) 
               == (IData)(vlSelfRef.__PVT__source_b_arb_io_out_bits_set)) 
              & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_10_bits_tag) 
                 == (IData)(vlSelfRef.__PVT__source_b_arb_io_out_bits_tag))));
    vlSelfRef.__PVT__sourceB__DOT__conflictMask_11 
        = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_11_valid) 
           & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_11_bits_set) 
               == (IData)(vlSelfRef.__PVT__source_b_arb_io_out_bits_set)) 
              & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_11_bits_tag) 
                 == (IData)(vlSelfRef.__PVT__source_b_arb_io_out_bits_tag))));
    vlSelfRef.__PVT__sourceB__DOT__conflictMask_12 
        = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_12_valid) 
           & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_12_bits_set) 
               == (IData)(vlSelfRef.__PVT__source_b_arb_io_out_bits_set)) 
              & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_12_bits_tag) 
                 == (IData)(vlSelfRef.__PVT__source_b_arb_io_out_bits_tag))));
    vlSelfRef.__PVT__sourceB__DOT__conflictMask_13 
        = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_13_valid) 
           & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_13_bits_set) 
               == (IData)(vlSelfRef.__PVT__source_b_arb_io_out_bits_set)) 
              & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_13_bits_tag) 
                 == (IData)(vlSelfRef.__PVT__source_b_arb_io_out_bits_tag))));
    vlSelfRef.__PVT__sourceB__DOT__conflictMask_14 
        = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_14_valid) 
           & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_14_bits_set) 
               == (IData)(vlSelfRef.__PVT__source_b_arb_io_out_bits_set)) 
              & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_14_bits_tag) 
                 == (IData)(vlSelfRef.__PVT__source_b_arb_io_out_bits_tag))));
    vlSelfRef.__PVT__sourceB__DOT__conflictMask_15 
        = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_15_valid) 
           & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_15_bits_set) 
               == (IData)(vlSelfRef.__PVT__source_b_arb_io_out_bits_set)) 
              & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_15_bits_tag) 
                 == (IData)(vlSelfRef.__PVT__source_b_arb_io_out_bits_tag))));
    __PVT__sourceB__DOT__probes_waitG_hi_1 = (((((IData)(vlSelfRef.__PVT__sourceB__DOT__conflictMask_15) 
                                                 << 7U) 
                                                | ((IData)(vlSelfRef.__PVT__sourceB__DOT__conflictMask_14) 
                                                   << 6U)) 
                                               | (((IData)(vlSelfRef.__PVT__sourceB__DOT__conflictMask_13) 
                                                   << 5U) 
                                                  | ((IData)(vlSelfRef.__PVT__sourceB__DOT__conflictMask_12) 
                                                     << 4U))) 
                                              | ((((IData)(vlSelfRef.__PVT__sourceB__DOT__conflictMask_11) 
                                                   << 3U) 
                                                  | ((IData)(vlSelfRef.__PVT__sourceB__DOT__conflictMask_10) 
                                                     << 2U)) 
                                                 | (((IData)(vlSelfRef.__PVT__sourceB__DOT__conflictMask_9) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.__PVT__sourceB__DOT__conflictMask_8))));
    sourceB__DOT____VdfgRegularize_h16434914_2_4 = 
        (1U & (~ ((IData)(vlSelfRef.__PVT__sourceB__DOT__conflictMask_0) 
                  | ((IData)(vlSelfRef.__PVT__sourceB__DOT__conflictMask_1) 
                     | ((IData)(vlSelfRef.__PVT__sourceB__DOT__conflictMask_2) 
                        | ((IData)(vlSelfRef.__PVT__sourceB__DOT__conflictMask_3) 
                           | ((IData)(vlSelfRef.__PVT__sourceB__DOT__conflictMask_4) 
                              | ((IData)(vlSelfRef.__PVT__sourceB__DOT__conflictMask_5) 
                                 | ((IData)(vlSelfRef.__PVT__sourceB__DOT__conflictMask_6) 
                                    | ((IData)(vlSelfRef.__PVT__sourceB__DOT__conflictMask_7) 
                                       | ((IData)(vlSelfRef.__PVT__sourceB__DOT__conflictMask_8) 
                                          | ((IData)(vlSelfRef.__PVT__sourceB__DOT__conflictMask_9) 
                                             | ((IData)(vlSelfRef.__PVT__sourceB__DOT__conflictMask_10) 
                                                | ((IData)(vlSelfRef.__PVT__sourceB__DOT__conflictMask_11) 
                                                   | ((IData)(vlSelfRef.__PVT__sourceB__DOT__conflictMask_12) 
                                                      | ((IData)(vlSelfRef.__PVT__sourceB__DOT__conflictMask_13) 
                                                         | ((IData)(vlSelfRef.__PVT__sourceB__DOT__conflictMask_14) 
                                                            | (IData)(vlSelfRef.__PVT__sourceB__DOT__conflictMask_15))))))))))))))))));
    __PVT__sourceB__DOT___probes_waitG_T_2 = ((IData)(__PVT__sourceB__DOT__probes_waitG_hi_1) 
                                              | (((((IData)(vlSelfRef.__PVT__sourceB__DOT__conflictMask_7) 
                                                    << 7U) 
                                                   | ((IData)(vlSelfRef.__PVT__sourceB__DOT__conflictMask_6) 
                                                      << 6U)) 
                                                  | (((IData)(vlSelfRef.__PVT__sourceB__DOT__conflictMask_5) 
                                                      << 5U) 
                                                     | ((IData)(vlSelfRef.__PVT__sourceB__DOT__conflictMask_4) 
                                                        << 4U))) 
                                                 | ((((IData)(vlSelfRef.__PVT__sourceB__DOT__conflictMask_3) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.__PVT__sourceB__DOT__conflictMask_2) 
                                                        << 2U)) 
                                                    | (((IData)(vlSelfRef.__PVT__sourceB__DOT__conflictMask_1) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.__PVT__sourceB__DOT__conflictMask_0)))));
    vlSelfRef.__PVT__sourceB__DOT___GEN_92 = (((~ (
                                                   (0xfU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_0_waitG)))
                                                    ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_15_valid)
                                                    : 
                                                   ((0xeU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_0_waitG)))
                                                     ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_14_valid)
                                                     : 
                                                    ((0xdU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_0_waitG)))
                                                      ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_13_valid)
                                                      : 
                                                     ((0xcU 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_0_waitG)))
                                                       ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_12_valid)
                                                       : 
                                                      ((0xbU 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_0_waitG)))
                                                        ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_11_valid)
                                                        : 
                                                       ((0xaU 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_0_waitG)))
                                                         ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_10_valid)
                                                         : 
                                                        ((9U 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_0_waitG)))
                                                          ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_9_valid)
                                                          : 
                                                         ((8U 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_0_waitG)))
                                                           ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_8_valid)
                                                           : 
                                                          ((7U 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_0_waitG)))
                                                            ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_7_valid)
                                                            : 
                                                           ((6U 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_0_waitG)))
                                                             ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_6_valid)
                                                             : 
                                                            ((5U 
                                                              == 
                                                              (0xfU 
                                                               & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_0_waitG)))
                                                              ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_5_valid)
                                                              : 
                                                             ((4U 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_0_waitG)))
                                                               ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_4_valid)
                                                               : 
                                                              ((3U 
                                                                == 
                                                                (0xfU 
                                                                 & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_0_waitG)))
                                                                ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_3_valid)
                                                                : 
                                                               ((2U 
                                                                 == 
                                                                 (0xfU 
                                                                  & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_0_waitG)))
                                                                 ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_2_valid)
                                                                 : 
                                                                ((1U 
                                                                  == 
                                                                  (0xfU 
                                                                   & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_0_waitG)))
                                                                  ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_1_valid)
                                                                  : (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_0_valid))))))))))))))))) 
                                               & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_0_valid)) 
                                              | ((IData)(vlSelfRef.__PVT__sourceB__DOT__alloc)
                                                  ? 
                                                 ((0U 
                                                   == (IData)(vlSelfRef.__PVT__sourceB__DOT__insertIdx))
                                                   ? (IData)(sourceB__DOT____VdfgRegularize_h16434914_2_4)
                                                   : (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_0_rdy))
                                                  : (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_0_rdy)));
    vlSelfRef.__PVT__sourceB__DOT___GEN_109 = (((~ 
                                                 ((0xfU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_1_waitG)))
                                                   ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_15_valid)
                                                   : 
                                                  ((0xeU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_1_waitG)))
                                                    ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_14_valid)
                                                    : 
                                                   ((0xdU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_1_waitG)))
                                                     ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_13_valid)
                                                     : 
                                                    ((0xcU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_1_waitG)))
                                                      ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_12_valid)
                                                      : 
                                                     ((0xbU 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_1_waitG)))
                                                       ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_11_valid)
                                                       : 
                                                      ((0xaU 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_1_waitG)))
                                                        ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_10_valid)
                                                        : 
                                                       ((9U 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_1_waitG)))
                                                         ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_9_valid)
                                                         : 
                                                        ((8U 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_1_waitG)))
                                                          ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_8_valid)
                                                          : 
                                                         ((7U 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_1_waitG)))
                                                           ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_7_valid)
                                                           : 
                                                          ((6U 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_1_waitG)))
                                                            ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_6_valid)
                                                            : 
                                                           ((5U 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_1_waitG)))
                                                             ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_5_valid)
                                                             : 
                                                            ((4U 
                                                              == 
                                                              (0xfU 
                                                               & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_1_waitG)))
                                                              ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_4_valid)
                                                              : 
                                                             ((3U 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_1_waitG)))
                                                               ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_3_valid)
                                                               : 
                                                              ((2U 
                                                                == 
                                                                (0xfU 
                                                                 & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_1_waitG)))
                                                                ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_2_valid)
                                                                : 
                                                               ((1U 
                                                                 == 
                                                                 (0xfU 
                                                                  & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_1_waitG)))
                                                                 ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_1_valid)
                                                                 : (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_0_valid))))))))))))))))) 
                                                & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_1_valid)) 
                                               | ((IData)(vlSelfRef.__PVT__sourceB__DOT__alloc)
                                                   ? 
                                                  ((1U 
                                                    == (IData)(vlSelfRef.__PVT__sourceB__DOT__insertIdx))
                                                    ? (IData)(sourceB__DOT____VdfgRegularize_h16434914_2_4)
                                                    : (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_1_rdy))
                                                   : (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_1_rdy)));
    vlSelfRef.__PVT__sourceB__DOT___GEN_126 = (((~ 
                                                 ((0xfU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_2_waitG)))
                                                   ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_15_valid)
                                                   : 
                                                  ((0xeU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_2_waitG)))
                                                    ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_14_valid)
                                                    : 
                                                   ((0xdU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_2_waitG)))
                                                     ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_13_valid)
                                                     : 
                                                    ((0xcU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_2_waitG)))
                                                      ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_12_valid)
                                                      : 
                                                     ((0xbU 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_2_waitG)))
                                                       ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_11_valid)
                                                       : 
                                                      ((0xaU 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_2_waitG)))
                                                        ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_10_valid)
                                                        : 
                                                       ((9U 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_2_waitG)))
                                                         ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_9_valid)
                                                         : 
                                                        ((8U 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_2_waitG)))
                                                          ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_8_valid)
                                                          : 
                                                         ((7U 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_2_waitG)))
                                                           ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_7_valid)
                                                           : 
                                                          ((6U 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_2_waitG)))
                                                            ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_6_valid)
                                                            : 
                                                           ((5U 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_2_waitG)))
                                                             ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_5_valid)
                                                             : 
                                                            ((4U 
                                                              == 
                                                              (0xfU 
                                                               & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_2_waitG)))
                                                              ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_4_valid)
                                                              : 
                                                             ((3U 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_2_waitG)))
                                                               ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_3_valid)
                                                               : 
                                                              ((2U 
                                                                == 
                                                                (0xfU 
                                                                 & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_2_waitG)))
                                                                ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_2_valid)
                                                                : 
                                                               ((1U 
                                                                 == 
                                                                 (0xfU 
                                                                  & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_2_waitG)))
                                                                 ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_1_valid)
                                                                 : (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_0_valid))))))))))))))))) 
                                                & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_2_valid)) 
                                               | ((IData)(vlSelfRef.__PVT__sourceB__DOT__alloc)
                                                   ? 
                                                  ((2U 
                                                    == (IData)(vlSelfRef.__PVT__sourceB__DOT__insertIdx))
                                                    ? (IData)(sourceB__DOT____VdfgRegularize_h16434914_2_4)
                                                    : (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_2_rdy))
                                                   : (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_2_rdy)));
    vlSelfRef.__PVT__sourceB__DOT___GEN_143 = (((~ 
                                                 ((0xfU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_3_waitG)))
                                                   ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_15_valid)
                                                   : 
                                                  ((0xeU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_3_waitG)))
                                                    ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_14_valid)
                                                    : 
                                                   ((0xdU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_3_waitG)))
                                                     ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_13_valid)
                                                     : 
                                                    ((0xcU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_3_waitG)))
                                                      ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_12_valid)
                                                      : 
                                                     ((0xbU 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_3_waitG)))
                                                       ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_11_valid)
                                                       : 
                                                      ((0xaU 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_3_waitG)))
                                                        ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_10_valid)
                                                        : 
                                                       ((9U 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_3_waitG)))
                                                         ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_9_valid)
                                                         : 
                                                        ((8U 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_3_waitG)))
                                                          ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_8_valid)
                                                          : 
                                                         ((7U 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_3_waitG)))
                                                           ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_7_valid)
                                                           : 
                                                          ((6U 
                                                            == 
                                                            (0xfU 
                                                             & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_3_waitG)))
                                                            ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_6_valid)
                                                            : 
                                                           ((5U 
                                                             == 
                                                             (0xfU 
                                                              & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_3_waitG)))
                                                             ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_5_valid)
                                                             : 
                                                            ((4U 
                                                              == 
                                                              (0xfU 
                                                               & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_3_waitG)))
                                                              ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_4_valid)
                                                              : 
                                                             ((3U 
                                                               == 
                                                               (0xfU 
                                                                & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_3_waitG)))
                                                               ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_3_valid)
                                                               : 
                                                              ((2U 
                                                                == 
                                                                (0xfU 
                                                                 & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_3_waitG)))
                                                                ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_2_valid)
                                                                : 
                                                               ((1U 
                                                                 == 
                                                                 (0xfU 
                                                                  & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_3_waitG)))
                                                                 ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_1_valid)
                                                                 : (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.__PVT__inflight_grant_0_valid))))))))))))))))) 
                                                & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_3_valid)) 
                                               | ((IData)(vlSelfRef.__PVT__sourceB__DOT__alloc)
                                                   ? 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.__PVT__sourceB__DOT__insertIdx))
                                                    ? (IData)(sourceB__DOT____VdfgRegularize_h16434914_2_4)
                                                    : (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_3_rdy))
                                                   : (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_3_rdy)));
    __PVT__sourceB__DOT___probes_waitG_T_4 = (0xfU 
                                              & (((IData)(__PVT__sourceB__DOT___probes_waitG_T_2) 
                                                  >> 4U) 
                                                 | (IData)(__PVT__sourceB__DOT___probes_waitG_T_2)));
    vlSelfRef.__PVT__sourceB__DOT___probes_insertIdx_waitG 
        = (((((IData)((0U != (IData)(__PVT__sourceB__DOT__probes_waitG_hi_1))) 
              << 1U) | (0U != (0xfU & ((IData)(__PVT__sourceB__DOT___probes_waitG_T_2) 
                                       >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(__PVT__sourceB__DOT___probes_waitG_T_4) 
                                     >> 2U)))) << 1U) 
              | (IData)((0U != (0xaU & (IData)(__PVT__sourceB__DOT___probes_waitG_T_4))))));
}

VL_ATTR_COLD void VTestTop_L2L3L2_MSHRCtl___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__2(VTestTop_L2L3L2_MSHRCtl* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_MSHRCtl___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT___mshrFull_T_1 = (0x1fU & ((3U 
                                                & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_status_vec_0_valid) 
                                                   + 
                                                   VL_SHIFTR_III(2,2,32, 
                                                                 (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_valid) 
                                                                   << 1U) 
                                                                  | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_status_vec_0_valid)), 1U))) 
                                               + ((0xfU 
                                                   & ((7U 
                                                       & ((3U 
                                                           & ((IData)(vlSelf->__PVT__mshrs_15->__PVT__req_valid) 
                                                              + 
                                                              VL_SHIFTR_III(2,2,32, 
                                                                            (((IData)(vlSelf->__PVT__mshrs_14->__PVT__req_valid) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelf->__PVT__mshrs_15->__PVT__req_valid)), 1U))) 
                                                          + 
                                                          (3U 
                                                           & ((IData)(vlSelf->__PVT__mshrs_13->__PVT__req_valid) 
                                                              + (IData)(vlSelf->__PVT__mshrs_12->__PVT__req_valid))))) 
                                                      + 
                                                      (7U 
                                                       & ((3U 
                                                           & ((IData)(vlSelf->__PVT__mshrs_11->__PVT__req_valid) 
                                                              + (IData)(vlSelf->__PVT__mshrs_10->__PVT__req_valid))) 
                                                          + 
                                                          (3U 
                                                           & ((IData)(vlSelf->__PVT__mshrs_9->__PVT__req_valid) 
                                                              + (IData)(vlSelf->__PVT__mshrs_8->__PVT__req_valid))))))) 
                                                  + 
                                                  (0xfU 
                                                   & ((7U 
                                                       & ((3U 
                                                           & ((IData)(vlSelf->__PVT__mshrs_7->__PVT__req_valid) 
                                                              + (IData)(vlSelf->__PVT__mshrs_6->__PVT__req_valid))) 
                                                          + 
                                                          (3U 
                                                           & ((IData)(vlSelf->__PVT__mshrs_5->__PVT__req_valid) 
                                                              + (IData)(vlSelf->__PVT__mshrs_4->__PVT__req_valid))))) 
                                                      + 
                                                      (7U 
                                                       & ((3U 
                                                           & ((IData)(vlSelf->__PVT__mshrs_3->__PVT__req_valid) 
                                                              + (IData)(vlSelf->__PVT__mshrs_2->__PVT__req_valid))) 
                                                          + 
                                                          (3U 
                                                           & ((IData)(vlSelf->__PVT__mshrs_1->__PVT__req_valid) 
                                                              + (IData)(vlSelf->__PVT__mshrs_0->__PVT__req_valid))))))))));
}
