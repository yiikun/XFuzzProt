// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestTop_L2L3L2.h for the primary calling header

#include "VTestTop_L2L3L2__pch.h"
#include "VTestTop_L2L3L2_RequestBuffer.h"
#include "VTestTop_L2L3L2__Syms.h"

VL_INLINE_OPT void VTestTop_L2L3L2_RequestBuffer___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__a_reqBuf__0(VTestTop_L2L3L2_RequestBuffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_RequestBuffer___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__a_reqBuf__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __PVT__issueArb__DOT___rrSelOH_T;
    __PVT__issueArb__DOT___rrSelOH_T = 0;
    VlUnpacked<CData/*0:0*/, 1> __PVT__chosenQ__DOT__ram_bits_task_size;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __PVT__chosenQ__DOT__ram_bits_task_size[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 1> __PVT__chosenQ__DOT__ram_bits_task_aliasTask;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __PVT__chosenQ__DOT__ram_bits_task_aliasTask[__Vi0] = 0;
    }
    CData/*0:0*/ __Vdly__REG_4;
    __Vdly__REG_4 = 0;
    CData/*0:0*/ __Vdly__REG;
    __Vdly__REG = 0;
    CData/*0:0*/ __Vdly__REG_2;
    __Vdly__REG_2 = 0;
    CData/*2:0*/ __VdlyVal__chosenQ__DOT__ram_bits_task_channel__v0;
    __VdlyVal__chosenQ__DOT__ram_bits_task_channel__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_channel__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_channel__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_aliasTask__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_aliasTask__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_mshrId__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_mshrId__v0 = 0;
    CData/*7:0*/ __VdlyVal__chosenQ__DOT__ram_bits_task_tag__v0;
    __VdlyVal__chosenQ__DOT__ram_bits_task_tag__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_tag__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_tag__v0 = 0;
    CData/*1:0*/ __VdlyVal__chosenQ__DOT__ram_id__v0;
    __VdlyVal__chosenQ__DOT__ram_id__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_id__v0;
    __VdlySet__chosenQ__DOT__ram_id__v0 = 0;
    CData/*2:0*/ __VdlyVal__chosenQ__DOT__ram_bits_task_opcode__v0;
    __VdlyVal__chosenQ__DOT__ram_bits_task_opcode__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_opcode__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_opcode__v0 = 0;
    CData/*6:0*/ __VdlyVal__chosenQ__DOT__ram_bits_task_set__v0;
    __VdlyVal__chosenQ__DOT__ram_bits_task_set__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_set__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_set__v0 = 0;
    CData/*0:0*/ __VdlyVal__chosenQ__DOT__ram_bits_task_size__v0;
    __VdlyVal__chosenQ__DOT__ram_bits_task_size__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_size__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_size__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_reqSource__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_reqSource__v0 = 0;
    // Body
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_metaWen__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_accessed__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_alias__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_clients__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_way__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_dirty__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_useProbeData__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_mshrTask__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_aliasTask__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_tagWen__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_dirty__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_state__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_bufIdx__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_needProbeAckData__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_dsWen__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_replTask__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_mshrId__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_reqSource__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_id__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_size__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_off__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_alias__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_param__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_sourceId__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_channel__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_opcode__v0 = 0U;
    __Vdly__REG_4 = vlSelfRef.__PVT__REG_4;
    __Vdly__REG = vlSelfRef.__PVT__REG;
    __Vdly__REG_2 = vlSelfRef.__PVT__REG_2;
    __VdlySet__chosenQ__DOT__ram_bits_task_tag__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_set__v0 = 0U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.__PVT__alloc) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (2U < (0x1fU & ((0xfU & ((7U 
                                                 & ((3U 
                                                     & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                                                         & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_msInfo_bits_willFree)) 
                                                            & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set)) 
                                                               & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                   == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_tag)) 
                                                                  | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                      == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_tag)) 
                                                                     & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__state_w_releaseack))))))) 
                                                        + 
                                                        VL_SHIFTR_III(2,2,32, 
                                                                      ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid) 
                                                                         & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_msInfo_bits_willFree)) 
                                                                            & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_set)) 
                                                                               & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_tag)) 
                                                                                | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_tag)) 
                                                                                & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__state_w_releaseack))))))) 
                                                                        << 1U) 
                                                                       | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                                                                          & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_msInfo_bits_willFree)) 
                                                                             & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set)) 
                                                                                & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_tag)) 
                                                                                | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_tag)) 
                                                                                & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__state_w_releaseack)))))))), 1U))) 
                                                    + 
                                                    (3U 
                                                     & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid) 
                                                         & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_msInfo_bits_willFree)) 
                                                            & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_set)) 
                                                               & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                   == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_tag)) 
                                                                  | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                      == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_tag)) 
                                                                     & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__state_w_releaseack))))))) 
                                                        + 
                                                        ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid) 
                                                         & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_msInfo_bits_willFree)) 
                                                            & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_set)) 
                                                               & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                   == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_tag)) 
                                                                  | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                      == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_tag)) 
                                                                     & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__state_w_releaseack))))))))))) 
                                                + (7U 
                                                   & ((3U 
                                                       & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_valid) 
                                                           & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__io_msInfo_bits_willFree)) 
                                                              & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_set)) 
                                                                 & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_tag)) 
                                                                    | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__dirResult_tag)) 
                                                                       & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__state_w_releaseack))))))) 
                                                          + 
                                                          ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_valid) 
                                                           & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__io_msInfo_bits_willFree)) 
                                                              & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_set)) 
                                                                 & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_tag)) 
                                                                    | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__dirResult_tag)) 
                                                                       & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__state_w_releaseack))))))))) 
                                                      + 
                                                      (3U 
                                                       & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_valid) 
                                                           & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__io_msInfo_bits_willFree)) 
                                                              & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_set)) 
                                                                 & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_tag)) 
                                                                    | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__dirResult_tag)) 
                                                                       & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__state_w_releaseack))))))) 
                                                          + 
                                                          ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_valid) 
                                                           & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__io_msInfo_bits_willFree)) 
                                                              & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_set)) 
                                                                 & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_tag)) 
                                                                    | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__dirResult_tag)) 
                                                                       & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__state_w_releaseack))))))))))))) 
                                       + (0xfU & ((7U 
                                                   & ((3U 
                                                       & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_valid) 
                                                           & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__io_msInfo_bits_willFree)) 
                                                              & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_set)) 
                                                                 & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_tag)) 
                                                                    | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__dirResult_tag)) 
                                                                       & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__state_w_releaseack))))))) 
                                                          + 
                                                          ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_valid) 
                                                           & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__io_msInfo_bits_willFree)) 
                                                              & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_set)) 
                                                                 & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_tag)) 
                                                                    | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__dirResult_tag)) 
                                                                       & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__state_w_releaseack))))))))) 
                                                      + 
                                                      (3U 
                                                       & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_valid) 
                                                           & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__io_msInfo_bits_willFree)) 
                                                              & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_set)) 
                                                                 & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_tag)) 
                                                                    | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__dirResult_tag)) 
                                                                       & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__state_w_releaseack))))))) 
                                                          + 
                                                          ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_valid) 
                                                           & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__io_msInfo_bits_willFree)) 
                                                              & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_set)) 
                                                                 & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_tag)) 
                                                                    | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__dirResult_tag)) 
                                                                       & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__state_w_releaseack))))))))))) 
                                                  + 
                                                  (7U 
                                                   & ((3U 
                                                       & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_valid) 
                                                           & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__io_msInfo_bits_willFree)) 
                                                              & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_set)) 
                                                                 & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_tag)) 
                                                                    | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__dirResult_tag)) 
                                                                       & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__state_w_releaseack))))))) 
                                                          + 
                                                          ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_valid) 
                                                           & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__io_msInfo_bits_willFree)) 
                                                              & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_set)) 
                                                                 & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_tag)) 
                                                                    | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__dirResult_tag)) 
                                                                       & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__state_w_releaseack))))))))) 
                                                      + 
                                                      (3U 
                                                       & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_valid) 
                                                           & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__io_msInfo_bits_willFree)) 
                                                              & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_set)) 
                                                                 & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_tag)) 
                                                                    | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__dirResult_tag)) 
                                                                       & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__state_w_releaseack))))))) 
                                                          + 
                                                          ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_valid) 
                                                           & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__io_msInfo_bits_willFree)) 
                                                              & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_set)) 
                                                                 & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_tag)) 
                                                                    | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__dirResult_tag)) 
                                                                       & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__state_w_releaseack))))))))))))))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at RequestBuffer.scala:151 assert(PopCount(conflictMask(in)) <= 2.U)\n",0);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0x4e20U <= (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ReqBuf Leak\n    at RequestBuffer.scala:253 assert(t < 20000.U, \"ReqBuf Leak\")\n",0);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0x4e20U <= (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ReqBuf Leak\n    at RequestBuffer.scala:253 assert(t < 20000.U, \"ReqBuf Leak\")\n",0);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0x4e20U <= (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ReqBuf Leak\n    at RequestBuffer.scala:253 assert(t < 20000.U, \"ReqBuf Leak\")\n",0);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0x4e20U <= (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ReqBuf Leak\n    at RequestBuffer.scala:253 assert(t < 20000.U, \"ReqBuf Leak\")\n",0);
    }
    if (vlSelfRef.__PVT__issueArb__DOT___pendingMask_T_2) {
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_metaWen__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_accessed__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_alias__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_clients__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_way__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_dirty__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_useProbeData__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_mshrTask__v0 = 1U;
        __VdlySet__chosenQ__DOT__ram_bits_task_aliasTask__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_tagWen__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_dirty__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_state__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_bufIdx__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_needProbeAckData__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_dsWen__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_replTask__v0 = 1U;
        __VdlySet__chosenQ__DOT__ram_bits_task_mshrId__v0 = 1U;
        __VdlySet__chosenQ__DOT__ram_bits_task_reqSource__v0 = 1U;
        __VdlyVal__chosenQ__DOT__ram_id__v0 = (((IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & ((IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH) 
                                                             >> 2U)))) 
                                                << 1U) 
                                               | (IData)(
                                                         (0U 
                                                          != 
                                                          (0xaU 
                                                           & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH)))));
        __VdlySet__chosenQ__DOT__ram_id__v0 = 1U;
        __VdlyVal__chosenQ__DOT__ram_bits_task_size__v0 
            = (((IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH) 
                & (IData)(vlSelfRef.__PVT__buffer_0_task_size)) 
               | ((((IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH) 
                    >> 1U) & (IData)(vlSelfRef.__PVT__buffer_1_task_size)) 
                  | ((((IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH) 
                       >> 2U) & (IData)(vlSelfRef.__PVT__buffer_2_task_size)) 
                     | (((IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH) 
                         >> 3U) & (IData)(vlSelfRef.__PVT__buffer_3_task_size)))));
        __VdlySet__chosenQ__DOT__ram_bits_task_size__v0 = 1U;
        vlSelfRef.__VdlyVal__chosenQ__DOT__ram_bits_task_off__v0 
            = (((IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH) 
                & (IData)(vlSelfRef.__PVT__buffer_0_task_off)) 
               | ((((IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH) 
                    >> 1U) & (IData)(vlSelfRef.__PVT__buffer_1_task_off)) 
                  | ((((IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH) 
                       >> 2U) & (IData)(vlSelfRef.__PVT__buffer_2_task_off)) 
                     | (((IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH) 
                         >> 3U) & (IData)(vlSelfRef.__PVT__buffer_3_task_off)))));
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_off__v0 = 1U;
        vlSelfRef.__VdlyVal__chosenQ__DOT__ram_bits_task_alias__v0 
            = ((((1U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                  ? (IData)(vlSelfRef.__PVT__buffer_0_task_alias)
                  : 0U) | ((2U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                            ? (IData)(vlSelfRef.__PVT__buffer_1_task_alias)
                            : 0U)) | (((4U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                                        ? (IData)(vlSelfRef.__PVT__buffer_2_task_alias)
                                        : 0U) | ((8U 
                                                  & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                                                  ? (IData)(vlSelfRef.__PVT__buffer_3_task_alias)
                                                  : 0U)));
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_alias__v0 = 1U;
        vlSelfRef.__VdlyVal__chosenQ__DOT__ram_bits_task_param__v0 
            = ((((1U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                  ? (IData)(vlSelfRef.__PVT__buffer_0_task_param)
                  : 0U) | ((2U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                            ? (IData)(vlSelfRef.__PVT__buffer_1_task_param)
                            : 0U)) | (((4U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                                        ? (IData)(vlSelfRef.__PVT__buffer_2_task_param)
                                        : 0U) | ((8U 
                                                  & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                                                  ? (IData)(vlSelfRef.__PVT__buffer_3_task_param)
                                                  : 0U)));
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_param__v0 = 1U;
        vlSelfRef.__VdlyVal__chosenQ__DOT__ram_bits_task_sourceId__v0 
            = ((((1U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                  ? (IData)(vlSelfRef.__PVT__buffer_0_task_sourceId)
                  : 0U) | ((2U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                            ? (IData)(vlSelfRef.__PVT__buffer_1_task_sourceId)
                            : 0U)) | (((4U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                                        ? (IData)(vlSelfRef.__PVT__buffer_2_task_sourceId)
                                        : 0U) | ((8U 
                                                  & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                                                  ? (IData)(vlSelfRef.__PVT__buffer_3_task_sourceId)
                                                  : 0U)));
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_sourceId__v0 = 1U;
        __VdlyVal__chosenQ__DOT__ram_bits_task_channel__v0 
            = ((((1U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                  ? (IData)(vlSelfRef.__PVT__buffer_0_task_channel)
                  : 0U) | ((2U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                            ? (IData)(vlSelfRef.__PVT__buffer_1_task_channel)
                            : 0U)) | (((4U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                                        ? (IData)(vlSelfRef.__PVT__buffer_2_task_channel)
                                        : 0U) | ((8U 
                                                  & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                                                  ? (IData)(vlSelfRef.__PVT__buffer_3_task_channel)
                                                  : 0U)));
        __VdlySet__chosenQ__DOT__ram_bits_task_channel__v0 = 1U;
        __VdlyVal__chosenQ__DOT__ram_bits_task_opcode__v0 
            = ((((1U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                  ? (IData)(vlSelfRef.__PVT__buffer_0_task_opcode)
                  : 0U) | ((2U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                            ? (IData)(vlSelfRef.__PVT__buffer_1_task_opcode)
                            : 0U)) | (((4U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                                        ? (IData)(vlSelfRef.__PVT__buffer_2_task_opcode)
                                        : 0U) | ((8U 
                                                  & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                                                  ? (IData)(vlSelfRef.__PVT__buffer_3_task_opcode)
                                                  : 0U)));
        __VdlySet__chosenQ__DOT__ram_bits_task_opcode__v0 = 1U;
        __VdlyVal__chosenQ__DOT__ram_bits_task_tag__v0 
            = ((((1U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                  ? (IData)(vlSelfRef.__PVT__buffer_0_task_tag)
                  : 0U) | ((2U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                            ? (IData)(vlSelfRef.__PVT__buffer_1_task_tag)
                            : 0U)) | (((4U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                                        ? (IData)(vlSelfRef.__PVT__buffer_2_task_tag)
                                        : 0U) | ((8U 
                                                  & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                                                  ? (IData)(vlSelfRef.__PVT__buffer_3_task_tag)
                                                  : 0U)));
        __VdlySet__chosenQ__DOT__ram_bits_task_tag__v0 = 1U;
        __VdlyVal__chosenQ__DOT__ram_bits_task_set__v0 
            = ((((1U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                  ? (IData)(vlSelfRef.__PVT__buffer_0_task_set)
                  : 0U) | ((2U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                            ? (IData)(vlSelfRef.__PVT__buffer_1_task_set)
                            : 0U)) | (((4U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                                        ? (IData)(vlSelfRef.__PVT__buffer_2_task_set)
                                        : 0U) | ((8U 
                                                  & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                                                  ? (IData)(vlSelfRef.__PVT__buffer_3_task_set)
                                                  : 0U)));
        __VdlySet__chosenQ__DOT__ram_bits_task_set__v0 = 1U;
    }
    vlSelfRef.__PVT__io_hasLatePF_REG_tag = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag;
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__issueArb__DOT__rrGrantMask = 0U;
        vlSelfRef.__PVT__issueArb__DOT__pendingMask = 0U;
        vlSelfRef.__PVT__chosenQ__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__buffer_3_rdy = 0U;
        vlSelfRef.__PVT__bufferTimer_3 = 0U;
        vlSelfRef.__PVT__buffer_3_waitMS = 0U;
        vlSelfRef.__PVT__buffer_3_waitMP = 0U;
        vlSelfRef.__PVT__buffer_0_rdy = 0U;
        vlSelfRef.__PVT__bufferTimer_0 = 0U;
        vlSelfRef.__PVT__buffer_0_waitMS = 0U;
        vlSelfRef.__PVT__buffer_0_waitMP = 0U;
        vlSelfRef.__PVT__buffer_1_rdy = 0U;
        vlSelfRef.__PVT__bufferTimer_1 = 0U;
        vlSelfRef.__PVT__buffer_1_waitMS = 0U;
        vlSelfRef.__PVT__buffer_1_waitMP = 0U;
        vlSelfRef.__PVT__buffer_2_rdy = 0U;
        vlSelfRef.__PVT__bufferTimer_2 = 0U;
        vlSelfRef.__PVT__buffer_2_waitMS = 0U;
        vlSelfRef.__PVT__buffer_2_waitMP = 0U;
        vlSelfRef.__PVT__buffer_0_task_size = 0U;
        vlSelfRef.__PVT__buffer_1_task_size = 0U;
        vlSelfRef.__PVT__buffer_2_task_size = 0U;
        vlSelfRef.__PVT__buffer_3_task_size = 0U;
        vlSelfRef.__PVT__buffer_0_task_off = 0U;
        vlSelfRef.__PVT__buffer_1_task_off = 0U;
        vlSelfRef.__PVT__buffer_2_task_off = 0U;
        vlSelfRef.__PVT__buffer_3_task_off = 0U;
        vlSelfRef.__PVT__buffer_0_task_alias = 0U;
        vlSelfRef.__PVT__buffer_1_task_alias = 0U;
        vlSelfRef.__PVT__buffer_2_task_alias = 0U;
        vlSelfRef.__PVT__buffer_3_task_alias = 0U;
        vlSelfRef.__PVT__buffer_0_task_param = 0U;
        vlSelfRef.__PVT__buffer_1_task_param = 0U;
        vlSelfRef.__PVT__buffer_2_task_param = 0U;
        vlSelfRef.__PVT__buffer_3_task_param = 0U;
        vlSelfRef.__PVT__buffer_0_task_sourceId = 0U;
        vlSelfRef.__PVT__buffer_1_task_sourceId = 0U;
        vlSelfRef.__PVT__buffer_2_task_sourceId = 0U;
        vlSelfRef.__PVT__buffer_3_task_sourceId = 0U;
        vlSelfRef.__PVT__buffer_0_task_channel = 0U;
        vlSelfRef.__PVT__buffer_1_task_channel = 0U;
        vlSelfRef.__PVT__buffer_2_task_channel = 0U;
        vlSelfRef.__PVT__buffer_3_task_channel = 0U;
        vlSelfRef.__PVT__buffer_0_task_opcode = 0U;
        vlSelfRef.__PVT__buffer_1_task_opcode = 0U;
        vlSelfRef.__PVT__buffer_2_task_opcode = 0U;
        vlSelfRef.__PVT__buffer_3_task_opcode = 0U;
        vlSelfRef.__PVT__buffer_0_task_tag = 0U;
        vlSelfRef.__PVT__buffer_1_task_tag = 0U;
        vlSelfRef.__PVT__buffer_2_task_tag = 0U;
        vlSelfRef.__PVT__buffer_3_task_tag = 0U;
        vlSelfRef.__PVT__buffer_0_task_set = 0U;
        vlSelfRef.__PVT__buffer_1_task_set = 0U;
        vlSelfRef.__PVT__buffer_2_task_set = 0U;
        vlSelfRef.__PVT__buffer_3_task_set = 0U;
    } else {
        if (vlSelfRef.__PVT__issueArb__DOT___pendingMask_T_2) {
            vlSelfRef.__PVT__issueArb__DOT__rrGrantMask 
                = (((((IData)((0U != (7U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH)))) 
                      << 1U) | (0U != (3U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH)))) 
                    << 2U) | (2U & ((IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH) 
                                    << 1U)));
            vlSelfRef.__PVT__issueArb__DOT__pendingMask 
                = ((~ (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH)) 
                   & (IData)(vlSelfRef.__PVT__issueArb__DOT__valids));
        }
        if (((IData)(vlSelfRef.__PVT__issueArb__DOT___pendingMask_T_2) 
             != (IData)(vlSelfRef.__PVT__chosenQ__DOT__do_deq))) {
            vlSelfRef.__PVT__chosenQ__DOT__maybe_full 
                = vlSelfRef.__PVT__issueArb__DOT___pendingMask_T_2;
        }
        if (vlSelfRef.__PVT__buffer_3_valid) {
            vlSelfRef.__PVT__buffer_3_rdy = (((~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSelfRef.__PVT__waitMSUpdate_3)))) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.__PVT__buffer_3_waitMP))) 
                                             & (~ (IData)(vlSelfRef.__PVT__s1_Block_3)));
            vlSelfRef.__PVT__buffer_3_waitMS = ((IData)(
                                                        (1U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelfRef.__PVT__buffer_3_waitMP))))
                                                 ? (IData)(vlSelfRef.__PVT___waitMSUpdate_T_587)
                                                 : (IData)(vlSelfRef.__PVT___waitMSUpdate_T_442));
            vlSelfRef.__PVT__buffer_3_waitMP = ((IData)(vlSelfRef.__PVT__s1_Block_3)
                                                 ? (IData)(vlSelfRef.__PVT___buffer_3_waitMP_T_1)
                                                 : (IData)(vlSelfRef.__PVT___buffer_3_waitMP_T));
        } else if (vlSelfRef.__PVT__alloc) {
            if ((3U == (IData)(vlSelfRef.__PVT__insertIdx))) {
                vlSelfRef.__PVT__buffer_3_rdy = (((~ (IData)(
                                                             (0U 
                                                              != (IData)(vlSelfRef.__PVT___canFlow_T_146)))) 
                                                  & (IData)(vlSelfRef.__PVT___canFlow_T_154)) 
                                                 & (~ (IData)(vlSelfRef.__PVT__s1Block)));
                vlSelfRef.__PVT__buffer_3_waitMS = vlSelfRef.__PVT___canFlow_T_146;
                vlSelfRef.__PVT__buffer_3_waitMP = vlSelfRef.__PVT___buffer_waitMP_T;
            }
        }
        if (vlSelfRef.__PVT__REG_7) {
            vlSelfRef.__PVT__bufferTimer_3 = 0U;
        } else if (vlSelfRef.__PVT__buffer_3_valid) {
            vlSelfRef.__PVT__bufferTimer_3 = vlSelfRef.__PVT___bufferTimer_3_T_1;
        }
        if (vlSelfRef.__PVT__buffer_0_valid) {
            vlSelfRef.__PVT__buffer_0_rdy = (((~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSelfRef.__PVT__waitMSUpdate)))) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.__PVT__buffer_0_waitMP))) 
                                             & (~ (IData)(vlSelfRef.__PVT__s1_Block)));
            vlSelfRef.__PVT__buffer_0_waitMS = ((IData)(
                                                        (1U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelfRef.__PVT__buffer_0_waitMP))))
                                                 ? (IData)(vlSelfRef.__PVT___waitMSUpdate_T_146)
                                                 : (IData)(vlSelfRef.__PVT___waitMSUpdate_T_1));
            vlSelfRef.__PVT__buffer_0_waitMP = ((IData)(vlSelfRef.__PVT__s1_Block)
                                                 ? (IData)(vlSelfRef.__PVT___buffer_0_waitMP_T_1)
                                                 : (IData)(vlSelfRef.__PVT___buffer_0_waitMP_T));
        } else if (vlSelfRef.__PVT__alloc) {
            if ((0U == (IData)(vlSelfRef.__PVT__insertIdx))) {
                vlSelfRef.__PVT__buffer_0_rdy = (((~ (IData)(
                                                             (0U 
                                                              != (IData)(vlSelfRef.__PVT___canFlow_T_146)))) 
                                                  & (IData)(vlSelfRef.__PVT___canFlow_T_154)) 
                                                 & (~ (IData)(vlSelfRef.__PVT__s1Block)));
                vlSelfRef.__PVT__buffer_0_waitMS = vlSelfRef.__PVT___canFlow_T_146;
                vlSelfRef.__PVT__buffer_0_waitMP = vlSelfRef.__PVT___buffer_waitMP_T;
            }
        }
        if (vlSelfRef.__PVT__REG_1) {
            vlSelfRef.__PVT__bufferTimer_0 = 0U;
        } else if (vlSelfRef.__PVT__buffer_0_valid) {
            vlSelfRef.__PVT__bufferTimer_0 = vlSelfRef.__PVT___bufferTimer_0_T_1;
        }
        if (vlSelfRef.__PVT__buffer_1_valid) {
            vlSelfRef.__PVT__buffer_1_rdy = (((~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSelfRef.__PVT__waitMSUpdate_1)))) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.__PVT__buffer_1_waitMP))) 
                                             & (~ (IData)(vlSelfRef.__PVT__s1_Block_1)));
            vlSelfRef.__PVT__buffer_1_waitMS = ((IData)(
                                                        (1U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelfRef.__PVT__buffer_1_waitMP))))
                                                 ? (IData)(vlSelfRef.__PVT___waitMSUpdate_T_293)
                                                 : (IData)(vlSelfRef.__PVT___waitMSUpdate_T_148));
            vlSelfRef.__PVT__buffer_1_waitMP = ((IData)(vlSelfRef.__PVT__s1_Block_1)
                                                 ? (IData)(vlSelfRef.__PVT___buffer_1_waitMP_T_1)
                                                 : (IData)(vlSelfRef.__PVT___buffer_1_waitMP_T));
        } else if (vlSelfRef.__PVT__alloc) {
            if ((1U == (IData)(vlSelfRef.__PVT__insertIdx))) {
                vlSelfRef.__PVT__buffer_1_rdy = (((~ (IData)(
                                                             (0U 
                                                              != (IData)(vlSelfRef.__PVT___canFlow_T_146)))) 
                                                  & (IData)(vlSelfRef.__PVT___canFlow_T_154)) 
                                                 & (~ (IData)(vlSelfRef.__PVT__s1Block)));
                vlSelfRef.__PVT__buffer_1_waitMS = vlSelfRef.__PVT___canFlow_T_146;
                vlSelfRef.__PVT__buffer_1_waitMP = vlSelfRef.__PVT___buffer_waitMP_T;
            }
        }
        if (vlSelfRef.__PVT__REG_3) {
            vlSelfRef.__PVT__bufferTimer_1 = 0U;
        } else if (vlSelfRef.__PVT__buffer_1_valid) {
            vlSelfRef.__PVT__bufferTimer_1 = vlSelfRef.__PVT___bufferTimer_1_T_1;
        }
        if (vlSelfRef.__PVT__buffer_2_valid) {
            vlSelfRef.__PVT__buffer_2_rdy = (((~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSelfRef.__PVT__waitMSUpdate_2)))) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.__PVT__buffer_2_waitMP))) 
                                             & (~ (IData)(vlSelfRef.__PVT__s1_Block_2)));
            vlSelfRef.__PVT__buffer_2_waitMS = ((IData)(
                                                        (1U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelfRef.__PVT__buffer_2_waitMP))))
                                                 ? (IData)(vlSelfRef.__PVT___waitMSUpdate_T_440)
                                                 : (IData)(vlSelfRef.__PVT___waitMSUpdate_T_295));
            vlSelfRef.__PVT__buffer_2_waitMP = ((IData)(vlSelfRef.__PVT__s1_Block_2)
                                                 ? (IData)(vlSelfRef.__PVT___buffer_2_waitMP_T_1)
                                                 : (IData)(vlSelfRef.__PVT___buffer_2_waitMP_T));
        } else if (vlSelfRef.__PVT__alloc) {
            if ((2U == (IData)(vlSelfRef.__PVT__insertIdx))) {
                vlSelfRef.__PVT__buffer_2_rdy = (((~ (IData)(
                                                             (0U 
                                                              != (IData)(vlSelfRef.__PVT___canFlow_T_146)))) 
                                                  & (IData)(vlSelfRef.__PVT___canFlow_T_154)) 
                                                 & (~ (IData)(vlSelfRef.__PVT__s1Block)));
                vlSelfRef.__PVT__buffer_2_waitMS = vlSelfRef.__PVT___canFlow_T_146;
                vlSelfRef.__PVT__buffer_2_waitMP = vlSelfRef.__PVT___buffer_waitMP_T;
            }
        }
        if (vlSelfRef.__PVT__REG_5) {
            vlSelfRef.__PVT__bufferTimer_2 = 0U;
        } else if (vlSelfRef.__PVT__buffer_2_valid) {
            vlSelfRef.__PVT__bufferTimer_2 = vlSelfRef.__PVT___bufferTimer_2_T_1;
        }
        if (vlSelfRef.__PVT__alloc) {
            if ((0U == (IData)(vlSelfRef.__PVT__insertIdx))) {
                vlSelfRef.__PVT__buffer_0_task_size 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_size;
                vlSelfRef.__PVT__buffer_0_task_off 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_off;
                vlSelfRef.__PVT__buffer_0_task_alias 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_alias;
                vlSelfRef.__PVT__buffer_0_task_param 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_param;
                vlSelfRef.__PVT__buffer_0_task_sourceId 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_sourceId;
                vlSelfRef.__PVT__buffer_0_task_channel = 1U;
                vlSelfRef.__PVT__buffer_0_task_opcode 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_opcode;
                vlSelfRef.__PVT__buffer_0_task_tag 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag;
                vlSelfRef.__PVT__buffer_0_task_set 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_set;
            }
            if ((1U == (IData)(vlSelfRef.__PVT__insertIdx))) {
                vlSelfRef.__PVT__buffer_1_task_size 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_size;
                vlSelfRef.__PVT__buffer_1_task_off 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_off;
                vlSelfRef.__PVT__buffer_1_task_alias 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_alias;
                vlSelfRef.__PVT__buffer_1_task_param 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_param;
                vlSelfRef.__PVT__buffer_1_task_sourceId 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_sourceId;
                vlSelfRef.__PVT__buffer_1_task_channel = 1U;
                vlSelfRef.__PVT__buffer_1_task_opcode 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_opcode;
                vlSelfRef.__PVT__buffer_1_task_tag 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag;
                vlSelfRef.__PVT__buffer_1_task_set 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_set;
            }
            if ((2U == (IData)(vlSelfRef.__PVT__insertIdx))) {
                vlSelfRef.__PVT__buffer_2_task_size 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_size;
                vlSelfRef.__PVT__buffer_2_task_off 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_off;
                vlSelfRef.__PVT__buffer_2_task_alias 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_alias;
                vlSelfRef.__PVT__buffer_2_task_param 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_param;
                vlSelfRef.__PVT__buffer_2_task_sourceId 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_sourceId;
                vlSelfRef.__PVT__buffer_2_task_channel = 1U;
                vlSelfRef.__PVT__buffer_2_task_opcode 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_opcode;
                vlSelfRef.__PVT__buffer_2_task_tag 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag;
                vlSelfRef.__PVT__buffer_2_task_set 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_set;
            }
            if ((3U == (IData)(vlSelfRef.__PVT__insertIdx))) {
                vlSelfRef.__PVT__buffer_3_task_size 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_size;
                vlSelfRef.__PVT__buffer_3_task_off 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_off;
                vlSelfRef.__PVT__buffer_3_task_alias 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_alias;
                vlSelfRef.__PVT__buffer_3_task_param 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_param;
                vlSelfRef.__PVT__buffer_3_task_sourceId 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_sourceId;
                vlSelfRef.__PVT__buffer_3_task_channel = 1U;
                vlSelfRef.__PVT__buffer_3_task_opcode 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_opcode;
                vlSelfRef.__PVT__buffer_3_task_tag 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag;
                vlSelfRef.__PVT__buffer_3_task_set 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_set;
            }
        }
    }
    vlSelfRef.__PVT__io_hasLatePF_REG_set = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_set;
    if (__VdlySet__chosenQ__DOT__ram_bits_task_aliasTask__v0) {
        __PVT__chosenQ__DOT__ram_bits_task_aliasTask[0U] = 0U;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_mshrId__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_mshrId[0U] = 0U;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_reqSource__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_reqSource[0U] = 0U;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_size__v0) {
        __PVT__chosenQ__DOT__ram_bits_task_size[0U] 
            = __VdlyVal__chosenQ__DOT__ram_bits_task_size__v0;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_channel__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_channel[0U] 
            = __VdlyVal__chosenQ__DOT__ram_bits_task_channel__v0;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_opcode__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_opcode[0U] 
            = __VdlyVal__chosenQ__DOT__ram_bits_task_opcode__v0;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_tag__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_tag[0U] 
            = __VdlyVal__chosenQ__DOT__ram_bits_task_tag__v0;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_set__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_set[0U] 
            = __VdlyVal__chosenQ__DOT__ram_bits_task_set__v0;
    }
    vlSelfRef.__PVT__REG_7 = ((IData)(vlSelfRef.__PVT__REG_6) 
                              & (~ (IData)(vlSelfRef.__PVT__buffer_3_valid)));
    vlSelfRef.__PVT__REG_6 = vlSelfRef.__PVT__buffer_3_valid;
    __Vdly__REG = vlSelfRef.__PVT__buffer_0_valid;
    __Vdly__REG_2 = vlSelfRef.__PVT__buffer_1_valid;
    __Vdly__REG_4 = vlSelfRef.__PVT__buffer_2_valid;
    __PVT__issueArb__DOT___rrSelOH_T = ((IData)(vlSelfRef.__PVT__issueArb__DOT__pendingMask) 
                                        & (IData)(vlSelfRef.__PVT__issueArb__DOT__rrGrantMask));
    vlSelfRef.__PVT___bufferTimer_3_T_1 = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__bufferTimer_3)));
    vlSelfRef.__PVT___buffer_3_waitMP_T_1 = (4U | (IData)(vlSelfRef.__PVT__buffer_3_waitMP));
    vlSelfRef.__PVT___buffer_3_waitMP_T = (0xfU & VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.__PVT__buffer_3_waitMP), 1U));
    vlSelfRef.__PVT__buffer_3_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && (((IData)(vlSelfRef.__PVT__chosenQ__DOT__do_deq) 
                                            & (IData)(vlSelfRef.__PVT___io_out_valid_T))
                                            ? ((3U 
                                                != 
                                                vlSelfRef.__PVT__chosenQ__DOT__ram_id
                                                [0U]) 
                                               && (IData)(vlSelfRef.__PVT___GEN_131))
                                            : (IData)(vlSelfRef.__PVT___GEN_131)));
    vlSelfRef.__PVT___bufferTimer_0_T_1 = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__bufferTimer_0)));
    vlSelfRef.__PVT___buffer_0_waitMP_T_1 = (4U | (IData)(vlSelfRef.__PVT__buffer_0_waitMP));
    vlSelfRef.__PVT___buffer_0_waitMP_T = (0xfU & VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.__PVT__buffer_0_waitMP), 1U));
    vlSelfRef.__PVT__REG_1 = ((IData)(vlSelfRef.__PVT__REG) 
                              & (~ (IData)(vlSelfRef.__PVT__buffer_0_valid)));
    vlSelfRef.__PVT___bufferTimer_1_T_1 = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__bufferTimer_1)));
    vlSelfRef.__PVT___buffer_1_waitMP_T_1 = (4U | (IData)(vlSelfRef.__PVT__buffer_1_waitMP));
    vlSelfRef.__PVT___buffer_1_waitMP_T = (0xfU & VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.__PVT__buffer_1_waitMP), 1U));
    vlSelfRef.__PVT__REG_3 = ((IData)(vlSelfRef.__PVT__REG_2) 
                              & (~ (IData)(vlSelfRef.__PVT__buffer_1_valid)));
    vlSelfRef.__PVT___bufferTimer_2_T_1 = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__bufferTimer_2)));
    vlSelfRef.__PVT___buffer_2_waitMP_T_1 = (4U | (IData)(vlSelfRef.__PVT__buffer_2_waitMP));
    vlSelfRef.__PVT___buffer_2_waitMP_T = (0xfU & VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.__PVT__buffer_2_waitMP), 1U));
    vlSelfRef.__PVT__REG_5 = ((IData)(vlSelfRef.__PVT__REG_4) 
                              & (~ (IData)(vlSelfRef.__PVT__buffer_2_valid)));
    vlSelfRef.__PVT__issueArb__DOT__rrSelOH = ((((IData)(
                                                         (((IData)(__PVT__issueArb__DOT___rrSelOH_T) 
                                                           >> 3U) 
                                                          & (~ (IData)(
                                                                       (0U 
                                                                        != 
                                                                        (7U 
                                                                         & (IData)(__PVT__issueArb__DOT___rrSelOH_T))))))) 
                                                 << 3U) 
                                                | (4U 
                                                   & (((~ 
                                                        ((IData)(__PVT__issueArb__DOT___rrSelOH_T) 
                                                         | ((IData)(__PVT__issueArb__DOT___rrSelOH_T) 
                                                            >> 1U))) 
                                                       << 2U) 
                                                      & (IData)(__PVT__issueArb__DOT___rrSelOH_T)))) 
                                               | (((IData)(
                                                           (2U 
                                                            == 
                                                            (3U 
                                                             & (IData)(__PVT__issueArb__DOT___rrSelOH_T)))) 
                                                   << 1U) 
                                                  | (1U 
                                                     & (IData)(__PVT__issueArb__DOT___rrSelOH_T))));
    vlSelfRef.__PVT__REG = __Vdly__REG;
    vlSelfRef.__PVT__REG_2 = __Vdly__REG_2;
    vlSelfRef.__PVT__REG_4 = __Vdly__REG_4;
    vlSelfRef.__PVT__buffer_0_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && (((IData)(vlSelfRef.__PVT__chosenQ__DOT__do_deq) 
                                            & (IData)(vlSelfRef.__PVT___io_out_valid_T))
                                            ? ((0U 
                                                != 
                                                vlSelfRef.__PVT__chosenQ__DOT__ram_id
                                                [0U]) 
                                               && (IData)(vlSelfRef.__PVT___GEN_128))
                                            : (IData)(vlSelfRef.__PVT___GEN_128)));
    vlSelfRef.__PVT__buffer_1_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && (((IData)(vlSelfRef.__PVT__chosenQ__DOT__do_deq) 
                                            & (IData)(vlSelfRef.__PVT___io_out_valid_T))
                                            ? ((1U 
                                                != 
                                                vlSelfRef.__PVT__chosenQ__DOT__ram_id
                                                [0U]) 
                                               && (IData)(vlSelfRef.__PVT___GEN_129))
                                            : (IData)(vlSelfRef.__PVT___GEN_129)));
    vlSelfRef.__PVT__buffer_2_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && (((IData)(vlSelfRef.__PVT__chosenQ__DOT__do_deq) 
                                            & (IData)(vlSelfRef.__PVT___io_out_valid_T))
                                            ? ((2U 
                                                != 
                                                vlSelfRef.__PVT__chosenQ__DOT__ram_id
                                                [0U]) 
                                               && (IData)(vlSelfRef.__PVT___GEN_130))
                                            : (IData)(vlSelfRef.__PVT___GEN_130)));
    if (__VdlySet__chosenQ__DOT__ram_id__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_id[0U] = __VdlyVal__chosenQ__DOT__ram_id__v0;
    }
    vlSelfRef.__PVT___io_out_valid_T = ((3U == vlSelfRef.__PVT__chosenQ__DOT__ram_id
                                         [0U]) ? (IData)(vlSelfRef.__PVT__buffer_3_rdy)
                                         : ((2U == 
                                             vlSelfRef.__PVT__chosenQ__DOT__ram_id
                                             [0U]) ? (IData)(vlSelfRef.__PVT__buffer_2_rdy)
                                             : ((1U 
                                                 == 
                                                 vlSelfRef.__PVT__chosenQ__DOT__ram_id
                                                 [0U])
                                                 ? (IData)(vlSelfRef.__PVT__buffer_1_rdy)
                                                 : (IData)(vlSelfRef.__PVT__buffer_0_rdy))));
    vlSelfRef.__PVT__insertIdx = ((IData)(vlSelfRef.__PVT__buffer_0_valid)
                                   ? ((IData)(vlSelfRef.__PVT__buffer_1_valid)
                                       ? ((IData)(vlSelfRef.__PVT__buffer_2_valid)
                                           ? 3U : 2U)
                                       : 1U) : 0U);
    vlSelfRef.__PVT___canFlow_T = (1U & (~ ((IData)(vlSelfRef.__PVT__buffer_0_valid) 
                                            & ((IData)(vlSelfRef.__PVT__buffer_1_valid) 
                                               & ((IData)(vlSelfRef.__PVT__buffer_2_valid) 
                                                  & (IData)(vlSelfRef.__PVT__buffer_3_valid))))));
}

VL_INLINE_OPT void VTestTop_L2L3L2_RequestBuffer___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__a_reqBuf__1(VTestTop_L2L3L2_RequestBuffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_RequestBuffer___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__a_reqBuf__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__issueArb_io_in_0_valid;
    __PVT__issueArb_io_in_0_valid = 0;
    CData/*0:0*/ __PVT__issueArb_io_in_1_valid;
    __PVT__issueArb_io_in_1_valid = 0;
    CData/*0:0*/ __PVT__issueArb_io_in_2_valid;
    __PVT__issueArb_io_in_2_valid = 0;
    CData/*0:0*/ __PVT__issueArb_io_in_3_valid;
    __PVT__issueArb_io_in_3_valid = 0;
    SData/*15:0*/ __PVT___waitMSUpdate_T;
    __PVT___waitMSUpdate_T = 0;
    // Body
    __PVT___waitMSUpdate_T = (0xffffU & (~ (((((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__io_msInfo_bits_willFree) 
                                                 & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_valid)) 
                                                << 0xfU) 
                                               | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__io_msInfo_bits_willFree) 
                                                   & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_valid)) 
                                                  << 0xeU)) 
                                              | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__io_msInfo_bits_willFree) 
                                                   & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_valid)) 
                                                  << 0xdU) 
                                                 | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__io_msInfo_bits_willFree) 
                                                     & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_valid)) 
                                                    << 0xcU))) 
                                             | (((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__io_msInfo_bits_willFree) 
                                                   & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_valid)) 
                                                  << 0xbU) 
                                                 | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__io_msInfo_bits_willFree) 
                                                     & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_valid)) 
                                                    << 0xaU)) 
                                                | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__io_msInfo_bits_willFree) 
                                                     & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_valid)) 
                                                    << 9U) 
                                                   | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__io_msInfo_bits_willFree) 
                                                       & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_valid)) 
                                                      << 8U)))) 
                                            | ((((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__io_msInfo_bits_willFree) 
                                                   & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_valid)) 
                                                  << 7U) 
                                                 | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__io_msInfo_bits_willFree) 
                                                     & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_valid)) 
                                                    << 6U)) 
                                                | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__io_msInfo_bits_willFree) 
                                                     & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_valid)) 
                                                    << 5U) 
                                                   | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__io_msInfo_bits_willFree) 
                                                       & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_valid)) 
                                                      << 4U))) 
                                               | (((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_msInfo_bits_willFree) 
                                                     & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid)) 
                                                    << 3U) 
                                                   | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_msInfo_bits_willFree) 
                                                       & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid)) 
                                                      << 2U)) 
                                                  | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_msInfo_bits_willFree) 
                                                       & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid)) 
                                                      << 1U) 
                                                     | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_msInfo_bits_willFree) 
                                                        & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid))))))));
    vlSelfRef.__PVT___waitMSUpdate_T_146 = (((((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_valid) 
                                                 & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__io_msInfo_bits_willFree)) 
                                                    & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_set)) 
                                                       & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                           == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_tag)) 
                                                          | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                              == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__dirResult_tag)) 
                                                             & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__state_w_releaseack))))))) 
                                                << 0xfU) 
                                               | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_valid) 
                                                   & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__io_msInfo_bits_willFree)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_set)) 
                                                         & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_tag)) 
                                                            | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__dirResult_tag)) 
                                                               & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__state_w_releaseack))))))) 
                                                  << 0xeU)) 
                                              | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_valid) 
                                                   & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__io_msInfo_bits_willFree)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_set)) 
                                                         & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_tag)) 
                                                            | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__dirResult_tag)) 
                                                               & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__state_w_releaseack))))))) 
                                                  << 0xdU) 
                                                 | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__state_w_releaseack))))))) 
                                                    << 0xcU))) 
                                             | (((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_valid) 
                                                   & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__io_msInfo_bits_willFree)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_set)) 
                                                         & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_tag)) 
                                                            | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__dirResult_tag)) 
                                                               & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__state_w_releaseack))))))) 
                                                  << 0xbU) 
                                                 | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__state_w_releaseack))))))) 
                                                    << 0xaU)) 
                                                | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__state_w_releaseack))))))) 
                                                    << 9U) 
                                                   | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_valid) 
                                                       & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__io_msInfo_bits_willFree)) 
                                                          & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                              == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_set)) 
                                                             & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                                 == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_tag)) 
                                                                | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                                    == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__dirResult_tag)) 
                                                                   & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__state_w_releaseack))))))) 
                                                      << 8U)))) 
                                            | ((((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_valid) 
                                                   & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__io_msInfo_bits_willFree)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_set)) 
                                                         & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_tag)) 
                                                            | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__dirResult_tag)) 
                                                               & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__state_w_releaseack))))))) 
                                                  << 7U) 
                                                 | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__state_w_releaseack))))))) 
                                                    << 6U)) 
                                                | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__state_w_releaseack))))))) 
                                                    << 5U) 
                                                   | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_valid) 
                                                       & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__io_msInfo_bits_willFree)) 
                                                          & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                              == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_set)) 
                                                             & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                                 == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_tag)) 
                                                                | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                                    == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__dirResult_tag)) 
                                                                   & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__state_w_releaseack))))))) 
                                                      << 4U))) 
                                               | (((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__state_w_releaseack))))))) 
                                                    << 3U) 
                                                   | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid) 
                                                       & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_msInfo_bits_willFree)) 
                                                          & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                              == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_set)) 
                                                             & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                                 == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_tag)) 
                                                                | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                                    == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_tag)) 
                                                                   & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__state_w_releaseack))))))) 
                                                      << 2U)) 
                                                  | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid) 
                                                       & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_msInfo_bits_willFree)) 
                                                          & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                              == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_set)) 
                                                             & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                                 == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_tag)) 
                                                                | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                                    == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_tag)) 
                                                                   & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__state_w_releaseack))))))) 
                                                      << 1U) 
                                                     | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                                                        & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_msInfo_bits_willFree)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set)) 
                                                              & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_tag)) 
                                                                 | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_tag)) 
                                                                    & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__state_w_releaseack)))))))))));
    vlSelfRef.__PVT___waitMSUpdate_T_293 = (((((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_valid) 
                                                 & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__io_msInfo_bits_willFree)) 
                                                    & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_set)) 
                                                       & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                           == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_tag)) 
                                                          | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                              == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__dirResult_tag)) 
                                                             & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__state_w_releaseack))))))) 
                                                << 0xfU) 
                                               | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_valid) 
                                                   & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__io_msInfo_bits_willFree)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_set)) 
                                                         & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_tag)) 
                                                            | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__dirResult_tag)) 
                                                               & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__state_w_releaseack))))))) 
                                                  << 0xeU)) 
                                              | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_valid) 
                                                   & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__io_msInfo_bits_willFree)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_set)) 
                                                         & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_tag)) 
                                                            | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__dirResult_tag)) 
                                                               & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__state_w_releaseack))))))) 
                                                  << 0xdU) 
                                                 | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__state_w_releaseack))))))) 
                                                    << 0xcU))) 
                                             | (((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_valid) 
                                                   & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__io_msInfo_bits_willFree)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_set)) 
                                                         & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_tag)) 
                                                            | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__dirResult_tag)) 
                                                               & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__state_w_releaseack))))))) 
                                                  << 0xbU) 
                                                 | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__state_w_releaseack))))))) 
                                                    << 0xaU)) 
                                                | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__state_w_releaseack))))))) 
                                                    << 9U) 
                                                   | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_valid) 
                                                       & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__io_msInfo_bits_willFree)) 
                                                          & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                              == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_set)) 
                                                             & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                                 == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_tag)) 
                                                                | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                                    == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__dirResult_tag)) 
                                                                   & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__state_w_releaseack))))))) 
                                                      << 8U)))) 
                                            | ((((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_valid) 
                                                   & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__io_msInfo_bits_willFree)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_set)) 
                                                         & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_tag)) 
                                                            | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__dirResult_tag)) 
                                                               & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__state_w_releaseack))))))) 
                                                  << 7U) 
                                                 | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__state_w_releaseack))))))) 
                                                    << 6U)) 
                                                | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__state_w_releaseack))))))) 
                                                    << 5U) 
                                                   | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_valid) 
                                                       & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__io_msInfo_bits_willFree)) 
                                                          & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                              == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_set)) 
                                                             & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                                 == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_tag)) 
                                                                | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                                    == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__dirResult_tag)) 
                                                                   & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__state_w_releaseack))))))) 
                                                      << 4U))) 
                                               | (((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__state_w_releaseack))))))) 
                                                    << 3U) 
                                                   | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid) 
                                                       & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_msInfo_bits_willFree)) 
                                                          & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                              == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_set)) 
                                                             & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                                 == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_tag)) 
                                                                | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                                    == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_tag)) 
                                                                   & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__state_w_releaseack))))))) 
                                                      << 2U)) 
                                                  | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid) 
                                                       & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_msInfo_bits_willFree)) 
                                                          & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                              == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_set)) 
                                                             & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                                 == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_tag)) 
                                                                | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                                    == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_tag)) 
                                                                   & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__state_w_releaseack))))))) 
                                                      << 1U) 
                                                     | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                                                        & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_msInfo_bits_willFree)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set)) 
                                                              & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_tag)) 
                                                                 | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_tag)) 
                                                                    & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__state_w_releaseack)))))))))));
    vlSelfRef.__PVT___waitMSUpdate_T_440 = (((((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_valid) 
                                                 & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__io_msInfo_bits_willFree)) 
                                                    & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_set)) 
                                                       & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                           == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_tag)) 
                                                          | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                              == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__dirResult_tag)) 
                                                             & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__state_w_releaseack))))))) 
                                                << 0xfU) 
                                               | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_valid) 
                                                   & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__io_msInfo_bits_willFree)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_set)) 
                                                         & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_tag)) 
                                                            | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__dirResult_tag)) 
                                                               & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__state_w_releaseack))))))) 
                                                  << 0xeU)) 
                                              | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_valid) 
                                                   & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__io_msInfo_bits_willFree)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_set)) 
                                                         & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_tag)) 
                                                            | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__dirResult_tag)) 
                                                               & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__state_w_releaseack))))))) 
                                                  << 0xdU) 
                                                 | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__state_w_releaseack))))))) 
                                                    << 0xcU))) 
                                             | (((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_valid) 
                                                   & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__io_msInfo_bits_willFree)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_set)) 
                                                         & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_tag)) 
                                                            | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__dirResult_tag)) 
                                                               & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__state_w_releaseack))))))) 
                                                  << 0xbU) 
                                                 | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__state_w_releaseack))))))) 
                                                    << 0xaU)) 
                                                | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__state_w_releaseack))))))) 
                                                    << 9U) 
                                                   | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_valid) 
                                                       & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__io_msInfo_bits_willFree)) 
                                                          & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                              == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_set)) 
                                                             & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                                 == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_tag)) 
                                                                | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                                    == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__dirResult_tag)) 
                                                                   & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__state_w_releaseack))))))) 
                                                      << 8U)))) 
                                            | ((((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_valid) 
                                                   & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__io_msInfo_bits_willFree)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_set)) 
                                                         & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_tag)) 
                                                            | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__dirResult_tag)) 
                                                               & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__state_w_releaseack))))))) 
                                                  << 7U) 
                                                 | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__state_w_releaseack))))))) 
                                                    << 6U)) 
                                                | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__state_w_releaseack))))))) 
                                                    << 5U) 
                                                   | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_valid) 
                                                       & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__io_msInfo_bits_willFree)) 
                                                          & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                              == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_set)) 
                                                             & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                                 == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_tag)) 
                                                                | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                                    == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__dirResult_tag)) 
                                                                   & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__state_w_releaseack))))))) 
                                                      << 4U))) 
                                               | (((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__state_w_releaseack))))))) 
                                                    << 3U) 
                                                   | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid) 
                                                       & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_msInfo_bits_willFree)) 
                                                          & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                              == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_set)) 
                                                             & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                                 == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_tag)) 
                                                                | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                                    == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_tag)) 
                                                                   & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__state_w_releaseack))))))) 
                                                      << 2U)) 
                                                  | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid) 
                                                       & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_msInfo_bits_willFree)) 
                                                          & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                              == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_set)) 
                                                             & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                                 == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_tag)) 
                                                                | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                                    == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_tag)) 
                                                                   & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__state_w_releaseack))))))) 
                                                      << 1U) 
                                                     | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                                                        & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_msInfo_bits_willFree)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set)) 
                                                              & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_tag)) 
                                                                 | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_tag)) 
                                                                    & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__state_w_releaseack)))))))))));
    vlSelfRef.__PVT___waitMSUpdate_T_587 = (((((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_valid) 
                                                 & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__io_msInfo_bits_willFree)) 
                                                    & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_set)) 
                                                       & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                           == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_tag)) 
                                                          | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                              == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__dirResult_tag)) 
                                                             & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__state_w_releaseack))))))) 
                                                << 0xfU) 
                                               | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_valid) 
                                                   & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__io_msInfo_bits_willFree)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_set)) 
                                                         & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_tag)) 
                                                            | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__dirResult_tag)) 
                                                               & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__state_w_releaseack))))))) 
                                                  << 0xeU)) 
                                              | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_valid) 
                                                   & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__io_msInfo_bits_willFree)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_set)) 
                                                         & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_tag)) 
                                                            | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__dirResult_tag)) 
                                                               & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__state_w_releaseack))))))) 
                                                  << 0xdU) 
                                                 | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__state_w_releaseack))))))) 
                                                    << 0xcU))) 
                                             | (((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_valid) 
                                                   & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__io_msInfo_bits_willFree)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_set)) 
                                                         & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_tag)) 
                                                            | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__dirResult_tag)) 
                                                               & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__state_w_releaseack))))))) 
                                                  << 0xbU) 
                                                 | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__state_w_releaseack))))))) 
                                                    << 0xaU)) 
                                                | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__state_w_releaseack))))))) 
                                                    << 9U) 
                                                   | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_valid) 
                                                       & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__io_msInfo_bits_willFree)) 
                                                          & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                              == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_set)) 
                                                             & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                                 == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_tag)) 
                                                                | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                                    == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__dirResult_tag)) 
                                                                   & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__state_w_releaseack))))))) 
                                                      << 8U)))) 
                                            | ((((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_valid) 
                                                   & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__io_msInfo_bits_willFree)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_set)) 
                                                         & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_tag)) 
                                                            | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__dirResult_tag)) 
                                                               & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__state_w_releaseack))))))) 
                                                  << 7U) 
                                                 | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__state_w_releaseack))))))) 
                                                    << 6U)) 
                                                | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__state_w_releaseack))))))) 
                                                    << 5U) 
                                                   | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_valid) 
                                                       & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__io_msInfo_bits_willFree)) 
                                                          & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                              == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_set)) 
                                                             & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                                 == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_tag)) 
                                                                | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                                    == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__dirResult_tag)) 
                                                                   & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__state_w_releaseack))))))) 
                                                      << 4U))) 
                                               | (((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__state_w_releaseack))))))) 
                                                    << 3U) 
                                                   | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid) 
                                                       & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_msInfo_bits_willFree)) 
                                                          & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                              == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_set)) 
                                                             & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                                 == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_tag)) 
                                                                | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                                    == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_tag)) 
                                                                   & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__state_w_releaseack))))))) 
                                                      << 2U)) 
                                                  | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid) 
                                                       & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_msInfo_bits_willFree)) 
                                                          & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                              == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_set)) 
                                                             & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                                 == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_tag)) 
                                                                | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                                    == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_tag)) 
                                                                   & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__state_w_releaseack))))))) 
                                                      << 1U) 
                                                     | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                                                        & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_msInfo_bits_willFree)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set)) 
                                                              & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_tag)) 
                                                                 | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_tag)) 
                                                                    & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__state_w_releaseack)))))))))));
    vlSelfRef.__VdfgRegularize_ha1527a7f_2_0 = ((6U 
                                                 == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_opcode)) 
                                                | (7U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_opcode)));
    vlSelfRef.__PVT___canFlow_T_146 = (((((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_valid) 
                                            & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__io_msInfo_bits_willFree)) 
                                               & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                   == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_set)) 
                                                  & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                      == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_tag)) 
                                                     | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                         == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__dirResult_tag)) 
                                                        & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__state_w_releaseack))))))) 
                                           << 0xfU) 
                                          | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_valid) 
                                              & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__io_msInfo_bits_willFree)) 
                                                 & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_set)) 
                                                    & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_tag)) 
                                                       | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                           == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__dirResult_tag)) 
                                                          & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__state_w_releaseack))))))) 
                                             << 0xeU)) 
                                         | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_valid) 
                                              & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__io_msInfo_bits_willFree)) 
                                                 & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_set)) 
                                                    & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_tag)) 
                                                       | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                           == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__dirResult_tag)) 
                                                          & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__state_w_releaseack))))))) 
                                             << 0xdU) 
                                            | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_valid) 
                                                & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__io_msInfo_bits_willFree)) 
                                                   & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                       == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_set)) 
                                                      & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_tag)) 
                                                         | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__dirResult_tag)) 
                                                            & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__state_w_releaseack))))))) 
                                               << 0xcU))) 
                                        | (((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_valid) 
                                              & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__io_msInfo_bits_willFree)) 
                                                 & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_set)) 
                                                    & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_tag)) 
                                                       | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                           == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__dirResult_tag)) 
                                                          & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__state_w_releaseack))))))) 
                                             << 0xbU) 
                                            | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_valid) 
                                                & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__io_msInfo_bits_willFree)) 
                                                   & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                       == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_set)) 
                                                      & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_tag)) 
                                                         | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__dirResult_tag)) 
                                                            & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__state_w_releaseack))))))) 
                                               << 0xaU)) 
                                           | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_valid) 
                                                & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__io_msInfo_bits_willFree)) 
                                                   & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                       == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_set)) 
                                                      & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_tag)) 
                                                         | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__dirResult_tag)) 
                                                            & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__state_w_releaseack))))))) 
                                               << 9U) 
                                              | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_valid) 
                                                  & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__io_msInfo_bits_willFree)) 
                                                     & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                         == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_set)) 
                                                        & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_tag)) 
                                                           | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__dirResult_tag)) 
                                                              & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__state_w_releaseack))))))) 
                                                 << 8U)))) 
                                       | ((((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_valid) 
                                              & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__io_msInfo_bits_willFree)) 
                                                 & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_set)) 
                                                    & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_tag)) 
                                                       | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                           == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__dirResult_tag)) 
                                                          & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__state_w_releaseack))))))) 
                                             << 7U) 
                                            | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_valid) 
                                                & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__io_msInfo_bits_willFree)) 
                                                   & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                       == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_set)) 
                                                      & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_tag)) 
                                                         | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__dirResult_tag)) 
                                                            & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__state_w_releaseack))))))) 
                                               << 6U)) 
                                           | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_valid) 
                                                & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__io_msInfo_bits_willFree)) 
                                                   & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                       == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_set)) 
                                                      & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_tag)) 
                                                         | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__dirResult_tag)) 
                                                            & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__state_w_releaseack))))))) 
                                               << 5U) 
                                              | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_valid) 
                                                  & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__io_msInfo_bits_willFree)) 
                                                     & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                         == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_set)) 
                                                        & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_tag)) 
                                                           | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__dirResult_tag)) 
                                                              & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__state_w_releaseack))))))) 
                                                 << 4U))) 
                                          | (((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid) 
                                                & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_msInfo_bits_willFree)) 
                                                   & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                       == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_set)) 
                                                      & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_tag)) 
                                                         | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_tag)) 
                                                            & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__state_w_releaseack))))))) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid) 
                                                  & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_msInfo_bits_willFree)) 
                                                     & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                         == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_set)) 
                                                        & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_tag)) 
                                                           | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_tag)) 
                                                              & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__state_w_releaseack))))))) 
                                                 << 2U)) 
                                             | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid) 
                                                  & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_msInfo_bits_willFree)) 
                                                     & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                         == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_set)) 
                                                        & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_tag)) 
                                                           | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_tag)) 
                                                              & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__state_w_releaseack))))))) 
                                                 << 1U) 
                                                | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                                                   & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_msInfo_bits_willFree)) 
                                                      & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set)) 
                                                         & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_tag)) 
                                                            | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_tag)) 
                                                               & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__state_w_releaseack)))))))))));
    vlSelfRef.__PVT___io_hasLatePF_T_1 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                           << 7U) | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_set));
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_bufIdx__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_bufIdx[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_needProbeAckData__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_needProbeAckData[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_mshrTask__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_mshrTask[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_useProbeData__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_useProbeData[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_dirty__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_dirty[0U] = 0U;
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
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_sourceId__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_sourceId[0U] 
            = vlSelfRef.__VdlyVal__chosenQ__DOT__ram_bits_task_sourceId__v0;
    }
    vlSelfRef.__PVT___canFlow_T_154 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toReqBuf_0) 
                                                | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toReqBuf_1))));
    vlSelfRef.__PVT___waitMSUpdate_T_1 = ((IData)(__PVT___waitMSUpdate_T) 
                                          & (IData)(vlSelfRef.__PVT__buffer_0_waitMS));
    vlSelfRef.__PVT___waitMSUpdate_T_148 = ((IData)(__PVT___waitMSUpdate_T) 
                                            & (IData)(vlSelfRef.__PVT__buffer_1_waitMS));
    vlSelfRef.__PVT___waitMSUpdate_T_295 = ((IData)(__PVT___waitMSUpdate_T) 
                                            & (IData)(vlSelfRef.__PVT__buffer_2_waitMS));
    vlSelfRef.__PVT___waitMSUpdate_T_442 = ((IData)(__PVT___waitMSUpdate_T) 
                                            & (IData)(vlSelfRef.__PVT__buffer_3_waitMS));
    vlSelfRef.__PVT___io_hasLatePF_T_213 = ((IData)(vlSelfRef.__PVT___io_hasLatePF_T_1) 
                                            == (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_tag) 
                                                 << 7U) 
                                                | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_set)));
    vlSelfRef.__PVT___io_hasLatePF_T_199 = ((IData)(vlSelfRef.__PVT___io_hasLatePF_T_1) 
                                            == (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_tag) 
                                                 << 7U) 
                                                | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_set)));
    vlSelfRef.__PVT___io_hasLatePF_T_185 = ((IData)(vlSelfRef.__PVT___io_hasLatePF_T_1) 
                                            == (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_tag) 
                                                 << 7U) 
                                                | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_set)));
    vlSelfRef.__PVT___io_hasLatePF_T_171 = ((IData)(vlSelfRef.__PVT___io_hasLatePF_T_1) 
                                            == (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_tag) 
                                                 << 7U) 
                                                | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_set)));
    vlSelfRef.__PVT___io_hasLatePF_T_157 = ((IData)(vlSelfRef.__PVT___io_hasLatePF_T_1) 
                                            == (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_tag) 
                                                 << 7U) 
                                                | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_set)));
    vlSelfRef.__PVT___io_hasLatePF_T_143 = ((IData)(vlSelfRef.__PVT___io_hasLatePF_T_1) 
                                            == (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_tag) 
                                                 << 7U) 
                                                | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_set)));
    vlSelfRef.__PVT___io_hasLatePF_T_129 = ((IData)(vlSelfRef.__PVT___io_hasLatePF_T_1) 
                                            == (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_tag) 
                                                 << 7U) 
                                                | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_set)));
    vlSelfRef.__PVT___io_hasLatePF_T_115 = ((IData)(vlSelfRef.__PVT___io_hasLatePF_T_1) 
                                            == (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_tag) 
                                                 << 7U) 
                                                | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_set)));
    vlSelfRef.__PVT___io_hasLatePF_T_101 = ((IData)(vlSelfRef.__PVT___io_hasLatePF_T_1) 
                                            == (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_tag) 
                                                 << 7U) 
                                                | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_set)));
    vlSelfRef.__PVT___io_hasLatePF_T_87 = ((IData)(vlSelfRef.__PVT___io_hasLatePF_T_1) 
                                           == (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_tag) 
                                                << 7U) 
                                               | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_set)));
    vlSelfRef.__PVT___io_hasLatePF_T_73 = ((IData)(vlSelfRef.__PVT___io_hasLatePF_T_1) 
                                           == (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_tag) 
                                                << 7U) 
                                               | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_set)));
    vlSelfRef.__PVT___io_hasLatePF_T_59 = ((IData)(vlSelfRef.__PVT___io_hasLatePF_T_1) 
                                           == (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_tag) 
                                                << 7U) 
                                               | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_set)));
    vlSelfRef.__PVT___io_hasLatePF_T_45 = ((IData)(vlSelfRef.__PVT___io_hasLatePF_T_1) 
                                           == (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_tag) 
                                                << 7U) 
                                               | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_set)));
    vlSelfRef.__PVT___io_hasLatePF_T_31 = ((IData)(vlSelfRef.__PVT___io_hasLatePF_T_1) 
                                           == (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_tag) 
                                                << 7U) 
                                               | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_set)));
    vlSelfRef.__PVT___io_hasLatePF_T_17 = ((IData)(vlSelfRef.__PVT___io_hasLatePF_T_1) 
                                           == (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_tag) 
                                                << 7U) 
                                               | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_set)));
    vlSelfRef.__PVT___io_hasLatePF_T_3 = ((IData)(vlSelfRef.__PVT___io_hasLatePF_T_1) 
                                          == (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_tag) 
                                               << 7U) 
                                              | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set)));
    vlSelfRef.__PVT__canFlow = ((IData)(vlSelfRef.__PVT___canFlow_T) 
                                & ((~ (IData)((0U != (IData)(vlSelfRef.__PVT___canFlow_T_146)))) 
                                   & ((~ (IData)(vlSelfRef.__PVT__chosenQ__DOT__maybe_full)) 
                                      & (IData)(vlSelfRef.__PVT___canFlow_T_154))));
    vlSelfRef.__PVT__waitMSUpdate = ((IData)((1U == 
                                              (3U & (IData)(vlSelfRef.__PVT__buffer_0_waitMP))))
                                      ? (IData)(vlSelfRef.__PVT___waitMSUpdate_T_146)
                                      : (IData)(vlSelfRef.__PVT___waitMSUpdate_T_1));
    vlSelfRef.__PVT__waitMSUpdate_1 = ((IData)((1U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelfRef.__PVT__buffer_1_waitMP))))
                                        ? (IData)(vlSelfRef.__PVT___waitMSUpdate_T_293)
                                        : (IData)(vlSelfRef.__PVT___waitMSUpdate_T_148));
    vlSelfRef.__PVT__waitMSUpdate_2 = ((IData)((1U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelfRef.__PVT__buffer_2_waitMP))))
                                        ? (IData)(vlSelfRef.__PVT___waitMSUpdate_T_440)
                                        : (IData)(vlSelfRef.__PVT___waitMSUpdate_T_295));
    vlSelfRef.__PVT__waitMSUpdate_3 = ((IData)((1U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelfRef.__PVT__buffer_3_waitMP))))
                                        ? (IData)(vlSelfRef.__PVT___waitMSUpdate_T_587)
                                        : (IData)(vlSelfRef.__PVT___waitMSUpdate_T_442));
    vlSelfRef.io_hasLatePF = ((((5U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_opcode)) 
                                & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_valid) 
                                    & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__io_msInfo_bits_willFree)) 
                                       & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_213))) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_ha1527a7f_2_0))) 
                               | (((5U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_opcode)) 
                                   & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_valid) 
                                       & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__io_msInfo_bits_willFree)) 
                                          & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_199))) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_ha1527a7f_2_0))) 
                                  | (((5U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_opcode)) 
                                      & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_valid) 
                                          & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__io_msInfo_bits_willFree)) 
                                             & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_185))) 
                                         & (IData)(vlSelfRef.__VdfgRegularize_ha1527a7f_2_0))) 
                                     | (((5U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_opcode)) 
                                         & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_valid) 
                                             & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__io_msInfo_bits_willFree)) 
                                                & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_171))) 
                                            & (IData)(vlSelfRef.__VdfgRegularize_ha1527a7f_2_0))) 
                                        | (((5U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_opcode)) 
                                            & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_valid) 
                                                & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__io_msInfo_bits_willFree)) 
                                                   & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_157))) 
                                               & (IData)(vlSelfRef.__VdfgRegularize_ha1527a7f_2_0))) 
                                           | (((5U 
                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_opcode)) 
                                               & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_valid) 
                                                   & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__io_msInfo_bits_willFree)) 
                                                      & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_143))) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_ha1527a7f_2_0))) 
                                              | (((5U 
                                                   == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_opcode)) 
                                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_valid) 
                                                      & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__io_msInfo_bits_willFree)) 
                                                         & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_129))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_ha1527a7f_2_0))) 
                                                 | (((5U 
                                                      == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_opcode)) 
                                                     & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_valid) 
                                                         & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__io_msInfo_bits_willFree)) 
                                                            & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_115))) 
                                                        & (IData)(vlSelfRef.__VdfgRegularize_ha1527a7f_2_0))) 
                                                    | (((5U 
                                                         == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_opcode)) 
                                                        & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_valid) 
                                                            & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__io_msInfo_bits_willFree)) 
                                                               & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_101))) 
                                                           & (IData)(vlSelfRef.__VdfgRegularize_ha1527a7f_2_0))) 
                                                       | (((5U 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_opcode)) 
                                                           & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_valid) 
                                                               & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__io_msInfo_bits_willFree)) 
                                                                  & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_87))) 
                                                              & (IData)(vlSelfRef.__VdfgRegularize_ha1527a7f_2_0))) 
                                                          | (((5U 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_opcode)) 
                                                              & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_valid) 
                                                                  & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__io_msInfo_bits_willFree)) 
                                                                     & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_73))) 
                                                                 & (IData)(vlSelfRef.__VdfgRegularize_ha1527a7f_2_0))) 
                                                             | (((5U 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_opcode)) 
                                                                 & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_valid) 
                                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__io_msInfo_bits_willFree)) 
                                                                        & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_59))) 
                                                                    & (IData)(vlSelfRef.__VdfgRegularize_ha1527a7f_2_0))) 
                                                                | (((5U 
                                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_opcode)) 
                                                                    & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid) 
                                                                        & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_msInfo_bits_willFree)) 
                                                                           & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_45))) 
                                                                       & (IData)(vlSelfRef.__VdfgRegularize_ha1527a7f_2_0))) 
                                                                   | (((5U 
                                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_opcode)) 
                                                                       & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid) 
                                                                           & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_msInfo_bits_willFree)) 
                                                                              & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_31))) 
                                                                          & (IData)(vlSelfRef.__VdfgRegularize_ha1527a7f_2_0))) 
                                                                      | (((5U 
                                                                           == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_opcode)) 
                                                                          & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid) 
                                                                              & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_msInfo_bits_willFree)) 
                                                                                & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_17))) 
                                                                             & (IData)(vlSelfRef.__VdfgRegularize_ha1527a7f_2_0))) 
                                                                         | ((5U 
                                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_opcode)) 
                                                                            & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                                                                                & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_msInfo_bits_willFree)) 
                                                                                & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_3))) 
                                                                               & (IData)(vlSelfRef.__VdfgRegularize_ha1527a7f_2_0)))))))))))))))))) 
                              & (((IData)(vlSelfRef.__PVT___io_hasLatePF_T_1) 
                                  != (((IData)(vlSelfRef.__PVT__io_hasLatePF_REG_tag) 
                                       << 7U) | (IData)(vlSelfRef.__PVT__io_hasLatePF_REG_set))) 
                                 & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_valid)));
    vlSelfRef.io_out_valid = (((IData)(vlSelfRef.__PVT___io_out_valid_T) 
                               & (IData)(vlSelfRef.__PVT__chosenQ__DOT__maybe_full)) 
                              | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_valid) 
                                 & (IData)(vlSelfRef.__PVT__canFlow)));
    vlSelfRef.io_out_bits_set = ((IData)(vlSelfRef.__PVT__canFlow)
                                  ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_set)
                                  : vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_set
                                 [0U]);
    vlSelfRef.__PVT___pipeBlockOut_T_2 = ((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                          == (IData)(vlSelfRef.io_out_bits_set));
    vlSelfRef.__PVT___pipeBlockOut_T_3 = ((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                          == (IData)(vlSelfRef.io_out_bits_set));
    vlSelfRef.__PVT___pipeBlockOut_T_4 = ((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                          == (IData)(vlSelfRef.io_out_bits_set));
    vlSelfRef.__PVT___pipeBlockOut_T_5 = ((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                          == (IData)(vlSelfRef.io_out_bits_set));
    __PVT__issueArb_io_in_0_valid = ((IData)(vlSelfRef.__PVT__buffer_0_valid) 
                                     & ((~ ((IData)(vlSelfRef.io_out_valid) 
                                            & (IData)(vlSelfRef.__PVT___pipeBlockOut_T_2))) 
                                        & (IData)(vlSelfRef.__PVT__buffer_0_rdy)));
    __PVT__issueArb_io_in_1_valid = ((IData)(vlSelfRef.__PVT__buffer_1_valid) 
                                     & ((~ ((IData)(vlSelfRef.io_out_valid) 
                                            & (IData)(vlSelfRef.__PVT___pipeBlockOut_T_3))) 
                                        & (IData)(vlSelfRef.__PVT__buffer_1_rdy)));
    __PVT__issueArb_io_in_2_valid = ((IData)(vlSelfRef.__PVT__buffer_2_valid) 
                                     & ((~ ((IData)(vlSelfRef.io_out_valid) 
                                            & (IData)(vlSelfRef.__PVT___pipeBlockOut_T_4))) 
                                        & (IData)(vlSelfRef.__PVT__buffer_2_rdy)));
    __PVT__issueArb_io_in_3_valid = ((IData)(vlSelfRef.__PVT__buffer_3_valid) 
                                     & ((~ ((IData)(vlSelfRef.io_out_valid) 
                                            & (IData)(vlSelfRef.__PVT___pipeBlockOut_T_5))) 
                                        & (IData)(vlSelfRef.__PVT__buffer_3_rdy)));
    vlSelfRef.__PVT__issueArb__DOT__valids = ((((IData)(__PVT__issueArb_io_in_3_valid) 
                                                << 3U) 
                                               | ((IData)(__PVT__issueArb_io_in_2_valid) 
                                                  << 2U)) 
                                              | (((IData)(__PVT__issueArb_io_in_1_valid) 
                                                  << 1U) 
                                                 | (IData)(__PVT__issueArb_io_in_0_valid)));
    vlSelfRef.__PVT__issueArb__DOT__chosenOH = ((0U 
                                                 != 
                                                 ((IData)(vlSelfRef.__PVT__issueArb__DOT__rrSelOH) 
                                                  & (IData)(vlSelfRef.__PVT__issueArb__DOT__valids)))
                                                 ? (IData)(vlSelfRef.__PVT__issueArb__DOT__rrSelOH)
                                                 : 
                                                (((((~ 
                                                     ((IData)(__PVT__issueArb_io_in_0_valid) 
                                                      | ((IData)(__PVT__issueArb_io_in_1_valid) 
                                                         | (IData)(__PVT__issueArb_io_in_2_valid)))) 
                                                    & (IData)(__PVT__issueArb_io_in_3_valid)) 
                                                   << 3U) 
                                                  | (((~ 
                                                       ((IData)(__PVT__issueArb_io_in_0_valid) 
                                                        | (IData)(__PVT__issueArb_io_in_1_valid))) 
                                                      & (IData)(__PVT__issueArb_io_in_2_valid)) 
                                                     << 2U)) 
                                                 | ((((~ (IData)(__PVT__issueArb_io_in_0_valid)) 
                                                      & (IData)(__PVT__issueArb_io_in_1_valid)) 
                                                     << 1U) 
                                                    | (IData)(__PVT__issueArb_io_in_0_valid))));
}

VL_INLINE_OPT void VTestTop_L2L3L2_RequestBuffer___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__a_reqBuf__2(VTestTop_L2L3L2_RequestBuffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_RequestBuffer___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__a_reqBuf__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__chosenQ_io_deq_ready;
    __PVT__chosenQ_io_deq_ready = 0;
    CData/*0:0*/ __PVT___pipeBlockOut_T;
    __PVT___pipeBlockOut_T = 0;
    // Body
    __PVT__chosenQ_io_deq_ready = (1U & ((~ (IData)(vlSelfRef.__PVT___io_out_valid_T)) 
                                         | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_sinkA_ready)));
    __PVT___pipeBlockOut_T = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_sinkA_ready) 
                              & (IData)(vlSelfRef.io_out_valid));
    vlSelfRef.__PVT__doFlow = ((IData)(vlSelfRef.__PVT__canFlow) 
                               & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_sinkA_ready));
    vlSelfRef.__PVT__chosenQ__DOT__do_deq = ((IData)(__PVT__chosenQ_io_deq_ready) 
                                             & (IData)(vlSelfRef.__PVT__chosenQ__DOT__maybe_full));
    vlSelfRef.__PVT__issueArb__DOT___pendingMask_T_2 
        = (((~ (IData)(vlSelfRef.__PVT__chosenQ__DOT__maybe_full)) 
            | (IData)(__PVT__chosenQ_io_deq_ready)) 
           & (0U != (IData)(vlSelfRef.__PVT__issueArb__DOT__valids)));
    vlSelfRef.__PVT__s1_Block = (((IData)(__PVT___pipeBlockOut_T) 
                                  & (IData)(vlSelfRef.__PVT___pipeBlockOut_T_2)) 
                                 | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_s1Entrance_valid) 
                                    & ((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                       == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_s1Entrance_bits_set))));
    vlSelfRef.__PVT__s1_Block_1 = (((IData)(__PVT___pipeBlockOut_T) 
                                    & (IData)(vlSelfRef.__PVT___pipeBlockOut_T_3)) 
                                   | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_s1Entrance_valid) 
                                      & ((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                         == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_s1Entrance_bits_set))));
    vlSelfRef.__PVT__s1_Block_2 = (((IData)(__PVT___pipeBlockOut_T) 
                                    & (IData)(vlSelfRef.__PVT___pipeBlockOut_T_4)) 
                                   | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_s1Entrance_valid) 
                                      & ((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                         == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_s1Entrance_bits_set))));
    vlSelfRef.__PVT__s1_Block_3 = (((IData)(__PVT___pipeBlockOut_T) 
                                    & (IData)(vlSelfRef.__PVT___pipeBlockOut_T_5)) 
                                   | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_s1Entrance_valid) 
                                      & ((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                         == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_s1Entrance_bits_set))));
    vlSelfRef.__PVT__s1Block = (((IData)(__PVT___pipeBlockOut_T) 
                                 & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                    == (IData)(vlSelfRef.io_out_bits_set))) 
                                | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_s1Entrance_valid) 
                                   & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                      == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__reqArb_io_s1Entrance_bits_set))));
    vlSelfRef.__PVT__alloc = ((IData)(vlSelfRef.__PVT___canFlow_T) 
                              & ((~ ((IData)(vlSelfRef.__PVT__doFlow) 
                                     | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_valid) 
                                        & ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_bits_opcode)) 
                                           & (((IData)(vlSelfRef.__PVT__buffer_3_valid) 
                                               & ((IData)(vlSelfRef.__PVT___io_hasLatePF_T_1) 
                                                  == 
                                                  (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                    << 7U) 
                                                   | (IData)(vlSelfRef.__PVT__buffer_3_task_set)))) 
                                              | ((((IData)(vlSelfRef.__PVT__buffer_2_valid) 
                                                   & ((IData)(vlSelfRef.__PVT___io_hasLatePF_T_1) 
                                                      == 
                                                      (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                        << 7U) 
                                                       | (IData)(vlSelfRef.__PVT__buffer_2_task_set)))) 
                                                  | (((IData)(vlSelfRef.__PVT__buffer_1_valid) 
                                                      & ((IData)(vlSelfRef.__PVT___io_hasLatePF_T_1) 
                                                         == 
                                                         (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                           << 7U) 
                                                          | (IData)(vlSelfRef.__PVT__buffer_1_task_set)))) 
                                                     | (((IData)(vlSelfRef.__PVT__buffer_0_valid) 
                                                         & ((IData)(vlSelfRef.__PVT___io_hasLatePF_T_1) 
                                                            == 
                                                            (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                              << 7U) 
                                                             | (IData)(vlSelfRef.__PVT__buffer_0_task_set)))) 
                                                        | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_valid) 
                                                            & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_acquire) 
                                                                | (5U 
                                                                   == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_opcode))) 
                                                               & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_213))) 
                                                           | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_valid) 
                                                               & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_acquire) 
                                                                   | (5U 
                                                                      == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_opcode))) 
                                                                  & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_199))) 
                                                              | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_valid) 
                                                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_acquire) 
                                                                      | (5U 
                                                                         == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_opcode))) 
                                                                     & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_185))) 
                                                                 | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_valid) 
                                                                     & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_acquire) 
                                                                         | (5U 
                                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_opcode))) 
                                                                        & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_171))) 
                                                                    | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_valid) 
                                                                        & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_acquire) 
                                                                            | (5U 
                                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_opcode))) 
                                                                           & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_157))) 
                                                                       | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_valid) 
                                                                          & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_acquire) 
                                                                              | (5U 
                                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_opcode))) 
                                                                             & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_143))))))))))) 
                                                 | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_valid) 
                                                     & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_acquire) 
                                                         | (5U 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_opcode))) 
                                                        & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_129))) 
                                                    | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_valid) 
                                                        & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_acquire) 
                                                            | (5U 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_opcode))) 
                                                           & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_115))) 
                                                       | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_valid) 
                                                           & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_acquire) 
                                                               | (5U 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_opcode))) 
                                                              & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_101))) 
                                                          | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_valid) 
                                                              & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_acquire) 
                                                                  | (5U 
                                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_opcode))) 
                                                                 & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_87))) 
                                                             | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_valid) 
                                                                 & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_acquire) 
                                                                     | (5U 
                                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_opcode))) 
                                                                    & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_73))) 
                                                                | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_valid) 
                                                                    & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_acquire) 
                                                                        | (5U 
                                                                           == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_opcode))) 
                                                                       & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_59))) 
                                                                   | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid) 
                                                                       & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_acquire) 
                                                                           | (5U 
                                                                              == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_opcode))) 
                                                                          & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_45))) 
                                                                      | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid) 
                                                                          & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_acquire) 
                                                                              | (5U 
                                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_opcode))) 
                                                                             & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_31))) 
                                                                         | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid) 
                                                                             & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_acquire) 
                                                                                | (5U 
                                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_opcode))) 
                                                                                & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_17))) 
                                                                            | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                                                                               & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_acquire) 
                                                                                | (5U 
                                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_opcode))) 
                                                                                & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_3)))))))))))))))))) 
                                 & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__sinkA_io_task_valid)));
    vlSelfRef.__PVT___buffer_waitMP_T = ((((IData)(vlSelfRef.__PVT__s1Block) 
                                           << 3U) | 
                                          ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toReqBuf_0) 
                                           << 2U)) 
                                         | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes__DOT__slices_0__DOT__mainPipe_io_toReqBuf_1) 
                                            << 1U));
    if (vlSelfRef.__PVT__alloc) {
        vlSelfRef.__PVT___GEN_128 = ((0U == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                     | (IData)(vlSelfRef.__PVT__buffer_0_valid));
        vlSelfRef.__PVT___GEN_129 = ((1U == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                     | (IData)(vlSelfRef.__PVT__buffer_1_valid));
        vlSelfRef.__PVT___GEN_130 = ((2U == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                     | (IData)(vlSelfRef.__PVT__buffer_2_valid));
        vlSelfRef.__PVT___GEN_131 = ((3U == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                     | (IData)(vlSelfRef.__PVT__buffer_3_valid));
    } else {
        vlSelfRef.__PVT___GEN_128 = vlSelfRef.__PVT__buffer_0_valid;
        vlSelfRef.__PVT___GEN_129 = vlSelfRef.__PVT__buffer_1_valid;
        vlSelfRef.__PVT___GEN_130 = vlSelfRef.__PVT__buffer_2_valid;
        vlSelfRef.__PVT___GEN_131 = vlSelfRef.__PVT__buffer_3_valid;
    }
}

VL_INLINE_OPT void VTestTop_L2L3L2_RequestBuffer___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__a_reqBuf__0(VTestTop_L2L3L2_RequestBuffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_RequestBuffer___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__a_reqBuf__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __PVT__issueArb__DOT___rrSelOH_T;
    __PVT__issueArb__DOT___rrSelOH_T = 0;
    VlUnpacked<CData/*0:0*/, 1> __PVT__chosenQ__DOT__ram_bits_task_size;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __PVT__chosenQ__DOT__ram_bits_task_size[__Vi0] = 0;
    }
    VlUnpacked<CData/*0:0*/, 1> __PVT__chosenQ__DOT__ram_bits_task_aliasTask;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __PVT__chosenQ__DOT__ram_bits_task_aliasTask[__Vi0] = 0;
    }
    CData/*0:0*/ __Vdly__REG_4;
    __Vdly__REG_4 = 0;
    CData/*0:0*/ __Vdly__REG;
    __Vdly__REG = 0;
    CData/*0:0*/ __Vdly__REG_2;
    __Vdly__REG_2 = 0;
    CData/*2:0*/ __VdlyVal__chosenQ__DOT__ram_bits_task_channel__v0;
    __VdlyVal__chosenQ__DOT__ram_bits_task_channel__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_channel__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_channel__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_aliasTask__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_aliasTask__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_mshrId__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_mshrId__v0 = 0;
    CData/*7:0*/ __VdlyVal__chosenQ__DOT__ram_bits_task_tag__v0;
    __VdlyVal__chosenQ__DOT__ram_bits_task_tag__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_tag__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_tag__v0 = 0;
    CData/*1:0*/ __VdlyVal__chosenQ__DOT__ram_id__v0;
    __VdlyVal__chosenQ__DOT__ram_id__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_id__v0;
    __VdlySet__chosenQ__DOT__ram_id__v0 = 0;
    CData/*2:0*/ __VdlyVal__chosenQ__DOT__ram_bits_task_opcode__v0;
    __VdlyVal__chosenQ__DOT__ram_bits_task_opcode__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_opcode__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_opcode__v0 = 0;
    CData/*6:0*/ __VdlyVal__chosenQ__DOT__ram_bits_task_set__v0;
    __VdlyVal__chosenQ__DOT__ram_bits_task_set__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_set__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_set__v0 = 0;
    CData/*0:0*/ __VdlyVal__chosenQ__DOT__ram_bits_task_size__v0;
    __VdlyVal__chosenQ__DOT__ram_bits_task_size__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_size__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_size__v0 = 0;
    CData/*0:0*/ __VdlySet__chosenQ__DOT__ram_bits_task_reqSource__v0;
    __VdlySet__chosenQ__DOT__ram_bits_task_reqSource__v0 = 0;
    // Body
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_metaWen__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_accessed__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_alias__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_clients__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_way__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_dirty__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_useProbeData__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_mshrTask__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_aliasTask__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_tagWen__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_dirty__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_state__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_bufIdx__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_needProbeAckData__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_dsWen__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_replTask__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_mshrId__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_reqSource__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_id__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_size__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_off__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_alias__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_param__v0 = 0U;
    vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_sourceId__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_channel__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_opcode__v0 = 0U;
    __Vdly__REG_4 = vlSelfRef.__PVT__REG_4;
    __Vdly__REG = vlSelfRef.__PVT__REG;
    __Vdly__REG_2 = vlSelfRef.__PVT__REG_2;
    __VdlySet__chosenQ__DOT__ram_bits_task_tag__v0 = 0U;
    __VdlySet__chosenQ__DOT__ram_bits_task_set__v0 = 0U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.__PVT__alloc) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (2U < (0x1fU & ((0xfU & ((7U 
                                                 & ((3U 
                                                     & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                                                         & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_msInfo_bits_willFree)) 
                                                            & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set)) 
                                                               & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                   == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_tag)) 
                                                                  | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                      == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_tag)) 
                                                                     & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__state_w_releaseack))))))) 
                                                        + 
                                                        VL_SHIFTR_III(2,2,32, 
                                                                      ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid) 
                                                                         & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_msInfo_bits_willFree)) 
                                                                            & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_set)) 
                                                                               & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_tag)) 
                                                                                | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_tag)) 
                                                                                & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__state_w_releaseack))))))) 
                                                                        << 1U) 
                                                                       | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                                                                          & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_msInfo_bits_willFree)) 
                                                                             & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set)) 
                                                                                & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_tag)) 
                                                                                | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_tag)) 
                                                                                & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__state_w_releaseack)))))))), 1U))) 
                                                    + 
                                                    (3U 
                                                     & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid) 
                                                         & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_msInfo_bits_willFree)) 
                                                            & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_set)) 
                                                               & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                   == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_tag)) 
                                                                  | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                      == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_tag)) 
                                                                     & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__state_w_releaseack))))))) 
                                                        + 
                                                        ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid) 
                                                         & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_msInfo_bits_willFree)) 
                                                            & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_set)) 
                                                               & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                   == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_tag)) 
                                                                  | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                      == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_tag)) 
                                                                     & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__state_w_releaseack))))))))))) 
                                                + (7U 
                                                   & ((3U 
                                                       & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_valid) 
                                                           & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__io_msInfo_bits_willFree)) 
                                                              & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_set)) 
                                                                 & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_tag)) 
                                                                    | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__dirResult_tag)) 
                                                                       & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__state_w_releaseack))))))) 
                                                          + 
                                                          ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_valid) 
                                                           & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__io_msInfo_bits_willFree)) 
                                                              & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_set)) 
                                                                 & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_tag)) 
                                                                    | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__dirResult_tag)) 
                                                                       & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__state_w_releaseack))))))))) 
                                                      + 
                                                      (3U 
                                                       & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_valid) 
                                                           & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__io_msInfo_bits_willFree)) 
                                                              & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_set)) 
                                                                 & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_tag)) 
                                                                    | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__dirResult_tag)) 
                                                                       & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__state_w_releaseack))))))) 
                                                          + 
                                                          ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_valid) 
                                                           & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__io_msInfo_bits_willFree)) 
                                                              & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_set)) 
                                                                 & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_tag)) 
                                                                    | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__dirResult_tag)) 
                                                                       & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__state_w_releaseack))))))))))))) 
                                       + (0xfU & ((7U 
                                                   & ((3U 
                                                       & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_valid) 
                                                           & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__io_msInfo_bits_willFree)) 
                                                              & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_set)) 
                                                                 & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_tag)) 
                                                                    | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__dirResult_tag)) 
                                                                       & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__state_w_releaseack))))))) 
                                                          + 
                                                          ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_valid) 
                                                           & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__io_msInfo_bits_willFree)) 
                                                              & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_set)) 
                                                                 & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_tag)) 
                                                                    | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__dirResult_tag)) 
                                                                       & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__state_w_releaseack))))))))) 
                                                      + 
                                                      (3U 
                                                       & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_valid) 
                                                           & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__io_msInfo_bits_willFree)) 
                                                              & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_set)) 
                                                                 & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_tag)) 
                                                                    | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__dirResult_tag)) 
                                                                       & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__state_w_releaseack))))))) 
                                                          + 
                                                          ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_valid) 
                                                           & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__io_msInfo_bits_willFree)) 
                                                              & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_set)) 
                                                                 & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_tag)) 
                                                                    | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__dirResult_tag)) 
                                                                       & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__state_w_releaseack))))))))))) 
                                                  + 
                                                  (7U 
                                                   & ((3U 
                                                       & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_valid) 
                                                           & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__io_msInfo_bits_willFree)) 
                                                              & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_set)) 
                                                                 & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_tag)) 
                                                                    | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__dirResult_tag)) 
                                                                       & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__state_w_releaseack))))))) 
                                                          + 
                                                          ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_valid) 
                                                           & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__io_msInfo_bits_willFree)) 
                                                              & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_set)) 
                                                                 & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_tag)) 
                                                                    | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__dirResult_tag)) 
                                                                       & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__state_w_releaseack))))))))) 
                                                      + 
                                                      (3U 
                                                       & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_valid) 
                                                           & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__io_msInfo_bits_willFree)) 
                                                              & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_set)) 
                                                                 & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_tag)) 
                                                                    | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__dirResult_tag)) 
                                                                       & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__state_w_releaseack))))))) 
                                                          + 
                                                          ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_valid) 
                                                           & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__io_msInfo_bits_willFree)) 
                                                              & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_set)) 
                                                                 & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_tag)) 
                                                                    | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__dirResult_tag)) 
                                                                       & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__state_w_releaseack))))))))))))))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at RequestBuffer.scala:151 assert(PopCount(conflictMask(in)) <= 2.U)\n",0);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0x4e20U <= (IData)(vlSelfRef.__PVT__bufferTimer_0))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ReqBuf Leak\n    at RequestBuffer.scala:253 assert(t < 20000.U, \"ReqBuf Leak\")\n",0);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0x4e20U <= (IData)(vlSelfRef.__PVT__bufferTimer_1))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ReqBuf Leak\n    at RequestBuffer.scala:253 assert(t < 20000.U, \"ReqBuf Leak\")\n",0);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0x4e20U <= (IData)(vlSelfRef.__PVT__bufferTimer_2))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ReqBuf Leak\n    at RequestBuffer.scala:253 assert(t < 20000.U, \"ReqBuf Leak\")\n",0);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0x4e20U <= (IData)(vlSelfRef.__PVT__bufferTimer_3))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: ReqBuf Leak\n    at RequestBuffer.scala:253 assert(t < 20000.U, \"ReqBuf Leak\")\n",0);
    }
    if (vlSelfRef.__PVT__issueArb__DOT___pendingMask_T_2) {
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_metaWen__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_accessed__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_alias__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_clients__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_way__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_dirty__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_useProbeData__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_mshrTask__v0 = 1U;
        __VdlySet__chosenQ__DOT__ram_bits_task_aliasTask__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_tagWen__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_dirty__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_meta_state__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_bufIdx__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_needProbeAckData__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_dsWen__v0 = 1U;
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_replTask__v0 = 1U;
        __VdlySet__chosenQ__DOT__ram_bits_task_mshrId__v0 = 1U;
        __VdlySet__chosenQ__DOT__ram_bits_task_reqSource__v0 = 1U;
        __VdlyVal__chosenQ__DOT__ram_id__v0 = (((IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & ((IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH) 
                                                             >> 2U)))) 
                                                << 1U) 
                                               | (IData)(
                                                         (0U 
                                                          != 
                                                          (0xaU 
                                                           & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH)))));
        __VdlySet__chosenQ__DOT__ram_id__v0 = 1U;
        __VdlyVal__chosenQ__DOT__ram_bits_task_size__v0 
            = (((IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH) 
                & (IData)(vlSelfRef.__PVT__buffer_0_task_size)) 
               | ((((IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH) 
                    >> 1U) & (IData)(vlSelfRef.__PVT__buffer_1_task_size)) 
                  | ((((IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH) 
                       >> 2U) & (IData)(vlSelfRef.__PVT__buffer_2_task_size)) 
                     | (((IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH) 
                         >> 3U) & (IData)(vlSelfRef.__PVT__buffer_3_task_size)))));
        __VdlySet__chosenQ__DOT__ram_bits_task_size__v0 = 1U;
        vlSelfRef.__VdlyVal__chosenQ__DOT__ram_bits_task_off__v0 
            = (((IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH) 
                & (IData)(vlSelfRef.__PVT__buffer_0_task_off)) 
               | ((((IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH) 
                    >> 1U) & (IData)(vlSelfRef.__PVT__buffer_1_task_off)) 
                  | ((((IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH) 
                       >> 2U) & (IData)(vlSelfRef.__PVT__buffer_2_task_off)) 
                     | (((IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH) 
                         >> 3U) & (IData)(vlSelfRef.__PVT__buffer_3_task_off)))));
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_off__v0 = 1U;
        vlSelfRef.__VdlyVal__chosenQ__DOT__ram_bits_task_alias__v0 
            = ((((1U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                  ? (IData)(vlSelfRef.__PVT__buffer_0_task_alias)
                  : 0U) | ((2U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                            ? (IData)(vlSelfRef.__PVT__buffer_1_task_alias)
                            : 0U)) | (((4U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                                        ? (IData)(vlSelfRef.__PVT__buffer_2_task_alias)
                                        : 0U) | ((8U 
                                                  & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                                                  ? (IData)(vlSelfRef.__PVT__buffer_3_task_alias)
                                                  : 0U)));
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_alias__v0 = 1U;
        vlSelfRef.__VdlyVal__chosenQ__DOT__ram_bits_task_param__v0 
            = ((((1U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                  ? (IData)(vlSelfRef.__PVT__buffer_0_task_param)
                  : 0U) | ((2U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                            ? (IData)(vlSelfRef.__PVT__buffer_1_task_param)
                            : 0U)) | (((4U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                                        ? (IData)(vlSelfRef.__PVT__buffer_2_task_param)
                                        : 0U) | ((8U 
                                                  & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                                                  ? (IData)(vlSelfRef.__PVT__buffer_3_task_param)
                                                  : 0U)));
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_param__v0 = 1U;
        vlSelfRef.__VdlyVal__chosenQ__DOT__ram_bits_task_sourceId__v0 
            = ((((1U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                  ? (IData)(vlSelfRef.__PVT__buffer_0_task_sourceId)
                  : 0U) | ((2U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                            ? (IData)(vlSelfRef.__PVT__buffer_1_task_sourceId)
                            : 0U)) | (((4U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                                        ? (IData)(vlSelfRef.__PVT__buffer_2_task_sourceId)
                                        : 0U) | ((8U 
                                                  & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                                                  ? (IData)(vlSelfRef.__PVT__buffer_3_task_sourceId)
                                                  : 0U)));
        vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_sourceId__v0 = 1U;
        __VdlyVal__chosenQ__DOT__ram_bits_task_channel__v0 
            = ((((1U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                  ? (IData)(vlSelfRef.__PVT__buffer_0_task_channel)
                  : 0U) | ((2U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                            ? (IData)(vlSelfRef.__PVT__buffer_1_task_channel)
                            : 0U)) | (((4U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                                        ? (IData)(vlSelfRef.__PVT__buffer_2_task_channel)
                                        : 0U) | ((8U 
                                                  & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                                                  ? (IData)(vlSelfRef.__PVT__buffer_3_task_channel)
                                                  : 0U)));
        __VdlySet__chosenQ__DOT__ram_bits_task_channel__v0 = 1U;
        __VdlyVal__chosenQ__DOT__ram_bits_task_opcode__v0 
            = ((((1U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                  ? (IData)(vlSelfRef.__PVT__buffer_0_task_opcode)
                  : 0U) | ((2U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                            ? (IData)(vlSelfRef.__PVT__buffer_1_task_opcode)
                            : 0U)) | (((4U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                                        ? (IData)(vlSelfRef.__PVT__buffer_2_task_opcode)
                                        : 0U) | ((8U 
                                                  & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                                                  ? (IData)(vlSelfRef.__PVT__buffer_3_task_opcode)
                                                  : 0U)));
        __VdlySet__chosenQ__DOT__ram_bits_task_opcode__v0 = 1U;
        __VdlyVal__chosenQ__DOT__ram_bits_task_tag__v0 
            = ((((1U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                  ? (IData)(vlSelfRef.__PVT__buffer_0_task_tag)
                  : 0U) | ((2U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                            ? (IData)(vlSelfRef.__PVT__buffer_1_task_tag)
                            : 0U)) | (((4U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                                        ? (IData)(vlSelfRef.__PVT__buffer_2_task_tag)
                                        : 0U) | ((8U 
                                                  & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                                                  ? (IData)(vlSelfRef.__PVT__buffer_3_task_tag)
                                                  : 0U)));
        __VdlySet__chosenQ__DOT__ram_bits_task_tag__v0 = 1U;
        __VdlyVal__chosenQ__DOT__ram_bits_task_set__v0 
            = ((((1U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                  ? (IData)(vlSelfRef.__PVT__buffer_0_task_set)
                  : 0U) | ((2U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                            ? (IData)(vlSelfRef.__PVT__buffer_1_task_set)
                            : 0U)) | (((4U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                                        ? (IData)(vlSelfRef.__PVT__buffer_2_task_set)
                                        : 0U) | ((8U 
                                                  & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH))
                                                  ? (IData)(vlSelfRef.__PVT__buffer_3_task_set)
                                                  : 0U)));
        __VdlySet__chosenQ__DOT__ram_bits_task_set__v0 = 1U;
    }
    vlSelfRef.__PVT__io_hasLatePF_REG_tag = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag;
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__issueArb__DOT__rrGrantMask = 0U;
        vlSelfRef.__PVT__issueArb__DOT__pendingMask = 0U;
        vlSelfRef.__PVT__chosenQ__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__buffer_3_rdy = 0U;
        vlSelfRef.__PVT__bufferTimer_3 = 0U;
        vlSelfRef.__PVT__buffer_3_waitMS = 0U;
        vlSelfRef.__PVT__buffer_3_waitMP = 0U;
        vlSelfRef.__PVT__buffer_0_rdy = 0U;
        vlSelfRef.__PVT__bufferTimer_0 = 0U;
        vlSelfRef.__PVT__buffer_0_waitMS = 0U;
        vlSelfRef.__PVT__buffer_0_waitMP = 0U;
        vlSelfRef.__PVT__buffer_1_rdy = 0U;
        vlSelfRef.__PVT__bufferTimer_1 = 0U;
        vlSelfRef.__PVT__buffer_1_waitMS = 0U;
        vlSelfRef.__PVT__buffer_1_waitMP = 0U;
        vlSelfRef.__PVT__buffer_2_rdy = 0U;
        vlSelfRef.__PVT__bufferTimer_2 = 0U;
        vlSelfRef.__PVT__buffer_2_waitMS = 0U;
        vlSelfRef.__PVT__buffer_2_waitMP = 0U;
        vlSelfRef.__PVT__buffer_0_task_size = 0U;
        vlSelfRef.__PVT__buffer_1_task_size = 0U;
        vlSelfRef.__PVT__buffer_2_task_size = 0U;
        vlSelfRef.__PVT__buffer_3_task_size = 0U;
        vlSelfRef.__PVT__buffer_0_task_off = 0U;
        vlSelfRef.__PVT__buffer_1_task_off = 0U;
        vlSelfRef.__PVT__buffer_2_task_off = 0U;
        vlSelfRef.__PVT__buffer_3_task_off = 0U;
        vlSelfRef.__PVT__buffer_0_task_alias = 0U;
        vlSelfRef.__PVT__buffer_1_task_alias = 0U;
        vlSelfRef.__PVT__buffer_2_task_alias = 0U;
        vlSelfRef.__PVT__buffer_3_task_alias = 0U;
        vlSelfRef.__PVT__buffer_0_task_param = 0U;
        vlSelfRef.__PVT__buffer_1_task_param = 0U;
        vlSelfRef.__PVT__buffer_2_task_param = 0U;
        vlSelfRef.__PVT__buffer_3_task_param = 0U;
        vlSelfRef.__PVT__buffer_0_task_sourceId = 0U;
        vlSelfRef.__PVT__buffer_1_task_sourceId = 0U;
        vlSelfRef.__PVT__buffer_2_task_sourceId = 0U;
        vlSelfRef.__PVT__buffer_3_task_sourceId = 0U;
        vlSelfRef.__PVT__buffer_0_task_channel = 0U;
        vlSelfRef.__PVT__buffer_1_task_channel = 0U;
        vlSelfRef.__PVT__buffer_2_task_channel = 0U;
        vlSelfRef.__PVT__buffer_3_task_channel = 0U;
        vlSelfRef.__PVT__buffer_0_task_opcode = 0U;
        vlSelfRef.__PVT__buffer_1_task_opcode = 0U;
        vlSelfRef.__PVT__buffer_2_task_opcode = 0U;
        vlSelfRef.__PVT__buffer_3_task_opcode = 0U;
        vlSelfRef.__PVT__buffer_0_task_tag = 0U;
        vlSelfRef.__PVT__buffer_1_task_tag = 0U;
        vlSelfRef.__PVT__buffer_2_task_tag = 0U;
        vlSelfRef.__PVT__buffer_3_task_tag = 0U;
        vlSelfRef.__PVT__buffer_0_task_set = 0U;
        vlSelfRef.__PVT__buffer_1_task_set = 0U;
        vlSelfRef.__PVT__buffer_2_task_set = 0U;
        vlSelfRef.__PVT__buffer_3_task_set = 0U;
    } else {
        if (vlSelfRef.__PVT__issueArb__DOT___pendingMask_T_2) {
            vlSelfRef.__PVT__issueArb__DOT__rrGrantMask 
                = (((((IData)((0U != (7U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH)))) 
                      << 1U) | (0U != (3U & (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH)))) 
                    << 2U) | (2U & ((IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH) 
                                    << 1U)));
            vlSelfRef.__PVT__issueArb__DOT__pendingMask 
                = ((~ (IData)(vlSelfRef.__PVT__issueArb__DOT__chosenOH)) 
                   & (IData)(vlSelfRef.__PVT__issueArb__DOT__valids));
        }
        if (((IData)(vlSelfRef.__PVT__issueArb__DOT___pendingMask_T_2) 
             != (IData)(vlSelfRef.__PVT__chosenQ__DOT__do_deq))) {
            vlSelfRef.__PVT__chosenQ__DOT__maybe_full 
                = vlSelfRef.__PVT__issueArb__DOT___pendingMask_T_2;
        }
        if (vlSelfRef.__PVT__buffer_3_valid) {
            vlSelfRef.__PVT__buffer_3_rdy = (((~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSelfRef.__PVT__waitMSUpdate_3)))) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.__PVT__buffer_3_waitMP))) 
                                             & (~ (IData)(vlSelfRef.__PVT__s1_Block_3)));
            vlSelfRef.__PVT__buffer_3_waitMS = ((IData)(
                                                        (1U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelfRef.__PVT__buffer_3_waitMP))))
                                                 ? (IData)(vlSelfRef.__PVT___waitMSUpdate_T_587)
                                                 : (IData)(vlSelfRef.__PVT___waitMSUpdate_T_442));
            vlSelfRef.__PVT__buffer_3_waitMP = ((IData)(vlSelfRef.__PVT__s1_Block_3)
                                                 ? (IData)(vlSelfRef.__PVT___buffer_3_waitMP_T_1)
                                                 : (IData)(vlSelfRef.__PVT___buffer_3_waitMP_T));
        } else if (vlSelfRef.__PVT__alloc) {
            if ((3U == (IData)(vlSelfRef.__PVT__insertIdx))) {
                vlSelfRef.__PVT__buffer_3_rdy = (((~ (IData)(
                                                             (0U 
                                                              != (IData)(vlSelfRef.__PVT___canFlow_T_146)))) 
                                                  & (IData)(vlSelfRef.__PVT___canFlow_T_154)) 
                                                 & (~ (IData)(vlSelfRef.__PVT__s1Block)));
                vlSelfRef.__PVT__buffer_3_waitMS = vlSelfRef.__PVT___canFlow_T_146;
                vlSelfRef.__PVT__buffer_3_waitMP = vlSelfRef.__PVT___buffer_waitMP_T;
            }
        }
        if (vlSelfRef.__PVT__REG_7) {
            vlSelfRef.__PVT__bufferTimer_3 = 0U;
        } else if (vlSelfRef.__PVT__buffer_3_valid) {
            vlSelfRef.__PVT__bufferTimer_3 = vlSelfRef.__PVT___bufferTimer_3_T_1;
        }
        if (vlSelfRef.__PVT__buffer_0_valid) {
            vlSelfRef.__PVT__buffer_0_rdy = (((~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSelfRef.__PVT__waitMSUpdate)))) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.__PVT__buffer_0_waitMP))) 
                                             & (~ (IData)(vlSelfRef.__PVT__s1_Block)));
            vlSelfRef.__PVT__buffer_0_waitMS = ((IData)(
                                                        (1U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelfRef.__PVT__buffer_0_waitMP))))
                                                 ? (IData)(vlSelfRef.__PVT___waitMSUpdate_T_146)
                                                 : (IData)(vlSelfRef.__PVT___waitMSUpdate_T_1));
            vlSelfRef.__PVT__buffer_0_waitMP = ((IData)(vlSelfRef.__PVT__s1_Block)
                                                 ? (IData)(vlSelfRef.__PVT___buffer_0_waitMP_T_1)
                                                 : (IData)(vlSelfRef.__PVT___buffer_0_waitMP_T));
        } else if (vlSelfRef.__PVT__alloc) {
            if ((0U == (IData)(vlSelfRef.__PVT__insertIdx))) {
                vlSelfRef.__PVT__buffer_0_rdy = (((~ (IData)(
                                                             (0U 
                                                              != (IData)(vlSelfRef.__PVT___canFlow_T_146)))) 
                                                  & (IData)(vlSelfRef.__PVT___canFlow_T_154)) 
                                                 & (~ (IData)(vlSelfRef.__PVT__s1Block)));
                vlSelfRef.__PVT__buffer_0_waitMS = vlSelfRef.__PVT___canFlow_T_146;
                vlSelfRef.__PVT__buffer_0_waitMP = vlSelfRef.__PVT___buffer_waitMP_T;
            }
        }
        if (vlSelfRef.__PVT__REG_1) {
            vlSelfRef.__PVT__bufferTimer_0 = 0U;
        } else if (vlSelfRef.__PVT__buffer_0_valid) {
            vlSelfRef.__PVT__bufferTimer_0 = vlSelfRef.__PVT___bufferTimer_0_T_1;
        }
        if (vlSelfRef.__PVT__buffer_1_valid) {
            vlSelfRef.__PVT__buffer_1_rdy = (((~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSelfRef.__PVT__waitMSUpdate_1)))) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.__PVT__buffer_1_waitMP))) 
                                             & (~ (IData)(vlSelfRef.__PVT__s1_Block_1)));
            vlSelfRef.__PVT__buffer_1_waitMS = ((IData)(
                                                        (1U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelfRef.__PVT__buffer_1_waitMP))))
                                                 ? (IData)(vlSelfRef.__PVT___waitMSUpdate_T_293)
                                                 : (IData)(vlSelfRef.__PVT___waitMSUpdate_T_148));
            vlSelfRef.__PVT__buffer_1_waitMP = ((IData)(vlSelfRef.__PVT__s1_Block_1)
                                                 ? (IData)(vlSelfRef.__PVT___buffer_1_waitMP_T_1)
                                                 : (IData)(vlSelfRef.__PVT___buffer_1_waitMP_T));
        } else if (vlSelfRef.__PVT__alloc) {
            if ((1U == (IData)(vlSelfRef.__PVT__insertIdx))) {
                vlSelfRef.__PVT__buffer_1_rdy = (((~ (IData)(
                                                             (0U 
                                                              != (IData)(vlSelfRef.__PVT___canFlow_T_146)))) 
                                                  & (IData)(vlSelfRef.__PVT___canFlow_T_154)) 
                                                 & (~ (IData)(vlSelfRef.__PVT__s1Block)));
                vlSelfRef.__PVT__buffer_1_waitMS = vlSelfRef.__PVT___canFlow_T_146;
                vlSelfRef.__PVT__buffer_1_waitMP = vlSelfRef.__PVT___buffer_waitMP_T;
            }
        }
        if (vlSelfRef.__PVT__REG_3) {
            vlSelfRef.__PVT__bufferTimer_1 = 0U;
        } else if (vlSelfRef.__PVT__buffer_1_valid) {
            vlSelfRef.__PVT__bufferTimer_1 = vlSelfRef.__PVT___bufferTimer_1_T_1;
        }
        if (vlSelfRef.__PVT__buffer_2_valid) {
            vlSelfRef.__PVT__buffer_2_rdy = (((~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSelfRef.__PVT__waitMSUpdate_2)))) 
                                              & (0U 
                                                 == (IData)(vlSelfRef.__PVT__buffer_2_waitMP))) 
                                             & (~ (IData)(vlSelfRef.__PVT__s1_Block_2)));
            vlSelfRef.__PVT__buffer_2_waitMS = ((IData)(
                                                        (1U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelfRef.__PVT__buffer_2_waitMP))))
                                                 ? (IData)(vlSelfRef.__PVT___waitMSUpdate_T_440)
                                                 : (IData)(vlSelfRef.__PVT___waitMSUpdate_T_295));
            vlSelfRef.__PVT__buffer_2_waitMP = ((IData)(vlSelfRef.__PVT__s1_Block_2)
                                                 ? (IData)(vlSelfRef.__PVT___buffer_2_waitMP_T_1)
                                                 : (IData)(vlSelfRef.__PVT___buffer_2_waitMP_T));
        } else if (vlSelfRef.__PVT__alloc) {
            if ((2U == (IData)(vlSelfRef.__PVT__insertIdx))) {
                vlSelfRef.__PVT__buffer_2_rdy = (((~ (IData)(
                                                             (0U 
                                                              != (IData)(vlSelfRef.__PVT___canFlow_T_146)))) 
                                                  & (IData)(vlSelfRef.__PVT___canFlow_T_154)) 
                                                 & (~ (IData)(vlSelfRef.__PVT__s1Block)));
                vlSelfRef.__PVT__buffer_2_waitMS = vlSelfRef.__PVT___canFlow_T_146;
                vlSelfRef.__PVT__buffer_2_waitMP = vlSelfRef.__PVT___buffer_waitMP_T;
            }
        }
        if (vlSelfRef.__PVT__REG_5) {
            vlSelfRef.__PVT__bufferTimer_2 = 0U;
        } else if (vlSelfRef.__PVT__buffer_2_valid) {
            vlSelfRef.__PVT__bufferTimer_2 = vlSelfRef.__PVT___bufferTimer_2_T_1;
        }
        if (vlSelfRef.__PVT__alloc) {
            if ((0U == (IData)(vlSelfRef.__PVT__insertIdx))) {
                vlSelfRef.__PVT__buffer_0_task_size 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_size;
                vlSelfRef.__PVT__buffer_0_task_off 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_off;
                vlSelfRef.__PVT__buffer_0_task_alias 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_alias;
                vlSelfRef.__PVT__buffer_0_task_param 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_param;
                vlSelfRef.__PVT__buffer_0_task_sourceId 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_sourceId;
                vlSelfRef.__PVT__buffer_0_task_channel = 1U;
                vlSelfRef.__PVT__buffer_0_task_opcode 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_opcode;
                vlSelfRef.__PVT__buffer_0_task_tag 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag;
                vlSelfRef.__PVT__buffer_0_task_set 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_set;
            }
            if ((1U == (IData)(vlSelfRef.__PVT__insertIdx))) {
                vlSelfRef.__PVT__buffer_1_task_size 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_size;
                vlSelfRef.__PVT__buffer_1_task_off 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_off;
                vlSelfRef.__PVT__buffer_1_task_alias 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_alias;
                vlSelfRef.__PVT__buffer_1_task_param 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_param;
                vlSelfRef.__PVT__buffer_1_task_sourceId 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_sourceId;
                vlSelfRef.__PVT__buffer_1_task_channel = 1U;
                vlSelfRef.__PVT__buffer_1_task_opcode 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_opcode;
                vlSelfRef.__PVT__buffer_1_task_tag 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag;
                vlSelfRef.__PVT__buffer_1_task_set 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_set;
            }
            if ((2U == (IData)(vlSelfRef.__PVT__insertIdx))) {
                vlSelfRef.__PVT__buffer_2_task_size 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_size;
                vlSelfRef.__PVT__buffer_2_task_off 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_off;
                vlSelfRef.__PVT__buffer_2_task_alias 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_alias;
                vlSelfRef.__PVT__buffer_2_task_param 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_param;
                vlSelfRef.__PVT__buffer_2_task_sourceId 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_sourceId;
                vlSelfRef.__PVT__buffer_2_task_channel = 1U;
                vlSelfRef.__PVT__buffer_2_task_opcode 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_opcode;
                vlSelfRef.__PVT__buffer_2_task_tag 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag;
                vlSelfRef.__PVT__buffer_2_task_set 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_set;
            }
            if ((3U == (IData)(vlSelfRef.__PVT__insertIdx))) {
                vlSelfRef.__PVT__buffer_3_task_size 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_size;
                vlSelfRef.__PVT__buffer_3_task_off 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_off;
                vlSelfRef.__PVT__buffer_3_task_alias 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_alias;
                vlSelfRef.__PVT__buffer_3_task_param 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_param;
                vlSelfRef.__PVT__buffer_3_task_sourceId 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_sourceId;
                vlSelfRef.__PVT__buffer_3_task_channel = 1U;
                vlSelfRef.__PVT__buffer_3_task_opcode 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_opcode;
                vlSelfRef.__PVT__buffer_3_task_tag 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag;
                vlSelfRef.__PVT__buffer_3_task_set 
                    = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_set;
            }
        }
    }
    vlSelfRef.__PVT__io_hasLatePF_REG_set = vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_set;
    if (__VdlySet__chosenQ__DOT__ram_bits_task_aliasTask__v0) {
        __PVT__chosenQ__DOT__ram_bits_task_aliasTask[0U] = 0U;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_mshrId__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_mshrId[0U] = 0U;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_reqSource__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_reqSource[0U] = 0U;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_size__v0) {
        __PVT__chosenQ__DOT__ram_bits_task_size[0U] 
            = __VdlyVal__chosenQ__DOT__ram_bits_task_size__v0;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_channel__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_channel[0U] 
            = __VdlyVal__chosenQ__DOT__ram_bits_task_channel__v0;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_opcode__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_opcode[0U] 
            = __VdlyVal__chosenQ__DOT__ram_bits_task_opcode__v0;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_tag__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_tag[0U] 
            = __VdlyVal__chosenQ__DOT__ram_bits_task_tag__v0;
    }
    if (__VdlySet__chosenQ__DOT__ram_bits_task_set__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_set[0U] 
            = __VdlyVal__chosenQ__DOT__ram_bits_task_set__v0;
    }
    vlSelfRef.__PVT__REG_7 = ((IData)(vlSelfRef.__PVT__REG_6) 
                              & (~ (IData)(vlSelfRef.__PVT__buffer_3_valid)));
    vlSelfRef.__PVT__REG_6 = vlSelfRef.__PVT__buffer_3_valid;
    __Vdly__REG = vlSelfRef.__PVT__buffer_0_valid;
    __Vdly__REG_2 = vlSelfRef.__PVT__buffer_1_valid;
    __Vdly__REG_4 = vlSelfRef.__PVT__buffer_2_valid;
    __PVT__issueArb__DOT___rrSelOH_T = ((IData)(vlSelfRef.__PVT__issueArb__DOT__pendingMask) 
                                        & (IData)(vlSelfRef.__PVT__issueArb__DOT__rrGrantMask));
    vlSelfRef.__PVT___bufferTimer_3_T_1 = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__bufferTimer_3)));
    vlSelfRef.__PVT___buffer_3_waitMP_T_1 = (4U | (IData)(vlSelfRef.__PVT__buffer_3_waitMP));
    vlSelfRef.__PVT___buffer_3_waitMP_T = (0xfU & VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.__PVT__buffer_3_waitMP), 1U));
    vlSelfRef.__PVT__buffer_3_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && (((IData)(vlSelfRef.__PVT__chosenQ__DOT__do_deq) 
                                            & (IData)(vlSelfRef.__PVT___io_out_valid_T))
                                            ? ((3U 
                                                != 
                                                vlSelfRef.__PVT__chosenQ__DOT__ram_id
                                                [0U]) 
                                               && (IData)(vlSelfRef.__PVT___GEN_131))
                                            : (IData)(vlSelfRef.__PVT___GEN_131)));
    vlSelfRef.__PVT___bufferTimer_0_T_1 = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__bufferTimer_0)));
    vlSelfRef.__PVT___buffer_0_waitMP_T_1 = (4U | (IData)(vlSelfRef.__PVT__buffer_0_waitMP));
    vlSelfRef.__PVT___buffer_0_waitMP_T = (0xfU & VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.__PVT__buffer_0_waitMP), 1U));
    vlSelfRef.__PVT__REG_1 = ((IData)(vlSelfRef.__PVT__REG) 
                              & (~ (IData)(vlSelfRef.__PVT__buffer_0_valid)));
    vlSelfRef.__PVT___bufferTimer_1_T_1 = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__bufferTimer_1)));
    vlSelfRef.__PVT___buffer_1_waitMP_T_1 = (4U | (IData)(vlSelfRef.__PVT__buffer_1_waitMP));
    vlSelfRef.__PVT___buffer_1_waitMP_T = (0xfU & VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.__PVT__buffer_1_waitMP), 1U));
    vlSelfRef.__PVT__REG_3 = ((IData)(vlSelfRef.__PVT__REG_2) 
                              & (~ (IData)(vlSelfRef.__PVT__buffer_1_valid)));
    vlSelfRef.__PVT___bufferTimer_2_T_1 = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__bufferTimer_2)));
    vlSelfRef.__PVT___buffer_2_waitMP_T_1 = (4U | (IData)(vlSelfRef.__PVT__buffer_2_waitMP));
    vlSelfRef.__PVT___buffer_2_waitMP_T = (0xfU & VL_SHIFTR_III(4,4,32, (IData)(vlSelfRef.__PVT__buffer_2_waitMP), 1U));
    vlSelfRef.__PVT__REG_5 = ((IData)(vlSelfRef.__PVT__REG_4) 
                              & (~ (IData)(vlSelfRef.__PVT__buffer_2_valid)));
    vlSelfRef.__PVT__issueArb__DOT__rrSelOH = ((((IData)(
                                                         (((IData)(__PVT__issueArb__DOT___rrSelOH_T) 
                                                           >> 3U) 
                                                          & (~ (IData)(
                                                                       (0U 
                                                                        != 
                                                                        (7U 
                                                                         & (IData)(__PVT__issueArb__DOT___rrSelOH_T))))))) 
                                                 << 3U) 
                                                | (4U 
                                                   & (((~ 
                                                        ((IData)(__PVT__issueArb__DOT___rrSelOH_T) 
                                                         | ((IData)(__PVT__issueArb__DOT___rrSelOH_T) 
                                                            >> 1U))) 
                                                       << 2U) 
                                                      & (IData)(__PVT__issueArb__DOT___rrSelOH_T)))) 
                                               | (((IData)(
                                                           (2U 
                                                            == 
                                                            (3U 
                                                             & (IData)(__PVT__issueArb__DOT___rrSelOH_T)))) 
                                                   << 1U) 
                                                  | (1U 
                                                     & (IData)(__PVT__issueArb__DOT___rrSelOH_T))));
    vlSelfRef.__PVT__REG = __Vdly__REG;
    vlSelfRef.__PVT__REG_2 = __Vdly__REG_2;
    vlSelfRef.__PVT__REG_4 = __Vdly__REG_4;
    vlSelfRef.__PVT__buffer_0_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && (((IData)(vlSelfRef.__PVT__chosenQ__DOT__do_deq) 
                                            & (IData)(vlSelfRef.__PVT___io_out_valid_T))
                                            ? ((0U 
                                                != 
                                                vlSelfRef.__PVT__chosenQ__DOT__ram_id
                                                [0U]) 
                                               && (IData)(vlSelfRef.__PVT___GEN_128))
                                            : (IData)(vlSelfRef.__PVT___GEN_128)));
    vlSelfRef.__PVT__buffer_1_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && (((IData)(vlSelfRef.__PVT__chosenQ__DOT__do_deq) 
                                            & (IData)(vlSelfRef.__PVT___io_out_valid_T))
                                            ? ((1U 
                                                != 
                                                vlSelfRef.__PVT__chosenQ__DOT__ram_id
                                                [0U]) 
                                               && (IData)(vlSelfRef.__PVT___GEN_129))
                                            : (IData)(vlSelfRef.__PVT___GEN_129)));
    vlSelfRef.__PVT__buffer_2_valid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                                       && (((IData)(vlSelfRef.__PVT__chosenQ__DOT__do_deq) 
                                            & (IData)(vlSelfRef.__PVT___io_out_valid_T))
                                            ? ((2U 
                                                != 
                                                vlSelfRef.__PVT__chosenQ__DOT__ram_id
                                                [0U]) 
                                               && (IData)(vlSelfRef.__PVT___GEN_130))
                                            : (IData)(vlSelfRef.__PVT___GEN_130)));
    if (__VdlySet__chosenQ__DOT__ram_id__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_id[0U] = __VdlyVal__chosenQ__DOT__ram_id__v0;
    }
    vlSelfRef.__PVT___io_out_valid_T = ((3U == vlSelfRef.__PVT__chosenQ__DOT__ram_id
                                         [0U]) ? (IData)(vlSelfRef.__PVT__buffer_3_rdy)
                                         : ((2U == 
                                             vlSelfRef.__PVT__chosenQ__DOT__ram_id
                                             [0U]) ? (IData)(vlSelfRef.__PVT__buffer_2_rdy)
                                             : ((1U 
                                                 == 
                                                 vlSelfRef.__PVT__chosenQ__DOT__ram_id
                                                 [0U])
                                                 ? (IData)(vlSelfRef.__PVT__buffer_1_rdy)
                                                 : (IData)(vlSelfRef.__PVT__buffer_0_rdy))));
    vlSelfRef.__PVT__insertIdx = ((IData)(vlSelfRef.__PVT__buffer_0_valid)
                                   ? ((IData)(vlSelfRef.__PVT__buffer_1_valid)
                                       ? ((IData)(vlSelfRef.__PVT__buffer_2_valid)
                                           ? 3U : 2U)
                                       : 1U) : 0U);
    vlSelfRef.__PVT___canFlow_T = (1U & (~ ((IData)(vlSelfRef.__PVT__buffer_0_valid) 
                                            & ((IData)(vlSelfRef.__PVT__buffer_1_valid) 
                                               & ((IData)(vlSelfRef.__PVT__buffer_2_valid) 
                                                  & (IData)(vlSelfRef.__PVT__buffer_3_valid))))));
}

VL_INLINE_OPT void VTestTop_L2L3L2_RequestBuffer___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__a_reqBuf__1(VTestTop_L2L3L2_RequestBuffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_RequestBuffer___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__a_reqBuf__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__issueArb_io_in_0_valid;
    __PVT__issueArb_io_in_0_valid = 0;
    CData/*0:0*/ __PVT__issueArb_io_in_1_valid;
    __PVT__issueArb_io_in_1_valid = 0;
    CData/*0:0*/ __PVT__issueArb_io_in_2_valid;
    __PVT__issueArb_io_in_2_valid = 0;
    CData/*0:0*/ __PVT__issueArb_io_in_3_valid;
    __PVT__issueArb_io_in_3_valid = 0;
    SData/*15:0*/ __PVT___waitMSUpdate_T;
    __PVT___waitMSUpdate_T = 0;
    // Body
    __PVT___waitMSUpdate_T = (0xffffU & (~ (((((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__io_msInfo_bits_willFree) 
                                                 & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_valid)) 
                                                << 0xfU) 
                                               | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__io_msInfo_bits_willFree) 
                                                   & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_valid)) 
                                                  << 0xeU)) 
                                              | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__io_msInfo_bits_willFree) 
                                                   & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_valid)) 
                                                  << 0xdU) 
                                                 | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__io_msInfo_bits_willFree) 
                                                     & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_valid)) 
                                                    << 0xcU))) 
                                             | (((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__io_msInfo_bits_willFree) 
                                                   & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_valid)) 
                                                  << 0xbU) 
                                                 | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__io_msInfo_bits_willFree) 
                                                     & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_valid)) 
                                                    << 0xaU)) 
                                                | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__io_msInfo_bits_willFree) 
                                                     & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_valid)) 
                                                    << 9U) 
                                                   | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__io_msInfo_bits_willFree) 
                                                       & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_valid)) 
                                                      << 8U)))) 
                                            | ((((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__io_msInfo_bits_willFree) 
                                                   & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_valid)) 
                                                  << 7U) 
                                                 | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__io_msInfo_bits_willFree) 
                                                     & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_valid)) 
                                                    << 6U)) 
                                                | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__io_msInfo_bits_willFree) 
                                                     & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_valid)) 
                                                    << 5U) 
                                                   | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__io_msInfo_bits_willFree) 
                                                       & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_valid)) 
                                                      << 4U))) 
                                               | (((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_msInfo_bits_willFree) 
                                                     & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid)) 
                                                    << 3U) 
                                                   | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_msInfo_bits_willFree) 
                                                       & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid)) 
                                                      << 2U)) 
                                                  | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_msInfo_bits_willFree) 
                                                       & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid)) 
                                                      << 1U) 
                                                     | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_msInfo_bits_willFree) 
                                                        & (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid))))))));
    vlSelfRef.__PVT___waitMSUpdate_T_146 = (((((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_valid) 
                                                 & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__io_msInfo_bits_willFree)) 
                                                    & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_set)) 
                                                       & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                           == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_tag)) 
                                                          | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                              == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__dirResult_tag)) 
                                                             & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__state_w_releaseack))))))) 
                                                << 0xfU) 
                                               | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_valid) 
                                                   & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__io_msInfo_bits_willFree)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_set)) 
                                                         & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_tag)) 
                                                            | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__dirResult_tag)) 
                                                               & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__state_w_releaseack))))))) 
                                                  << 0xeU)) 
                                              | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_valid) 
                                                   & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__io_msInfo_bits_willFree)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_set)) 
                                                         & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_tag)) 
                                                            | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__dirResult_tag)) 
                                                               & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__state_w_releaseack))))))) 
                                                  << 0xdU) 
                                                 | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__state_w_releaseack))))))) 
                                                    << 0xcU))) 
                                             | (((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_valid) 
                                                   & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__io_msInfo_bits_willFree)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_set)) 
                                                         & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_tag)) 
                                                            | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__dirResult_tag)) 
                                                               & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__state_w_releaseack))))))) 
                                                  << 0xbU) 
                                                 | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__state_w_releaseack))))))) 
                                                    << 0xaU)) 
                                                | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__state_w_releaseack))))))) 
                                                    << 9U) 
                                                   | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_valid) 
                                                       & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__io_msInfo_bits_willFree)) 
                                                          & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                              == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_set)) 
                                                             & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                                 == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_tag)) 
                                                                | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                                    == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__dirResult_tag)) 
                                                                   & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__state_w_releaseack))))))) 
                                                      << 8U)))) 
                                            | ((((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_valid) 
                                                   & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__io_msInfo_bits_willFree)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_set)) 
                                                         & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_tag)) 
                                                            | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__dirResult_tag)) 
                                                               & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__state_w_releaseack))))))) 
                                                  << 7U) 
                                                 | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__state_w_releaseack))))))) 
                                                    << 6U)) 
                                                | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__state_w_releaseack))))))) 
                                                    << 5U) 
                                                   | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_valid) 
                                                       & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__io_msInfo_bits_willFree)) 
                                                          & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                              == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_set)) 
                                                             & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                                 == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_tag)) 
                                                                | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                                    == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__dirResult_tag)) 
                                                                   & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__state_w_releaseack))))))) 
                                                      << 4U))) 
                                               | (((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__state_w_releaseack))))))) 
                                                    << 3U) 
                                                   | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid) 
                                                       & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_msInfo_bits_willFree)) 
                                                          & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                              == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_set)) 
                                                             & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                                 == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_tag)) 
                                                                | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                                    == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_tag)) 
                                                                   & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__state_w_releaseack))))))) 
                                                      << 2U)) 
                                                  | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid) 
                                                       & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_msInfo_bits_willFree)) 
                                                          & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                              == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_set)) 
                                                             & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                                 == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_tag)) 
                                                                | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                                    == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_tag)) 
                                                                   & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__state_w_releaseack))))))) 
                                                      << 1U) 
                                                     | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                                                        & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_msInfo_bits_willFree)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set)) 
                                                              & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_tag)) 
                                                                 | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_tag)) 
                                                                    & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__state_w_releaseack)))))))))));
    vlSelfRef.__PVT___waitMSUpdate_T_293 = (((((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_valid) 
                                                 & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__io_msInfo_bits_willFree)) 
                                                    & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_set)) 
                                                       & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                           == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_tag)) 
                                                          | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                              == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__dirResult_tag)) 
                                                             & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__state_w_releaseack))))))) 
                                                << 0xfU) 
                                               | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_valid) 
                                                   & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__io_msInfo_bits_willFree)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_set)) 
                                                         & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_tag)) 
                                                            | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__dirResult_tag)) 
                                                               & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__state_w_releaseack))))))) 
                                                  << 0xeU)) 
                                              | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_valid) 
                                                   & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__io_msInfo_bits_willFree)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_set)) 
                                                         & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_tag)) 
                                                            | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__dirResult_tag)) 
                                                               & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__state_w_releaseack))))))) 
                                                  << 0xdU) 
                                                 | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__state_w_releaseack))))))) 
                                                    << 0xcU))) 
                                             | (((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_valid) 
                                                   & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__io_msInfo_bits_willFree)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_set)) 
                                                         & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_tag)) 
                                                            | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__dirResult_tag)) 
                                                               & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__state_w_releaseack))))))) 
                                                  << 0xbU) 
                                                 | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__state_w_releaseack))))))) 
                                                    << 0xaU)) 
                                                | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__state_w_releaseack))))))) 
                                                    << 9U) 
                                                   | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_valid) 
                                                       & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__io_msInfo_bits_willFree)) 
                                                          & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                              == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_set)) 
                                                             & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                                 == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_tag)) 
                                                                | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                                    == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__dirResult_tag)) 
                                                                   & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__state_w_releaseack))))))) 
                                                      << 8U)))) 
                                            | ((((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_valid) 
                                                   & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__io_msInfo_bits_willFree)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_set)) 
                                                         & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_tag)) 
                                                            | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__dirResult_tag)) 
                                                               & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__state_w_releaseack))))))) 
                                                  << 7U) 
                                                 | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__state_w_releaseack))))))) 
                                                    << 6U)) 
                                                | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__state_w_releaseack))))))) 
                                                    << 5U) 
                                                   | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_valid) 
                                                       & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__io_msInfo_bits_willFree)) 
                                                          & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                              == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_set)) 
                                                             & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                                 == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_tag)) 
                                                                | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                                    == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__dirResult_tag)) 
                                                                   & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__state_w_releaseack))))))) 
                                                      << 4U))) 
                                               | (((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__state_w_releaseack))))))) 
                                                    << 3U) 
                                                   | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid) 
                                                       & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_msInfo_bits_willFree)) 
                                                          & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                              == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_set)) 
                                                             & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                                 == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_tag)) 
                                                                | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                                    == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_tag)) 
                                                                   & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__state_w_releaseack))))))) 
                                                      << 2U)) 
                                                  | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid) 
                                                       & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_msInfo_bits_willFree)) 
                                                          & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                              == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_set)) 
                                                             & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                                 == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_tag)) 
                                                                | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                                    == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_tag)) 
                                                                   & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__state_w_releaseack))))))) 
                                                      << 1U) 
                                                     | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                                                        & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_msInfo_bits_willFree)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set)) 
                                                              & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_tag)) 
                                                                 | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_tag)) 
                                                                    & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__state_w_releaseack)))))))))));
    vlSelfRef.__PVT___waitMSUpdate_T_440 = (((((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_valid) 
                                                 & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__io_msInfo_bits_willFree)) 
                                                    & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_set)) 
                                                       & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                           == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_tag)) 
                                                          | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                              == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__dirResult_tag)) 
                                                             & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__state_w_releaseack))))))) 
                                                << 0xfU) 
                                               | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_valid) 
                                                   & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__io_msInfo_bits_willFree)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_set)) 
                                                         & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_tag)) 
                                                            | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__dirResult_tag)) 
                                                               & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__state_w_releaseack))))))) 
                                                  << 0xeU)) 
                                              | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_valid) 
                                                   & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__io_msInfo_bits_willFree)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_set)) 
                                                         & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_tag)) 
                                                            | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__dirResult_tag)) 
                                                               & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__state_w_releaseack))))))) 
                                                  << 0xdU) 
                                                 | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__state_w_releaseack))))))) 
                                                    << 0xcU))) 
                                             | (((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_valid) 
                                                   & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__io_msInfo_bits_willFree)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_set)) 
                                                         & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_tag)) 
                                                            | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__dirResult_tag)) 
                                                               & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__state_w_releaseack))))))) 
                                                  << 0xbU) 
                                                 | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__state_w_releaseack))))))) 
                                                    << 0xaU)) 
                                                | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__state_w_releaseack))))))) 
                                                    << 9U) 
                                                   | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_valid) 
                                                       & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__io_msInfo_bits_willFree)) 
                                                          & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                              == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_set)) 
                                                             & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                                 == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_tag)) 
                                                                | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                                    == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__dirResult_tag)) 
                                                                   & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__state_w_releaseack))))))) 
                                                      << 8U)))) 
                                            | ((((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_valid) 
                                                   & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__io_msInfo_bits_willFree)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_set)) 
                                                         & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_tag)) 
                                                            | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__dirResult_tag)) 
                                                               & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__state_w_releaseack))))))) 
                                                  << 7U) 
                                                 | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__state_w_releaseack))))))) 
                                                    << 6U)) 
                                                | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__state_w_releaseack))))))) 
                                                    << 5U) 
                                                   | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_valid) 
                                                       & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__io_msInfo_bits_willFree)) 
                                                          & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                              == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_set)) 
                                                             & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                                 == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_tag)) 
                                                                | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                                    == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__dirResult_tag)) 
                                                                   & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__state_w_releaseack))))))) 
                                                      << 4U))) 
                                               | (((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__state_w_releaseack))))))) 
                                                    << 3U) 
                                                   | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid) 
                                                       & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_msInfo_bits_willFree)) 
                                                          & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                              == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_set)) 
                                                             & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                                 == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_tag)) 
                                                                | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                                    == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_tag)) 
                                                                   & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__state_w_releaseack))))))) 
                                                      << 2U)) 
                                                  | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid) 
                                                       & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_msInfo_bits_willFree)) 
                                                          & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                              == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_set)) 
                                                             & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                                 == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_tag)) 
                                                                | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                                    == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_tag)) 
                                                                   & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__state_w_releaseack))))))) 
                                                      << 1U) 
                                                     | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                                                        & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_msInfo_bits_willFree)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set)) 
                                                              & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_tag)) 
                                                                 | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_tag)) 
                                                                    & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__state_w_releaseack)))))))))));
    vlSelfRef.__PVT___waitMSUpdate_T_587 = (((((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_valid) 
                                                 & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__io_msInfo_bits_willFree)) 
                                                    & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_set)) 
                                                       & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                           == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_tag)) 
                                                          | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                              == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__dirResult_tag)) 
                                                             & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__state_w_releaseack))))))) 
                                                << 0xfU) 
                                               | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_valid) 
                                                   & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__io_msInfo_bits_willFree)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_set)) 
                                                         & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_tag)) 
                                                            | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__dirResult_tag)) 
                                                               & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__state_w_releaseack))))))) 
                                                  << 0xeU)) 
                                              | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_valid) 
                                                   & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__io_msInfo_bits_willFree)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_set)) 
                                                         & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_tag)) 
                                                            | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__dirResult_tag)) 
                                                               & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__state_w_releaseack))))))) 
                                                  << 0xdU) 
                                                 | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__state_w_releaseack))))))) 
                                                    << 0xcU))) 
                                             | (((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_valid) 
                                                   & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__io_msInfo_bits_willFree)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_set)) 
                                                         & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_tag)) 
                                                            | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__dirResult_tag)) 
                                                               & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__state_w_releaseack))))))) 
                                                  << 0xbU) 
                                                 | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__state_w_releaseack))))))) 
                                                    << 0xaU)) 
                                                | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__state_w_releaseack))))))) 
                                                    << 9U) 
                                                   | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_valid) 
                                                       & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__io_msInfo_bits_willFree)) 
                                                          & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                              == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_set)) 
                                                             & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                                 == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_tag)) 
                                                                | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                                    == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__dirResult_tag)) 
                                                                   & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__state_w_releaseack))))))) 
                                                      << 8U)))) 
                                            | ((((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_valid) 
                                                   & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__io_msInfo_bits_willFree)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_set)) 
                                                         & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_tag)) 
                                                            | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__dirResult_tag)) 
                                                               & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__state_w_releaseack))))))) 
                                                  << 7U) 
                                                 | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__state_w_releaseack))))))) 
                                                    << 6U)) 
                                                | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__state_w_releaseack))))))) 
                                                    << 5U) 
                                                   | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_valid) 
                                                       & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__io_msInfo_bits_willFree)) 
                                                          & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                              == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_set)) 
                                                             & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                                 == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_tag)) 
                                                                | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                                    == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__dirResult_tag)) 
                                                                   & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__state_w_releaseack))))))) 
                                                      << 4U))) 
                                               | (((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid) 
                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_msInfo_bits_willFree)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_set)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_tag)) 
                                                              | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_tag)) 
                                                                 & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__state_w_releaseack))))))) 
                                                    << 3U) 
                                                   | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid) 
                                                       & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_msInfo_bits_willFree)) 
                                                          & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                              == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_set)) 
                                                             & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                                 == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_tag)) 
                                                                | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                                    == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_tag)) 
                                                                   & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__state_w_releaseack))))))) 
                                                      << 2U)) 
                                                  | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid) 
                                                       & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_msInfo_bits_willFree)) 
                                                          & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                              == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_set)) 
                                                             & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                                 == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_tag)) 
                                                                | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                                    == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_tag)) 
                                                                   & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__state_w_releaseack))))))) 
                                                      << 1U) 
                                                     | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                                                        & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_msInfo_bits_willFree)) 
                                                           & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set)) 
                                                              & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_tag)) 
                                                                 | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_tag)) 
                                                                    & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__state_w_releaseack)))))))))));
    vlSelfRef.__VdfgRegularize_ha1527a7f_2_0 = ((6U 
                                                 == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_opcode)) 
                                                | (7U 
                                                   == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_opcode)));
    vlSelfRef.__PVT___canFlow_T_146 = (((((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_valid) 
                                            & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__io_msInfo_bits_willFree)) 
                                               & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                   == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_set)) 
                                                  & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                      == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_tag)) 
                                                     | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                         == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__dirResult_tag)) 
                                                        & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__state_w_releaseack))))))) 
                                           << 0xfU) 
                                          | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_valid) 
                                              & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__io_msInfo_bits_willFree)) 
                                                 & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_set)) 
                                                    & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_tag)) 
                                                       | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                           == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__dirResult_tag)) 
                                                          & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__state_w_releaseack))))))) 
                                             << 0xeU)) 
                                         | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_valid) 
                                              & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__io_msInfo_bits_willFree)) 
                                                 & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_set)) 
                                                    & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_tag)) 
                                                       | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                           == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__dirResult_tag)) 
                                                          & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__state_w_releaseack))))))) 
                                             << 0xdU) 
                                            | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_valid) 
                                                & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__io_msInfo_bits_willFree)) 
                                                   & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                       == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_set)) 
                                                      & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_tag)) 
                                                         | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__dirResult_tag)) 
                                                            & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__state_w_releaseack))))))) 
                                               << 0xcU))) 
                                        | (((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_valid) 
                                              & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__io_msInfo_bits_willFree)) 
                                                 & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_set)) 
                                                    & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_tag)) 
                                                       | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                           == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__dirResult_tag)) 
                                                          & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__state_w_releaseack))))))) 
                                             << 0xbU) 
                                            | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_valid) 
                                                & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__io_msInfo_bits_willFree)) 
                                                   & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                       == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_set)) 
                                                      & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_tag)) 
                                                         | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__dirResult_tag)) 
                                                            & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__state_w_releaseack))))))) 
                                               << 0xaU)) 
                                           | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_valid) 
                                                & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__io_msInfo_bits_willFree)) 
                                                   & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                       == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_set)) 
                                                      & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_tag)) 
                                                         | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__dirResult_tag)) 
                                                            & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__state_w_releaseack))))))) 
                                               << 9U) 
                                              | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_valid) 
                                                  & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__io_msInfo_bits_willFree)) 
                                                     & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                         == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_set)) 
                                                        & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_tag)) 
                                                           | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__dirResult_tag)) 
                                                              & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__state_w_releaseack))))))) 
                                                 << 8U)))) 
                                       | ((((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_valid) 
                                              & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__io_msInfo_bits_willFree)) 
                                                 & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_set)) 
                                                    & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_tag)) 
                                                       | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                           == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__dirResult_tag)) 
                                                          & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__state_w_releaseack))))))) 
                                             << 7U) 
                                            | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_valid) 
                                                & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__io_msInfo_bits_willFree)) 
                                                   & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                       == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_set)) 
                                                      & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_tag)) 
                                                         | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__dirResult_tag)) 
                                                            & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__state_w_releaseack))))))) 
                                               << 6U)) 
                                           | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_valid) 
                                                & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__io_msInfo_bits_willFree)) 
                                                   & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                       == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_set)) 
                                                      & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_tag)) 
                                                         | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__dirResult_tag)) 
                                                            & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__state_w_releaseack))))))) 
                                               << 5U) 
                                              | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_valid) 
                                                  & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__io_msInfo_bits_willFree)) 
                                                     & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                         == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_set)) 
                                                        & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_tag)) 
                                                           | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__dirResult_tag)) 
                                                              & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__state_w_releaseack))))))) 
                                                 << 4U))) 
                                          | (((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid) 
                                                & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_msInfo_bits_willFree)) 
                                                   & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                       == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_set)) 
                                                      & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_tag)) 
                                                         | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_tag)) 
                                                            & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__state_w_releaseack))))))) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid) 
                                                  & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_msInfo_bits_willFree)) 
                                                     & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                         == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_set)) 
                                                        & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_tag)) 
                                                           | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_tag)) 
                                                              & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__state_w_releaseack))))))) 
                                                 << 2U)) 
                                             | ((((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid) 
                                                  & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_msInfo_bits_willFree)) 
                                                     & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                         == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_set)) 
                                                        & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_tag)) 
                                                           | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_tag)) 
                                                              & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__state_w_releaseack))))))) 
                                                 << 1U) 
                                                | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                                                   & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_msInfo_bits_willFree)) 
                                                      & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                                          == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set)) 
                                                         & (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_tag)) 
                                                            | (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_tag)) 
                                                               & (~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__state_w_releaseack)))))))))));
    vlSelfRef.__PVT___io_hasLatePF_T_1 = (((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_tag) 
                                           << 7U) | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_set));
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_bufIdx__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_bufIdx[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_needProbeAckData__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_needProbeAckData[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_mshrTask__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_mshrTask[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_useProbeData__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_useProbeData[0U] = 0U;
    }
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_dirty__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_dirty[0U] = 0U;
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
    if (vlSelfRef.__VdlySet__chosenQ__DOT__ram_bits_task_sourceId__v0) {
        vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_sourceId[0U] 
            = vlSelfRef.__VdlyVal__chosenQ__DOT__ram_bits_task_sourceId__v0;
    }
    vlSelfRef.__PVT___canFlow_T_154 = (1U & (~ ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toReqBuf_0) 
                                                | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toReqBuf_1))));
    vlSelfRef.__PVT___waitMSUpdate_T_1 = ((IData)(__PVT___waitMSUpdate_T) 
                                          & (IData)(vlSelfRef.__PVT__buffer_0_waitMS));
    vlSelfRef.__PVT___waitMSUpdate_T_148 = ((IData)(__PVT___waitMSUpdate_T) 
                                            & (IData)(vlSelfRef.__PVT__buffer_1_waitMS));
    vlSelfRef.__PVT___waitMSUpdate_T_295 = ((IData)(__PVT___waitMSUpdate_T) 
                                            & (IData)(vlSelfRef.__PVT__buffer_2_waitMS));
    vlSelfRef.__PVT___waitMSUpdate_T_442 = ((IData)(__PVT___waitMSUpdate_T) 
                                            & (IData)(vlSelfRef.__PVT__buffer_3_waitMS));
    vlSelfRef.__PVT___io_hasLatePF_T_213 = ((IData)(vlSelfRef.__PVT___io_hasLatePF_T_1) 
                                            == (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_tag) 
                                                 << 7U) 
                                                | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_set)));
    vlSelfRef.__PVT___io_hasLatePF_T_199 = ((IData)(vlSelfRef.__PVT___io_hasLatePF_T_1) 
                                            == (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_tag) 
                                                 << 7U) 
                                                | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_set)));
    vlSelfRef.__PVT___io_hasLatePF_T_185 = ((IData)(vlSelfRef.__PVT___io_hasLatePF_T_1) 
                                            == (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_tag) 
                                                 << 7U) 
                                                | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_set)));
    vlSelfRef.__PVT___io_hasLatePF_T_171 = ((IData)(vlSelfRef.__PVT___io_hasLatePF_T_1) 
                                            == (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_tag) 
                                                 << 7U) 
                                                | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_set)));
    vlSelfRef.__PVT___io_hasLatePF_T_157 = ((IData)(vlSelfRef.__PVT___io_hasLatePF_T_1) 
                                            == (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_tag) 
                                                 << 7U) 
                                                | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_set)));
    vlSelfRef.__PVT___io_hasLatePF_T_143 = ((IData)(vlSelfRef.__PVT___io_hasLatePF_T_1) 
                                            == (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_tag) 
                                                 << 7U) 
                                                | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_set)));
    vlSelfRef.__PVT___io_hasLatePF_T_129 = ((IData)(vlSelfRef.__PVT___io_hasLatePF_T_1) 
                                            == (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_tag) 
                                                 << 7U) 
                                                | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_set)));
    vlSelfRef.__PVT___io_hasLatePF_T_115 = ((IData)(vlSelfRef.__PVT___io_hasLatePF_T_1) 
                                            == (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_tag) 
                                                 << 7U) 
                                                | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_set)));
    vlSelfRef.__PVT___io_hasLatePF_T_101 = ((IData)(vlSelfRef.__PVT___io_hasLatePF_T_1) 
                                            == (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_tag) 
                                                 << 7U) 
                                                | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_set)));
    vlSelfRef.__PVT___io_hasLatePF_T_87 = ((IData)(vlSelfRef.__PVT___io_hasLatePF_T_1) 
                                           == (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_tag) 
                                                << 7U) 
                                               | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_set)));
    vlSelfRef.__PVT___io_hasLatePF_T_73 = ((IData)(vlSelfRef.__PVT___io_hasLatePF_T_1) 
                                           == (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_tag) 
                                                << 7U) 
                                               | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_set)));
    vlSelfRef.__PVT___io_hasLatePF_T_59 = ((IData)(vlSelfRef.__PVT___io_hasLatePF_T_1) 
                                           == (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_tag) 
                                                << 7U) 
                                               | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_set)));
    vlSelfRef.__PVT___io_hasLatePF_T_45 = ((IData)(vlSelfRef.__PVT___io_hasLatePF_T_1) 
                                           == (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_tag) 
                                                << 7U) 
                                               | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_set)));
    vlSelfRef.__PVT___io_hasLatePF_T_31 = ((IData)(vlSelfRef.__PVT___io_hasLatePF_T_1) 
                                           == (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_tag) 
                                                << 7U) 
                                               | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_set)));
    vlSelfRef.__PVT___io_hasLatePF_T_17 = ((IData)(vlSelfRef.__PVT___io_hasLatePF_T_1) 
                                           == (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_tag) 
                                                << 7U) 
                                               | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_set)));
    vlSelfRef.__PVT___io_hasLatePF_T_3 = ((IData)(vlSelfRef.__PVT___io_hasLatePF_T_1) 
                                          == (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_tag) 
                                               << 7U) 
                                              | (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set)));
    vlSelfRef.__PVT__canFlow = ((IData)(vlSelfRef.__PVT___canFlow_T) 
                                & ((~ (IData)((0U != (IData)(vlSelfRef.__PVT___canFlow_T_146)))) 
                                   & ((~ (IData)(vlSelfRef.__PVT__chosenQ__DOT__maybe_full)) 
                                      & (IData)(vlSelfRef.__PVT___canFlow_T_154))));
    vlSelfRef.__PVT__waitMSUpdate = ((IData)((1U == 
                                              (3U & (IData)(vlSelfRef.__PVT__buffer_0_waitMP))))
                                      ? (IData)(vlSelfRef.__PVT___waitMSUpdate_T_146)
                                      : (IData)(vlSelfRef.__PVT___waitMSUpdate_T_1));
    vlSelfRef.__PVT__waitMSUpdate_1 = ((IData)((1U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelfRef.__PVT__buffer_1_waitMP))))
                                        ? (IData)(vlSelfRef.__PVT___waitMSUpdate_T_293)
                                        : (IData)(vlSelfRef.__PVT___waitMSUpdate_T_148));
    vlSelfRef.__PVT__waitMSUpdate_2 = ((IData)((1U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelfRef.__PVT__buffer_2_waitMP))))
                                        ? (IData)(vlSelfRef.__PVT___waitMSUpdate_T_440)
                                        : (IData)(vlSelfRef.__PVT___waitMSUpdate_T_295));
    vlSelfRef.__PVT__waitMSUpdate_3 = ((IData)((1U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelfRef.__PVT__buffer_3_waitMP))))
                                        ? (IData)(vlSelfRef.__PVT___waitMSUpdate_T_587)
                                        : (IData)(vlSelfRef.__PVT___waitMSUpdate_T_442));
    vlSelfRef.io_hasLatePF = ((((5U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_opcode)) 
                                & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_valid) 
                                    & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__io_msInfo_bits_willFree)) 
                                       & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_213))) 
                                   & (IData)(vlSelfRef.__VdfgRegularize_ha1527a7f_2_0))) 
                               | (((5U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_opcode)) 
                                   & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_valid) 
                                       & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__io_msInfo_bits_willFree)) 
                                          & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_199))) 
                                      & (IData)(vlSelfRef.__VdfgRegularize_ha1527a7f_2_0))) 
                                  | (((5U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_opcode)) 
                                      & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_valid) 
                                          & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__io_msInfo_bits_willFree)) 
                                             & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_185))) 
                                         & (IData)(vlSelfRef.__VdfgRegularize_ha1527a7f_2_0))) 
                                     | (((5U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_opcode)) 
                                         & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_valid) 
                                             & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__io_msInfo_bits_willFree)) 
                                                & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_171))) 
                                            & (IData)(vlSelfRef.__VdfgRegularize_ha1527a7f_2_0))) 
                                        | (((5U == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_opcode)) 
                                            & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_valid) 
                                                & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__io_msInfo_bits_willFree)) 
                                                   & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_157))) 
                                               & (IData)(vlSelfRef.__VdfgRegularize_ha1527a7f_2_0))) 
                                           | (((5U 
                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_opcode)) 
                                               & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_valid) 
                                                   & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__io_msInfo_bits_willFree)) 
                                                      & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_143))) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_ha1527a7f_2_0))) 
                                              | (((5U 
                                                   == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_opcode)) 
                                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_valid) 
                                                      & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__io_msInfo_bits_willFree)) 
                                                         & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_129))) 
                                                     & (IData)(vlSelfRef.__VdfgRegularize_ha1527a7f_2_0))) 
                                                 | (((5U 
                                                      == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_opcode)) 
                                                     & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_valid) 
                                                         & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__io_msInfo_bits_willFree)) 
                                                            & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_115))) 
                                                        & (IData)(vlSelfRef.__VdfgRegularize_ha1527a7f_2_0))) 
                                                    | (((5U 
                                                         == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_opcode)) 
                                                        & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_valid) 
                                                            & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__io_msInfo_bits_willFree)) 
                                                               & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_101))) 
                                                           & (IData)(vlSelfRef.__VdfgRegularize_ha1527a7f_2_0))) 
                                                       | (((5U 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_opcode)) 
                                                           & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_valid) 
                                                               & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__io_msInfo_bits_willFree)) 
                                                                  & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_87))) 
                                                              & (IData)(vlSelfRef.__VdfgRegularize_ha1527a7f_2_0))) 
                                                          | (((5U 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_opcode)) 
                                                              & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_valid) 
                                                                  & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__io_msInfo_bits_willFree)) 
                                                                     & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_73))) 
                                                                 & (IData)(vlSelfRef.__VdfgRegularize_ha1527a7f_2_0))) 
                                                             | (((5U 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_opcode)) 
                                                                 & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_valid) 
                                                                     & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__io_msInfo_bits_willFree)) 
                                                                        & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_59))) 
                                                                    & (IData)(vlSelfRef.__VdfgRegularize_ha1527a7f_2_0))) 
                                                                | (((5U 
                                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_opcode)) 
                                                                    & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid) 
                                                                        & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_msInfo_bits_willFree)) 
                                                                           & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_45))) 
                                                                       & (IData)(vlSelfRef.__VdfgRegularize_ha1527a7f_2_0))) 
                                                                   | (((5U 
                                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_opcode)) 
                                                                       & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid) 
                                                                           & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_msInfo_bits_willFree)) 
                                                                              & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_31))) 
                                                                          & (IData)(vlSelfRef.__VdfgRegularize_ha1527a7f_2_0))) 
                                                                      | (((5U 
                                                                           == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_opcode)) 
                                                                          & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid) 
                                                                              & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_msInfo_bits_willFree)) 
                                                                                & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_17))) 
                                                                             & (IData)(vlSelfRef.__VdfgRegularize_ha1527a7f_2_0))) 
                                                                         | ((5U 
                                                                             == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_opcode)) 
                                                                            & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                                                                                & ((~ (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_msInfo_bits_willFree)) 
                                                                                & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_3))) 
                                                                               & (IData)(vlSelfRef.__VdfgRegularize_ha1527a7f_2_0)))))))))))))))))) 
                              & (((IData)(vlSelfRef.__PVT___io_hasLatePF_T_1) 
                                  != (((IData)(vlSelfRef.__PVT__io_hasLatePF_REG_tag) 
                                       << 7U) | (IData)(vlSelfRef.__PVT__io_hasLatePF_REG_set))) 
                                 & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_valid)));
    vlSelfRef.io_out_valid = (((IData)(vlSelfRef.__PVT___io_out_valid_T) 
                               & (IData)(vlSelfRef.__PVT__chosenQ__DOT__maybe_full)) 
                              | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_valid) 
                                 & (IData)(vlSelfRef.__PVT__canFlow)));
    vlSelfRef.io_out_bits_set = ((IData)(vlSelfRef.__PVT__canFlow)
                                  ? (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_set)
                                  : vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_set
                                 [0U]);
    vlSelfRef.__PVT___pipeBlockOut_T_2 = ((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                          == (IData)(vlSelfRef.io_out_bits_set));
    vlSelfRef.__PVT___pipeBlockOut_T_3 = ((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                          == (IData)(vlSelfRef.io_out_bits_set));
    vlSelfRef.__PVT___pipeBlockOut_T_4 = ((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                          == (IData)(vlSelfRef.io_out_bits_set));
    vlSelfRef.__PVT___pipeBlockOut_T_5 = ((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                          == (IData)(vlSelfRef.io_out_bits_set));
    __PVT__issueArb_io_in_0_valid = ((IData)(vlSelfRef.__PVT__buffer_0_valid) 
                                     & ((~ ((IData)(vlSelfRef.io_out_valid) 
                                            & (IData)(vlSelfRef.__PVT___pipeBlockOut_T_2))) 
                                        & (IData)(vlSelfRef.__PVT__buffer_0_rdy)));
    __PVT__issueArb_io_in_1_valid = ((IData)(vlSelfRef.__PVT__buffer_1_valid) 
                                     & ((~ ((IData)(vlSelfRef.io_out_valid) 
                                            & (IData)(vlSelfRef.__PVT___pipeBlockOut_T_3))) 
                                        & (IData)(vlSelfRef.__PVT__buffer_1_rdy)));
    __PVT__issueArb_io_in_2_valid = ((IData)(vlSelfRef.__PVT__buffer_2_valid) 
                                     & ((~ ((IData)(vlSelfRef.io_out_valid) 
                                            & (IData)(vlSelfRef.__PVT___pipeBlockOut_T_4))) 
                                        & (IData)(vlSelfRef.__PVT__buffer_2_rdy)));
    __PVT__issueArb_io_in_3_valid = ((IData)(vlSelfRef.__PVT__buffer_3_valid) 
                                     & ((~ ((IData)(vlSelfRef.io_out_valid) 
                                            & (IData)(vlSelfRef.__PVT___pipeBlockOut_T_5))) 
                                        & (IData)(vlSelfRef.__PVT__buffer_3_rdy)));
    vlSelfRef.__PVT__issueArb__DOT__valids = ((((IData)(__PVT__issueArb_io_in_3_valid) 
                                                << 3U) 
                                               | ((IData)(__PVT__issueArb_io_in_2_valid) 
                                                  << 2U)) 
                                              | (((IData)(__PVT__issueArb_io_in_1_valid) 
                                                  << 1U) 
                                                 | (IData)(__PVT__issueArb_io_in_0_valid)));
    vlSelfRef.__PVT__issueArb__DOT__chosenOH = ((0U 
                                                 != 
                                                 ((IData)(vlSelfRef.__PVT__issueArb__DOT__rrSelOH) 
                                                  & (IData)(vlSelfRef.__PVT__issueArb__DOT__valids)))
                                                 ? (IData)(vlSelfRef.__PVT__issueArb__DOT__rrSelOH)
                                                 : 
                                                (((((~ 
                                                     ((IData)(__PVT__issueArb_io_in_0_valid) 
                                                      | ((IData)(__PVT__issueArb_io_in_1_valid) 
                                                         | (IData)(__PVT__issueArb_io_in_2_valid)))) 
                                                    & (IData)(__PVT__issueArb_io_in_3_valid)) 
                                                   << 3U) 
                                                  | (((~ 
                                                       ((IData)(__PVT__issueArb_io_in_0_valid) 
                                                        | (IData)(__PVT__issueArb_io_in_1_valid))) 
                                                      & (IData)(__PVT__issueArb_io_in_2_valid)) 
                                                     << 2U)) 
                                                 | ((((~ (IData)(__PVT__issueArb_io_in_0_valid)) 
                                                      & (IData)(__PVT__issueArb_io_in_1_valid)) 
                                                     << 1U) 
                                                    | (IData)(__PVT__issueArb_io_in_0_valid))));
}

VL_INLINE_OPT void VTestTop_L2L3L2_RequestBuffer___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__a_reqBuf__2(VTestTop_L2L3L2_RequestBuffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTestTop_L2L3L2_RequestBuffer___nba_sequent__TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__a_reqBuf__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT__chosenQ_io_deq_ready;
    __PVT__chosenQ_io_deq_ready = 0;
    CData/*0:0*/ __PVT___pipeBlockOut_T;
    __PVT___pipeBlockOut_T = 0;
    // Body
    __PVT__chosenQ_io_deq_ready = (1U & ((~ (IData)(vlSelfRef.__PVT___io_out_valid_T)) 
                                         | (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_sinkA_ready)));
    __PVT___pipeBlockOut_T = ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_sinkA_ready) 
                              & (IData)(vlSelfRef.io_out_valid));
    vlSelfRef.__PVT__doFlow = ((IData)(vlSelfRef.__PVT__canFlow) 
                               & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_sinkA_ready));
    vlSelfRef.__PVT__chosenQ__DOT__do_deq = ((IData)(__PVT__chosenQ_io_deq_ready) 
                                             & (IData)(vlSelfRef.__PVT__chosenQ__DOT__maybe_full));
    vlSelfRef.__PVT__issueArb__DOT___pendingMask_T_2 
        = (((~ (IData)(vlSelfRef.__PVT__chosenQ__DOT__maybe_full)) 
            | (IData)(__PVT__chosenQ_io_deq_ready)) 
           & (0U != (IData)(vlSelfRef.__PVT__issueArb__DOT__valids)));
    vlSelfRef.__PVT__s1_Block = (((IData)(__PVT___pipeBlockOut_T) 
                                  & (IData)(vlSelfRef.__PVT___pipeBlockOut_T_2)) 
                                 | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_s1Entrance_valid) 
                                    & ((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                       == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_s1Entrance_bits_set))));
    vlSelfRef.__PVT__s1_Block_1 = (((IData)(__PVT___pipeBlockOut_T) 
                                    & (IData)(vlSelfRef.__PVT___pipeBlockOut_T_3)) 
                                   | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_s1Entrance_valid) 
                                      & ((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                         == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_s1Entrance_bits_set))));
    vlSelfRef.__PVT__s1_Block_2 = (((IData)(__PVT___pipeBlockOut_T) 
                                    & (IData)(vlSelfRef.__PVT___pipeBlockOut_T_4)) 
                                   | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_s1Entrance_valid) 
                                      & ((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                         == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_s1Entrance_bits_set))));
    vlSelfRef.__PVT__s1_Block_3 = (((IData)(__PVT___pipeBlockOut_T) 
                                    & (IData)(vlSelfRef.__PVT___pipeBlockOut_T_5)) 
                                   | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_s1Entrance_valid) 
                                      & ((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                         == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_s1Entrance_bits_set))));
    vlSelfRef.__PVT__s1Block = (((IData)(__PVT___pipeBlockOut_T) 
                                 & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                    == (IData)(vlSelfRef.io_out_bits_set))) 
                                | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_s1Entrance_valid) 
                                   & ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_set) 
                                      == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__reqArb_io_s1Entrance_bits_set))));
    vlSelfRef.__PVT__alloc = ((IData)(vlSelfRef.__PVT___canFlow_T) 
                              & ((~ ((IData)(vlSelfRef.__PVT__doFlow) 
                                     | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_valid) 
                                        & ((5U == (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_bits_opcode)) 
                                           & (((IData)(vlSelfRef.__PVT__buffer_3_valid) 
                                               & ((IData)(vlSelfRef.__PVT___io_hasLatePF_T_1) 
                                                  == 
                                                  (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                    << 7U) 
                                                   | (IData)(vlSelfRef.__PVT__buffer_3_task_set)))) 
                                              | ((((IData)(vlSelfRef.__PVT__buffer_2_valid) 
                                                   & ((IData)(vlSelfRef.__PVT___io_hasLatePF_T_1) 
                                                      == 
                                                      (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                        << 7U) 
                                                       | (IData)(vlSelfRef.__PVT__buffer_2_task_set)))) 
                                                  | (((IData)(vlSelfRef.__PVT__buffer_1_valid) 
                                                      & ((IData)(vlSelfRef.__PVT___io_hasLatePF_T_1) 
                                                         == 
                                                         (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                           << 7U) 
                                                          | (IData)(vlSelfRef.__PVT__buffer_1_task_set)))) 
                                                     | (((IData)(vlSelfRef.__PVT__buffer_0_valid) 
                                                         & ((IData)(vlSelfRef.__PVT___io_hasLatePF_T_1) 
                                                            == 
                                                            (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                              << 7U) 
                                                             | (IData)(vlSelfRef.__PVT__buffer_0_task_set)))) 
                                                        | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_valid) 
                                                            & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_acquire) 
                                                                | (5U 
                                                                   == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_15.__PVT__req_opcode))) 
                                                               & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_213))) 
                                                           | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_valid) 
                                                               & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_acquire) 
                                                                   | (5U 
                                                                      == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_14.__PVT__req_opcode))) 
                                                                  & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_199))) 
                                                              | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_valid) 
                                                                  & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_acquire) 
                                                                      | (5U 
                                                                         == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_13.__PVT__req_opcode))) 
                                                                     & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_185))) 
                                                                 | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_valid) 
                                                                     & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_acquire) 
                                                                         | (5U 
                                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_12.__PVT__req_opcode))) 
                                                                        & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_171))) 
                                                                    | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_valid) 
                                                                        & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_acquire) 
                                                                            | (5U 
                                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_11.__PVT__req_opcode))) 
                                                                           & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_157))) 
                                                                       | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_valid) 
                                                                          & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_acquire) 
                                                                              | (5U 
                                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_10.__PVT__req_opcode))) 
                                                                             & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_143))))))))))) 
                                                 | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_valid) 
                                                     & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_acquire) 
                                                         | (5U 
                                                            == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_9.__PVT__req_opcode))) 
                                                        & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_129))) 
                                                    | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_valid) 
                                                        & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_acquire) 
                                                            | (5U 
                                                               == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_8.__PVT__req_opcode))) 
                                                           & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_115))) 
                                                       | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_valid) 
                                                           & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_acquire) 
                                                               | (5U 
                                                                  == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_7.__PVT__req_opcode))) 
                                                              & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_101))) 
                                                          | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_valid) 
                                                              & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_acquire) 
                                                                  | (5U 
                                                                     == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_6.__PVT__req_opcode))) 
                                                                 & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_87))) 
                                                             | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_valid) 
                                                                 & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_acquire) 
                                                                     | (5U 
                                                                        == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_5.__PVT__req_opcode))) 
                                                                    & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_73))) 
                                                                | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_valid) 
                                                                    & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_acquire) 
                                                                        | (5U 
                                                                           == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_4.__PVT__req_opcode))) 
                                                                       & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_59))) 
                                                                   | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid) 
                                                                       & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_acquire) 
                                                                           | (5U 
                                                                              == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_opcode))) 
                                                                          & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_45))) 
                                                                      | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid) 
                                                                          & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_acquire) 
                                                                              | (5U 
                                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_opcode))) 
                                                                             & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_31))) 
                                                                         | (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid) 
                                                                             & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_acquire) 
                                                                                | (5U 
                                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_opcode))) 
                                                                                & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_17))) 
                                                                            | ((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                                                                               & (((IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_acquire) 
                                                                                | (5U 
                                                                                == (IData)(vlSymsp->TOP__TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_opcode))) 
                                                                                & (IData)(vlSelfRef.__PVT___io_hasLatePF_T_3)))))))))))))))))) 
                                 & (IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__sinkA_io_task_valid)));
    vlSelfRef.__PVT___buffer_waitMP_T = ((((IData)(vlSelfRef.__PVT__s1Block) 
                                           << 3U) | 
                                          ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toReqBuf_0) 
                                           << 2U)) 
                                         | ((IData)(vlSymsp->TOP.TestTop_L2L3L2__DOT__l2_nodes_1__DOT__slices_0__DOT__mainPipe_io_toReqBuf_1) 
                                            << 1U));
    if (vlSelfRef.__PVT__alloc) {
        vlSelfRef.__PVT___GEN_128 = ((0U == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                     | (IData)(vlSelfRef.__PVT__buffer_0_valid));
        vlSelfRef.__PVT___GEN_129 = ((1U == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                     | (IData)(vlSelfRef.__PVT__buffer_1_valid));
        vlSelfRef.__PVT___GEN_130 = ((2U == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                     | (IData)(vlSelfRef.__PVT__buffer_2_valid));
        vlSelfRef.__PVT___GEN_131 = ((3U == (IData)(vlSelfRef.__PVT__insertIdx)) 
                                     | (IData)(vlSelfRef.__PVT__buffer_3_valid));
    } else {
        vlSelfRef.__PVT___GEN_128 = vlSelfRef.__PVT__buffer_0_valid;
        vlSelfRef.__PVT___GEN_129 = vlSelfRef.__PVT__buffer_1_valid;
        vlSelfRef.__PVT___GEN_130 = vlSelfRef.__PVT__buffer_2_valid;
        vlSelfRef.__PVT___GEN_131 = vlSelfRef.__PVT__buffer_3_valid;
    }
}
