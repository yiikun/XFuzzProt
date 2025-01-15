// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestTop_L2L3L2.h for the primary calling header

#include "VTestTop_L2L3L2__pch.h"
#include "VTestTop_L2L3L2__Syms.h"
#include "VTestTop_L2L3L2___024root.h"

VL_ATTR_COLD void VTestTop_L2L3L2___024root___stl_sequent__TOP__3(VTestTop_L2L3L2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTop_L2L3L2___024root___stl_sequent__TOP__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toDS_req_s3_valid;
    TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toDS_req_s3_valid = 0;
    CData/*0:0*/ TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toDS_req_s3_bits_wen;
    TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toDS_req_s3_bits_wen = 0;
    CData/*0:0*/ TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__retry;
    TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__retry = 0;
    CData/*0:0*/ TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__need_data_mshr_repl;
    TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__need_data_mshr_repl = 0;
    CData/*0:0*/ TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT___metaW_valid_s3_mshr_T_1;
    TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT___metaW_valid_s3_mshr_T_1 = 0;
    CData/*0:0*/ TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toDS_req_s3_valid;
    TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toDS_req_s3_valid = 0;
    CData/*0:0*/ TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toDS_req_s3_bits_wen;
    TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toDS_req_s3_bits_wen = 0;
    CData/*0:0*/ TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__retry;
    TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__retry = 0;
    CData/*0:0*/ TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__need_data_mshr_repl;
    TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__need_data_mshr_repl = 0;
    CData/*0:0*/ TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT___metaW_valid_s3_mshr_T_1;
    TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT___metaW_valid_s3_mshr_T_1 = 0;
    // Body
    vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__c_mshr_io_releaseThrough 
        = ((((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_c_status_nestedReleaseData) 
             & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0.__PVT__req_valid)) 
            & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__c_mshr.__PVT__req_set) 
                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0.__PVT__req_set)) 
               & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0.__PVT__req_channel) 
                   & (((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0.__PVT__nest_c_way_match)) 
                       & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0.__PVT___a_c_through_T_3)) 
                      | (((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0.__PVT__nest_c_tag_match)) 
                          & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0.__PVT__nest_c_way_match) 
                             & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0.__PVT___T_146) 
                                 & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0.__PVT__preferCache_latch)) 
                                | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0.__PVT___GEN_16) 
                                   | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0.__PVT__a_c_through_reg) 
                                      | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0.__PVT__transmit_from_other_client_latch)))))) 
                         | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0.__PVT__nest_c_tag_match) 
                            & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0.__PVT__nest_c_way_match) 
                               & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0.__PVT___GEN_16)) 
                                  & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0.__PVT__a_do_release))))))) 
                  | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0.__PVT__req_channel) 
                      >> 1U) & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0.__PVT___a_c_through_T_3) 
                                | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0.__PVT__nest_c_way_match) 
                                   & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0.__PVT___GEN_16) 
                                      != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0.__PVT__nest_c_tag_match)))))))) 
           | ((((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_c_status_nestedReleaseData) 
                & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_1.__PVT__req_valid)) 
               & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__c_mshr.__PVT__req_set) 
                   == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_1.__PVT__req_set)) 
                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_1.__PVT__req_channel) 
                      & (((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_1.__PVT__nest_c_way_match)) 
                          & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_1.__PVT___a_c_through_T_3)) 
                         | (((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_1.__PVT__nest_c_tag_match)) 
                             & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_1.__PVT__nest_c_way_match) 
                                & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_1.__PVT___T_146) 
                                    & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_1.__PVT__preferCache_latch)) 
                                   | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_1.__PVT___GEN_16) 
                                      | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_1.__PVT__a_c_through_reg) 
                                         | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_1.__PVT__transmit_from_other_client_latch)))))) 
                            | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_1.__PVT__nest_c_tag_match) 
                               & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_1.__PVT__nest_c_way_match) 
                                  & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_1.__PVT___GEN_16)) 
                                     & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_1.__PVT__a_do_release))))))) 
                     | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_1.__PVT__req_channel) 
                         >> 1U) & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_1.__PVT___a_c_through_T_3) 
                                   | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_1.__PVT__nest_c_way_match) 
                                      & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_1.__PVT___GEN_16) 
                                         != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_1.__PVT__nest_c_tag_match)))))))) 
              | ((((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_c_status_nestedReleaseData) 
                   & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_2.__PVT__req_valid)) 
                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__c_mshr.__PVT__req_set) 
                      == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_2.__PVT__req_set)) 
                     & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_2.__PVT__req_channel) 
                         & (((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_2.__PVT__nest_c_way_match)) 
                             & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_2.__PVT___a_c_through_T_3)) 
                            | (((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_2.__PVT__nest_c_tag_match)) 
                                & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_2.__PVT__nest_c_way_match) 
                                   & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_2.__PVT___T_146) 
                                       & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_2.__PVT__preferCache_latch)) 
                                      | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_2.__PVT___GEN_16) 
                                         | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_2.__PVT__a_c_through_reg) 
                                            | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_2.__PVT__transmit_from_other_client_latch)))))) 
                               | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_2.__PVT__nest_c_tag_match) 
                                  & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_2.__PVT__nest_c_way_match) 
                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_2.__PVT___GEN_16)) 
                                        & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_2.__PVT__a_do_release))))))) 
                        | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_2.__PVT__req_channel) 
                            >> 1U) & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_2.__PVT___a_c_through_T_3) 
                                      | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_2.__PVT__nest_c_way_match) 
                                         & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_2.__PVT___GEN_16) 
                                            != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_2.__PVT__nest_c_tag_match)))))))) 
                 | ((((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_c_status_nestedReleaseData) 
                      & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_3.__PVT__req_valid)) 
                     & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__c_mshr.__PVT__req_set) 
                         == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_3.__PVT__req_set)) 
                        & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_3.__PVT__req_channel) 
                            & (((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_3.__PVT__nest_c_way_match)) 
                                & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_3.__PVT___a_c_through_T_3)) 
                               | (((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_3.__PVT__nest_c_tag_match)) 
                                   & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_3.__PVT__nest_c_way_match) 
                                      & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_3.__PVT___T_146) 
                                          & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_3.__PVT__preferCache_latch)) 
                                         | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_3.__PVT___GEN_16) 
                                            | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_3.__PVT__a_c_through_reg) 
                                               | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_3.__PVT__transmit_from_other_client_latch)))))) 
                                  | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_3.__PVT__nest_c_tag_match) 
                                     & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_3.__PVT__nest_c_way_match) 
                                        & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_3.__PVT___GEN_16)) 
                                           & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_3.__PVT__a_do_release))))))) 
                           | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_3.__PVT__req_channel) 
                               >> 1U) & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_3.__PVT___a_c_through_T_3) 
                                         | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_3.__PVT__nest_c_way_match) 
                                            & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_3.__PVT___GEN_16) 
                                               != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_3.__PVT__nest_c_tag_match)))))))) 
                    | ((((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_c_status_nestedReleaseData) 
                         & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4.__PVT__req_valid)) 
                        & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__c_mshr.__PVT__req_set) 
                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4.__PVT__req_set)) 
                           & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4.__PVT__req_channel) 
                               & (((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4.__PVT__nest_c_way_match)) 
                                   & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4.__PVT___a_c_through_T_3)) 
                                  | (((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4.__PVT__nest_c_tag_match)) 
                                      & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4.__PVT__nest_c_way_match) 
                                         & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4.__PVT___T_146) 
                                             & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4.__PVT__preferCache_latch)) 
                                            | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4.__PVT___GEN_16) 
                                               | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4.__PVT__a_c_through_reg) 
                                                  | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4.__PVT__transmit_from_other_client_latch)))))) 
                                     | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4.__PVT__nest_c_tag_match) 
                                        & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4.__PVT__nest_c_way_match) 
                                           & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4.__PVT___GEN_16)) 
                                              & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4.__PVT__a_do_release))))))) 
                              | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4.__PVT__req_channel) 
                                  >> 1U) & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4.__PVT___a_c_through_T_3) 
                                            | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4.__PVT__nest_c_way_match) 
                                               & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4.__PVT___GEN_16) 
                                                  != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4.__PVT__nest_c_tag_match)))))))) 
                       | ((((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_c_status_nestedReleaseData) 
                            & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5.__PVT__req_valid)) 
                           & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__c_mshr.__PVT__req_set) 
                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5.__PVT__req_set)) 
                              & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5.__PVT__req_channel) 
                                  & (((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5.__PVT__nest_c_way_match)) 
                                      & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5.__PVT___a_c_through_T_3)) 
                                     | (((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5.__PVT__nest_c_tag_match)) 
                                         & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5.__PVT__nest_c_way_match) 
                                            & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5.__PVT___T_146) 
                                                & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5.__PVT__preferCache_latch)) 
                                               | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5.__PVT___GEN_16) 
                                                  | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5.__PVT__a_c_through_reg) 
                                                     | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5.__PVT__transmit_from_other_client_latch)))))) 
                                        | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5.__PVT__nest_c_tag_match) 
                                           & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5.__PVT__nest_c_way_match) 
                                              & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5.__PVT___GEN_16)) 
                                                 & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5.__PVT__a_do_release))))))) 
                                 | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5.__PVT__req_channel) 
                                     >> 1U) & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5.__PVT___a_c_through_T_3) 
                                               | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5.__PVT__nest_c_way_match) 
                                                  & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5.__PVT___GEN_16) 
                                                     != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5.__PVT__nest_c_tag_match)))))))) 
                          | ((((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_c_status_nestedReleaseData) 
                               & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6.__PVT__req_valid)) 
                              & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__c_mshr.__PVT__req_set) 
                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6.__PVT__req_set)) 
                                 & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6.__PVT__req_channel) 
                                     & (((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6.__PVT__nest_c_way_match)) 
                                         & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6.__PVT___a_c_through_T_3)) 
                                        | (((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6.__PVT__nest_c_tag_match)) 
                                            & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6.__PVT__nest_c_way_match) 
                                               & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6.__PVT___T_146) 
                                                   & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6.__PVT__preferCache_latch)) 
                                                  | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6.__PVT___GEN_16) 
                                                     | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6.__PVT__a_c_through_reg) 
                                                        | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6.__PVT__transmit_from_other_client_latch)))))) 
                                           | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6.__PVT__nest_c_tag_match) 
                                              & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6.__PVT__nest_c_way_match) 
                                                 & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6.__PVT___GEN_16)) 
                                                    & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6.__PVT__a_do_release))))))) 
                                    | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6.__PVT__req_channel) 
                                        >> 1U) & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6.__PVT___a_c_through_T_3) 
                                                  | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6.__PVT__nest_c_way_match) 
                                                     & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6.__PVT___GEN_16) 
                                                        != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6.__PVT__nest_c_tag_match)))))))) 
                             | ((((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_c_status_nestedReleaseData) 
                                  & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_7.__PVT__req_valid)) 
                                 & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__c_mshr.__PVT__req_set) 
                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_7.__PVT__req_set)) 
                                    & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_7.__PVT__req_channel) 
                                        & (((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_7.__PVT__nest_c_way_match)) 
                                            & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_7.__PVT___a_c_through_T_3)) 
                                           | (((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_7.__PVT__nest_c_tag_match)) 
                                               & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_7.__PVT__nest_c_way_match) 
                                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_7.__PVT___T_146) 
                                                      & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_7.__PVT__preferCache_latch)) 
                                                     | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_7.__PVT___GEN_16) 
                                                        | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_7.__PVT__a_c_through_reg) 
                                                           | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_7.__PVT__transmit_from_other_client_latch)))))) 
                                              | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_7.__PVT__nest_c_tag_match) 
                                                 & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_7.__PVT__nest_c_way_match) 
                                                    & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_7.__PVT___GEN_16)) 
                                                       & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_7.__PVT__a_do_release))))))) 
                                       | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_7.__PVT__req_channel) 
                                           >> 1U) & 
                                          ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_7.__PVT___a_c_through_T_3) 
                                           | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_7.__PVT__nest_c_way_match) 
                                              & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_7.__PVT___GEN_16) 
                                                 != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_7.__PVT__nest_c_tag_match)))))))) 
                                | ((((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_c_status_nestedReleaseData) 
                                     & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_8.__PVT__req_valid)) 
                                    & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__c_mshr.__PVT__req_set) 
                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_8.__PVT__req_set)) 
                                       & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_8.__PVT__req_channel) 
                                           & (((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_8.__PVT__nest_c_way_match)) 
                                               & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_8.__PVT___a_c_through_T_3)) 
                                              | (((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_8.__PVT__nest_c_tag_match)) 
                                                  & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_8.__PVT__nest_c_way_match) 
                                                     & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_8.__PVT___T_146) 
                                                         & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_8.__PVT__preferCache_latch)) 
                                                        | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_8.__PVT___GEN_16) 
                                                           | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_8.__PVT__a_c_through_reg) 
                                                              | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_8.__PVT__transmit_from_other_client_latch)))))) 
                                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_8.__PVT__nest_c_tag_match) 
                                                    & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_8.__PVT__nest_c_way_match) 
                                                       & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_8.__PVT___GEN_16)) 
                                                          & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_8.__PVT__a_do_release))))))) 
                                          | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_8.__PVT__req_channel) 
                                              >> 1U) 
                                             & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_8.__PVT___a_c_through_T_3) 
                                                | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_8.__PVT__nest_c_way_match) 
                                                   & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_8.__PVT___GEN_16) 
                                                      != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_8.__PVT__nest_c_tag_match)))))))) 
                                   | ((((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_c_status_nestedReleaseData) 
                                        & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_9.__PVT__req_valid)) 
                                       & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__c_mshr.__PVT__req_set) 
                                           == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_9.__PVT__req_set)) 
                                          & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_9.__PVT__req_channel) 
                                              & (((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_9.__PVT__nest_c_way_match)) 
                                                  & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_9.__PVT___a_c_through_T_3)) 
                                                 | (((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_9.__PVT__nest_c_tag_match)) 
                                                     & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_9.__PVT__nest_c_way_match) 
                                                        & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_9.__PVT___T_146) 
                                                            & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_9.__PVT__preferCache_latch)) 
                                                           | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_9.__PVT___GEN_16) 
                                                              | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_9.__PVT__a_c_through_reg) 
                                                                 | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_9.__PVT__transmit_from_other_client_latch)))))) 
                                                    | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_9.__PVT__nest_c_tag_match) 
                                                       & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_9.__PVT__nest_c_way_match) 
                                                          & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_9.__PVT___GEN_16)) 
                                                             & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_9.__PVT__a_do_release))))))) 
                                             | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_9.__PVT__req_channel) 
                                                 >> 1U) 
                                                & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_9.__PVT___a_c_through_T_3) 
                                                   | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_9.__PVT__nest_c_way_match) 
                                                      & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_9.__PVT___GEN_16) 
                                                         != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_9.__PVT__nest_c_tag_match)))))))) 
                                      | ((((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_c_status_nestedReleaseData) 
                                           & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_10.__PVT__req_valid)) 
                                          & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__c_mshr.__PVT__req_set) 
                                              == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_10.__PVT__req_set)) 
                                             & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_10.__PVT__req_channel) 
                                                 & (((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_10.__PVT__nest_c_way_match)) 
                                                     & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_10.__PVT___a_c_through_T_3)) 
                                                    | (((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_10.__PVT__nest_c_tag_match)) 
                                                        & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_10.__PVT__nest_c_way_match) 
                                                           & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_10.__PVT___T_146) 
                                                               & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_10.__PVT__preferCache_latch)) 
                                                              | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_10.__PVT___GEN_16) 
                                                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_10.__PVT__a_c_through_reg) 
                                                                    | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_10.__PVT__transmit_from_other_client_latch)))))) 
                                                       | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_10.__PVT__nest_c_tag_match) 
                                                          & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_10.__PVT__nest_c_way_match) 
                                                             & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_10.__PVT___GEN_16)) 
                                                                & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_10.__PVT__a_do_release))))))) 
                                                | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_10.__PVT__req_channel) 
                                                    >> 1U) 
                                                   & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_10.__PVT___a_c_through_T_3) 
                                                      | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_10.__PVT__nest_c_way_match) 
                                                         & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_10.__PVT___GEN_16) 
                                                            != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_10.__PVT__nest_c_tag_match)))))))) 
                                         | ((((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_c_status_nestedReleaseData) 
                                              & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_11.__PVT__req_valid)) 
                                             & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__c_mshr.__PVT__req_set) 
                                                 == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_11.__PVT__req_set)) 
                                                & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_11.__PVT__req_channel) 
                                                    & (((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_11.__PVT__nest_c_way_match)) 
                                                        & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_11.__PVT___a_c_through_T_3)) 
                                                       | (((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_11.__PVT__nest_c_tag_match)) 
                                                           & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_11.__PVT__nest_c_way_match) 
                                                              & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_11.__PVT___T_146) 
                                                                  & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_11.__PVT__preferCache_latch)) 
                                                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_11.__PVT___GEN_16) 
                                                                    | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_11.__PVT__a_c_through_reg) 
                                                                       | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_11.__PVT__transmit_from_other_client_latch)))))) 
                                                          | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_11.__PVT__nest_c_tag_match) 
                                                             & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_11.__PVT__nest_c_way_match) 
                                                                & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_11.__PVT___GEN_16)) 
                                                                   & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_11.__PVT__a_do_release))))))) 
                                                   | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_11.__PVT__req_channel) 
                                                       >> 1U) 
                                                      & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_11.__PVT___a_c_through_T_3) 
                                                         | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_11.__PVT__nest_c_way_match) 
                                                            & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_11.__PVT___GEN_16) 
                                                               != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_11.__PVT__nest_c_tag_match)))))))) 
                                            | ((((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_c_status_nestedReleaseData) 
                                                 & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_12.__PVT__req_valid)) 
                                                & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__c_mshr.__PVT__req_set) 
                                                    == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_12.__PVT__req_set)) 
                                                   & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_12.__PVT__req_channel) 
                                                       & (((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_12.__PVT__nest_c_way_match)) 
                                                           & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_12.__PVT___a_c_through_T_3)) 
                                                          | (((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_12.__PVT__nest_c_tag_match)) 
                                                              & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_12.__PVT__nest_c_way_match) 
                                                                 & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_12.__PVT___T_146) 
                                                                     & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_12.__PVT__preferCache_latch)) 
                                                                    | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_12.__PVT___GEN_16) 
                                                                       | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_12.__PVT__a_c_through_reg) 
                                                                          | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_12.__PVT__transmit_from_other_client_latch)))))) 
                                                             | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_12.__PVT__nest_c_tag_match) 
                                                                & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_12.__PVT__nest_c_way_match) 
                                                                   & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_12.__PVT___GEN_16)) 
                                                                      & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_12.__PVT__a_do_release))))))) 
                                                      | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_12.__PVT__req_channel) 
                                                          >> 1U) 
                                                         & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_12.__PVT___a_c_through_T_3) 
                                                            | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_12.__PVT__nest_c_way_match) 
                                                               & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_12.__PVT___GEN_16) 
                                                                  != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_12.__PVT__nest_c_tag_match)))))))) 
                                               | ((((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_c_status_nestedReleaseData) 
                                                    & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_13.__PVT__req_valid)) 
                                                   & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__c_mshr.__PVT__req_set) 
                                                       == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_13.__PVT__req_set)) 
                                                      & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_13.__PVT__req_channel) 
                                                          & (((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_13.__PVT__nest_c_way_match)) 
                                                              & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_13.__PVT___a_c_through_T_3)) 
                                                             | (((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_13.__PVT__nest_c_tag_match)) 
                                                                 & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_13.__PVT__nest_c_way_match) 
                                                                    & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_13.__PVT___T_146) 
                                                                        & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_13.__PVT__preferCache_latch)) 
                                                                       | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_13.__PVT___GEN_16) 
                                                                          | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_13.__PVT__a_c_through_reg) 
                                                                             | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_13.__PVT__transmit_from_other_client_latch)))))) 
                                                                | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_13.__PVT__nest_c_tag_match) 
                                                                   & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_13.__PVT__nest_c_way_match) 
                                                                      & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_13.__PVT___GEN_16)) 
                                                                         & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_13.__PVT__a_do_release))))))) 
                                                         | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_13.__PVT__req_channel) 
                                                             >> 1U) 
                                                            & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_13.__PVT___a_c_through_T_3) 
                                                               | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_13.__PVT__nest_c_way_match) 
                                                                  & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_13.__PVT___GEN_16) 
                                                                     != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_13.__PVT__nest_c_tag_match)))))))) 
                                                  | (((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_c_status_nestedReleaseData) 
                                                      & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__bc_mshr.__PVT__req_valid)) 
                                                     & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__c_mshr.__PVT__req_set) 
                                                         == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__bc_mshr.__PVT__req_set)) 
                                                        & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__bc_mshr.__PVT__req_channel) 
                                                            & (((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__bc_mshr.__PVT__nest_c_way_match)) 
                                                                & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__bc_mshr.__PVT___a_c_through_T_3)) 
                                                               | (((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__bc_mshr.__PVT__nest_c_tag_match)) 
                                                                   & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__bc_mshr.__PVT__nest_c_way_match) 
                                                                      & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__bc_mshr.__PVT___T_146) 
                                                                          & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__bc_mshr.__PVT__preferCache_latch)) 
                                                                         | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__bc_mshr.__PVT___GEN_16) 
                                                                            | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__bc_mshr.__PVT__a_c_through_reg) 
                                                                               | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__bc_mshr.__PVT__transmit_from_other_client_latch)))))) 
                                                                  | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__bc_mshr.__PVT__nest_c_tag_match) 
                                                                     & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__bc_mshr.__PVT__nest_c_way_match) 
                                                                        & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__bc_mshr.__PVT___GEN_16)) 
                                                                           & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__bc_mshr.__PVT__a_do_release))))))) 
                                                           | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__bc_mshr.__PVT__req_channel) 
                                                               >> 1U) 
                                                              & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__bc_mshr.__PVT___a_c_through_T_3) 
                                                                 | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__bc_mshr.__PVT__nest_c_way_match) 
                                                                    & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__bc_mshr.__PVT___GEN_16) 
                                                                       != (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__bc_mshr.__PVT__nest_c_tag_match))))))))))))))))))))));
    vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_b_toN 
        = ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT___nestedWb_b_toN_T_2) 
           & (0U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__bc_mshr.io_tasks_dir_write_bits_data_state)));
    vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_b_toB 
        = ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT___nestedWb_b_toN_T_2) 
           & (1U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__bc_mshr.io_tasks_dir_write_bits_data_state)));
    vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0_io_nestedwb_b_clr_dirty 
        = ((~ ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__bc_mshr.io_tasks_dir_write_bits_data_state) 
               >> 1U)) & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT___nestedWb_b_toN_T_2));
    vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__arbiter_io_out_bits_data_state 
        = ((((1U & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__arbiter__DOT__chosenOH))
              ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_0.io_tasks_dir_write_bits_data_state)
              : 0U) | ((2U & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__arbiter__DOT__chosenOH))
                        ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_1.io_tasks_dir_write_bits_data_state)
                        : 0U)) | ((((4U & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__arbiter__DOT__chosenOH))
                                     ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_2.io_tasks_dir_write_bits_data_state)
                                     : 0U) | ((8U & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__arbiter__DOT__chosenOH))
                                               ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_3.io_tasks_dir_write_bits_data_state)
                                               : 0U)) 
                                  | (((0x10U & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__arbiter__DOT__chosenOH))
                                       ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_4.io_tasks_dir_write_bits_data_state)
                                       : 0U) | (((0x20U 
                                                  & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__arbiter__DOT__chosenOH))
                                                  ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_5.io_tasks_dir_write_bits_data_state)
                                                  : 0U) 
                                                | (((0x40U 
                                                     & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__arbiter__DOT__chosenOH))
                                                     ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_6.io_tasks_dir_write_bits_data_state)
                                                     : 0U) 
                                                   | (((0x80U 
                                                        & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__arbiter__DOT__chosenOH))
                                                        ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_7.io_tasks_dir_write_bits_data_state)
                                                        : 0U) 
                                                      | (((0x100U 
                                                           & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__arbiter__DOT__chosenOH))
                                                           ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_8.io_tasks_dir_write_bits_data_state)
                                                           : 0U) 
                                                         | (((0x200U 
                                                              & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__arbiter__DOT__chosenOH))
                                                              ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_9.io_tasks_dir_write_bits_data_state)
                                                              : 0U) 
                                                            | (((0x400U 
                                                                 & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__arbiter__DOT__chosenOH))
                                                                 ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_10.io_tasks_dir_write_bits_data_state)
                                                                 : 0U) 
                                                               | (((0x800U 
                                                                    & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__arbiter__DOT__chosenOH))
                                                                    ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_11.io_tasks_dir_write_bits_data_state)
                                                                    : 0U) 
                                                                  | (((0x1000U 
                                                                       & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__arbiter__DOT__chosenOH))
                                                                       ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_12.io_tasks_dir_write_bits_data_state)
                                                                       : 0U) 
                                                                     | (((0x2000U 
                                                                          & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__arbiter__DOT__chosenOH))
                                                                          ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__abc_mshr_13.io_tasks_dir_write_bits_data_state)
                                                                          : 0U) 
                                                                        | (((0x4000U 
                                                                             & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__arbiter__DOT__chosenOH))
                                                                             ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__bc_mshr.io_tasks_dir_write_bits_data_state)
                                                                             : 0U) 
                                                                           | ((0x8000U 
                                                                               & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__arbiter__DOT__chosenOH))
                                                                               ? (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__c_mshr.io_tasks_dir_write_bits_data_state)
                                                                               : 0U))))))))))))));
    TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__retry 
        = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_replResp_bits_retry) 
           & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.__PVT__refillReqValid_s3));
    TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__retry 
        = ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_replResp_bits_retry) 
           & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.__PVT__refillReqValid_s3));
    TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toDS_req_s3_bits_wen 
        = ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__wen_c) 
           | ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_dsWen) 
              & ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__mshr_probeack_s3) 
                 | ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__mshr_release_s3) 
                    | ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__mshr_refill_s3) 
                       & ((~ (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__need_repl)) 
                          & (~ (IData)(TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__retry))))))));
    TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__need_data_mshr_repl 
        = ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__mshr_refill_s3) 
           & ((~ (IData)(TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__retry)) 
              & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__need_repl)));
    TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT___metaW_valid_s3_mshr_T_1 
        = ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__mshr_refill_s3) 
           & (IData)(TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__retry));
    vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT___isD_s3_T_1 
        = ((~ (IData)(TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__retry)) 
           & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__mshr_refill_s3));
    TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toDS_req_s3_bits_wen 
        = ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__wen_c) 
           | ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_dsWen) 
              & ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__mshr_probeack_s3) 
                 | ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__mshr_release_s3) 
                    | ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__mshr_refill_s3) 
                       & ((~ (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__need_repl)) 
                          & (~ (IData)(TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__retry))))))));
    TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__need_data_mshr_repl 
        = ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__mshr_refill_s3) 
           & ((~ (IData)(TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__retry)) 
              & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__need_repl)));
    TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT___metaW_valid_s3_mshr_T_1 
        = ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__mshr_refill_s3) 
           & (IData)(TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__retry));
    vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT___isD_s3_T_1 
        = ((~ (IData)(TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__retry)) 
           & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__mshr_refill_s3));
    vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__need_write_releaseBuf 
        = ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT___need_write_releaseBuf_T) 
           | (((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__need_data_b) 
               & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__need_mshr_s3_b)) 
              | (IData)(TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__need_data_mshr_repl)));
    TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toDS_req_s3_valid 
        = ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_valid) 
           & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory.io_resp_hit) 
               & ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__req_get_s3) 
                  | ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__sinkA_req_s3) 
                     & (6U == (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_opcode))))) 
              | (((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__need_data_b) 
                  | (IData)(TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__need_data_mshr_repl)) 
                 | (IData)(TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toDS_req_s3_bits_wen))));
    vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_metaWReq_valid 
        = (1U & ((~ (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__resetFinish)) 
                 | ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_valid) 
                    & ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT___io_metaWReq_valid_T_1) 
                       | ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__metaW_valid_s3_c) 
                          | ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_mshrTask) 
                             & ((~ (IData)(TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT___metaW_valid_s3_mshr_T_1)) 
                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_metaWen))))))));
    vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__d_arb_io_in_2_valid 
        = ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_valid) 
           & ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_mshrTask)
               ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT___isD_s3_T_1)
               : (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT___isD_s3_T_10)));
    vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_status_vec_0_valid 
        = ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_valid) 
           & ((~ (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_mshrTask)) 
              | (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT___isD_s3_T_1)));
    vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_tagWReq_valid 
        = ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tagWen) 
           & ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_valid) 
              & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT___isD_s3_T_1)));
    vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__need_write_releaseBuf 
        = ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT___need_write_releaseBuf_T) 
           | (((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__need_data_b) 
               & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__need_mshr_s3_b)) 
              | (IData)(TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__need_data_mshr_repl)));
    TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toDS_req_s3_valid 
        = ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_valid) 
           & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory.io_resp_hit) 
               & ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__req_get_s3) 
                  | ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__sinkA_req_s3) 
                     & (6U == (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_opcode))))) 
              | (((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__need_data_b) 
                  | (IData)(TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__need_data_mshr_repl)) 
                 | (IData)(TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toDS_req_s3_bits_wen))));
    vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_metaWReq_valid 
        = (1U & ((~ (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__resetFinish)) 
                 | ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_valid) 
                    & ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT___io_metaWReq_valid_T_1) 
                       | ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__metaW_valid_s3_c) 
                          | ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_mshrTask) 
                             & ((~ (IData)(TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT___metaW_valid_s3_mshr_T_1)) 
                                & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_metaWen))))))));
    vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__d_arb_io_in_2_valid 
        = ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_valid) 
           & ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_mshrTask)
               ? (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT___isD_s3_T_1)
               : (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT___isD_s3_T_10)));
    vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_status_vec_0_valid 
        = ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_valid) 
           & ((~ (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_mshrTask)) 
              | (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT___isD_s3_T_1)));
    vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_tagWReq_valid 
        = ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_tagWen) 
           & ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_valid) 
              & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT___isD_s3_T_1)));
    vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__dataStorage__DOT__array_io_r_req_valid 
        = ((~ (IData)(TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toDS_req_s3_bits_wen)) 
           & (IData)(TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toDS_req_s3_valid));
    vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__dataStorage__DOT__array_io_w_req_valid 
        = ((IData)(TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toDS_req_s3_bits_wen) 
           & (IData)(TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toDS_req_s3_valid));
    vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__chnl_fire_s3 
        = ((((~ (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__c_arb__DOT____VdfgRegularize_h365a35c3_0_0)) 
             & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sourceC__DOT__queue_io_enq_ready)) 
            & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__c_arb_io_in_2_valid)) 
           | (((~ (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__d_arb__DOT____VdfgRegularize_h365a35c3_0_0)) 
               & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__grantBuf.io_d_task_ready)) 
              & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__d_arb_io_in_2_valid)));
    vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__dataStorage__DOT__array_io_r_req_valid 
        = ((~ (IData)(TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toDS_req_s3_bits_wen)) 
           & (IData)(TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toDS_req_s3_valid));
    vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__dataStorage__DOT__array_io_w_req_valid 
        = ((IData)(TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toDS_req_s3_bits_wen) 
           & (IData)(TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toDS_req_s3_valid));
    vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__chnl_fire_s3 
        = ((((~ (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__c_arb__DOT____VdfgRegularize_h365a35c3_0_0)) 
             & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sourceC__DOT__queue_io_enq_ready)) 
            & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__c_arb_io_in_2_valid)) 
           | (((~ (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__d_arb__DOT____VdfgRegularize_h365a35c3_0_0)) 
               & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.io_d_task_ready)) 
              & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__d_arb_io_in_2_valid)));
    vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__req_drop_s3 
        = (((~ (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__need_write_releaseBuf)) 
            & ((~ (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__need_write_refillBuf)) 
               & ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT___req_drop_s3_T_4) 
                  | (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__chnl_fire_s3)))) 
           | (IData)(TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT___metaW_valid_s3_mshr_T_1));
    vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__req_drop_s3 
        = (((~ (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__need_write_releaseBuf)) 
            & ((~ (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__need_write_refillBuf)) 
               & ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT___req_drop_s3_T_4) 
                  | (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__chnl_fire_s3)))) 
           | (IData)(TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT___metaW_valid_s3_mshr_T_1));
    vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT___task_s4_valid_T_1 
        = ((~ (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__req_drop_s3)) 
           & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_valid));
    vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT___task_s4_valid_T_1 
        = ((~ (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__req_drop_s3)) 
           & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_valid));
}

VL_ATTR_COLD void VTestTop_L2L3L2___024root___stl_sequent__TOP__4(VTestTop_L2L3L2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTop_L2L3L2___024root___stl_sequent__TOP__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT___sinkValids_T 
        = (1U & (~ ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__grantBuf.io_toReqArb_blockSinkReqEntrance_blockA_s1) 
                    | ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_valid) 
                       & ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT____VdfgRegularize_hd56c4748_1_9) 
                          & ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_set) 
                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_task_bits_set)))))));
    vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT___sinkValids_T_4 
        = (1U & (~ ((0xfU <= (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT___mshrFull_T_1)) 
                    | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__grantBuf.io_toReqArb_blockSinkReqEntrance_blockA_s1) 
                       | ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toReqBuf_0) 
                          | (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toReqBuf_1))))));
    vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT___sinkValids_T_2 
        = (1U & (~ ((0x10U <= (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl.__PVT___mshrFull_T_1)) 
                    | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__grantBuf.io_toReqArb_blockSinkReqEntrance_blockB_s1) 
                       | ((((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_valid) 
                            & ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1) 
                               == (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_set))) 
                           | ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_valid) 
                              & ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1) 
                                 == (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set)))) 
                          | (((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s4_valid) 
                              & (((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1) 
                                  == (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s4_bits_set)) 
                                 & ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_status_s1_tags_1) 
                                    == (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s4_bits_tag)))) 
                             | ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s5_valid) 
                                & (((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1) 
                                    == (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_set)) 
                                   & ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_status_s1_tags_1) 
                                      == (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_tag))))))))));
    vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT___sinkValids_T 
        = (1U & (~ ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.io_toReqArb_blockSinkReqEntrance_blockA_s1) 
                    | ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_valid) 
                       & ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT____VdfgRegularize_hd56c4748_1_9) 
                          & ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_set) 
                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_task_bits_set)))))));
    vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT___sinkValids_T_4 
        = (1U & (~ ((0xfU <= (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT___mshrFull_T_1)) 
                    | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.io_toReqArb_blockSinkReqEntrance_blockA_s1) 
                       | ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toReqBuf_0) 
                          | (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toReqBuf_1))))));
    vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT___sinkValids_T_2 
        = (1U & (~ ((0x10U <= (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl.__PVT___mshrFull_T_1)) 
                    | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__grantBuf.io_toReqArb_blockSinkReqEntrance_blockB_s1) 
                       | ((((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_valid) 
                            & ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1) 
                               == (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__task_s2_bits_set))) 
                           | ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_valid) 
                              & ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1) 
                                 == (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_set)))) 
                          | (((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s4_valid) 
                              & (((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1) 
                                  == (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s4_bits_set)) 
                                 & ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_tags_1) 
                                    == (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s4_bits_tag)))) 
                             | ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s5_valid) 
                                & (((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1) 
                                    == (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_set)) 
                                   & ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_tags_1) 
                                      == (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s5_bits_tag))))))))));
    vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT___sinkValids_T_1 
        = ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT___sinkValids_T) 
           & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_task_valid));
    vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT___sinkValids_T_3 
        = ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT___sinkValids_T_2) 
           & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkB_io_task_valid));
    vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT___sinkValids_T_1 
        = ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT___sinkValids_T) 
           & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_task_valid));
    vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT___sinkValids_T_3 
        = ((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT___sinkValids_T_2) 
           & (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkB_io_task_valid));
    if (vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT___sinkValids_T_3) {
        vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_mshrId = 0U;
        vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_reqSource = 0U;
        vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_tag 
            = vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_status_s1_tags_1;
        vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_opcode 
            = vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkB_io_b_q__DOT__ram_opcode
            [vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkB_io_b_q__DOT__value_1];
        vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_channel = 2U;
        vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_set 
            = vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1;
    } else {
        if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow) {
            vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_mshrId = 0U;
            vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_reqSource = 0U;
            vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_tag 
                = vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag;
            vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_opcode 
                = vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_opcode;
            vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_channel = 1U;
        } else {
            vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_mshrId 
                = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_mshrId
                [0U];
            vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_reqSource 
                = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_reqSource
                [0U];
            vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_tag 
                = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_tag
                [0U];
            vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_opcode 
                = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_opcode
                [0U];
            vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_channel 
                = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_channel
                [0U];
        }
        vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_set 
            = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__a_reqBuf.io_out_bits_set;
    }
    vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__sinkValids 
        = ((((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT___sinkValids_T_4) 
             & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__a_reqBuf.io_out_valid)) 
            << 2U) | (((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT___sinkValids_T_3) 
                       << 1U) | (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT___sinkValids_T_1)));
    if (vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT___sinkValids_T_3) {
        vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_mshrId = 0U;
        vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_reqSource = 0U;
        vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_tag 
            = vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_tags_1;
        vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_opcode 
            = vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkB_io_b_q__DOT__ram_opcode
            [vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkB_io_b_q__DOT__value_1];
        vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_channel = 2U;
        vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_set 
            = vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_status_s1_sets_1;
    } else {
        if (vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__a_reqBuf.__PVT__canFlow) {
            vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_mshrId = 0U;
            vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_reqSource = 0U;
            vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_tag 
                = vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag;
            vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_opcode 
                = vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_opcode;
            vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_channel = 1U;
        } else {
            vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_mshrId 
                = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_mshrId
                [0U];
            vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_reqSource 
                = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_reqSource
                [0U];
            vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_tag 
                = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_tag
                [0U];
            vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_opcode 
                = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_opcode
                [0U];
            vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_channel 
                = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__a_reqBuf.__PVT__chosenQ__DOT__ram_bits_task_channel
                [0U];
        }
        vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_set 
            = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__a_reqBuf.io_out_bits_set;
    }
    vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__sinkValids 
        = ((((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT___sinkValids_T_4) 
             & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__a_reqBuf.io_out_valid)) 
            << 2U) | (((IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT___sinkValids_T_3) 
                       << 1U) | (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT___sinkValids_T_1)));
    if (vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__mshr_task_s1_valid) {
        vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_replacerInfo_channel 
            = vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__mshr_task_s1_bits_channel;
        vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set 
            = vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT__mshr_task_s1_bits_set;
    } else if (vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT___sinkValids_T_1) {
        vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_replacerInfo_channel = 4U;
        vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set 
            = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkC.io_task_bits_set;
    } else {
        vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_replacerInfo_channel 
            = vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_channel;
        vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set 
            = vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_set;
    }
    if (vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__mshr_task_s1_valid) {
        vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_replacerInfo_channel 
            = vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__mshr_task_s1_bits_channel;
        vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set 
            = vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT__mshr_task_s1_bits_set;
    } else if (vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT___sinkValids_T_1) {
        vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_replacerInfo_channel = 4U;
        vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set 
            = vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkC.io_task_bits_set;
    } else {
        vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_replacerInfo_channel 
            = vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_channel;
        vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_dirRead_s1_bits_set 
            = vlSelfRef.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb__DOT___chnl_task_s1_bits_T_4_set;
    }
}
