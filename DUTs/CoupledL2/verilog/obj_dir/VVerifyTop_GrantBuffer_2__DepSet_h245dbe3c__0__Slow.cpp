// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVerifyTop.h for the primary calling header

#include "VVerifyTop__pch.h"
#include "VVerifyTop_GrantBuffer_2.h"
#include "VVerifyTop__Syms.h"

VL_ATTR_COLD void VVerifyTop_GrantBuffer_2___stl_sequent__TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__grantBuf__0(VVerifyTop_GrantBuffer_2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_GrantBuffer_2___stl_sequent__TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__grantBuf__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___noSpaceForSinkReq_T_5;
    __PVT___noSpaceForSinkReq_T_5 = 0;
    CData/*0:0*/ __PVT___noSpaceWaitSinkEForSinkReq_T_2;
    __PVT___noSpaceWaitSinkEForSinkReq_T_2 = 0;
    // Body
    vlSelfRef.__PVT___timers_0_T_1 = (1ULL + vlSelfRef.__PVT__timers_0);
    vlSelfRef.__PVT___timers_1_T_1 = (1ULL + vlSelfRef.__PVT__timers_1);
    vlSelfRef.__PVT___timers_2_T_1 = (1ULL + vlSelfRef.__PVT__timers_2);
    vlSelfRef.__PVT___timers_3_T_1 = (1ULL + vlSelfRef.__PVT__timers_3);
    vlSelfRef.__PVT__grantQueue__DOT___value_T_1 = 
        (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__grantQueue__DOT__enq_ptr_value)));
    vlSelfRef.__PVT__grantQueue__DOT___value_T_3 = 
        (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__grantQueue__DOT__deq_ptr_value)));
    vlSelfRef.__PVT___counter_T_5 = (1ULL + vlSelfRef.__PVT__counter_4);
    vlSelfRef.__PVT___counter_T_7 = (1ULL + vlSelfRef.__PVT__counter_5);
    vlSelfRef.__PVT___counter_T_9 = (1ULL + vlSelfRef.__PVT__counter_6);
    vlSelfRef.__PVT___counter_T_11 = (1ULL + vlSelfRef.__PVT__counter_7);
    vlSelfRef.__PVT___counter_T_13 = (1ULL + vlSelfRef.__PVT__counter_8);
    vlSelfRef.__PVT___counter_T_15 = (1ULL + vlSelfRef.__PVT__counter_9);
    vlSelfRef.__PVT___counter_T_17 = (1ULL + vlSelfRef.__PVT__counter_10);
    vlSelfRef.__PVT___counter_T_19 = (1ULL + vlSelfRef.__PVT__counter_11);
    vlSelfRef.__PVT___counter_T_21 = (1ULL + vlSelfRef.__PVT__counter_12);
    vlSelfRef.__PVT___counter_T_23 = (1ULL + vlSelfRef.__PVT__counter_13);
    vlSelfRef.__PVT___counter_T_25 = (1ULL + vlSelfRef.__PVT__counter_14);
    vlSelfRef.__PVT___counter_T_27 = (1ULL + vlSelfRef.__PVT__counter_15);
    vlSelfRef.__PVT___counter_T_29 = (1ULL + vlSelfRef.__PVT__counter_16);
    vlSelfRef.__PVT___counter_T_31 = (1ULL + vlSelfRef.__PVT__counter_17);
    vlSelfRef.__PVT___counter_T_33 = (1ULL + vlSelfRef.__PVT__counter_18);
    vlSelfRef.__PVT___counter_T_35 = (1ULL + vlSelfRef.__PVT__counter_19);
    vlSelfRef.__PVT___counter_T_37 = (1ULL + vlSelfRef.__PVT__counter_20);
    vlSelfRef.__PVT___counter_T_39 = (1ULL + vlSelfRef.__PVT__counter_21);
    vlSelfRef.__PVT___counter_T_41 = (1ULL + vlSelfRef.__PVT__counter_22);
    vlSelfRef.__PVT___counter_T_43 = (1ULL + vlSelfRef.__PVT__counter_23);
    vlSelfRef.__PVT___counter_T_45 = (1ULL + vlSelfRef.__PVT__counter_24);
    vlSelfRef.__PVT___counter_T_47 = (1ULL + vlSelfRef.__PVT__counter_25);
    vlSelfRef.__PVT___counter_T_49 = (1ULL + vlSelfRef.__PVT__counter_26);
    vlSelfRef.__PVT___counter_T_51 = (1ULL + vlSelfRef.__PVT__counter_27);
    vlSelfRef.__PVT___counter_T_53 = (1ULL + vlSelfRef.__PVT__counter_28);
    vlSelfRef.__PVT___counter_T_55 = (1ULL + vlSelfRef.__PVT__counter_29);
    vlSelfRef.__PVT___counter_T_57 = (1ULL + vlSelfRef.__PVT__counter_30);
    vlSelfRef.__PVT___counter_T_59 = (1ULL + vlSelfRef.__PVT__counter_31);
    vlSelfRef.__PVT___counter_T_61 = (1ULL + vlSelfRef.__PVT__counter_32);
    vlSelfRef.__PVT___counter_T_63 = (1ULL + vlSelfRef.__PVT__counter_33);
    vlSelfRef.__PVT___counter_T_65 = (1ULL + vlSelfRef.__PVT__counter_34);
    vlSelfRef.__PVT___counter_T_67 = (1ULL + vlSelfRef.__PVT__counter_35);
    vlSelfRef.__PVT___counter_T_69 = (1ULL + vlSelfRef.__PVT__counter_36);
    vlSelfRef.__PVT___counter_T_71 = (1ULL + vlSelfRef.__PVT__counter_37);
    vlSelfRef.__PVT___counter_T_73 = (1ULL + vlSelfRef.__PVT__counter_38);
    vlSelfRef.__PVT___counter_T_75 = (1ULL + vlSelfRef.__PVT__counter_39);
    vlSelfRef.__PVT___counter_T_77 = (1ULL + vlSelfRef.__PVT__counter_40);
    vlSelfRef.__PVT___counter_T_79 = (1ULL + vlSelfRef.__PVT__counter_41);
    vlSelfRef.__PVT___counter_T_81 = (1ULL + vlSelfRef.__PVT__counter_42);
    vlSelfRef.__PVT___counter_T_83 = (1ULL + vlSelfRef.__PVT__counter_43);
    vlSelfRef.__PVT___counter_T_85 = (1ULL + vlSelfRef.__PVT__counter_44);
    vlSelfRef.__PVT___counter_T_87 = (1ULL + vlSelfRef.__PVT__counter_45);
    vlSelfRef.__PVT___counter_T_89 = (1ULL + vlSelfRef.__PVT__counter_46);
    vlSelfRef.__PVT___counter_T_91 = (1ULL + vlSelfRef.__PVT__counter_47);
    vlSelfRef.__PVT___counter_T_93 = (1ULL + vlSelfRef.__PVT__counter_48);
    vlSelfRef.__PVT___counter_T_95 = (1ULL + vlSelfRef.__PVT__counter_49);
    vlSelfRef.__PVT___counter_T_97 = (1ULL + vlSelfRef.__PVT__counter_50);
    vlSelfRef.__PVT___counter_T_99 = (1ULL + vlSelfRef.__PVT__counter_51);
    vlSelfRef.__PVT__grantQueue_io_deq_bits_task_opcode 
        = vlSelfRef.__PVT__grantQueue__DOT__ram_task_opcode
        [vlSelfRef.__PVT__grantQueue__DOT__deq_ptr_value];
    vlSelfRef.__PVT__enable = ((~ (IData)(vlSelfRef.__PVT__inflightGrant_0_valid)) 
                               & (IData)(vlSelfRef.__PVT__enable_REG));
    vlSelfRef.__PVT__enable_1 = ((~ (IData)(vlSelfRef.__PVT__inflightGrant_1_valid)) 
                                 & (IData)(vlSelfRef.__PVT__enable_REG_1));
    vlSelfRef.__PVT__enable_2 = ((~ (IData)(vlSelfRef.__PVT__inflightGrant_2_valid)) 
                                 & (IData)(vlSelfRef.__PVT__enable_REG_2));
    vlSelfRef.__PVT__enable_3 = ((~ (IData)(vlSelfRef.__PVT__inflightGrant_3_valid)) 
                                 & (IData)(vlSelfRef.__PVT__enable_REG_3));
    vlSelfRef.__PVT__inflight_insertIdx = ((IData)(vlSelfRef.__PVT__inflightGrant_0_valid)
                                            ? ((IData)(vlSelfRef.__PVT__inflightGrant_1_valid)
                                                ? ((IData)(vlSelfRef.__PVT__inflightGrant_2_valid)
                                                    ? 3U
                                                    : 2U)
                                                : 1U)
                                            : 0U);
    if (vlSelfRef.__PVT__grantBufValid) {
        vlSelfRef.io_d_bits_opcode = vlSelfRef.__PVT__grantBuf_task_opcode;
        vlSelfRef.io_d_bits_source = vlSelfRef.__PVT__grantBuf_task_sourceId;
    } else {
        vlSelfRef.io_d_bits_opcode = vlSelfRef.__PVT__grantQueue__DOT__ram_task_opcode
            [vlSelfRef.__PVT__grantQueue__DOT__deq_ptr_value];
        vlSelfRef.io_d_bits_source = vlSelfRef.__PVT__grantQueue__DOT__ram_task_sourceId
            [vlSelfRef.__PVT__grantQueue__DOT__deq_ptr_value];
    }
    __PVT___noSpaceWaitSinkEForSinkReq_T_2 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb.__PVT__task_s2_valid) 
                                              & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb.__PVT__task_s2_bits_channel));
    __PVT___noSpaceForSinkReq_T_5 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb.__PVT__task_s2_valid) 
                                     & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb.__PVT__task_s2_bits_channel) 
                                        | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb.__PVT__task_s2_bits_channel) 
                                           >> 2U)));
    vlSelfRef.__PVT__grantQueue__DOT__ptr_match = ((IData)(vlSelfRef.__PVT__grantQueue__DOT__deq_ptr_value) 
                                                   == (IData)(vlSelfRef.__PVT__grantQueue__DOT__enq_ptr_value));
    vlSelfRef.io_toReqArb_blockSinkReqEntrance_blockB_s1 
        = (((IData)(vlSelfRef.__PVT__inflightGrant_0_valid) 
            & (((IData)(vlSelfRef.__PVT__inflightGrant_0_bits_set) 
                == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkB_io_task_bits_set)) 
               & ((IData)(vlSelfRef.__PVT__inflightGrant_0_bits_tag) 
                  == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkB_io_task_bits_tag)))) 
           | (((IData)(vlSelfRef.__PVT__inflightGrant_1_valid) 
               & (((IData)(vlSelfRef.__PVT__inflightGrant_1_bits_set) 
                   == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkB_io_task_bits_set)) 
                  & ((IData)(vlSelfRef.__PVT__inflightGrant_1_bits_tag) 
                     == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkB_io_task_bits_tag)))) 
              | (((IData)(vlSelfRef.__PVT__inflightGrant_2_valid) 
                  & (((IData)(vlSelfRef.__PVT__inflightGrant_2_bits_set) 
                      == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkB_io_task_bits_set)) 
                     & ((IData)(vlSelfRef.__PVT__inflightGrant_2_bits_tag) 
                        == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkB_io_task_bits_tag)))) 
                 | ((IData)(vlSelfRef.__PVT__inflightGrant_3_valid) 
                    & (((IData)(vlSelfRef.__PVT__inflightGrant_3_bits_set) 
                        == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkB_io_task_bits_set)) 
                       & ((IData)(vlSelfRef.__PVT__inflightGrant_3_bits_tag) 
                          == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__sinkB_io_task_bits_tag)))))));
    vlSelfRef.__PVT___T_27 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_toSourceD_valid) 
                              & ((2U == (3U & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_toSourceD_bits_task_opcode) 
                                               >> 1U))) 
                                 | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_toSourceD_bits_task_mergeA)));
    vlSelfRef.__PVT__next_max = (((IData)(vlSelfRef.__PVT__enable) 
                                  & (vlSelfRef.__PVT__timers_0 
                                     > vlSelfRef.__PVT__max))
                                  ? vlSelfRef.__PVT__timers_0
                                  : vlSelfRef.__PVT__max);
    vlSelfRef.__PVT__next_max_1 = (((IData)(vlSelfRef.__PVT__enable_1) 
                                    & (vlSelfRef.__PVT__timers_1 
                                       > vlSelfRef.__PVT__max_1))
                                    ? vlSelfRef.__PVT__timers_1
                                    : vlSelfRef.__PVT__max_1);
    vlSelfRef.__PVT__next_max_2 = (((IData)(vlSelfRef.__PVT__enable_2) 
                                    & (vlSelfRef.__PVT__timers_2 
                                       > vlSelfRef.__PVT__max_2))
                                    ? vlSelfRef.__PVT__timers_2
                                    : vlSelfRef.__PVT__max_2);
    vlSelfRef.__PVT__next_max_3 = (((IData)(vlSelfRef.__PVT__enable_3) 
                                    & (vlSelfRef.__PVT__timers_3 
                                       > vlSelfRef.__PVT__max_3))
                                    ? vlSelfRef.__PVT__timers_3
                                    : vlSelfRef.__PVT__max_3);
    vlSelfRef.__PVT___noSpaceWaitSinkEForSinkReq_T_30 
        = (7U & ((3U & ((IData)(__PVT___noSpaceWaitSinkEForSinkReq_T_2) 
                        + VL_SHIFTR_III(2,2,32, ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_status_vec_toD_0_valid) 
                                                   & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel)) 
                                                  << 1U) 
                                                 | (IData)(__PVT___noSpaceWaitSinkEForSinkReq_T_2)), 1U))) 
                 + ((3U & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_status_vec_toD_1_valid) 
                            & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.__PVT__task_s4_bits_channel)) 
                           + ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_status_vec_toD_2_valid) 
                              & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.__PVT__task_s5_bits_channel)))) 
                    + ((3U & ((IData)(vlSelfRef.__PVT__inflightGrant_0_valid) 
                              + (IData)(vlSelfRef.__PVT__inflightGrant_1_valid))) 
                       + (3U & ((IData)(vlSelfRef.__PVT__inflightGrant_2_valid) 
                                + (IData)(vlSelfRef.__PVT__inflightGrant_3_valid)))))));
    vlSelfRef.__PVT__full = ((IData)(vlSelfRef.__PVT__grantQueue__DOT__ptr_match) 
                             & (IData)(vlSelfRef.__PVT__grantQueue__DOT__maybe_full));
    vlSelfRef.__PVT__grantQueue_io_deq_valid = (1U 
                                                & (~ 
                                                   ((~ (IData)(vlSelfRef.__PVT__grantQueue__DOT__maybe_full)) 
                                                    & (IData)(vlSelfRef.__PVT__grantQueue__DOT__ptr_match))));
    vlSelfRef.__PVT___noSpaceForSinkReq_T_36 = (7U 
                                                & ((3U 
                                                    & ((IData)(__PVT___noSpaceForSinkReq_T_5) 
                                                       + 
                                                       VL_SHIFTR_III(2,2,32, 
                                                                     ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_status_vec_toD_0_valid) 
                                                                        << 1U) 
                                                                       & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                                                           << 1U) 
                                                                          | (0x7ffffffeU 
                                                                             & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                                                                >> 1U)))) 
                                                                      | (IData)(__PVT___noSpaceForSinkReq_T_5)), 1U))) 
                                                   + 
                                                   ((3U 
                                                     & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_status_vec_toD_1_valid) 
                                                         & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.__PVT__task_s4_bits_channel) 
                                                            | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.__PVT__task_s4_bits_channel) 
                                                               >> 2U))) 
                                                        + 
                                                        ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_status_vec_toD_2_valid) 
                                                         & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.__PVT__task_s5_bits_channel) 
                                                            | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.__PVT__task_s5_bits_channel) 
                                                               >> 2U))))) 
                                                    + 
                                                    ((((IData)(vlSelfRef.__PVT__grantQueue__DOT__maybe_full) 
                                                       & (IData)(vlSelfRef.__PVT__grantQueue__DOT__ptr_match))
                                                       ? 4U
                                                       : 0U) 
                                                     | (3U 
                                                        & ((IData)(vlSelfRef.__PVT__grantQueue__DOT__enq_ptr_value) 
                                                           - (IData)(vlSelfRef.__PVT__grantQueue__DOT__deq_ptr_value)))))));
    if (vlSelfRef.__PVT___T_27) {
        vlSelfRef.__PVT___GEN_60 = ((0U == (IData)(vlSelfRef.__PVT__inflight_insertIdx)) 
                                    | (IData)(vlSelfRef.__PVT__inflightGrant_0_valid));
        vlSelfRef.__PVT___GEN_61 = ((1U == (IData)(vlSelfRef.__PVT__inflight_insertIdx)) 
                                    | (IData)(vlSelfRef.__PVT__inflightGrant_1_valid));
        vlSelfRef.__PVT___GEN_62 = ((2U == (IData)(vlSelfRef.__PVT__inflight_insertIdx)) 
                                    | (IData)(vlSelfRef.__PVT__inflightGrant_2_valid));
        vlSelfRef.__PVT___GEN_63 = ((3U == (IData)(vlSelfRef.__PVT__inflight_insertIdx)) 
                                    | (IData)(vlSelfRef.__PVT__inflightGrant_3_valid));
    } else {
        vlSelfRef.__PVT___GEN_60 = vlSelfRef.__PVT__inflightGrant_0_valid;
        vlSelfRef.__PVT___GEN_61 = vlSelfRef.__PVT__inflightGrant_1_valid;
        vlSelfRef.__PVT___GEN_62 = vlSelfRef.__PVT__inflightGrant_2_valid;
        vlSelfRef.__PVT___GEN_63 = vlSelfRef.__PVT__inflightGrant_3_valid;
    }
    vlSelfRef.__PVT__grantQueue__DOT__ram_task_opcode_MPORT_en 
        = ((~ (IData)(vlSelfRef.__PVT__full)) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_toSourceD_valid) 
                                                 & ((2U 
                                                     != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_toSourceD_bits_task_opcode)) 
                                                    | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_toSourceD_bits_task_mergeA))));
    vlSelfRef.__PVT__next_counter = (vlSelfRef.__PVT__counter 
                                     + (QData)((IData)(vlSelfRef.__PVT__grantQueue_io_deq_valid)));
    vlSelfRef.io_d_valid = ((IData)(vlSelfRef.__PVT__grantQueue_io_deq_valid) 
                            | (IData)(vlSelfRef.__PVT__grantBufValid));
    vlSelfRef.io_toReqArb_blockSinkReqEntrance_blockA_s1 
        = ((4U <= (IData)(vlSelfRef.__PVT___noSpaceForSinkReq_T_36)) 
           | (4U <= (IData)(vlSelfRef.__PVT___noSpaceWaitSinkEForSinkReq_T_30)));
}

VL_ATTR_COLD void VVerifyTop_GrantBuffer_2___stl_sequent__TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__grantBuf__0(VVerifyTop_GrantBuffer_2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_GrantBuffer_2___stl_sequent__TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__grantBuf__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___noSpaceForSinkReq_T_5;
    __PVT___noSpaceForSinkReq_T_5 = 0;
    CData/*0:0*/ __PVT___noSpaceWaitSinkEForSinkReq_T_2;
    __PVT___noSpaceWaitSinkEForSinkReq_T_2 = 0;
    // Body
    vlSelfRef.__PVT___timers_0_T_1 = (1ULL + vlSelfRef.__PVT__timers_0);
    vlSelfRef.__PVT___timers_1_T_1 = (1ULL + vlSelfRef.__PVT__timers_1);
    vlSelfRef.__PVT___timers_2_T_1 = (1ULL + vlSelfRef.__PVT__timers_2);
    vlSelfRef.__PVT___timers_3_T_1 = (1ULL + vlSelfRef.__PVT__timers_3);
    vlSelfRef.__PVT__grantQueue__DOT___value_T_1 = 
        (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__grantQueue__DOT__enq_ptr_value)));
    vlSelfRef.__PVT__grantQueue__DOT___value_T_3 = 
        (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__grantQueue__DOT__deq_ptr_value)));
    vlSelfRef.__PVT___counter_T_5 = (1ULL + vlSelfRef.__PVT__counter_4);
    vlSelfRef.__PVT___counter_T_7 = (1ULL + vlSelfRef.__PVT__counter_5);
    vlSelfRef.__PVT___counter_T_9 = (1ULL + vlSelfRef.__PVT__counter_6);
    vlSelfRef.__PVT___counter_T_11 = (1ULL + vlSelfRef.__PVT__counter_7);
    vlSelfRef.__PVT___counter_T_13 = (1ULL + vlSelfRef.__PVT__counter_8);
    vlSelfRef.__PVT___counter_T_15 = (1ULL + vlSelfRef.__PVT__counter_9);
    vlSelfRef.__PVT___counter_T_17 = (1ULL + vlSelfRef.__PVT__counter_10);
    vlSelfRef.__PVT___counter_T_19 = (1ULL + vlSelfRef.__PVT__counter_11);
    vlSelfRef.__PVT___counter_T_21 = (1ULL + vlSelfRef.__PVT__counter_12);
    vlSelfRef.__PVT___counter_T_23 = (1ULL + vlSelfRef.__PVT__counter_13);
    vlSelfRef.__PVT___counter_T_25 = (1ULL + vlSelfRef.__PVT__counter_14);
    vlSelfRef.__PVT___counter_T_27 = (1ULL + vlSelfRef.__PVT__counter_15);
    vlSelfRef.__PVT___counter_T_29 = (1ULL + vlSelfRef.__PVT__counter_16);
    vlSelfRef.__PVT___counter_T_31 = (1ULL + vlSelfRef.__PVT__counter_17);
    vlSelfRef.__PVT___counter_T_33 = (1ULL + vlSelfRef.__PVT__counter_18);
    vlSelfRef.__PVT___counter_T_35 = (1ULL + vlSelfRef.__PVT__counter_19);
    vlSelfRef.__PVT___counter_T_37 = (1ULL + vlSelfRef.__PVT__counter_20);
    vlSelfRef.__PVT___counter_T_39 = (1ULL + vlSelfRef.__PVT__counter_21);
    vlSelfRef.__PVT___counter_T_41 = (1ULL + vlSelfRef.__PVT__counter_22);
    vlSelfRef.__PVT___counter_T_43 = (1ULL + vlSelfRef.__PVT__counter_23);
    vlSelfRef.__PVT___counter_T_45 = (1ULL + vlSelfRef.__PVT__counter_24);
    vlSelfRef.__PVT___counter_T_47 = (1ULL + vlSelfRef.__PVT__counter_25);
    vlSelfRef.__PVT___counter_T_49 = (1ULL + vlSelfRef.__PVT__counter_26);
    vlSelfRef.__PVT___counter_T_51 = (1ULL + vlSelfRef.__PVT__counter_27);
    vlSelfRef.__PVT___counter_T_53 = (1ULL + vlSelfRef.__PVT__counter_28);
    vlSelfRef.__PVT___counter_T_55 = (1ULL + vlSelfRef.__PVT__counter_29);
    vlSelfRef.__PVT___counter_T_57 = (1ULL + vlSelfRef.__PVT__counter_30);
    vlSelfRef.__PVT___counter_T_59 = (1ULL + vlSelfRef.__PVT__counter_31);
    vlSelfRef.__PVT___counter_T_61 = (1ULL + vlSelfRef.__PVT__counter_32);
    vlSelfRef.__PVT___counter_T_63 = (1ULL + vlSelfRef.__PVT__counter_33);
    vlSelfRef.__PVT___counter_T_65 = (1ULL + vlSelfRef.__PVT__counter_34);
    vlSelfRef.__PVT___counter_T_67 = (1ULL + vlSelfRef.__PVT__counter_35);
    vlSelfRef.__PVT___counter_T_69 = (1ULL + vlSelfRef.__PVT__counter_36);
    vlSelfRef.__PVT___counter_T_71 = (1ULL + vlSelfRef.__PVT__counter_37);
    vlSelfRef.__PVT___counter_T_73 = (1ULL + vlSelfRef.__PVT__counter_38);
    vlSelfRef.__PVT___counter_T_75 = (1ULL + vlSelfRef.__PVT__counter_39);
    vlSelfRef.__PVT___counter_T_77 = (1ULL + vlSelfRef.__PVT__counter_40);
    vlSelfRef.__PVT___counter_T_79 = (1ULL + vlSelfRef.__PVT__counter_41);
    vlSelfRef.__PVT___counter_T_81 = (1ULL + vlSelfRef.__PVT__counter_42);
    vlSelfRef.__PVT___counter_T_83 = (1ULL + vlSelfRef.__PVT__counter_43);
    vlSelfRef.__PVT___counter_T_85 = (1ULL + vlSelfRef.__PVT__counter_44);
    vlSelfRef.__PVT___counter_T_87 = (1ULL + vlSelfRef.__PVT__counter_45);
    vlSelfRef.__PVT___counter_T_89 = (1ULL + vlSelfRef.__PVT__counter_46);
    vlSelfRef.__PVT___counter_T_91 = (1ULL + vlSelfRef.__PVT__counter_47);
    vlSelfRef.__PVT___counter_T_93 = (1ULL + vlSelfRef.__PVT__counter_48);
    vlSelfRef.__PVT___counter_T_95 = (1ULL + vlSelfRef.__PVT__counter_49);
    vlSelfRef.__PVT___counter_T_97 = (1ULL + vlSelfRef.__PVT__counter_50);
    vlSelfRef.__PVT___counter_T_99 = (1ULL + vlSelfRef.__PVT__counter_51);
    vlSelfRef.__PVT__grantQueue_io_deq_bits_task_opcode 
        = vlSelfRef.__PVT__grantQueue__DOT__ram_task_opcode
        [vlSelfRef.__PVT__grantQueue__DOT__deq_ptr_value];
    vlSelfRef.__PVT__enable = ((~ (IData)(vlSelfRef.__PVT__inflightGrant_0_valid)) 
                               & (IData)(vlSelfRef.__PVT__enable_REG));
    vlSelfRef.__PVT__enable_1 = ((~ (IData)(vlSelfRef.__PVT__inflightGrant_1_valid)) 
                                 & (IData)(vlSelfRef.__PVT__enable_REG_1));
    vlSelfRef.__PVT__enable_2 = ((~ (IData)(vlSelfRef.__PVT__inflightGrant_2_valid)) 
                                 & (IData)(vlSelfRef.__PVT__enable_REG_2));
    vlSelfRef.__PVT__enable_3 = ((~ (IData)(vlSelfRef.__PVT__inflightGrant_3_valid)) 
                                 & (IData)(vlSelfRef.__PVT__enable_REG_3));
    vlSelfRef.__PVT__inflight_insertIdx = ((IData)(vlSelfRef.__PVT__inflightGrant_0_valid)
                                            ? ((IData)(vlSelfRef.__PVT__inflightGrant_1_valid)
                                                ? ((IData)(vlSelfRef.__PVT__inflightGrant_2_valid)
                                                    ? 3U
                                                    : 2U)
                                                : 1U)
                                            : 0U);
    if (vlSelfRef.__PVT__grantBufValid) {
        vlSelfRef.io_d_bits_opcode = vlSelfRef.__PVT__grantBuf_task_opcode;
        vlSelfRef.io_d_bits_source = vlSelfRef.__PVT__grantBuf_task_sourceId;
    } else {
        vlSelfRef.io_d_bits_opcode = vlSelfRef.__PVT__grantQueue__DOT__ram_task_opcode
            [vlSelfRef.__PVT__grantQueue__DOT__deq_ptr_value];
        vlSelfRef.io_d_bits_source = vlSelfRef.__PVT__grantQueue__DOT__ram_task_sourceId
            [vlSelfRef.__PVT__grantQueue__DOT__deq_ptr_value];
    }
    __PVT___noSpaceWaitSinkEForSinkReq_T_2 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.__PVT__task_s2_valid) 
                                              & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.__PVT__task_s2_bits_channel));
    __PVT___noSpaceForSinkReq_T_5 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.__PVT__task_s2_valid) 
                                     & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.__PVT__task_s2_bits_channel) 
                                        | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.__PVT__task_s2_bits_channel) 
                                           >> 2U)));
    vlSelfRef.__PVT__grantQueue__DOT__ptr_match = ((IData)(vlSelfRef.__PVT__grantQueue__DOT__deq_ptr_value) 
                                                   == (IData)(vlSelfRef.__PVT__grantQueue__DOT__enq_ptr_value));
    vlSelfRef.io_toReqArb_blockSinkReqEntrance_blockB_s1 
        = (((IData)(vlSelfRef.__PVT__inflightGrant_0_valid) 
            & (((IData)(vlSelfRef.__PVT__inflightGrant_0_bits_set) 
                == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkB_io_task_bits_set)) 
               & ((IData)(vlSelfRef.__PVT__inflightGrant_0_bits_tag) 
                  == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkB_io_task_bits_tag)))) 
           | (((IData)(vlSelfRef.__PVT__inflightGrant_1_valid) 
               & (((IData)(vlSelfRef.__PVT__inflightGrant_1_bits_set) 
                   == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkB_io_task_bits_set)) 
                  & ((IData)(vlSelfRef.__PVT__inflightGrant_1_bits_tag) 
                     == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkB_io_task_bits_tag)))) 
              | (((IData)(vlSelfRef.__PVT__inflightGrant_2_valid) 
                  & (((IData)(vlSelfRef.__PVT__inflightGrant_2_bits_set) 
                      == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkB_io_task_bits_set)) 
                     & ((IData)(vlSelfRef.__PVT__inflightGrant_2_bits_tag) 
                        == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkB_io_task_bits_tag)))) 
                 | ((IData)(vlSelfRef.__PVT__inflightGrant_3_valid) 
                    & (((IData)(vlSelfRef.__PVT__inflightGrant_3_bits_set) 
                        == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkB_io_task_bits_set)) 
                       & ((IData)(vlSelfRef.__PVT__inflightGrant_3_bits_tag) 
                          == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__sinkB_io_task_bits_tag)))))));
    vlSelfRef.__PVT___T_27 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_toSourceD_valid) 
                              & ((2U == (3U & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_toSourceD_bits_task_opcode) 
                                               >> 1U))) 
                                 | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_toSourceD_bits_task_mergeA)));
    vlSelfRef.__PVT__next_max = (((IData)(vlSelfRef.__PVT__enable) 
                                  & (vlSelfRef.__PVT__timers_0 
                                     > vlSelfRef.__PVT__max))
                                  ? vlSelfRef.__PVT__timers_0
                                  : vlSelfRef.__PVT__max);
    vlSelfRef.__PVT__next_max_1 = (((IData)(vlSelfRef.__PVT__enable_1) 
                                    & (vlSelfRef.__PVT__timers_1 
                                       > vlSelfRef.__PVT__max_1))
                                    ? vlSelfRef.__PVT__timers_1
                                    : vlSelfRef.__PVT__max_1);
    vlSelfRef.__PVT__next_max_2 = (((IData)(vlSelfRef.__PVT__enable_2) 
                                    & (vlSelfRef.__PVT__timers_2 
                                       > vlSelfRef.__PVT__max_2))
                                    ? vlSelfRef.__PVT__timers_2
                                    : vlSelfRef.__PVT__max_2);
    vlSelfRef.__PVT__next_max_3 = (((IData)(vlSelfRef.__PVT__enable_3) 
                                    & (vlSelfRef.__PVT__timers_3 
                                       > vlSelfRef.__PVT__max_3))
                                    ? vlSelfRef.__PVT__timers_3
                                    : vlSelfRef.__PVT__max_3);
    vlSelfRef.__PVT___noSpaceWaitSinkEForSinkReq_T_30 
        = (7U & ((3U & ((IData)(__PVT___noSpaceWaitSinkEForSinkReq_T_2) 
                        + VL_SHIFTR_III(2,2,32, ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_status_vec_toD_0_valid) 
                                                   & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel)) 
                                                  << 1U) 
                                                 | (IData)(__PVT___noSpaceWaitSinkEForSinkReq_T_2)), 1U))) 
                 + ((3U & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_status_vec_toD_1_valid) 
                            & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s4_bits_channel)) 
                           + ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_status_vec_toD_2_valid) 
                              & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s5_bits_channel)))) 
                    + ((3U & ((IData)(vlSelfRef.__PVT__inflightGrant_0_valid) 
                              + (IData)(vlSelfRef.__PVT__inflightGrant_1_valid))) 
                       + (3U & ((IData)(vlSelfRef.__PVT__inflightGrant_2_valid) 
                                + (IData)(vlSelfRef.__PVT__inflightGrant_3_valid)))))));
    vlSelfRef.__PVT__full = ((IData)(vlSelfRef.__PVT__grantQueue__DOT__ptr_match) 
                             & (IData)(vlSelfRef.__PVT__grantQueue__DOT__maybe_full));
    vlSelfRef.__PVT__grantQueue_io_deq_valid = (1U 
                                                & (~ 
                                                   ((~ (IData)(vlSelfRef.__PVT__grantQueue__DOT__maybe_full)) 
                                                    & (IData)(vlSelfRef.__PVT__grantQueue__DOT__ptr_match))));
    vlSelfRef.__PVT___noSpaceForSinkReq_T_36 = (7U 
                                                & ((3U 
                                                    & ((IData)(__PVT___noSpaceForSinkReq_T_5) 
                                                       + 
                                                       VL_SHIFTR_III(2,2,32, 
                                                                     ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_status_vec_toD_0_valid) 
                                                                        << 1U) 
                                                                       & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                                                           << 1U) 
                                                                          | (0x7ffffffeU 
                                                                             & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_channel) 
                                                                                >> 1U)))) 
                                                                      | (IData)(__PVT___noSpaceForSinkReq_T_5)), 1U))) 
                                                   + 
                                                   ((3U 
                                                     & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_status_vec_toD_1_valid) 
                                                         & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s4_bits_channel) 
                                                            | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s4_bits_channel) 
                                                               >> 2U))) 
                                                        + 
                                                        ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_status_vec_toD_2_valid) 
                                                         & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s5_bits_channel) 
                                                            | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s5_bits_channel) 
                                                               >> 2U))))) 
                                                    + 
                                                    ((((IData)(vlSelfRef.__PVT__grantQueue__DOT__maybe_full) 
                                                       & (IData)(vlSelfRef.__PVT__grantQueue__DOT__ptr_match))
                                                       ? 4U
                                                       : 0U) 
                                                     | (3U 
                                                        & ((IData)(vlSelfRef.__PVT__grantQueue__DOT__enq_ptr_value) 
                                                           - (IData)(vlSelfRef.__PVT__grantQueue__DOT__deq_ptr_value)))))));
    if (vlSelfRef.__PVT___T_27) {
        vlSelfRef.__PVT___GEN_60 = ((0U == (IData)(vlSelfRef.__PVT__inflight_insertIdx)) 
                                    | (IData)(vlSelfRef.__PVT__inflightGrant_0_valid));
        vlSelfRef.__PVT___GEN_61 = ((1U == (IData)(vlSelfRef.__PVT__inflight_insertIdx)) 
                                    | (IData)(vlSelfRef.__PVT__inflightGrant_1_valid));
        vlSelfRef.__PVT___GEN_62 = ((2U == (IData)(vlSelfRef.__PVT__inflight_insertIdx)) 
                                    | (IData)(vlSelfRef.__PVT__inflightGrant_2_valid));
        vlSelfRef.__PVT___GEN_63 = ((3U == (IData)(vlSelfRef.__PVT__inflight_insertIdx)) 
                                    | (IData)(vlSelfRef.__PVT__inflightGrant_3_valid));
    } else {
        vlSelfRef.__PVT___GEN_60 = vlSelfRef.__PVT__inflightGrant_0_valid;
        vlSelfRef.__PVT___GEN_61 = vlSelfRef.__PVT__inflightGrant_1_valid;
        vlSelfRef.__PVT___GEN_62 = vlSelfRef.__PVT__inflightGrant_2_valid;
        vlSelfRef.__PVT___GEN_63 = vlSelfRef.__PVT__inflightGrant_3_valid;
    }
    vlSelfRef.__PVT__grantQueue__DOT__ram_task_opcode_MPORT_en 
        = ((~ (IData)(vlSelfRef.__PVT__full)) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_toSourceD_valid) 
                                                 & ((2U 
                                                     != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_toSourceD_bits_task_opcode)) 
                                                    | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_toSourceD_bits_task_mergeA))));
    vlSelfRef.__PVT__next_counter = (vlSelfRef.__PVT__counter 
                                     + (QData)((IData)(vlSelfRef.__PVT__grantQueue_io_deq_valid)));
    vlSelfRef.io_d_valid = ((IData)(vlSelfRef.__PVT__grantQueue_io_deq_valid) 
                            | (IData)(vlSelfRef.__PVT__grantBufValid));
    vlSelfRef.io_toReqArb_blockSinkReqEntrance_blockA_s1 
        = ((4U <= (IData)(vlSelfRef.__PVT___noSpaceForSinkReq_T_36)) 
           | (4U <= (IData)(vlSelfRef.__PVT___noSpaceWaitSinkEForSinkReq_T_30)));
}
