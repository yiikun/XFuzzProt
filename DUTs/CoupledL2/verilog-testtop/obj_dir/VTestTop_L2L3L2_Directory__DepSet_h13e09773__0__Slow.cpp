// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestTop_L2L3L2.h for the primary calling header

#include "VTestTop_L2L3L2__pch.h"
#include "VTestTop_L2L3L2_Directory.h"
#include "VTestTop_L2L3L2__Syms.h"

VL_ATTR_COLD void VTestTop_L2L3L2_Directory___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory__1(VTestTop_L2L3L2_Directory* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_Directory___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__directory__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__replacer_sram_opt_io_w_req_valid;
    __PVT__replacer_sram_opt_io_w_req_valid = 0;
    // Body
    vlSelfRef.io_replResp_bits_retry = (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_valid) 
                                         & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_set) 
                                             == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                            & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__dirResult_hit) 
                                                | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__io_status_bits_needsRepl)) 
                                               & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__dirResult_way) 
                                                  == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                        | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_valid) 
                                            & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_set) 
                                                == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                               & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__dirResult_hit) 
                                                   | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__io_status_bits_needsRepl)) 
                                                  & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__dirResult_way) 
                                                     == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                           | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_valid) 
                                               & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_set) 
                                                   == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__dirResult_hit) 
                                                      | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__io_status_bits_needsRepl)) 
                                                     & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__dirResult_way) 
                                                        == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                              | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_valid) 
                                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_set) 
                                                      == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                     & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__dirResult_hit) 
                                                         | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__io_status_bits_needsRepl)) 
                                                        & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__dirResult_way) 
                                                           == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                 | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_valid) 
                                                     & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_set) 
                                                         == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                        & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__dirResult_hit) 
                                                            | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__io_status_bits_needsRepl)) 
                                                           & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__dirResult_way) 
                                                              == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                    | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_valid) 
                                                        & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_set) 
                                                            == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                           & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__dirResult_hit) 
                                                               | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__io_status_bits_needsRepl)) 
                                                              & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__dirResult_way) 
                                                                 == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                       | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_valid) 
                                                           & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_set) 
                                                               == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                              & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__dirResult_hit) 
                                                                  | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__io_status_bits_needsRepl)) 
                                                                 & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__dirResult_way) 
                                                                    == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                          | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_valid) 
                                                              & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_set) 
                                                                  == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                                 & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__dirResult_hit) 
                                                                     | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__io_status_bits_needsRepl)) 
                                                                    & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__dirResult_way) 
                                                                       == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                             | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_valid) 
                                                                 & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_set) 
                                                                     == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                                    & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__dirResult_hit) 
                                                                        | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__io_status_bits_needsRepl)) 
                                                                       & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__dirResult_way) 
                                                                          == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                                | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_valid) 
                                                                    & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_set) 
                                                                        == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                                       & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__dirResult_hit) 
                                                                           | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__io_status_bits_needsRepl)) 
                                                                          & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__dirResult_way) 
                                                                             == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                                   | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_valid) 
                                                                       & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_set) 
                                                                           == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                                          & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__dirResult_hit) 
                                                                              | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__io_status_bits_needsRepl)) 
                                                                             & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__dirResult_way) 
                                                                                == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                                      | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_valid) 
                                                                          & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_set) 
                                                                              == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                                             & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__dirResult_hit) 
                                                                                | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__io_status_bits_needsRepl)) 
                                                                                & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__dirResult_way) 
                                                                                == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                                         | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid) 
                                                                             & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_set) 
                                                                                == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                                                & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_hit) 
                                                                                | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_status_bits_needsRepl)) 
                                                                                & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_way) 
                                                                                == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                                            | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid) 
                                                                                & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_set) 
                                                                                == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                                                & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_hit) 
                                                                                | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_status_bits_needsRepl)) 
                                                                                & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_way) 
                                                                                == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                                               | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid) 
                                                                                & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_set) 
                                                                                == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                                                & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_hit) 
                                                                                | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_status_bits_needsRepl)) 
                                                                                & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_way) 
                                                                                == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                                                | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                                                                                & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set) 
                                                                                == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                                                & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_hit) 
                                                                                | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_status_bits_needsRepl)) 
                                                                                & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_way) 
                                                                                == (IData)(vlSelfRef.io_replResp_bits_way))))))))))))))))))));
    vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data 
        = (((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__resetFinish) 
              & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT___io_metaWReq_valid_T_1)
                  ? ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__metaW_valid_s3_a) 
                     & (IData)(vlSelfRef.io_resp_meta_dirty))
                  : ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__metaW_valid_s3_c)
                      ? ((IData)(vlSelfRef.io_resp_meta_dirty) 
                         | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__wen_c))
                      : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_meta_dirty)))) 
             << 6U) | ((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__resetFinish)
                          ? ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT___io_metaWReq_valid_T_1)
                              ? ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__metaW_valid_s3_a)
                                  ? (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__req_needT_s3) 
                                      | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__sink_resp_s3_a_promoteT))
                                      ? 2U : (IData)(vlSelfRef.io_resp_meta_state))
                                  : ((2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_param))
                                      ? 0U : 1U)) : 
                             ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__metaW_valid_s3_c)
                               ? ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT___wen_c_T_4)
                                   ? 3U : (IData)(vlSelfRef.io_resp_meta_state))
                               : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_meta_state)))
                          : 0U) << 4U) | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__resetFinish) 
                                           & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT___io_metaWReq_valid_T_1)
                                               ? ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__metaW_valid_s3_a) 
                                                  | ((2U 
                                                      != (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_param)) 
                                                     & (IData)(vlSelfRef.io_resp_meta_clients)))
                                               : ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__metaW_valid_s3_c)
                                                   ? 
                                                  (~ 
                                                   ((1U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_param)) 
                                                    | ((2U 
                                                        == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_param)) 
                                                       | (5U 
                                                          == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_param)))))
                                                   : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_meta_clients)))) 
                                          << 3U))) 
           | ((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__resetFinish)
                 ? ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT___io_metaWReq_valid_T_1)
                     ? ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__metaW_valid_s3_a)
                         ? (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__req_get_s3) 
                             | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__req_prefetch_s3))
                             ? (IData)(vlSelfRef.io_resp_meta_alias)
                             : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_alias))
                         : ((2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_param))
                             ? 0U : (IData)(vlSelfRef.io_resp_meta_alias)))
                     : ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__metaW_valid_s3_c)
                         ? (IData)(vlSelfRef.io_resp_meta_alias)
                         : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_meta_alias)))
                 : 0U) << 1U) | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__resetFinish) 
                                 & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT___io_metaWReq_valid_T_1)
                                     ? ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__metaW_valid_s3_a) 
                                        | ((2U != (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_param)) 
                                           & (IData)(vlSelfRef.io_resp_meta_accessed)))
                                     : ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__metaW_valid_s3_c)
                                         ? (IData)(vlSelfRef.io_resp_meta_accessed)
                                         : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_meta_accessed))))));
    __PVT__replacer_sram_opt_io_w_req_valid = (1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__resetFinish)) 
                                                | (((IData)(vlSelfRef.__PVT__reqValid_s3) 
                                                    & ((IData)(vlSelfRef.io_resp_hit) 
                                                       & ((IData)(vlSelfRef.__PVT__req_s3_replacerInfo_channel) 
                                                          & ((7U 
                                                              == (IData)(vlSelfRef.__PVT__req_s3_replacerInfo_opcode)) 
                                                             | (6U 
                                                                == (IData)(vlSelfRef.__PVT__req_s3_replacerInfo_opcode)))))) 
                                                   | ((~ (IData)(vlSelfRef.io_replResp_bits_retry)) 
                                                      & (IData)(vlSelfRef.__PVT__refillReqValid_s3)))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7_io_w_req_valid 
        = ((IData)(__PVT__replacer_sram_opt_io_w_req_valid) 
           & (7U == (7U & (IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6_io_w_req_valid 
        = ((IData)(__PVT__replacer_sram_opt_io_w_req_valid) 
           & (6U == (7U & (IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5_io_w_req_valid 
        = ((IData)(__PVT__replacer_sram_opt_io_w_req_valid) 
           & (5U == (7U & (IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1_io_w_req_valid 
        = ((IData)(__PVT__replacer_sram_opt_io_w_req_valid) 
           & (1U == (7U & (IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4_io_w_req_valid 
        = ((IData)(__PVT__replacer_sram_opt_io_w_req_valid) 
           & (4U == (7U & (IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3_io_w_req_valid 
        = ((IData)(__PVT__replacer_sram_opt_io_w_req_valid) 
           & (3U == (7U & (IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2_io_w_req_valid 
        = ((IData)(__PVT__replacer_sram_opt_io_w_req_valid) 
           & (2U == (7U & (IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0_io_w_req_valid 
        = ((IData)(__PVT__replacer_sram_opt_io_w_req_valid) 
           & (0U == (7U & (IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__array_0_MPORT_en 
        = ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7_io_w_req_valid) 
           | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__array_0_MPORT_en 
        = ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6_io_w_req_valid) 
           | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__array_0_MPORT_en 
        = ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5_io_w_req_valid) 
           | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__array_0_MPORT_en 
        = ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1_io_w_req_valid) 
           | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__array_0_MPORT_en 
        = ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4_io_w_req_valid) 
           | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__array_0_MPORT_en 
        = ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3_io_w_req_valid) 
           | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__array_0_MPORT_en 
        = ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2_io_w_req_valid) 
           | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__array_0_MPORT_en 
        = ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0_io_w_req_valid) 
           | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7_io_r_req_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__resetState)) 
                 & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__array_0_MPORT_en))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6_io_r_req_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__resetState)) 
                 & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__array_0_MPORT_en))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5_io_r_req_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__resetState)) 
                 & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__array_0_MPORT_en))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1_io_r_req_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__resetState)) 
                 & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__array_0_MPORT_en))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4_io_r_req_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__resetState)) 
                 & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__array_0_MPORT_en))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3_io_r_req_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__resetState)) 
                 & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__array_0_MPORT_en))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2_io_r_req_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__resetState)) 
                 & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__array_0_MPORT_en))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0_io_r_req_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__resetState)) 
                 & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__array_0_MPORT_en))));
}

VL_ATTR_COLD void VTestTop_L2L3L2_Directory___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory__1(VTestTop_L2L3L2_Directory* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_Directory___stl_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__directory__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__replacer_sram_opt_io_w_req_valid;
    __PVT__replacer_sram_opt_io_w_req_valid = 0;
    // Body
    vlSelfRef.io_replResp_bits_retry = (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_valid) 
                                         & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_set) 
                                             == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                            & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__dirResult_hit) 
                                                | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__io_status_bits_needsRepl)) 
                                               & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__dirResult_way) 
                                                  == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                        | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_valid) 
                                            & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_set) 
                                                == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                               & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__dirResult_hit) 
                                                   | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__io_status_bits_needsRepl)) 
                                                  & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__dirResult_way) 
                                                     == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                           | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_valid) 
                                               & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_set) 
                                                   == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__dirResult_hit) 
                                                      | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__io_status_bits_needsRepl)) 
                                                     & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__dirResult_way) 
                                                        == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                              | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_valid) 
                                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_set) 
                                                      == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                     & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__dirResult_hit) 
                                                         | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__io_status_bits_needsRepl)) 
                                                        & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__dirResult_way) 
                                                           == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                 | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_valid) 
                                                     & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_set) 
                                                         == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                        & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__dirResult_hit) 
                                                            | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__io_status_bits_needsRepl)) 
                                                           & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__dirResult_way) 
                                                              == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                    | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_valid) 
                                                        & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_set) 
                                                            == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                           & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__dirResult_hit) 
                                                               | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__io_status_bits_needsRepl)) 
                                                              & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__dirResult_way) 
                                                                 == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                       | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_valid) 
                                                           & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_set) 
                                                               == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                              & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__dirResult_hit) 
                                                                  | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__io_status_bits_needsRepl)) 
                                                                 & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__dirResult_way) 
                                                                    == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                          | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_valid) 
                                                              & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_set) 
                                                                  == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                                 & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__dirResult_hit) 
                                                                     | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__io_status_bits_needsRepl)) 
                                                                    & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__dirResult_way) 
                                                                       == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                             | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_valid) 
                                                                 & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_set) 
                                                                     == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                                    & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__dirResult_hit) 
                                                                        | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__io_status_bits_needsRepl)) 
                                                                       & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__dirResult_way) 
                                                                          == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                                | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_valid) 
                                                                    & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_set) 
                                                                        == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                                       & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__dirResult_hit) 
                                                                           | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__io_status_bits_needsRepl)) 
                                                                          & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__dirResult_way) 
                                                                             == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                                   | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_valid) 
                                                                       & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_set) 
                                                                           == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                                          & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__dirResult_hit) 
                                                                              | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__io_status_bits_needsRepl)) 
                                                                             & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__dirResult_way) 
                                                                                == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                                      | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_valid) 
                                                                          & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_set) 
                                                                              == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                                             & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__dirResult_hit) 
                                                                                | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__io_status_bits_needsRepl)) 
                                                                                & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__dirResult_way) 
                                                                                == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                                         | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid) 
                                                                             & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_set) 
                                                                                == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                                                & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_hit) 
                                                                                | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_status_bits_needsRepl)) 
                                                                                & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_way) 
                                                                                == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                                            | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid) 
                                                                                & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_set) 
                                                                                == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                                                & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_hit) 
                                                                                | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_status_bits_needsRepl)) 
                                                                                & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_way) 
                                                                                == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                                               | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid) 
                                                                                & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_set) 
                                                                                == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                                                & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_hit) 
                                                                                | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_status_bits_needsRepl)) 
                                                                                & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_way) 
                                                                                == (IData)(vlSelfRef.io_replResp_bits_way))))) 
                                                                                | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                                                                                & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set) 
                                                                                == (IData)(vlSelfRef.__PVT__req_s3_set)) 
                                                                                & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_hit) 
                                                                                | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_status_bits_needsRepl)) 
                                                                                & ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_way) 
                                                                                == (IData)(vlSelfRef.io_replResp_bits_way))))))))))))))))))));
    vlSelfRef.__PVT__metaArray__DOT__banks_0__DOT__array_0_MPORT_data 
        = (((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__resetFinish) 
              & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT___io_metaWReq_valid_T_1)
                  ? ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__metaW_valid_s3_a) 
                     & (IData)(vlSelfRef.io_resp_meta_dirty))
                  : ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__metaW_valid_s3_c)
                      ? ((IData)(vlSelfRef.io_resp_meta_dirty) 
                         | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__wen_c))
                      : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_meta_dirty)))) 
             << 6U) | ((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__resetFinish)
                          ? ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT___io_metaWReq_valid_T_1)
                              ? ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__metaW_valid_s3_a)
                                  ? (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__req_needT_s3) 
                                      | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__sink_resp_s3_a_promoteT))
                                      ? 2U : (IData)(vlSelfRef.io_resp_meta_state))
                                  : ((2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_param))
                                      ? 0U : 1U)) : 
                             ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__metaW_valid_s3_c)
                               ? ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT___wen_c_T_4)
                                   ? 3U : (IData)(vlSelfRef.io_resp_meta_state))
                               : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_meta_state)))
                          : 0U) << 4U) | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__resetFinish) 
                                           & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT___io_metaWReq_valid_T_1)
                                               ? ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__metaW_valid_s3_a) 
                                                  | ((2U 
                                                      != (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_param)) 
                                                     & (IData)(vlSelfRef.io_resp_meta_clients)))
                                               : ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__metaW_valid_s3_c)
                                                   ? 
                                                  (~ 
                                                   ((1U 
                                                     == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_param)) 
                                                    | ((2U 
                                                        == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_param)) 
                                                       | (5U 
                                                          == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_param)))))
                                                   : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_meta_clients)))) 
                                          << 3U))) 
           | ((((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__resetFinish)
                 ? ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT___io_metaWReq_valid_T_1)
                     ? ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__metaW_valid_s3_a)
                         ? (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__req_get_s3) 
                             | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__req_prefetch_s3))
                             ? (IData)(vlSelfRef.io_resp_meta_alias)
                             : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_alias))
                         : ((2U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_param))
                             ? 0U : (IData)(vlSelfRef.io_resp_meta_alias)))
                     : ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__metaW_valid_s3_c)
                         ? (IData)(vlSelfRef.io_resp_meta_alias)
                         : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_meta_alias)))
                 : 0U) << 1U) | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__resetFinish) 
                                 & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT___io_metaWReq_valid_T_1)
                                     ? ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__metaW_valid_s3_a) 
                                        | ((2U != (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_param)) 
                                           & (IData)(vlSelfRef.io_resp_meta_accessed)))
                                     : ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__metaW_valid_s3_c)
                                         ? (IData)(vlSelfRef.io_resp_meta_accessed)
                                         : (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe__DOT__task_s3_bits_meta_accessed))))));
    __PVT__replacer_sram_opt_io_w_req_valid = (1U & 
                                               ((~ (IData)(vlSelfRef.__PVT__resetFinish)) 
                                                | (((IData)(vlSelfRef.__PVT__reqValid_s3) 
                                                    & ((IData)(vlSelfRef.io_resp_hit) 
                                                       & ((IData)(vlSelfRef.__PVT__req_s3_replacerInfo_channel) 
                                                          & ((7U 
                                                              == (IData)(vlSelfRef.__PVT__req_s3_replacerInfo_opcode)) 
                                                             | (6U 
                                                                == (IData)(vlSelfRef.__PVT__req_s3_replacerInfo_opcode)))))) 
                                                   | ((~ (IData)(vlSelfRef.io_replResp_bits_retry)) 
                                                      & (IData)(vlSelfRef.__PVT__refillReqValid_s3)))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7_io_w_req_valid 
        = ((IData)(__PVT__replacer_sram_opt_io_w_req_valid) 
           & (7U == (7U & (IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6_io_w_req_valid 
        = ((IData)(__PVT__replacer_sram_opt_io_w_req_valid) 
           & (6U == (7U & (IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5_io_w_req_valid 
        = ((IData)(__PVT__replacer_sram_opt_io_w_req_valid) 
           & (5U == (7U & (IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1_io_w_req_valid 
        = ((IData)(__PVT__replacer_sram_opt_io_w_req_valid) 
           & (1U == (7U & (IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4_io_w_req_valid 
        = ((IData)(__PVT__replacer_sram_opt_io_w_req_valid) 
           & (4U == (7U & (IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3_io_w_req_valid 
        = ((IData)(__PVT__replacer_sram_opt_io_w_req_valid) 
           & (3U == (7U & (IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2_io_w_req_valid 
        = ((IData)(__PVT__replacer_sram_opt_io_w_req_valid) 
           & (2U == (7U & (IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0_io_w_req_valid 
        = ((IData)(__PVT__replacer_sram_opt_io_w_req_valid) 
           & (0U == (7U & (IData)(vlSelfRef.__PVT__replacer_sram_opt_io_w_req_bits_setIdx))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__array_0_MPORT_en 
        = ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7_io_w_req_valid) 
           | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__array_0_MPORT_en 
        = ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6_io_w_req_valid) 
           | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__array_0_MPORT_en 
        = ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5_io_w_req_valid) 
           | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__array_0_MPORT_en 
        = ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1_io_w_req_valid) 
           | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__array_0_MPORT_en 
        = ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4_io_w_req_valid) 
           | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__array_0_MPORT_en 
        = ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3_io_w_req_valid) 
           | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__array_0_MPORT_en 
        = ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2_io_w_req_valid) 
           | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__array_0_MPORT_en 
        = ((IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0_io_w_req_valid) 
           | (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__resetState));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7_io_r_req_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__resetState)) 
                 & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_7__DOT__array_0_MPORT_en))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6_io_r_req_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__resetState)) 
                 & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_6__DOT__array_0_MPORT_en))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5_io_r_req_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__resetState)) 
                 & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_5__DOT__array_0_MPORT_en))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1_io_r_req_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__resetState)) 
                 & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_1__DOT__array_0_MPORT_en))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4_io_r_req_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__resetState)) 
                 & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_4__DOT__array_0_MPORT_en))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3_io_r_req_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__resetState)) 
                 & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_3__DOT__array_0_MPORT_en))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2_io_r_req_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__resetState)) 
                 & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_2__DOT__array_0_MPORT_en))));
    vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0_io_r_req_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__resetState)) 
                 & (~ (IData)(vlSelfRef.__PVT__replacer_sram_opt__DOT__banks_0__DOT__array_0_MPORT_en))));
}
