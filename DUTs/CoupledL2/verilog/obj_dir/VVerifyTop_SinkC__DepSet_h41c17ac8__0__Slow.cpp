// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVerifyTop.h for the primary calling header

#include "VVerifyTop__pch.h"
#include "VVerifyTop_SinkC.h"
#include "VVerifyTop__Syms.h"

VL_ATTR_COLD void VVerifyTop_SinkC___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC__1(VVerifyTop_SinkC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_SinkC___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__io_refillBufWrite_bits_id_lo = 
        ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid) 
           & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_set) 
               == (IData)(vlSelfRef.io_task_bits_set)) 
              & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_tag) 
                  == (IData)(vlSelfRef.io_task_bits_tag)) 
                 & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_msInfo_bits_blockRefill)))) 
          << 1U) | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                    & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set) 
                        == (IData)(vlSelfRef.io_task_bits_set)) 
                       & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_tag) 
                           == (IData)(vlSelfRef.io_task_bits_tag)) 
                          & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_msInfo_bits_blockRefill)))));
    vlSelfRef.__PVT___newdataMask_T_14 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid) 
                                          & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_set) 
                                              == (IData)(vlSelfRef.io_task_bits_set)) 
                                             & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_tag) 
                                                 == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_msInfo_bits_blockRefill))));
    vlSelfRef.__PVT___newdataMask_T_19 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid) 
                                          & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_set) 
                                              == (IData)(vlSelfRef.io_task_bits_set)) 
                                             & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_tag) 
                                                 == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_msInfo_bits_blockRefill))));
    vlSelfRef.__PVT__io_refillBufWrite_bits_id_hi = 
        (((IData)(vlSelfRef.__PVT___newdataMask_T_19) 
          << 1U) | (IData)(vlSelfRef.__PVT___newdataMask_T_14));
}

VL_ATTR_COLD void VVerifyTop_SinkC___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC__1(VVerifyTop_SinkC* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_SinkC___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__io_refillBufWrite_bits_id_lo = 
        ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid) 
           & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_set) 
               == (IData)(vlSelfRef.io_task_bits_set)) 
              & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_tag) 
                  == (IData)(vlSelfRef.io_task_bits_tag)) 
                 & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_msInfo_bits_blockRefill)))) 
          << 1U) | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                    & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set) 
                        == (IData)(vlSelfRef.io_task_bits_set)) 
                       & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_tag) 
                           == (IData)(vlSelfRef.io_task_bits_tag)) 
                          & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_msInfo_bits_blockRefill)))));
    vlSelfRef.__PVT___newdataMask_T_14 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid) 
                                          & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_set) 
                                              == (IData)(vlSelfRef.io_task_bits_set)) 
                                             & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_tag) 
                                                 == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_msInfo_bits_blockRefill))));
    vlSelfRef.__PVT___newdataMask_T_19 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid) 
                                          & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_set) 
                                              == (IData)(vlSelfRef.io_task_bits_set)) 
                                             & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_tag) 
                                                 == (IData)(vlSelfRef.io_task_bits_tag)) 
                                                & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_msInfo_bits_blockRefill))));
    vlSelfRef.__PVT__io_refillBufWrite_bits_id_hi = 
        (((IData)(vlSelfRef.__PVT___newdataMask_T_19) 
          << 1U) | (IData)(vlSelfRef.__PVT___newdataMask_T_14));
}
