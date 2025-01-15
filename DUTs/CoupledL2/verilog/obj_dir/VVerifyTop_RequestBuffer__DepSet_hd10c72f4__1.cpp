// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVerifyTop.h for the primary calling header

#include "VVerifyTop__pch.h"
#include "VVerifyTop_RequestBuffer.h"
#include "VVerifyTop__Syms.h"

VL_INLINE_OPT void VVerifyTop_RequestBuffer___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf__1(VVerifyTop_RequestBuffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_RequestBuffer___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __PVT___waitMSUpdate_T;
    __PVT___waitMSUpdate_T = 0;
    // Body
    vlSelfRef.__PVT___canFlow_T_37 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid) 
                                      & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_msInfo_bits_willFree)) 
                                         & (((1U & 
                                              ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_1) 
                                               >> 1U)) 
                                             == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_set)) 
                                            & (((7U 
                                                 & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_1) 
                                                    >> 2U)) 
                                                == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_tag)) 
                                               | (((7U 
                                                    & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_1) 
                                                       >> 2U)) 
                                                   == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_tag)) 
                                                  & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__state_w_releaseack)))))));
    vlSelfRef.__PVT___canFlow_T_28 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid) 
                                      & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_msInfo_bits_willFree)) 
                                         & (((1U & 
                                              ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_1) 
                                               >> 1U)) 
                                             == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_set)) 
                                            & (((7U 
                                                 & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_1) 
                                                    >> 2U)) 
                                                == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_tag)) 
                                               | (((7U 
                                                    & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_1) 
                                                       >> 2U)) 
                                                   == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_tag)) 
                                                  & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__state_w_releaseack)))))));
    vlSelfRef.__PVT___waitMSUpdate_T_38 = (((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid) 
                                              & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_msInfo_bits_willFree)) 
                                                 & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_set)) 
                                                    & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                        == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_tag)) 
                                                       | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                           == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_tag)) 
                                                          & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__state_w_releaseack))))))) 
                                             << 3U) 
                                            | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid) 
                                                & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_msInfo_bits_willFree)) 
                                                   & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                       == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_set)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                          == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_tag)) 
                                                         | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                             == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_tag)) 
                                                            & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__state_w_releaseack))))))) 
                                               << 2U)) 
                                           | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid) 
                                                & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_msInfo_bits_willFree)) 
                                                   & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                       == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_set)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                          == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_tag)) 
                                                         | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                             == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_tag)) 
                                                            & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__state_w_releaseack))))))) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                                                 & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_msInfo_bits_willFree)) 
                                                    & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                        == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set)) 
                                                       & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                           == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_tag)) 
                                                          | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                              == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_tag)) 
                                                             & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__state_w_releaseack)))))))));
    vlSelfRef.__PVT___waitMSUpdate_T_77 = (((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid) 
                                              & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_msInfo_bits_willFree)) 
                                                 & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_set)) 
                                                    & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                        == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_tag)) 
                                                       | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                           == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_tag)) 
                                                          & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__state_w_releaseack))))))) 
                                             << 3U) 
                                            | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid) 
                                                & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_msInfo_bits_willFree)) 
                                                   & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                       == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_set)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                          == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_tag)) 
                                                         | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                             == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_tag)) 
                                                            & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__state_w_releaseack))))))) 
                                               << 2U)) 
                                           | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid) 
                                                & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_msInfo_bits_willFree)) 
                                                   & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                       == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_set)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                          == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_tag)) 
                                                         | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                             == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_tag)) 
                                                            & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__state_w_releaseack))))))) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                                                 & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_msInfo_bits_willFree)) 
                                                    & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                        == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set)) 
                                                       & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                           == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_tag)) 
                                                          | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                              == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_tag)) 
                                                             & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__state_w_releaseack)))))))));
    vlSelfRef.__PVT___waitMSUpdate_T_116 = (((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid) 
                                               & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_msInfo_bits_willFree)) 
                                                  & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_set)) 
                                                     & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                         == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_tag)) 
                                                        | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                            == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_tag)) 
                                                           & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__state_w_releaseack))))))) 
                                              << 3U) 
                                             | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid) 
                                                 & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_msInfo_bits_willFree)) 
                                                    & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                        == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_set)) 
                                                       & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                           == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_tag)) 
                                                          | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                              == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_tag)) 
                                                             & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__state_w_releaseack))))))) 
                                                << 2U)) 
                                            | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid) 
                                                 & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_msInfo_bits_willFree)) 
                                                    & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                        == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_set)) 
                                                       & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                           == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_tag)) 
                                                          | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                              == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_tag)) 
                                                             & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__state_w_releaseack))))))) 
                                                << 1U) 
                                               | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                                                  & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_msInfo_bits_willFree)) 
                                                     & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                         == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                            == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_tag)) 
                                                           | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                               == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_tag)) 
                                                              & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__state_w_releaseack)))))))));
    vlSelfRef.__PVT___waitMSUpdate_T_155 = (((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid) 
                                               & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_msInfo_bits_willFree)) 
                                                  & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_set)) 
                                                     & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                         == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_tag)) 
                                                        | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                            == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_tag)) 
                                                           & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__state_w_releaseack))))))) 
                                              << 3U) 
                                             | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid) 
                                                 & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_msInfo_bits_willFree)) 
                                                    & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                        == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_set)) 
                                                       & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                           == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_tag)) 
                                                          | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                              == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_tag)) 
                                                             & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__state_w_releaseack))))))) 
                                                << 2U)) 
                                            | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid) 
                                                 & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_msInfo_bits_willFree)) 
                                                    & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                        == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_set)) 
                                                       & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                           == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_tag)) 
                                                          | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                              == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_tag)) 
                                                             & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__state_w_releaseack))))))) 
                                                << 1U) 
                                               | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                                                  & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_msInfo_bits_willFree)) 
                                                     & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                         == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                            == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_tag)) 
                                                           | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                               == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_tag)) 
                                                              & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__state_w_releaseack)))))))));
    __PVT___waitMSUpdate_T = (0xfU & (~ (((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_msInfo_bits_willFree) 
                                            & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid)) 
                                           << 3U) | 
                                          (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_msInfo_bits_willFree) 
                                            & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid)) 
                                           << 2U)) 
                                         | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_msInfo_bits_willFree) 
                                              & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid)) 
                                             << 1U) 
                                            | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_msInfo_bits_willFree) 
                                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid))))));
    vlSelfRef.__PVT___canFlow_T_10 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                                      & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_msInfo_bits_willFree)) 
                                         & (((1U & 
                                              ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_1) 
                                               >> 1U)) 
                                             == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set)) 
                                            & (((7U 
                                                 & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_1) 
                                                    >> 2U)) 
                                                == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_tag)) 
                                               | (((7U 
                                                    & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_1) 
                                                       >> 2U)) 
                                                   == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_tag)) 
                                                  & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__state_w_releaseack)))))));
    vlSelfRef.__PVT___waitMSUpdate_T_1 = ((IData)(__PVT___waitMSUpdate_T) 
                                          & (IData)(vlSelfRef.__PVT__buffer_0_waitMS));
    vlSelfRef.__PVT___waitMSUpdate_T_40 = ((IData)(__PVT___waitMSUpdate_T) 
                                           & (IData)(vlSelfRef.__PVT__buffer_1_waitMS));
    vlSelfRef.__PVT___waitMSUpdate_T_79 = ((IData)(__PVT___waitMSUpdate_T) 
                                           & (IData)(vlSelfRef.__PVT__buffer_2_waitMS));
    vlSelfRef.__PVT___waitMSUpdate_T_118 = ((IData)(__PVT___waitMSUpdate_T) 
                                            & (IData)(vlSelfRef.__PVT__buffer_3_waitMS));
    vlSelfRef.__VdfgRegularize_ha1527a7f_2_6 = ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid) 
                                                  & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_msInfo_bits_willFree)) 
                                                     & (((1U 
                                                          & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_1) 
                                                             >> 1U)) 
                                                         == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_set)) 
                                                        & (((7U 
                                                             & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_1) 
                                                                >> 2U)) 
                                                            == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_tag)) 
                                                           | (((7U 
                                                                & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_1) 
                                                                   >> 2U)) 
                                                               == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_tag)) 
                                                              & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__state_w_releaseack))))))) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__PVT___canFlow_T_10));
    vlSelfRef.__PVT__waitMSUpdate = ((IData)((1U == 
                                              (3U & (IData)(vlSelfRef.__PVT__buffer_0_waitMP))))
                                      ? (IData)(vlSelfRef.__PVT___waitMSUpdate_T_38)
                                      : (IData)(vlSelfRef.__PVT___waitMSUpdate_T_1));
    vlSelfRef.__PVT__waitMSUpdate_1 = ((IData)((1U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelfRef.__PVT__buffer_1_waitMP))))
                                        ? (IData)(vlSelfRef.__PVT___waitMSUpdate_T_77)
                                        : (IData)(vlSelfRef.__PVT___waitMSUpdate_T_40));
    vlSelfRef.__PVT__waitMSUpdate_2 = ((IData)((1U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelfRef.__PVT__buffer_2_waitMP))))
                                        ? (IData)(vlSelfRef.__PVT___waitMSUpdate_T_116)
                                        : (IData)(vlSelfRef.__PVT___waitMSUpdate_T_79));
    vlSelfRef.__PVT__waitMSUpdate_3 = ((IData)((1U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelfRef.__PVT__buffer_3_waitMP))))
                                        ? (IData)(vlSelfRef.__PVT___waitMSUpdate_T_155)
                                        : (IData)(vlSelfRef.__PVT___waitMSUpdate_T_118));
    vlSelfRef.__PVT___canFlow_T_38 = (((IData)(vlSelfRef.__PVT___canFlow_T_37) 
                                       << 3U) | (((IData)(vlSelfRef.__PVT___canFlow_T_28) 
                                                  << 2U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_ha1527a7f_2_6)));
}

VL_INLINE_OPT void VVerifyTop_RequestBuffer___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf__2(VVerifyTop_RequestBuffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_RequestBuffer___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_needProbeAckData__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_needProbeAckData[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_useProbeData__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_useProbeData[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_fromL2pft__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_fromL2pft[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_needHint__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_needHint[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_way__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_way[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_dirty__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_meta_dirty[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_state__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_meta_state[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_clients__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_meta_clients[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_alias__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_meta_alias[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_prefetch__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_meta_prefetch[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_prefetchSrc__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_meta_prefetchSrc[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_accessed__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_meta_accessed[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_metaWen__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_metaWen[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_tagWen__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_tagWen[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_dsWen__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_dsWen[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_replTask__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_replTask[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_meta_dirty__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_aMergeTask_meta_dirty[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_meta_state__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_aMergeTask_meta_state[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_meta_clients__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_aMergeTask_meta_clients[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_meta_alias__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_aMergeTask_meta_alias[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_meta_prefetch__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_aMergeTask_meta_prefetch[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_meta_prefetchSrc__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_aMergeTask_meta_prefetchSrc[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_aMergeTask_meta_accessed__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_aMergeTask_meta_accessed[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_snpHitRelease__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_snpHitRelease[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_snpHitReleaseIdx__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_snpHitReleaseIdx[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_off__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_off[0U] 
            = vlSelfRef.__VdlyVal__chosenQ__DOT__ram_bits_task_off__v0;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_alias__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_alias[0U] 
            = vlSelfRef.__VdlyVal__chosenQ__DOT__ram_bits_task_alias__v0;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_param__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_param[0U] 
            = vlSelfRef.__VdlyVal__chosenQ__DOT__ram_bits_task_param__v0;
    }
    vlSelfRef.__PVT__dup = (((IData)(vlSelfRef.__PVT__buffer_3_valid) 
                             & ((0xfU & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_1) 
                                         >> 1U)) == 
                                (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                  << 1U) | (IData)(vlSelfRef.__PVT__buffer_3_task_set)))) 
                            | (((IData)(vlSelfRef.__PVT__buffer_2_valid) 
                                & ((0xfU & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_1) 
                                            >> 1U)) 
                                   == (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                        << 1U) | (IData)(vlSelfRef.__PVT__buffer_2_task_set)))) 
                               | (((IData)(vlSelfRef.__PVT__buffer_1_valid) 
                                   & ((0xfU & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_1) 
                                               >> 1U)) 
                                      == (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__buffer_1_task_set)))) 
                                  | (((IData)(vlSelfRef.__PVT__buffer_0_valid) 
                                      & ((0xfU & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_1) 
                                                  >> 1U)) 
                                         == (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.__PVT__buffer_0_task_set)))) 
                                     | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid) 
                                         & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_acquire) 
                                             | (5U 
                                                == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_opcode))) 
                                            & ((0xfU 
                                                & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_1) 
                                                   >> 1U)) 
                                               == (
                                                   ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_tag) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_set))))) 
                                        | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid) 
                                            & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_acquire) 
                                                | (5U 
                                                   == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_opcode))) 
                                               & ((0xfU 
                                                   & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_1) 
                                                      >> 1U)) 
                                                  == 
                                                  (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_tag) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_set))))) 
                                           | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid) 
                                               & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_acquire) 
                                                   | (5U 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_opcode))) 
                                                  & ((0xfU 
                                                      & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_1) 
                                                         >> 1U)) 
                                                     == 
                                                     (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_tag) 
                                                       << 1U) 
                                                      | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_set))))) 
                                              | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                                                 & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_acquire) 
                                                     | (5U 
                                                        == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_opcode))) 
                                                    & ((0xfU 
                                                        & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_1) 
                                                           >> 1U)) 
                                                       == 
                                                       (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_tag) 
                                                         << 1U) 
                                                        | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set))))))))))));
    vlSelfRef.__PVT__next_counter = (vlSelfRef.__PVT__counter 
                                     + (QData)((IData)(vlSelfRef.__PVT__dup)));
}
