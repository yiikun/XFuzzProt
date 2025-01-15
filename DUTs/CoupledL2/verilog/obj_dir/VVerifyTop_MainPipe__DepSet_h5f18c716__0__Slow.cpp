// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVerifyTop.h for the primary calling header

#include "VVerifyTop__pch.h"
#include "VVerifyTop_MainPipe.h"
#include "VVerifyTop__Syms.h"

VL_ATTR_COLD void VVerifyTop_MainPipe___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe__0(VVerifyTop_MainPipe* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_MainPipe___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __PVT__customL1Hint_io_s3_task_bits_opcode;
    __PVT__customL1Hint_io_s3_task_bits_opcode = 0;
    CData/*0:0*/ __PVT__customL1Hint_io_s3_need_mshr;
    __PVT__customL1Hint_io_s3_need_mshr = 0;
    CData/*0:0*/ __PVT__c_arb_io_in_2_valid;
    __PVT__c_arb_io_in_2_valid = 0;
    CData/*2:0*/ __PVT__c_arb_io_in_2_bits_task_param;
    __PVT__c_arb_io_in_2_bits_task_param = 0;
    CData/*7:0*/ __PVT__c_arb_io_in_2_bits_task_mshrId;
    __PVT__c_arb_io_in_2_bits_task_mshrId = 0;
    SData/*15:0*/ __PVT__c_arb_io_in_2_bits_data_data;
    __PVT__c_arb_io_in_2_bits_data_data = 0;
    CData/*0:0*/ __PVT__d_arb_io_in_2_valid;
    __PVT__d_arb_io_in_2_valid = 0;
    CData/*0:0*/ __PVT__need_repl;
    __PVT__need_repl = 0;
    CData/*0:0*/ __PVT__need_acquire_s3_a;
    __PVT__need_acquire_s3_a = 0;
    CData/*0:0*/ __PVT__need_probe_s3_a;
    __PVT__need_probe_s3_a = 0;
    CData/*0:0*/ __PVT__need_mshr_s3_a;
    __PVT__need_mshr_s3_a = 0;
    CData/*0:0*/ __PVT__need_mshr_s3_b;
    __PVT__need_mshr_s3_b = 0;
    CData/*0:0*/ __PVT__sink_resp_s3_a_promoteT;
    __PVT__sink_resp_s3_a_promoteT = 0;
    CData/*4:0*/ __PVT___sink_resp_s3_bits_param_T_6;
    __PVT___sink_resp_s3_bits_param_T_6 = 0;
    CData/*0:0*/ __PVT__need_data_b;
    __PVT__need_data_b = 0;
    CData/*0:0*/ __PVT__need_data_mshr_repl;
    __PVT__need_data_mshr_repl = 0;
    CData/*0:0*/ __PVT___need_write_releaseBuf_T;
    __PVT___need_write_releaseBuf_T = 0;
    CData/*0:0*/ __PVT___isC_s3_T_5;
    __PVT___isC_s3_T_5 = 0;
    CData/*0:0*/ __PVT___chnl_fire_s3_T;
    __PVT___chnl_fire_s3_T = 0;
    CData/*0:0*/ __PVT___chnl_fire_s3_T_1;
    __PVT___chnl_fire_s3_T_1 = 0;
    CData/*0:0*/ __PVT__c_d_valid_s4;
    __PVT__c_d_valid_s4 = 0;
    CData/*0:0*/ __PVT__c_d_valid_s5;
    __PVT__c_d_valid_s5 = 0;
    CData/*0:0*/ __VdfgRegularize_hd56c4748_0_6;
    __VdfgRegularize_hd56c4748_0_6 = 0;
    CData/*0:0*/ __PVT__customL1Hint__DOT___chn_Grant_s3_T_3;
    __PVT__customL1Hint__DOT___chn_Grant_s3_T_3 = 0;
    CData/*0:0*/ __PVT__customL1Hint__DOT__hintQueue__DOT__ptr_match;
    __PVT__customL1Hint__DOT__hintQueue__DOT__ptr_match = 0;
    // Body
    vlSelfRef.__PVT__next_counter_17 = vlSelfRef.__PVT__counter_29;
    vlSelfRef.__PVT__customL1Hint__DOT__hintQueue__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__customL1Hint__DOT__hintQueue__DOT__enq_ptr_value)));
    vlSelfRef.__PVT__customL1Hint__DOT__hintQueue__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__customL1Hint__DOT__hintQueue__DOT__deq_ptr_value)));
    vlSelfRef.__PVT__customL1Hint__DOT__hint_s1Queue__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__customL1Hint__DOT__hint_s1Queue__DOT__enq_ptr_value)));
    vlSelfRef.__PVT__customL1Hint__DOT__hint_s1Queue__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__customL1Hint__DOT__hint_s1Queue__DOT__deq_ptr_value)));
    vlSelfRef.__PVT___counter_T_17 = (1ULL + vlSelfRef.__PVT__counter_16);
    vlSelfRef.__PVT___counter_T_19 = (1ULL + vlSelfRef.__PVT__counter_17);
    vlSelfRef.__PVT___counter_T_21 = (1ULL + vlSelfRef.__PVT__counter_18);
    vlSelfRef.__PVT___counter_T_23 = (1ULL + vlSelfRef.__PVT__counter_19);
    vlSelfRef.__PVT___counter_T_25 = (1ULL + vlSelfRef.__PVT__counter_20);
    vlSelfRef.__PVT___counter_T_27 = (1ULL + vlSelfRef.__PVT__counter_21);
    vlSelfRef.__PVT___counter_T_29 = (1ULL + vlSelfRef.__PVT__counter_22);
    vlSelfRef.__PVT___counter_T_31 = (1ULL + vlSelfRef.__PVT__counter_23);
    vlSelfRef.__PVT___counter_T_33 = (1ULL + vlSelfRef.__PVT__counter_24);
    vlSelfRef.__PVT___counter_T_35 = (1ULL + vlSelfRef.__PVT__counter_25);
    vlSelfRef.__PVT___counter_T_37 = (1ULL + vlSelfRef.__PVT__counter_26);
    vlSelfRef.__PVT___counter_T_39 = (1ULL + vlSelfRef.__PVT__counter_27);
    vlSelfRef.__PVT___GEN_1 = (1U & ((~ (IData)(vlSelfRef.__PVT__resetIdx)) 
                                     | (IData)(vlSelfRef.__PVT__resetFinish)));
    vlSelfRef.io_l1Hint_bits_sourceId = vlSelfRef.__PVT__customL1Hint__DOT__hintQueue__DOT__ram_source
        [vlSelfRef.__PVT__customL1Hint__DOT__hintQueue__DOT__deq_ptr_value];
    vlSelfRef.io_nestedwbData_data = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.__PVT__REG___05F1) 
                                       << 8U) | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.__PVT__REG___05F0));
    vlSelfRef.io_releaseBufWrite_valid = ((IData)(vlSelfRef.__PVT__need_write_releaseBuf_s5) 
                                          & (IData)(vlSelfRef.__PVT__task_s5_valid));
    __PVT__customL1Hint__DOT__hintQueue__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__customL1Hint__DOT__hintQueue__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__customL1Hint__DOT__hintQueue__DOT__enq_ptr_value));
    vlSelfRef.__PVT__customL1Hint__DOT__hint_s1Queue__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__customL1Hint__DOT__hint_s1Queue__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__customL1Hint__DOT__hint_s1Queue__DOT__enq_ptr_value));
    vlSelfRef.__PVT___wen_c_T_4 = ((1U == (IData)(vlSelfRef.__PVT__task_s3_bits_param)) 
                                   | ((0U == (IData)(vlSelfRef.__PVT__task_s3_bits_param)) 
                                      | (3U == (IData)(vlSelfRef.__PVT__task_s3_bits_param))));
    vlSelfRef.__PVT___GEN_59 = ((7U == (IData)(vlSelfRef.__PVT__task_s3_bits_opcode))
                                 ? 4U : ((6U == (IData)(vlSelfRef.__PVT__task_s3_bits_opcode))
                                          ? 5U : ((5U 
                                                   == (IData)(vlSelfRef.__PVT__task_s3_bits_opcode))
                                                   ? 2U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__task_s3_bits_opcode))
                                                    ? 1U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelfRef.__PVT__task_s3_bits_opcode))
                                                     ? 1U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__task_s3_bits_opcode))
                                                      ? 1U
                                                      : 0U))))));
    __PVT__c_d_valid_s4 = ((~ (IData)(vlSelfRef.__PVT__c_d_valid_s4_REG)) 
                           & (IData)(vlSelfRef.__PVT__task_s4_valid));
    vlSelfRef.io_nestedwb_c_set_dirty = ((IData)(vlSelfRef.__PVT__task_s3_valid) 
                                         & (((IData)(vlSelfRef.__PVT__task_s3_bits_channel) 
                                             >> 2U) 
                                            & (7U == (IData)(vlSelfRef.__PVT__task_s3_bits_opcode))));
    vlSelfRef.__PVT___io_toMSHRCtl_mshr_alloc_s3_valid_T_1 
        = ((~ (IData)(vlSelfRef.__PVT__task_s3_bits_mshrTask)) 
           & (IData)(vlSelfRef.__PVT__task_s3_valid));
    vlSelfRef.__PVT__sinkB_req_s3 = (1U & ((~ (IData)(vlSelfRef.__PVT__task_s3_bits_mshrTask)) 
                                           & ((IData)(vlSelfRef.__PVT__task_s3_bits_channel) 
                                              >> 1U)));
    vlSelfRef.__PVT__sinkC_req_s3 = ((~ (IData)(vlSelfRef.__PVT__task_s3_bits_mshrTask)) 
                                     & ((IData)(vlSelfRef.__PVT__task_s3_bits_channel) 
                                        >> 2U));
    vlSelfRef.__PVT__pendingC_s4 = (((IData)(vlSelfRef.__PVT__task_s4_bits_channel) 
                                     >> 1U) & ((~ (IData)(vlSelfRef.__PVT__task_s4_bits_mshrTask)) 
                                               & (5U 
                                                  == (IData)(vlSelfRef.__PVT__task_s4_bits_opcode))));
    vlSelfRef.__PVT___mshr_probeack_s3_T_2 = ((IData)(vlSelfRef.__PVT__task_s3_bits_mshrTask) 
                                              & ((IData)(vlSelfRef.__PVT__task_s3_bits_channel) 
                                                 >> 1U));
    vlSelfRef.__PVT__mshr_release_s3 = ((IData)(vlSelfRef.__PVT__task_s3_bits_mshrTask) 
                                        & (6U == (6U 
                                                  & (IData)(vlSelfRef.__PVT__task_s3_bits_opcode))));
    vlSelfRef.io_toReqBuf_1 = ((IData)(vlSelfRef.__PVT__task_s3_valid) 
                               & ((~ ((~ (IData)(vlSelfRef.__PVT__task_s3_bits_metaWen)) 
                                      & (IData)(vlSelfRef.__PVT__task_s3_bits_mshrTask))) 
                                  & ((1U & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_0) 
                                            >> 1U)) 
                                     == (IData)(vlSelfRef.__PVT__task_s3_bits_set))));
    vlSelfRef.__PVT__pendingD_s4 = ((IData)(vlSelfRef.__PVT__task_s4_bits_channel) 
                                    & ((~ (IData)(vlSelfRef.__PVT__task_s4_bits_mshrTask)) 
                                       & ((5U == (IData)(vlSelfRef.__PVT__task_s4_bits_opcode)) 
                                          | (1U == (IData)(vlSelfRef.__PVT__task_s4_bits_opcode)))));
    vlSelfRef.__VdfgRegularize_hd56c4748_0_8 = (1U 
                                                & (~ 
                                                   ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb.__PVT__task_s2_bits_metaWen)) 
                                                    & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb.__PVT__task_s2_bits_mshrTask))));
    __PVT__c_d_valid_s5 = ((~ ((IData)(vlSelfRef.__PVT__c_d_valid_s5_REG) 
                               | (IData)(vlSelfRef.__PVT__c_d_valid_s5_REG_2))) 
                           & (IData)(vlSelfRef.__PVT__task_s5_valid));
    vlSelfRef.__PVT__retry = ((~ (IData)((0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))) 
                              & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__refillReqValid_s3));
    vlSelfRef.__PVT___req_acquire_s3_T_2 = ((6U == (IData)(vlSelfRef.__PVT__task_s3_bits_opcode)) 
                                            | (7U == (IData)(vlSelfRef.__PVT__task_s3_bits_opcode)));
    vlSelfRef.__PVT__sinkA_req_s3 = (1U & ((~ (IData)(vlSelfRef.__PVT__task_s3_bits_mshrTask)) 
                                           & (IData)(vlSelfRef.__PVT__task_s3_bits_channel)));
    vlSelfRef.__PVT___mshr_grant_s3_T_2 = ((IData)(vlSelfRef.__PVT__task_s3_bits_mshrTask) 
                                           & (IData)(vlSelfRef.__PVT__task_s3_bits_channel));
    __PVT__c_arb_io_in_2_bits_data_data = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe_io_releaseBufResp_s3_valid_REG)
                                            ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__releaseBuf_io_resp_data_data)
                                            : (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__refillBuf_io_resp_data_data));
    vlSelfRef.__PVT__c_arb_io_in_0_bits_data_data = 
        ((IData)(vlSelfRef.__PVT__task_s5_bits_mshrTask)
          ? (IData)(vlSelfRef.__PVT__data_s5) : (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__dataStorage__DOT__array_io_r_resp_data_0_data));
    vlSelfRef.io_toReqArb_blockB_s1 = ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb.__PVT__task_s2_valid) 
                                         & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_task_bits_set) 
                                            == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb.__PVT__task_s2_bits_set))) 
                                        | ((IData)(vlSelfRef.__PVT__task_s3_valid) 
                                           & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_task_bits_set) 
                                              == (IData)(vlSelfRef.__PVT__task_s3_bits_set)))) 
                                       | (((IData)(vlSelfRef.__PVT__task_s4_valid) 
                                           & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_task_bits_set) 
                                               == (IData)(vlSelfRef.__PVT__task_s4_bits_set)) 
                                              & (IData)(
                                                        ((4U 
                                                          == 
                                                          (6U 
                                                           & (IData)(vlSelfRef.__PVT__task_s4_bits_opcode))) 
                                                         & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_task_bits_tag) 
                                                            == (IData)(vlSelfRef.__PVT__task_s4_bits_tag)))))) 
                                          | ((IData)(vlSelfRef.__PVT__task_s5_valid) 
                                             & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_task_bits_set) 
                                                 == (IData)(vlSelfRef.__PVT__task_s5_bits_set)) 
                                                & (IData)(
                                                          ((4U 
                                                            == 
                                                            (6U 
                                                             & (IData)(vlSelfRef.__PVT__task_s5_bits_opcode))) 
                                                           & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkB_io_task_bits_tag) 
                                                              == (IData)(vlSelfRef.__PVT__task_s5_bits_tag))))))));
    vlSelfRef.io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__task_s3_bits_channel)) 
                 | (0U != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_18_1))));
    __PVT__need_repl = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory__DOT__refillReqValid_s3) 
                        & ((0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_state)) 
                           & (IData)(vlSelfRef.__PVT__task_s3_bits_replTask)));
    vlSelfRef.__PVT__next_counter_25 = (vlSelfRef.__PVT__counter_37 
                                        + (QData)((IData)(
                                                          ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_accessed)) 
                                                           & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_prefetch) 
                                                              & ((~ (IData)(
                                                                            (0U 
                                                                             != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_18_1)))) 
                                                                 & (IData)(vlSelfRef.__PVT__task_s3_valid)))))));
    vlSelfRef.__VdfgRegularize_hd56c4748_0_9 = ((0U 
                                                 != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_18_1)) 
                                                & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_prefetch));
    __PVT___sink_resp_s3_bits_param_T_6 = (((IData)(vlSelfRef.__PVT__task_s3_bits_param) 
                                            << 2U) 
                                           | (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_state));
    __PVT__sink_resp_s3_a_promoteT = ((0U != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_18_1)) 
                                      & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_state) 
                                         >> 1U));
    __VdfgRegularize_hd56c4748_0_6 = (((3U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_state)) 
                                       & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_dirty)) 
                                      | (IData)(vlSelfRef.__PVT__task_s3_bits_needProbeAckData));
    __PVT__need_mshr_s3_b = ((0U != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_18_1)) 
                             & (((~ (((1U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_state)) 
                                      | (3U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_state))) 
                                     & (1U == (IData)(vlSelfRef.__PVT__task_s3_bits_param)))) 
                                 & ((IData)(vlSelfRef.__PVT__task_s3_bits_channel) 
                                    >> 1U)) & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_clients)));
    vlSelfRef.__PVT__customL1Hint__DOT__hintQueue_io_deq_valid 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__customL1Hint__DOT__hintQueue__DOT__maybe_full)) 
                    & (IData)(__PVT__customL1Hint__DOT__hintQueue__DOT__ptr_match))));
    vlSelfRef.__PVT__customL1Hint__DOT__hintQueue_io_enq_ready 
        = (1U & (~ ((IData)(__PVT__customL1Hint__DOT__hintQueue__DOT__ptr_match) 
                    & (IData)(vlSelfRef.__PVT__customL1Hint__DOT__hintQueue__DOT__maybe_full))));
    vlSelfRef.__PVT__customL1Hint__DOT__hint_s1Queue__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__customL1Hint__DOT__hint_s1Queue__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__customL1Hint__DOT__hint_s1Queue__DOT__ptr_match));
    vlSelfRef.__PVT__c_arb_io_in_1_valid = ((IData)(__PVT__c_d_valid_s4) 
                                            & (IData)(vlSelfRef.__PVT__isC_s4));
    vlSelfRef.__PVT__d_arb_io_in_1_valid = ((IData)(__PVT__c_d_valid_s4) 
                                            & (IData)(vlSelfRef.__PVT__isD_s4));
    vlSelfRef.__PVT___T_103 = ((IData)(vlSelfRef.__PVT___io_toMSHRCtl_mshr_alloc_s3_valid_T_1) 
                               & (IData)(vlSelfRef.__PVT__task_s3_bits_channel));
    vlSelfRef.__PVT__hit_s3 = ((IData)(vlSelfRef.__PVT___io_toMSHRCtl_mshr_alloc_s3_valid_T_1) 
                               & (0U != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_18_1)));
    vlSelfRef.__PVT__miss_s3 = ((~ (IData)((0U != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_18_1)))) 
                                & (IData)(vlSelfRef.__PVT___io_toMSHRCtl_mshr_alloc_s3_valid_T_1));
    vlSelfRef.__PVT__wen_c = ((IData)(vlSelfRef.__PVT__sinkC_req_s3) 
                              & ((IData)(vlSelfRef.__PVT___wen_c_T_4) 
                                 & ((IData)(vlSelfRef.__PVT__task_s3_bits_opcode) 
                                    & (0U != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_18_1)))));
    vlSelfRef.__PVT__metaW_valid_s3_c = ((IData)(vlSelfRef.__PVT__sinkC_req_s3) 
                                         & (0U != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_18_1)));
    vlSelfRef.__PVT__next_counter_5 = (vlSelfRef.__PVT__counter_5 
                                       + (QData)((IData)(
                                                         ((IData)(vlSelfRef.__PVT__task_s3_valid) 
                                                          & ((IData)(vlSelfRef.__PVT___mshr_probeack_s3_T_2) 
                                                             & (5U 
                                                                == (IData)(vlSelfRef.__PVT__task_s3_bits_opcode)))))));
    vlSelfRef.__PVT__mshr_probeack_s3 = ((IData)(vlSelfRef.__PVT___mshr_probeack_s3_T_2) 
                                         & (4U == (6U 
                                                   & (IData)(vlSelfRef.__PVT__task_s3_bits_opcode))));
    vlSelfRef.__PVT__next_counter_20 = (vlSelfRef.__PVT__counter_32 
                                        + (QData)((IData)(vlSelfRef.__PVT__mshr_release_s3)));
    vlSelfRef.__PVT__next_counter_6 = (vlSelfRef.__PVT__counter_6 
                                       + (QData)((IData)(
                                                         ((IData)(vlSelfRef.__PVT__task_s3_valid) 
                                                          & (IData)(vlSelfRef.__PVT__mshr_release_s3)))));
    vlSelfRef.__PVT___T_169 = ((IData)(vlSelfRef.__PVT__mshr_release_s3) 
                               & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_prefetch));
    vlSelfRef.io_status_vec_toD_1_valid = ((IData)(vlSelfRef.__PVT__task_s4_valid) 
                                           & ((IData)(vlSelfRef.__PVT__isD_s4) 
                                              | (IData)(vlSelfRef.__PVT__pendingD_s4)));
    vlSelfRef.io_toReqArb_blockG_s1 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb.__PVT__task_s2_valid) 
                                       & ((IData)(vlSelfRef.__VdfgRegularize_hd56c4748_0_8) 
                                          & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb.__PVT__mshr_task_s1_bits_set) 
                                             == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb.__PVT__task_s2_bits_set))));
    vlSelfRef.io_toReqBuf_0 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb.__PVT__task_s2_valid) 
                               & ((IData)(vlSelfRef.__VdfgRegularize_hd56c4748_0_8) 
                                  & ((1U & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_0) 
                                            >> 1U)) 
                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb.__PVT__task_s2_bits_set))));
    vlSelfRef.io_status_vec_toC_2_valid = ((IData)(__PVT__c_d_valid_s5) 
                                           & (IData)(vlSelfRef.__PVT__isC_s5));
    vlSelfRef.io_status_vec_toD_2_valid = ((IData)(__PVT__c_d_valid_s5) 
                                           & (IData)(vlSelfRef.__PVT__isD_s5));
    vlSelfRef.__PVT__req_needT_s3 = (1U & ((~ ((IData)(vlSelfRef.__PVT__task_s3_bits_opcode) 
                                               >> 2U)) 
                                           | (((5U 
                                                == (IData)(vlSelfRef.__PVT__task_s3_bits_opcode)) 
                                               & (1U 
                                                  == (IData)(vlSelfRef.__PVT__task_s3_bits_param))) 
                                              | ((IData)(vlSelfRef.__PVT___req_acquire_s3_T_2) 
                                                 & (0U 
                                                    != (IData)(vlSelfRef.__PVT__task_s3_bits_param))))));
    vlSelfRef.__PVT__req_prefetch_s3 = ((IData)(vlSelfRef.__PVT__sinkA_req_s3) 
                                        & (5U == (IData)(vlSelfRef.__PVT__task_s3_bits_opcode)));
    vlSelfRef.__PVT__req_acquire_s3 = ((IData)(vlSelfRef.__PVT__sinkA_req_s3) 
                                       & (IData)(vlSelfRef.__PVT___req_acquire_s3_T_2));
    vlSelfRef.__PVT__req_get_s3 = ((IData)(vlSelfRef.__PVT__sinkA_req_s3) 
                                   & (4U == (IData)(vlSelfRef.__PVT__task_s3_bits_opcode)));
    vlSelfRef.__PVT__next_counter_1 = (vlSelfRef.__PVT__counter_1 
                                       + (QData)((IData)(
                                                         ((IData)(vlSelfRef.__PVT__task_s3_valid) 
                                                          & ((~ (IData)(vlSelfRef.__PVT__retry)) 
                                                             & ((IData)(vlSelfRef.__PVT___mshr_grant_s3_T_2) 
                                                                & (5U 
                                                                   == (IData)(vlSelfRef.__PVT__task_s3_bits_opcode))))))));
    vlSelfRef.__PVT__mshr_grant_s3 = ((IData)(vlSelfRef.__PVT___mshr_grant_s3_T_2) 
                                      & (4U == (6U 
                                                & (IData)(vlSelfRef.__PVT__task_s3_bits_opcode))));
    vlSelfRef.__PVT__mshr_accessackdata_s3 = ((IData)(vlSelfRef.__PVT___mshr_grant_s3_T_2) 
                                              & (1U 
                                                 == (IData)(vlSelfRef.__PVT__task_s3_bits_opcode)));
    vlSelfRef.__PVT__mshr_hintack_s3 = ((IData)(vlSelfRef.__PVT___mshr_grant_s3_T_2) 
                                        & (2U == (IData)(vlSelfRef.__PVT__task_s3_bits_opcode)));
    if ((2U & (IData)(vlSelfRef.__PVT__task_s3_bits_channel))) {
        vlSelfRef.__PVT___GEN_61 = ((0U != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_18_1))
                                     ? ((3U == (IData)(__PVT___sink_resp_s3_bits_param_T_6))
                                         ? 3U : ((7U 
                                                  == (IData)(__PVT___sink_resp_s3_bits_param_T_6))
                                                  ? 0U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__PVT___sink_resp_s3_bits_param_T_6))
                                                   ? 1U
                                                   : 
                                                  ((9U 
                                                    == (IData)(__PVT___sink_resp_s3_bits_param_T_6))
                                                    ? 2U
                                                    : 4U))))
                                     : 5U);
        vlSelfRef.__PVT___GEN_60 = (((0U != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_18_1)) 
                                     & (IData)(__VdfgRegularize_hd56c4748_0_6))
                                     ? 5U : 4U);
    } else {
        vlSelfRef.__PVT___GEN_61 = 0U;
        vlSelfRef.__PVT___GEN_60 = 6U;
    }
    __PVT__need_data_b = ((IData)(vlSelfRef.__PVT__sinkB_req_s3) 
                          & ((0U != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_18_1)) 
                             & ((2U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_state)) 
                                | (IData)(__VdfgRegularize_hd56c4748_0_6))));
    vlSelfRef.__PVT__customL1Hint__DOT__hintQueue__DOT__do_deq 
        = ((IData)(vlSelfRef.__PVT__customL1Hint__DOT__hintQueue_io_deq_valid) 
           & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__l1HintArb_io_out_ready_REG)));
    vlSelfRef.__PVT__next_counter_14 = (vlSelfRef.__PVT__counter_14 
                                        + (QData)((IData)(
                                                          ((IData)(vlSelfRef.__PVT__hit_s3) 
                                                           & ((IData)(vlSelfRef.__PVT__task_s3_bits_channel) 
                                                              >> 1U)))));
    vlSelfRef.__PVT___T_46 = ((IData)(vlSelfRef.__PVT__hit_s3) 
                              & (IData)(vlSelfRef.__PVT__task_s3_bits_channel));
    vlSelfRef.__PVT__next_counter_15 = (vlSelfRef.__PVT__counter_15 
                                        + (QData)((IData)(
                                                          ((IData)(vlSelfRef.__PVT__miss_s3) 
                                                           & ((IData)(vlSelfRef.__PVT__task_s3_bits_channel) 
                                                              >> 1U)))));
    vlSelfRef.__PVT___T_70 = ((IData)(vlSelfRef.__PVT__miss_s3) 
                              & (IData)(vlSelfRef.__PVT__task_s3_bits_channel));
    vlSelfRef.__PVT__next_counter_4 = (vlSelfRef.__PVT__counter_4 
                                       + (QData)((IData)(
                                                         ((IData)(vlSelfRef.__PVT__task_s3_valid) 
                                                          & (IData)(vlSelfRef.__PVT__mshr_probeack_s3)))));
    vlSelfRef.__PVT___isC_s3_T = ((IData)(vlSelfRef.__PVT__mshr_release_s3) 
                                  | (IData)(vlSelfRef.__PVT__mshr_probeack_s3));
    vlSelfRef.__PVT__next_counter_21 = (vlSelfRef.__PVT__counter_33 
                                        + (QData)((IData)(
                                                          ((IData)(vlSelfRef.__PVT___T_169) 
                                                           & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_accessed)))));
    vlSelfRef.__PVT__next_counter_22 = (vlSelfRef.__PVT__counter_34 
                                        + (QData)((IData)(
                                                          ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_accessed)) 
                                                           & (IData)(vlSelfRef.__PVT___T_169)))));
    vlSelfRef.__PVT___chnl_fire_s4_T = (((~ (IData)(vlSelfRef.io_status_vec_toC_2_valid)) 
                                         & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sourceC__DOT__queue_io_enq_ready)) 
                                        & (IData)(vlSelfRef.__PVT__c_arb_io_in_1_valid));
    vlSelfRef.c_arb__DOT____VdfgRegularize_h365a35c3_0_0 
        = ((IData)(vlSelfRef.io_status_vec_toC_2_valid) 
           | (IData)(vlSelfRef.__PVT__c_arb_io_in_1_valid));
    vlSelfRef.__PVT___chnl_fire_s4_T_1 = ((~ (IData)(vlSelfRef.io_status_vec_toD_2_valid)) 
                                          & (IData)(vlSelfRef.__PVT__d_arb_io_in_1_valid));
    vlSelfRef.d_arb__DOT____VdfgRegularize_h365a35c3_0_0 
        = ((IData)(vlSelfRef.io_status_vec_toD_2_valid) 
           | (IData)(vlSelfRef.__PVT__d_arb_io_in_1_valid));
    if (vlSelfRef.__PVT__req_acquire_s3) {
        vlSelfRef.io_toMSHRCtl_mshr_alloc_s3_bits_task_aliasTask 
            = ((0U != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_18_1)) 
               & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_clients) 
                  & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_alias) 
                     != (IData)(vlSelfRef.__PVT__task_s3_bits_alias))));
        vlSelfRef.__PVT___sink_resp_s3_bits_param_T_4 
            = (((~ (IData)(__PVT__sink_resp_s3_a_promoteT)) 
                & (0U == (IData)(vlSelfRef.__PVT__task_s3_bits_param)))
                ? 1U : 0U);
    } else {
        vlSelfRef.io_toMSHRCtl_mshr_alloc_s3_bits_task_aliasTask = 0U;
        vlSelfRef.__PVT___sink_resp_s3_bits_param_T_4 = 0U;
    }
    vlSelfRef.io_prefetchTrain_valid = ((IData)(vlSelfRef.__PVT__task_s3_valid) 
                                        & ((((IData)(vlSelfRef.__PVT__req_acquire_s3) 
                                             | (IData)(vlSelfRef.__PVT__req_get_s3)) 
                                            & ((IData)(vlSelfRef.__PVT__task_s3_bits_needHint) 
                                               & ((~ (IData)(
                                                             (0U 
                                                              != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_18_1)))) 
                                                  | (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_prefetch)))) 
                                           | (IData)(vlSelfRef.__PVT__task_s3_bits_mergeA)));
    __PVT__need_probe_s3_a = ((IData)(vlSelfRef.__PVT__req_get_s3) 
                              & ((0U != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_18_1)) 
                                 & (2U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_state))));
    __PVT__need_acquire_s3_a = ((IData)(vlSelfRef.__PVT__task_s3_bits_channel) 
                                & ((0U != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_18_1))
                                    ? ((1U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_state)) 
                                       & ((~ (IData)(vlSelfRef.__PVT__req_prefetch_s3)) 
                                          & (IData)(vlSelfRef.__PVT__req_needT_s3)))
                                    : ((IData)(vlSelfRef.__PVT__req_acquire_s3) 
                                       | ((IData)(vlSelfRef.__PVT__req_prefetch_s3) 
                                          | (IData)(vlSelfRef.__PVT__req_get_s3)))));
    vlSelfRef.__PVT__next_counter = (vlSelfRef.__PVT__counter 
                                     + (QData)((IData)(
                                                       ((IData)(vlSelfRef.__PVT__task_s3_valid) 
                                                        & ((~ (IData)(vlSelfRef.__PVT__retry)) 
                                                           & (IData)(vlSelfRef.__PVT__mshr_grant_s3))))));
    vlSelfRef.__PVT__next_counter_2 = (vlSelfRef.__PVT__counter_2 
                                       + (QData)((IData)(
                                                         ((IData)(vlSelfRef.__PVT__task_s3_valid) 
                                                          & ((~ (IData)(vlSelfRef.__PVT__retry)) 
                                                             & (IData)(vlSelfRef.__PVT__mshr_accessackdata_s3))))));
    vlSelfRef.__PVT__next_counter_3 = (vlSelfRef.__PVT__counter_3 
                                       + (QData)((IData)(
                                                         ((IData)(vlSelfRef.__PVT__task_s3_valid) 
                                                          & ((~ (IData)(vlSelfRef.__PVT__retry)) 
                                                             & (IData)(vlSelfRef.__PVT__mshr_hintack_s3))))));
    vlSelfRef.__PVT__mshr_refill_s3 = ((IData)(vlSelfRef.__PVT__mshr_accessackdata_s3) 
                                       | ((IData)(vlSelfRef.__PVT__mshr_hintack_s3) 
                                          | (IData)(vlSelfRef.__PVT__mshr_grant_s3)));
    vlSelfRef.__PVT__next_counter_7 = (vlSelfRef.__PVT__counter_7 
                                       + (QData)((IData)(vlSelfRef.__PVT___T_46)));
    vlSelfRef.__PVT__next_counter_8 = (vlSelfRef.__PVT__counter_8 
                                       + (QData)((IData)(
                                                         ((IData)(vlSelfRef.__PVT___T_46) 
                                                          & (IData)(vlSelfRef.__PVT___req_acquire_s3_T_2)))));
    vlSelfRef.__PVT__next_counter_9 = (vlSelfRef.__PVT__counter_9 
                                       + (QData)((IData)(
                                                         ((IData)(vlSelfRef.__PVT___T_46) 
                                                          & (4U 
                                                             == (IData)(vlSelfRef.__PVT__task_s3_bits_opcode))))));
    vlSelfRef.__PVT__next_counter_11 = (vlSelfRef.__PVT__counter_11 
                                        + (QData)((IData)(vlSelfRef.__PVT___T_70)));
    vlSelfRef.__PVT__next_counter_12 = (vlSelfRef.__PVT__counter_12 
                                        + (QData)((IData)(
                                                          ((IData)(vlSelfRef.__PVT___T_70) 
                                                           & (IData)(vlSelfRef.__PVT___req_acquire_s3_T_2)))));
    vlSelfRef.__PVT__next_counter_13 = (vlSelfRef.__PVT__counter_13 
                                        + (QData)((IData)(
                                                          ((IData)(vlSelfRef.__PVT___T_70) 
                                                           & (4U 
                                                              == (IData)(vlSelfRef.__PVT__task_s3_bits_opcode))))));
    vlSelfRef.__PVT__chnl_fire_s4 = ((IData)(vlSelfRef.__PVT___chnl_fire_s4_T) 
                                     | (IData)(vlSelfRef.__PVT___chnl_fire_s4_T_1));
    vlSelfRef.__PVT__next_counter_16 = (vlSelfRef.__PVT__counter_28 
                                        + (QData)((IData)(vlSelfRef.io_prefetchTrain_valid)));
    vlSelfRef.__PVT___T_156 = ((IData)(vlSelfRef.io_prefetchTrain_valid) 
                               & (IData)(vlSelfRef.__PVT__req_acquire_s3));
    vlSelfRef.__PVT___T_179 = ((IData)(vlSelfRef.io_prefetchTrain_valid) 
                               & (IData)(vlSelfRef.__PVT__req_get_s3));
    vlSelfRef.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__task_s3_bits_channel)) 
                 | (~ ((IData)(vlSelfRef.io_toMSHRCtl_mshr_alloc_s3_bits_task_aliasTask) 
                       | (IData)(__PVT__need_probe_s3_a)))));
    __PVT___need_write_releaseBuf_T = ((IData)(__PVT__need_probe_s3_a) 
                                       | (IData)(vlSelfRef.io_toMSHRCtl_mshr_alloc_s3_bits_task_aliasTask));
    vlSelfRef.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__task_s3_bits_channel)) 
                 | (~ (IData)(__PVT__need_acquire_s3_a))));
    vlSelfRef.__PVT___io_toDS_req_s3_bits_way_T = ((IData)(vlSelfRef.__PVT__mshr_refill_s3) 
                                                   & (IData)(vlSelfRef.__PVT__task_s3_bits_replTask));
    vlSelfRef.__PVT___metaW_valid_s3_mshr_T_1 = ((IData)(vlSelfRef.__PVT__mshr_refill_s3) 
                                                 & (IData)(vlSelfRef.__PVT__retry));
    vlSelfRef.__PVT___isD_s3_T_1 = ((~ (IData)(vlSelfRef.__PVT__retry)) 
                                    & (IData)(vlSelfRef.__PVT__mshr_refill_s3));
    vlSelfRef.io_toDS_req_s3_bits_wen = ((IData)(vlSelfRef.__PVT__wen_c) 
                                         | ((IData)(vlSelfRef.__PVT__task_s3_bits_dsWen) 
                                            & ((IData)(vlSelfRef.__PVT__mshr_probeack_s3) 
                                               | ((IData)(vlSelfRef.__PVT__mshr_release_s3) 
                                                  | ((IData)(vlSelfRef.__PVT__mshr_refill_s3) 
                                                     & ((~ (IData)(__PVT__need_repl)) 
                                                        & (~ (IData)(vlSelfRef.__PVT__retry))))))));
    __PVT__need_data_mshr_repl = ((IData)(vlSelfRef.__PVT__mshr_refill_s3) 
                                  & ((~ (IData)(vlSelfRef.__PVT__retry)) 
                                     & (IData)(__PVT__need_repl)));
    vlSelfRef.__PVT__req_drop_s4 = ((~ (IData)(vlSelfRef.__PVT__need_write_releaseBuf_s4)) 
                                    & (IData)(vlSelfRef.__PVT__chnl_fire_s4));
    vlSelfRef.__PVT__next_counter_18 = (vlSelfRef.__PVT__counter_30 
                                        + (QData)((IData)(
                                                          ((~ (IData)(
                                                                      (0U 
                                                                       != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_18_1)))) 
                                                           & (IData)(vlSelfRef.__PVT___T_156)))));
    vlSelfRef.__PVT__next_counter_19 = (vlSelfRef.__PVT__counter_31 
                                        + (QData)((IData)(
                                                          ((IData)(vlSelfRef.__PVT___T_156) 
                                                           & (IData)(vlSelfRef.__VdfgRegularize_hd56c4748_0_9)))));
    vlSelfRef.__PVT__next_counter_23 = (vlSelfRef.__PVT__counter_35 
                                        + (QData)((IData)(
                                                          ((~ (IData)(
                                                                      (0U 
                                                                       != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_18_1)))) 
                                                           & (IData)(vlSelfRef.__PVT___T_179)))));
    vlSelfRef.__PVT__next_counter_24 = (vlSelfRef.__PVT__counter_36 
                                        + (QData)((IData)(
                                                          ((IData)(vlSelfRef.__PVT___T_179) 
                                                           & (IData)(vlSelfRef.__VdfgRegularize_hd56c4748_0_9)))));
    __PVT__need_mshr_s3_a = ((IData)(__PVT__need_acquire_s3_a) 
                             | (IData)(__PVT___need_write_releaseBuf_T));
    if (vlSelfRef.__PVT___io_toDS_req_s3_bits_way_T) {
        vlSelfRef.io_tagWReq_bits_way = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_way;
        vlSelfRef.io_toDS_req_s3_bits_way = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_replResp_bits_way;
    } else {
        vlSelfRef.io_tagWReq_bits_way = vlSelfRef.__PVT__task_s3_bits_way;
        vlSelfRef.io_toDS_req_s3_bits_way = ((IData)(vlSelfRef.__PVT__task_s3_bits_mshrTask)
                                              ? (IData)(vlSelfRef.__PVT__task_s3_bits_way)
                                              : (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_way));
    }
    vlSelfRef.__PVT__next_counter_10 = (vlSelfRef.__PVT__counter_10 
                                        + (QData)((IData)(vlSelfRef.__PVT___metaW_valid_s3_mshr_T_1)));
    vlSelfRef.io_tagWReq_valid = ((IData)(vlSelfRef.__PVT__task_s3_bits_tagWen) 
                                  & ((IData)(vlSelfRef.__PVT__task_s3_valid) 
                                     & (IData)(vlSelfRef.__PVT___isD_s3_T_1)));
    vlSelfRef.io_status_vec_toD_0_valid = ((IData)(vlSelfRef.__PVT__task_s3_valid) 
                                           & ((~ (IData)(vlSelfRef.__PVT__task_s3_bits_mshrTask)) 
                                              | (IData)(vlSelfRef.__PVT___isD_s3_T_1)));
    vlSelfRef.__PVT__need_write_releaseBuf = ((IData)(__PVT___need_write_releaseBuf_T) 
                                              | (((IData)(__PVT__need_data_b) 
                                                  & (IData)(__PVT__need_mshr_s3_b)) 
                                                 | (IData)(__PVT__need_data_mshr_repl)));
    vlSelfRef.io_toDS_req_s3_valid = ((IData)(vlSelfRef.__PVT__task_s3_valid) 
                                      & (((0U != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_18_1)) 
                                          & ((IData)(vlSelfRef.__PVT__req_get_s3) 
                                             | ((IData)(vlSelfRef.__PVT__sinkA_req_s3) 
                                                & (6U 
                                                   == (IData)(vlSelfRef.__PVT__task_s3_bits_opcode))))) 
                                         | (((IData)(__PVT__need_data_b) 
                                             | (IData)(__PVT__need_data_mshr_repl)) 
                                            | (IData)(vlSelfRef.io_toDS_req_s3_bits_wen))));
    vlSelfRef.__PVT___task_s5_valid_T_1 = ((~ (IData)(vlSelfRef.__PVT__req_drop_s4)) 
                                           & (IData)(vlSelfRef.__PVT__task_s4_valid));
    vlSelfRef.__PVT__metaW_valid_s3_a = ((~ (IData)(__PVT__need_mshr_s3_a)) 
                                         & ((IData)(vlSelfRef.__PVT__sinkA_req_s3) 
                                            & ((~ (IData)(vlSelfRef.__PVT__req_get_s3)) 
                                               & (~ (IData)(vlSelfRef.__PVT__req_prefetch_s3)))));
    __PVT__customL1Hint_io_s3_need_mshr = ((IData)(__PVT__need_mshr_s3_a) 
                                           | (IData)(__PVT__need_mshr_s3_b));
    vlSelfRef.__PVT___io_metaWReq_valid_T_1 = ((IData)(vlSelfRef.__PVT__metaW_valid_s3_a) 
                                               | ((~ (IData)(__PVT__need_mshr_s3_b)) 
                                                  & ((IData)(vlSelfRef.__PVT__sinkB_req_s3) 
                                                     & ((0U 
                                                         != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_18_1)) 
                                                        & ((3U 
                                                            == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_state)) 
                                                           | ((1U 
                                                               == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_state)) 
                                                              & (2U 
                                                                 == (IData)(vlSelfRef.__PVT__task_s3_bits_param))))))));
    if (vlSelfRef.__PVT__resetFinish) {
        vlSelfRef.__PVT___GEN_0 = (1U & (IData)(vlSelfRef.__PVT__resetIdx));
        vlSelfRef.io_metaWReq_bits_set = vlSelfRef.__PVT__task_s3_bits_set;
        vlSelfRef.io_metaWReq_bits_wayOH = (3U & ((IData)(1U) 
                                                  << (IData)(vlSelfRef.io_toDS_req_s3_bits_way)));
        vlSelfRef.io_metaWReq_bits_wmeta_state = ((IData)(vlSelfRef.__PVT___io_metaWReq_valid_T_1)
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__metaW_valid_s3_a)
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__req_needT_s3) 
                                                     | (IData)(__PVT__sink_resp_s3_a_promoteT))
                                                     ? 2U
                                                     : (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_state))
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelfRef.__PVT__task_s3_bits_param))
                                                     ? 0U
                                                     : 1U))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__metaW_valid_s3_c)
                                                    ? 
                                                   ((IData)(vlSelfRef.__PVT___wen_c_T_4)
                                                     ? 3U
                                                     : (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__directory_io_resp_bits_meta_state))
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__task_s3_bits_mergeA)
                                                     ? (IData)(vlSelfRef.__PVT__task_s3_bits_aMergeTask_meta_state)
                                                     : (IData)(vlSelfRef.__PVT__task_s3_bits_meta_state))));
    } else {
        vlSelfRef.__PVT___GEN_0 = (1U & (~ (IData)(vlSelfRef.__PVT__resetIdx)));
        vlSelfRef.io_metaWReq_bits_set = vlSelfRef.__PVT__resetIdx;
        vlSelfRef.io_metaWReq_bits_wayOH = 3U;
        vlSelfRef.io_metaWReq_bits_wmeta_state = 0U;
    }
    vlSelfRef.__PVT___req_drop_s3_T_2 = ((~ (IData)(vlSelfRef.__PVT__task_s3_bits_mshrTask)) 
                                         & (IData)(__PVT__customL1Hint_io_s3_need_mshr));
    __PVT__customL1Hint__DOT___chn_Grant_s3_T_3 = ((IData)(vlSelfRef.__PVT__task_s3_valid) 
                                                   & ((~ (IData)(vlSelfRef.__PVT__task_s3_bits_mshrTask)) 
                                                      & (~ (IData)(__PVT__customL1Hint_io_s3_need_mshr))));
    vlSelfRef.__PVT__sink_resp_s3_valid = ((~ (IData)(__PVT__customL1Hint_io_s3_need_mshr)) 
                                           & (IData)(vlSelfRef.__PVT___io_toMSHRCtl_mshr_alloc_s3_valid_T_1));
    vlSelfRef.io_toMSHRCtl_mshr_alloc_s3_valid = ((IData)(vlSelfRef.__PVT___io_toMSHRCtl_mshr_alloc_s3_valid_T_1) 
                                                  & (IData)(__PVT__customL1Hint_io_s3_need_mshr));
    vlSelfRef.io_metaWReq_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__resetFinish)) 
                                         | ((IData)(vlSelfRef.__PVT__task_s3_valid) 
                                            & ((IData)(vlSelfRef.__PVT___io_metaWReq_valid_T_1) 
                                               | ((IData)(vlSelfRef.__PVT__metaW_valid_s3_c) 
                                                  | ((IData)(vlSelfRef.__PVT__task_s3_bits_mshrTask) 
                                                     & ((~ (IData)(vlSelfRef.__PVT___metaW_valid_s3_mshr_T_1)) 
                                                        & (IData)(vlSelfRef.__PVT__task_s3_bits_metaWen))))))));
    if (vlSelfRef.__PVT__sink_resp_s3_valid) {
        __PVT__c_arb_io_in_2_bits_task_mshrId = (0xffU 
                                                 & ((IData)(0x80U) 
                                                    + (IData)(vlSelfRef.__PVT__task_s3_bits_sourceId)));
        if ((1U & (IData)(vlSelfRef.__PVT__task_s3_bits_channel))) {
            __PVT__c_arb_io_in_2_bits_task_param = vlSelfRef.__PVT___sink_resp_s3_bits_param_T_4;
            __PVT__customL1Hint_io_s3_task_bits_opcode 
                = vlSelfRef.__PVT___GEN_59;
        } else {
            __PVT__c_arb_io_in_2_bits_task_param = vlSelfRef.__PVT___GEN_61;
            __PVT__customL1Hint_io_s3_task_bits_opcode 
                = vlSelfRef.__PVT___GEN_60;
        }
    } else {
        __PVT__c_arb_io_in_2_bits_task_mshrId = (0xffU 
                                                 & (IData)(vlSelfRef.__PVT__task_s3_bits_mshrId));
        __PVT__c_arb_io_in_2_bits_task_param = vlSelfRef.__PVT__task_s3_bits_param;
        __PVT__customL1Hint_io_s3_task_bits_opcode 
            = vlSelfRef.__PVT__task_s3_bits_opcode;
    }
    if (vlSelfRef.io_status_vec_toD_2_valid) {
        vlSelfRef.io_toSourceD_bits_task_set = vlSelfRef.__PVT__task_s5_bits_set;
        vlSelfRef.io_toSourceD_bits_task_tag = vlSelfRef.__PVT__task_s5_bits_tag;
        vlSelfRef.io_toSourceD_bits_task_mergeA = vlSelfRef.__PVT__task_s5_bits_mergeA;
        vlSelfRef.io_toSourceD_bits_task_opcode = vlSelfRef.__PVT__task_s5_bits_opcode;
    } else if (vlSelfRef.__PVT__d_arb_io_in_1_valid) {
        vlSelfRef.io_toSourceD_bits_task_set = vlSelfRef.__PVT__task_s4_bits_set;
        vlSelfRef.io_toSourceD_bits_task_tag = vlSelfRef.__PVT__task_s4_bits_tag;
        vlSelfRef.io_toSourceD_bits_task_mergeA = vlSelfRef.__PVT__task_s4_bits_mergeA;
        vlSelfRef.io_toSourceD_bits_task_opcode = vlSelfRef.__PVT__task_s4_bits_opcode;
    } else {
        vlSelfRef.io_toSourceD_bits_task_set = vlSelfRef.__PVT__task_s3_bits_set;
        vlSelfRef.io_toSourceD_bits_task_tag = vlSelfRef.__PVT__task_s3_bits_tag;
        vlSelfRef.io_toSourceD_bits_task_mergeA = vlSelfRef.__PVT__task_s3_bits_mergeA;
        vlSelfRef.io_toSourceD_bits_task_opcode = __PVT__customL1Hint_io_s3_task_bits_opcode;
    }
    if (vlSelfRef.io_status_vec_toC_2_valid) {
        vlSelfRef.io_toSourceC_bits_task_set = vlSelfRef.__PVT__task_s5_bits_set;
        vlSelfRef.io_toSourceC_bits_task_tag = vlSelfRef.__PVT__task_s5_bits_tag;
        vlSelfRef.io_toSourceC_bits_task_off = vlSelfRef.__PVT__task_s5_bits_off;
        vlSelfRef.io_toSourceC_bits_data_data = vlSelfRef.__PVT__c_arb_io_in_0_bits_data_data;
        vlSelfRef.io_toSourceC_bits_task_mshrId = vlSelfRef.__PVT__task_s5_bits_mshrId;
        vlSelfRef.io_toSourceC_bits_task_param = vlSelfRef.__PVT__task_s5_bits_param;
        vlSelfRef.io_toSourceC_bits_task_opcode = vlSelfRef.__PVT__task_s5_bits_opcode;
    } else if (vlSelfRef.__PVT__c_arb_io_in_1_valid) {
        vlSelfRef.io_toSourceC_bits_task_set = vlSelfRef.__PVT__task_s4_bits_set;
        vlSelfRef.io_toSourceC_bits_task_tag = vlSelfRef.__PVT__task_s4_bits_tag;
        vlSelfRef.io_toSourceC_bits_task_off = vlSelfRef.__PVT__task_s4_bits_off;
        vlSelfRef.io_toSourceC_bits_data_data = vlSelfRef.__PVT__data_s4;
        vlSelfRef.io_toSourceC_bits_task_mshrId = vlSelfRef.__PVT__task_s4_bits_mshrId;
        vlSelfRef.io_toSourceC_bits_task_param = vlSelfRef.__PVT__task_s4_bits_param;
        vlSelfRef.io_toSourceC_bits_task_opcode = vlSelfRef.__PVT__task_s4_bits_opcode;
    } else {
        vlSelfRef.io_toSourceC_bits_task_set = vlSelfRef.__PVT__task_s3_bits_set;
        vlSelfRef.io_toSourceC_bits_task_tag = vlSelfRef.__PVT__task_s3_bits_tag;
        vlSelfRef.io_toSourceC_bits_task_off = vlSelfRef.__PVT__task_s3_bits_off;
        vlSelfRef.io_toSourceC_bits_data_data = __PVT__c_arb_io_in_2_bits_data_data;
        vlSelfRef.io_toSourceC_bits_task_mshrId = __PVT__c_arb_io_in_2_bits_task_mshrId;
        vlSelfRef.io_toSourceC_bits_task_param = __PVT__c_arb_io_in_2_bits_task_param;
        vlSelfRef.io_toSourceC_bits_task_opcode = __PVT__customL1Hint_io_s3_task_bits_opcode;
    }
    vlSelfRef.__PVT__customL1Hint__DOT__chn_Grant_s3 
        = ((IData)(__PVT__customL1Hint__DOT___chn_Grant_s3_T_3) 
           & ((IData)(vlSelfRef.__PVT__task_s3_bits_channel) 
              & (4U == (IData)(__PVT__customL1Hint_io_s3_task_bits_opcode))));
    __PVT___isC_s3_T_5 = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__task_s3_bits_mshrTask)) 
                                   & (IData)(__PVT__customL1Hint_io_s3_task_bits_opcode))));
    vlSelfRef.__PVT__customL1Hint__DOT__enqValid_s3 
        = ((IData)(vlSelfRef.__PVT__customL1Hint__DOT__chn_Grant_s3) 
           | ((IData)(__PVT__customL1Hint__DOT___chn_Grant_s3_T_3) 
              & ((IData)(vlSelfRef.__PVT__task_s3_bits_channel) 
                 & (5U == (IData)(__PVT__customL1Hint_io_s3_task_bits_opcode)))));
    vlSelfRef.__PVT___isC_s3_T_6 = (((IData)(vlSelfRef.__PVT__task_s3_bits_channel) 
                                     >> 1U) & ((~ (IData)(__PVT__customL1Hint_io_s3_need_mshr)) 
                                               & (IData)(__PVT___isC_s3_T_5)));
    vlSelfRef.__PVT___isD_s3_T_12 = (1U & (((IData)(vlSelfRef.__PVT__task_s3_bits_channel) 
                                            >> 2U) 
                                           | ((~ (IData)(__PVT__customL1Hint_io_s3_need_mshr)) 
                                              & ((IData)(vlSelfRef.__PVT__task_s3_bits_channel) 
                                                 & ((IData)(__PVT___isC_s3_T_5) 
                                                    & (5U 
                                                       != (IData)(vlSelfRef.__PVT__task_s3_bits_opcode)))))));
    vlSelfRef.__PVT__customL1Hint__DOT__hint_s1Queue_io_deq_ready 
        = ((~ (IData)(vlSelfRef.__PVT__customL1Hint__DOT__enqValid_s3)) 
           & (IData)(vlSelfRef.__PVT__customL1Hint__DOT__hintQueue_io_enq_ready));
    __PVT__c_arb_io_in_2_valid = ((IData)(vlSelfRef.__PVT__task_s3_valid) 
                                  & ((IData)(vlSelfRef.__PVT__task_s3_bits_mshrTask)
                                      ? (IData)(vlSelfRef.__PVT___isC_s3_T)
                                      : (IData)(vlSelfRef.__PVT___isC_s3_T_6)));
    __PVT__d_arb_io_in_2_valid = ((IData)(vlSelfRef.__PVT__task_s3_valid) 
                                  & ((IData)(vlSelfRef.__PVT__task_s3_bits_mshrTask)
                                      ? (IData)(vlSelfRef.__PVT___isD_s3_T_1)
                                      : (IData)(vlSelfRef.__PVT___isD_s3_T_12)));
    __PVT___chnl_fire_s3_T = (((~ (IData)(vlSelfRef.c_arb__DOT____VdfgRegularize_h365a35c3_0_0)) 
                               & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sourceC__DOT__queue_io_enq_ready)) 
                              & (IData)(__PVT__c_arb_io_in_2_valid));
    vlSelfRef.io_toSourceC_valid = ((IData)(vlSelfRef.c_arb__DOT____VdfgRegularize_h365a35c3_0_0) 
                                    | (IData)(__PVT__c_arb_io_in_2_valid));
    __PVT___chnl_fire_s3_T_1 = ((~ (IData)(vlSelfRef.d_arb__DOT____VdfgRegularize_h365a35c3_0_0)) 
                                & (IData)(__PVT__d_arb_io_in_2_valid));
    vlSelfRef.io_toSourceD_valid = ((IData)(vlSelfRef.d_arb__DOT____VdfgRegularize_h365a35c3_0_0) 
                                    | (IData)(__PVT__d_arb_io_in_2_valid));
    vlSelfRef.__PVT__sourceC_pipe_len = ((((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sourceC__DOT__queue_io_enq_ready) 
                                           & (IData)(vlSelfRef.io_status_vec_toC_2_valid))
                                           ? 5U : 0U) 
                                         | (((IData)(vlSelfRef.__PVT___chnl_fire_s4_T)
                                              ? 4U : 0U) 
                                            | ((IData)(__PVT___chnl_fire_s3_T)
                                                ? 3U
                                                : 0U)));
    vlSelfRef.__PVT___T_128 = ((IData)(vlSelfRef.io_toSourceC_valid) 
                               & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sourceC__DOT__queue_io_enq_ready));
    vlSelfRef.__PVT__sourceD_pipe_len = (((IData)(vlSelfRef.io_status_vec_toD_2_valid)
                                           ? 5U : 0U) 
                                         | (((IData)(vlSelfRef.__PVT___chnl_fire_s4_T_1)
                                              ? 4U : 0U) 
                                            | ((IData)(__PVT___chnl_fire_s3_T_1)
                                                ? 3U
                                                : 0U)));
    vlSelfRef.__PVT__chnl_fire_s3 = ((IData)(__PVT___chnl_fire_s3_T) 
                                     | (IData)(__PVT___chnl_fire_s3_T_1));
    vlSelfRef.__PVT__req_drop_s3 = (((~ (IData)(vlSelfRef.__PVT__need_write_releaseBuf)) 
                                     & ((IData)(vlSelfRef.__PVT___req_drop_s3_T_2) 
                                        | (IData)(vlSelfRef.__PVT__chnl_fire_s3))) 
                                    | (IData)(vlSelfRef.__PVT___metaW_valid_s3_mshr_T_1));
    vlSelfRef.__PVT___task_s4_valid_T_1 = ((~ (IData)(vlSelfRef.__PVT__req_drop_s3)) 
                                           & (IData)(vlSelfRef.__PVT__task_s3_valid));
}

VL_ATTR_COLD void VVerifyTop_MainPipe___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe__1(VVerifyTop_MainPipe* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_MainPipe___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.io_toReqArb_blockC_s1 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb.__PVT__task_s2_valid) 
                                       & ((IData)(vlSelfRef.__VdfgRegularize_hd56c4748_0_8) 
                                          & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__sinkC.io_task_bits_set) 
                                             == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb.__PVT__task_s2_bits_set))));
}

VL_ATTR_COLD void VVerifyTop_MainPipe___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe__0(VVerifyTop_MainPipe* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_MainPipe___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __PVT__customL1Hint_io_s3_task_bits_opcode;
    __PVT__customL1Hint_io_s3_task_bits_opcode = 0;
    CData/*0:0*/ __PVT__customL1Hint_io_s3_need_mshr;
    __PVT__customL1Hint_io_s3_need_mshr = 0;
    CData/*0:0*/ __PVT__c_arb_io_in_2_valid;
    __PVT__c_arb_io_in_2_valid = 0;
    CData/*2:0*/ __PVT__c_arb_io_in_2_bits_task_param;
    __PVT__c_arb_io_in_2_bits_task_param = 0;
    CData/*7:0*/ __PVT__c_arb_io_in_2_bits_task_mshrId;
    __PVT__c_arb_io_in_2_bits_task_mshrId = 0;
    SData/*15:0*/ __PVT__c_arb_io_in_2_bits_data_data;
    __PVT__c_arb_io_in_2_bits_data_data = 0;
    CData/*0:0*/ __PVT__d_arb_io_in_2_valid;
    __PVT__d_arb_io_in_2_valid = 0;
    CData/*0:0*/ __PVT__need_repl;
    __PVT__need_repl = 0;
    CData/*0:0*/ __PVT__need_acquire_s3_a;
    __PVT__need_acquire_s3_a = 0;
    CData/*0:0*/ __PVT__need_probe_s3_a;
    __PVT__need_probe_s3_a = 0;
    CData/*0:0*/ __PVT__need_mshr_s3_a;
    __PVT__need_mshr_s3_a = 0;
    CData/*0:0*/ __PVT__need_mshr_s3_b;
    __PVT__need_mshr_s3_b = 0;
    CData/*0:0*/ __PVT__sink_resp_s3_a_promoteT;
    __PVT__sink_resp_s3_a_promoteT = 0;
    CData/*4:0*/ __PVT___sink_resp_s3_bits_param_T_6;
    __PVT___sink_resp_s3_bits_param_T_6 = 0;
    CData/*0:0*/ __PVT__need_data_b;
    __PVT__need_data_b = 0;
    CData/*0:0*/ __PVT__need_data_mshr_repl;
    __PVT__need_data_mshr_repl = 0;
    CData/*0:0*/ __PVT___need_write_releaseBuf_T;
    __PVT___need_write_releaseBuf_T = 0;
    CData/*0:0*/ __PVT___isC_s3_T_5;
    __PVT___isC_s3_T_5 = 0;
    CData/*0:0*/ __PVT___chnl_fire_s3_T;
    __PVT___chnl_fire_s3_T = 0;
    CData/*0:0*/ __PVT___chnl_fire_s3_T_1;
    __PVT___chnl_fire_s3_T_1 = 0;
    CData/*0:0*/ __PVT__c_d_valid_s4;
    __PVT__c_d_valid_s4 = 0;
    CData/*0:0*/ __PVT__c_d_valid_s5;
    __PVT__c_d_valid_s5 = 0;
    CData/*0:0*/ __VdfgRegularize_hd56c4748_0_6;
    __VdfgRegularize_hd56c4748_0_6 = 0;
    CData/*0:0*/ __PVT__customL1Hint__DOT___chn_Grant_s3_T_3;
    __PVT__customL1Hint__DOT___chn_Grant_s3_T_3 = 0;
    CData/*0:0*/ __PVT__customL1Hint__DOT__hintQueue__DOT__ptr_match;
    __PVT__customL1Hint__DOT__hintQueue__DOT__ptr_match = 0;
    // Body
    vlSelfRef.__PVT__next_counter_17 = vlSelfRef.__PVT__counter_29;
    vlSelfRef.__PVT__customL1Hint__DOT__hintQueue__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__customL1Hint__DOT__hintQueue__DOT__enq_ptr_value)));
    vlSelfRef.__PVT__customL1Hint__DOT__hintQueue__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__customL1Hint__DOT__hintQueue__DOT__deq_ptr_value)));
    vlSelfRef.__PVT__customL1Hint__DOT__hint_s1Queue__DOT___value_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__customL1Hint__DOT__hint_s1Queue__DOT__enq_ptr_value)));
    vlSelfRef.__PVT__customL1Hint__DOT__hint_s1Queue__DOT___value_T_3 
        = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__customL1Hint__DOT__hint_s1Queue__DOT__deq_ptr_value)));
    vlSelfRef.__PVT___counter_T_17 = (1ULL + vlSelfRef.__PVT__counter_16);
    vlSelfRef.__PVT___counter_T_19 = (1ULL + vlSelfRef.__PVT__counter_17);
    vlSelfRef.__PVT___counter_T_21 = (1ULL + vlSelfRef.__PVT__counter_18);
    vlSelfRef.__PVT___counter_T_23 = (1ULL + vlSelfRef.__PVT__counter_19);
    vlSelfRef.__PVT___counter_T_25 = (1ULL + vlSelfRef.__PVT__counter_20);
    vlSelfRef.__PVT___counter_T_27 = (1ULL + vlSelfRef.__PVT__counter_21);
    vlSelfRef.__PVT___counter_T_29 = (1ULL + vlSelfRef.__PVT__counter_22);
    vlSelfRef.__PVT___counter_T_31 = (1ULL + vlSelfRef.__PVT__counter_23);
    vlSelfRef.__PVT___counter_T_33 = (1ULL + vlSelfRef.__PVT__counter_24);
    vlSelfRef.__PVT___counter_T_35 = (1ULL + vlSelfRef.__PVT__counter_25);
    vlSelfRef.__PVT___counter_T_37 = (1ULL + vlSelfRef.__PVT__counter_26);
    vlSelfRef.__PVT___counter_T_39 = (1ULL + vlSelfRef.__PVT__counter_27);
    vlSelfRef.__PVT___GEN_1 = (1U & ((~ (IData)(vlSelfRef.__PVT__resetIdx)) 
                                     | (IData)(vlSelfRef.__PVT__resetFinish)));
    vlSelfRef.io_l1Hint_bits_sourceId = vlSelfRef.__PVT__customL1Hint__DOT__hintQueue__DOT__ram_source
        [vlSelfRef.__PVT__customL1Hint__DOT__hintQueue__DOT__deq_ptr_value];
    vlSelfRef.io_nestedwbData_data = (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.__PVT__REG___05F1) 
                                       << 8U) | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.__PVT__REG___05F0));
    vlSelfRef.io_releaseBufWrite_valid = ((IData)(vlSelfRef.__PVT__need_write_releaseBuf_s5) 
                                          & (IData)(vlSelfRef.__PVT__task_s5_valid));
    __PVT__customL1Hint__DOT__hintQueue__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__customL1Hint__DOT__hintQueue__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__customL1Hint__DOT__hintQueue__DOT__enq_ptr_value));
    vlSelfRef.__PVT__customL1Hint__DOT__hint_s1Queue__DOT__ptr_match 
        = ((IData)(vlSelfRef.__PVT__customL1Hint__DOT__hint_s1Queue__DOT__deq_ptr_value) 
           == (IData)(vlSelfRef.__PVT__customL1Hint__DOT__hint_s1Queue__DOT__enq_ptr_value));
    vlSelfRef.__PVT___wen_c_T_4 = ((1U == (IData)(vlSelfRef.__PVT__task_s3_bits_param)) 
                                   | ((0U == (IData)(vlSelfRef.__PVT__task_s3_bits_param)) 
                                      | (3U == (IData)(vlSelfRef.__PVT__task_s3_bits_param))));
    vlSelfRef.__PVT___GEN_59 = ((7U == (IData)(vlSelfRef.__PVT__task_s3_bits_opcode))
                                 ? 4U : ((6U == (IData)(vlSelfRef.__PVT__task_s3_bits_opcode))
                                          ? 5U : ((5U 
                                                   == (IData)(vlSelfRef.__PVT__task_s3_bits_opcode))
                                                   ? 2U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelfRef.__PVT__task_s3_bits_opcode))
                                                    ? 1U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelfRef.__PVT__task_s3_bits_opcode))
                                                     ? 1U
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelfRef.__PVT__task_s3_bits_opcode))
                                                      ? 1U
                                                      : 0U))))));
    __PVT__c_d_valid_s4 = ((~ (IData)(vlSelfRef.__PVT__c_d_valid_s4_REG)) 
                           & (IData)(vlSelfRef.__PVT__task_s4_valid));
    vlSelfRef.io_nestedwb_c_set_dirty = ((IData)(vlSelfRef.__PVT__task_s3_valid) 
                                         & (((IData)(vlSelfRef.__PVT__task_s3_bits_channel) 
                                             >> 2U) 
                                            & (7U == (IData)(vlSelfRef.__PVT__task_s3_bits_opcode))));
    vlSelfRef.__PVT___io_toMSHRCtl_mshr_alloc_s3_valid_T_1 
        = ((~ (IData)(vlSelfRef.__PVT__task_s3_bits_mshrTask)) 
           & (IData)(vlSelfRef.__PVT__task_s3_valid));
    vlSelfRef.__PVT__sinkB_req_s3 = (1U & ((~ (IData)(vlSelfRef.__PVT__task_s3_bits_mshrTask)) 
                                           & ((IData)(vlSelfRef.__PVT__task_s3_bits_channel) 
                                              >> 1U)));
    vlSelfRef.__PVT__sinkC_req_s3 = ((~ (IData)(vlSelfRef.__PVT__task_s3_bits_mshrTask)) 
                                     & ((IData)(vlSelfRef.__PVT__task_s3_bits_channel) 
                                        >> 2U));
    vlSelfRef.__PVT__pendingC_s4 = (((IData)(vlSelfRef.__PVT__task_s4_bits_channel) 
                                     >> 1U) & ((~ (IData)(vlSelfRef.__PVT__task_s4_bits_mshrTask)) 
                                               & (5U 
                                                  == (IData)(vlSelfRef.__PVT__task_s4_bits_opcode))));
    vlSelfRef.__PVT___mshr_probeack_s3_T_2 = ((IData)(vlSelfRef.__PVT__task_s3_bits_mshrTask) 
                                              & ((IData)(vlSelfRef.__PVT__task_s3_bits_channel) 
                                                 >> 1U));
    vlSelfRef.__PVT__mshr_release_s3 = ((IData)(vlSelfRef.__PVT__task_s3_bits_mshrTask) 
                                        & (6U == (6U 
                                                  & (IData)(vlSelfRef.__PVT__task_s3_bits_opcode))));
    vlSelfRef.io_toReqBuf_1 = ((IData)(vlSelfRef.__PVT__task_s3_valid) 
                               & ((~ ((~ (IData)(vlSelfRef.__PVT__task_s3_bits_metaWen)) 
                                      & (IData)(vlSelfRef.__PVT__task_s3_bits_mshrTask))) 
                                  & ((1U & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_1) 
                                            >> 1U)) 
                                     == (IData)(vlSelfRef.__PVT__task_s3_bits_set))));
    vlSelfRef.__PVT__pendingD_s4 = ((IData)(vlSelfRef.__PVT__task_s4_bits_channel) 
                                    & ((~ (IData)(vlSelfRef.__PVT__task_s4_bits_mshrTask)) 
                                       & ((5U == (IData)(vlSelfRef.__PVT__task_s4_bits_opcode)) 
                                          | (1U == (IData)(vlSelfRef.__PVT__task_s4_bits_opcode)))));
    vlSelfRef.__VdfgRegularize_hd56c4748_0_8 = (1U 
                                                & (~ 
                                                   ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb.__PVT__task_s2_bits_metaWen)) 
                                                    & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb.__PVT__task_s2_bits_mshrTask))));
    __PVT__c_d_valid_s5 = ((~ ((IData)(vlSelfRef.__PVT__c_d_valid_s5_REG) 
                               | (IData)(vlSelfRef.__PVT__c_d_valid_s5_REG_2))) 
                           & (IData)(vlSelfRef.__PVT__task_s5_valid));
    vlSelfRef.__PVT__retry = ((~ (IData)((0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__freeWayMask_s3)))) 
                              & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__refillReqValid_s3));
    vlSelfRef.__PVT___req_acquire_s3_T_2 = ((6U == (IData)(vlSelfRef.__PVT__task_s3_bits_opcode)) 
                                            | (7U == (IData)(vlSelfRef.__PVT__task_s3_bits_opcode)));
    vlSelfRef.__PVT__sinkA_req_s3 = (1U & ((~ (IData)(vlSelfRef.__PVT__task_s3_bits_mshrTask)) 
                                           & (IData)(vlSelfRef.__PVT__task_s3_bits_channel)));
    vlSelfRef.__PVT___mshr_grant_s3_T_2 = ((IData)(vlSelfRef.__PVT__task_s3_bits_mshrTask) 
                                           & (IData)(vlSelfRef.__PVT__task_s3_bits_channel));
    __PVT__c_arb_io_in_2_bits_data_data = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe_io_releaseBufResp_s3_valid_REG)
                                            ? (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__releaseBuf_io_resp_data_data)
                                            : (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__refillBuf_io_resp_data_data));
    vlSelfRef.__PVT__c_arb_io_in_0_bits_data_data = 
        ((IData)(vlSelfRef.__PVT__task_s5_bits_mshrTask)
          ? (IData)(vlSelfRef.__PVT__data_s5) : (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__dataStorage__DOT__array_io_r_resp_data_0_data));
    vlSelfRef.io_toReqArb_blockB_s1 = ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb.__PVT__task_s2_valid) 
                                         & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_task_bits_set) 
                                            == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb.__PVT__task_s2_bits_set))) 
                                        | ((IData)(vlSelfRef.__PVT__task_s3_valid) 
                                           & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_task_bits_set) 
                                              == (IData)(vlSelfRef.__PVT__task_s3_bits_set)))) 
                                       | (((IData)(vlSelfRef.__PVT__task_s4_valid) 
                                           & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_task_bits_set) 
                                               == (IData)(vlSelfRef.__PVT__task_s4_bits_set)) 
                                              & (IData)(
                                                        ((4U 
                                                          == 
                                                          (6U 
                                                           & (IData)(vlSelfRef.__PVT__task_s4_bits_opcode))) 
                                                         & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_task_bits_tag) 
                                                            == (IData)(vlSelfRef.__PVT__task_s4_bits_tag)))))) 
                                          | ((IData)(vlSelfRef.__PVT__task_s5_valid) 
                                             & (((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_task_bits_set) 
                                                 == (IData)(vlSelfRef.__PVT__task_s5_bits_set)) 
                                                & (IData)(
                                                          ((4U 
                                                            == 
                                                            (6U 
                                                             & (IData)(vlSelfRef.__PVT__task_s5_bits_opcode))) 
                                                           & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkB_io_task_bits_tag) 
                                                              == (IData)(vlSelfRef.__PVT__task_s5_bits_tag))))))));
    vlSelfRef.io_toMSHRCtl_mshr_alloc_s3_bits_state_w_replResp 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__task_s3_bits_channel)) 
                 | (0U != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_128_1))));
    __PVT__need_repl = ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory__DOT__refillReqValid_s3) 
                        & ((0U != (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_meta_state)) 
                           & (IData)(vlSelfRef.__PVT__task_s3_bits_replTask)));
    vlSelfRef.__PVT__next_counter_25 = (vlSelfRef.__PVT__counter_37 
                                        + (QData)((IData)(
                                                          ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_accessed)) 
                                                           & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_prefetch) 
                                                              & ((~ (IData)(
                                                                            (0U 
                                                                             != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_128_1)))) 
                                                                 & (IData)(vlSelfRef.__PVT__task_s3_valid)))))));
    vlSelfRef.__VdfgRegularize_hd56c4748_0_9 = ((0U 
                                                 != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_128_1)) 
                                                & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_prefetch));
    __PVT___sink_resp_s3_bits_param_T_6 = (((IData)(vlSelfRef.__PVT__task_s3_bits_param) 
                                            << 2U) 
                                           | (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_state));
    __PVT__sink_resp_s3_a_promoteT = ((0U != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_128_1)) 
                                      & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_state) 
                                         >> 1U));
    __VdfgRegularize_hd56c4748_0_6 = (((3U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_state)) 
                                       & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_dirty)) 
                                      | (IData)(vlSelfRef.__PVT__task_s3_bits_needProbeAckData));
    __PVT__need_mshr_s3_b = ((0U != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_128_1)) 
                             & (((~ (((1U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_state)) 
                                      | (3U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_state))) 
                                     & (1U == (IData)(vlSelfRef.__PVT__task_s3_bits_param)))) 
                                 & ((IData)(vlSelfRef.__PVT__task_s3_bits_channel) 
                                    >> 1U)) & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_clients)));
    vlSelfRef.__PVT__customL1Hint__DOT__hintQueue_io_deq_valid 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__customL1Hint__DOT__hintQueue__DOT__maybe_full)) 
                    & (IData)(__PVT__customL1Hint__DOT__hintQueue__DOT__ptr_match))));
    vlSelfRef.__PVT__customL1Hint__DOT__hintQueue_io_enq_ready 
        = (1U & (~ ((IData)(__PVT__customL1Hint__DOT__hintQueue__DOT__ptr_match) 
                    & (IData)(vlSelfRef.__PVT__customL1Hint__DOT__hintQueue__DOT__maybe_full))));
    vlSelfRef.__PVT__customL1Hint__DOT__hint_s1Queue__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__customL1Hint__DOT__hint_s1Queue__DOT__maybe_full)) 
           & (IData)(vlSelfRef.__PVT__customL1Hint__DOT__hint_s1Queue__DOT__ptr_match));
    vlSelfRef.__PVT__c_arb_io_in_1_valid = ((IData)(__PVT__c_d_valid_s4) 
                                            & (IData)(vlSelfRef.__PVT__isC_s4));
    vlSelfRef.__PVT__d_arb_io_in_1_valid = ((IData)(__PVT__c_d_valid_s4) 
                                            & (IData)(vlSelfRef.__PVT__isD_s4));
    vlSelfRef.__PVT___T_103 = ((IData)(vlSelfRef.__PVT___io_toMSHRCtl_mshr_alloc_s3_valid_T_1) 
                               & (IData)(vlSelfRef.__PVT__task_s3_bits_channel));
    vlSelfRef.__PVT__hit_s3 = ((IData)(vlSelfRef.__PVT___io_toMSHRCtl_mshr_alloc_s3_valid_T_1) 
                               & (0U != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_128_1)));
    vlSelfRef.__PVT__miss_s3 = ((~ (IData)((0U != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_128_1)))) 
                                & (IData)(vlSelfRef.__PVT___io_toMSHRCtl_mshr_alloc_s3_valid_T_1));
    vlSelfRef.__PVT__wen_c = ((IData)(vlSelfRef.__PVT__sinkC_req_s3) 
                              & ((IData)(vlSelfRef.__PVT___wen_c_T_4) 
                                 & ((IData)(vlSelfRef.__PVT__task_s3_bits_opcode) 
                                    & (0U != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_128_1)))));
    vlSelfRef.__PVT__metaW_valid_s3_c = ((IData)(vlSelfRef.__PVT__sinkC_req_s3) 
                                         & (0U != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_128_1)));
    vlSelfRef.__PVT__next_counter_5 = (vlSelfRef.__PVT__counter_5 
                                       + (QData)((IData)(
                                                         ((IData)(vlSelfRef.__PVT__task_s3_valid) 
                                                          & ((IData)(vlSelfRef.__PVT___mshr_probeack_s3_T_2) 
                                                             & (5U 
                                                                == (IData)(vlSelfRef.__PVT__task_s3_bits_opcode)))))));
    vlSelfRef.__PVT__mshr_probeack_s3 = ((IData)(vlSelfRef.__PVT___mshr_probeack_s3_T_2) 
                                         & (4U == (6U 
                                                   & (IData)(vlSelfRef.__PVT__task_s3_bits_opcode))));
    vlSelfRef.__PVT__next_counter_20 = (vlSelfRef.__PVT__counter_32 
                                        + (QData)((IData)(vlSelfRef.__PVT__mshr_release_s3)));
    vlSelfRef.__PVT__next_counter_6 = (vlSelfRef.__PVT__counter_6 
                                       + (QData)((IData)(
                                                         ((IData)(vlSelfRef.__PVT__task_s3_valid) 
                                                          & (IData)(vlSelfRef.__PVT__mshr_release_s3)))));
    vlSelfRef.__PVT___T_169 = ((IData)(vlSelfRef.__PVT__mshr_release_s3) 
                               & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_prefetch));
    vlSelfRef.io_status_vec_toD_1_valid = ((IData)(vlSelfRef.__PVT__task_s4_valid) 
                                           & ((IData)(vlSelfRef.__PVT__isD_s4) 
                                              | (IData)(vlSelfRef.__PVT__pendingD_s4)));
    vlSelfRef.io_toReqArb_blockG_s1 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb.__PVT__task_s2_valid) 
                                       & ((IData)(vlSelfRef.__VdfgRegularize_hd56c4748_0_8) 
                                          & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb.__PVT__mshr_task_s1_bits_set) 
                                             == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb.__PVT__task_s2_bits_set))));
    vlSelfRef.io_toReqBuf_0 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb.__PVT__task_s2_valid) 
                               & ((IData)(vlSelfRef.__VdfgRegularize_hd56c4748_0_8) 
                                  & ((1U & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_1) 
                                            >> 1U)) 
                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb.__PVT__task_s2_bits_set))));
    vlSelfRef.io_status_vec_toC_2_valid = ((IData)(__PVT__c_d_valid_s5) 
                                           & (IData)(vlSelfRef.__PVT__isC_s5));
    vlSelfRef.io_status_vec_toD_2_valid = ((IData)(__PVT__c_d_valid_s5) 
                                           & (IData)(vlSelfRef.__PVT__isD_s5));
    vlSelfRef.__PVT__req_needT_s3 = (1U & ((~ ((IData)(vlSelfRef.__PVT__task_s3_bits_opcode) 
                                               >> 2U)) 
                                           | (((5U 
                                                == (IData)(vlSelfRef.__PVT__task_s3_bits_opcode)) 
                                               & (1U 
                                                  == (IData)(vlSelfRef.__PVT__task_s3_bits_param))) 
                                              | ((IData)(vlSelfRef.__PVT___req_acquire_s3_T_2) 
                                                 & (0U 
                                                    != (IData)(vlSelfRef.__PVT__task_s3_bits_param))))));
    vlSelfRef.__PVT__req_prefetch_s3 = ((IData)(vlSelfRef.__PVT__sinkA_req_s3) 
                                        & (5U == (IData)(vlSelfRef.__PVT__task_s3_bits_opcode)));
    vlSelfRef.__PVT__req_acquire_s3 = ((IData)(vlSelfRef.__PVT__sinkA_req_s3) 
                                       & (IData)(vlSelfRef.__PVT___req_acquire_s3_T_2));
    vlSelfRef.__PVT__req_get_s3 = ((IData)(vlSelfRef.__PVT__sinkA_req_s3) 
                                   & (4U == (IData)(vlSelfRef.__PVT__task_s3_bits_opcode)));
    vlSelfRef.__PVT__next_counter_1 = (vlSelfRef.__PVT__counter_1 
                                       + (QData)((IData)(
                                                         ((IData)(vlSelfRef.__PVT__task_s3_valid) 
                                                          & ((~ (IData)(vlSelfRef.__PVT__retry)) 
                                                             & ((IData)(vlSelfRef.__PVT___mshr_grant_s3_T_2) 
                                                                & (5U 
                                                                   == (IData)(vlSelfRef.__PVT__task_s3_bits_opcode))))))));
    vlSelfRef.__PVT__mshr_grant_s3 = ((IData)(vlSelfRef.__PVT___mshr_grant_s3_T_2) 
                                      & (4U == (6U 
                                                & (IData)(vlSelfRef.__PVT__task_s3_bits_opcode))));
    vlSelfRef.__PVT__mshr_accessackdata_s3 = ((IData)(vlSelfRef.__PVT___mshr_grant_s3_T_2) 
                                              & (1U 
                                                 == (IData)(vlSelfRef.__PVT__task_s3_bits_opcode)));
    vlSelfRef.__PVT__mshr_hintack_s3 = ((IData)(vlSelfRef.__PVT___mshr_grant_s3_T_2) 
                                        & (2U == (IData)(vlSelfRef.__PVT__task_s3_bits_opcode)));
    if ((2U & (IData)(vlSelfRef.__PVT__task_s3_bits_channel))) {
        vlSelfRef.__PVT___GEN_61 = ((0U != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_128_1))
                                     ? ((3U == (IData)(__PVT___sink_resp_s3_bits_param_T_6))
                                         ? 3U : ((7U 
                                                  == (IData)(__PVT___sink_resp_s3_bits_param_T_6))
                                                  ? 0U
                                                  : 
                                                 ((0xbU 
                                                   == (IData)(__PVT___sink_resp_s3_bits_param_T_6))
                                                   ? 1U
                                                   : 
                                                  ((9U 
                                                    == (IData)(__PVT___sink_resp_s3_bits_param_T_6))
                                                    ? 2U
                                                    : 4U))))
                                     : 5U);
        vlSelfRef.__PVT___GEN_60 = (((0U != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_128_1)) 
                                     & (IData)(__VdfgRegularize_hd56c4748_0_6))
                                     ? 5U : 4U);
    } else {
        vlSelfRef.__PVT___GEN_61 = 0U;
        vlSelfRef.__PVT___GEN_60 = 6U;
    }
    __PVT__need_data_b = ((IData)(vlSelfRef.__PVT__sinkB_req_s3) 
                          & ((0U != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_128_1)) 
                             & ((2U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_state)) 
                                | (IData)(__VdfgRegularize_hd56c4748_0_6))));
    vlSelfRef.__PVT__customL1Hint__DOT__hintQueue__DOT__do_deq 
        = ((IData)(vlSelfRef.__PVT__customL1Hint__DOT__hintQueue_io_deq_valid) 
           & (~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__l1HintArb_io_out_ready_REG)));
    vlSelfRef.__PVT__next_counter_14 = (vlSelfRef.__PVT__counter_14 
                                        + (QData)((IData)(
                                                          ((IData)(vlSelfRef.__PVT__hit_s3) 
                                                           & ((IData)(vlSelfRef.__PVT__task_s3_bits_channel) 
                                                              >> 1U)))));
    vlSelfRef.__PVT___T_46 = ((IData)(vlSelfRef.__PVT__hit_s3) 
                              & (IData)(vlSelfRef.__PVT__task_s3_bits_channel));
    vlSelfRef.__PVT__next_counter_15 = (vlSelfRef.__PVT__counter_15 
                                        + (QData)((IData)(
                                                          ((IData)(vlSelfRef.__PVT__miss_s3) 
                                                           & ((IData)(vlSelfRef.__PVT__task_s3_bits_channel) 
                                                              >> 1U)))));
    vlSelfRef.__PVT___T_70 = ((IData)(vlSelfRef.__PVT__miss_s3) 
                              & (IData)(vlSelfRef.__PVT__task_s3_bits_channel));
    vlSelfRef.__PVT__next_counter_4 = (vlSelfRef.__PVT__counter_4 
                                       + (QData)((IData)(
                                                         ((IData)(vlSelfRef.__PVT__task_s3_valid) 
                                                          & (IData)(vlSelfRef.__PVT__mshr_probeack_s3)))));
    vlSelfRef.__PVT___isC_s3_T = ((IData)(vlSelfRef.__PVT__mshr_release_s3) 
                                  | (IData)(vlSelfRef.__PVT__mshr_probeack_s3));
    vlSelfRef.__PVT__next_counter_21 = (vlSelfRef.__PVT__counter_33 
                                        + (QData)((IData)(
                                                          ((IData)(vlSelfRef.__PVT___T_169) 
                                                           & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_accessed)))));
    vlSelfRef.__PVT__next_counter_22 = (vlSelfRef.__PVT__counter_34 
                                        + (QData)((IData)(
                                                          ((~ (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_accessed)) 
                                                           & (IData)(vlSelfRef.__PVT___T_169)))));
    vlSelfRef.__PVT___chnl_fire_s4_T = (((~ (IData)(vlSelfRef.io_status_vec_toC_2_valid)) 
                                         & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sourceC__DOT__queue_io_enq_ready)) 
                                        & (IData)(vlSelfRef.__PVT__c_arb_io_in_1_valid));
    vlSelfRef.c_arb__DOT____VdfgRegularize_h365a35c3_0_0 
        = ((IData)(vlSelfRef.io_status_vec_toC_2_valid) 
           | (IData)(vlSelfRef.__PVT__c_arb_io_in_1_valid));
    vlSelfRef.__PVT___chnl_fire_s4_T_1 = ((~ (IData)(vlSelfRef.io_status_vec_toD_2_valid)) 
                                          & (IData)(vlSelfRef.__PVT__d_arb_io_in_1_valid));
    vlSelfRef.d_arb__DOT____VdfgRegularize_h365a35c3_0_0 
        = ((IData)(vlSelfRef.io_status_vec_toD_2_valid) 
           | (IData)(vlSelfRef.__PVT__d_arb_io_in_1_valid));
    if (vlSelfRef.__PVT__req_acquire_s3) {
        vlSelfRef.io_toMSHRCtl_mshr_alloc_s3_bits_task_aliasTask 
            = ((0U != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_128_1)) 
               & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_clients) 
                  & ((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_alias) 
                     != (IData)(vlSelfRef.__PVT__task_s3_bits_alias))));
        vlSelfRef.__PVT___sink_resp_s3_bits_param_T_4 
            = (((~ (IData)(__PVT__sink_resp_s3_a_promoteT)) 
                & (0U == (IData)(vlSelfRef.__PVT__task_s3_bits_param)))
                ? 1U : 0U);
    } else {
        vlSelfRef.io_toMSHRCtl_mshr_alloc_s3_bits_task_aliasTask = 0U;
        vlSelfRef.__PVT___sink_resp_s3_bits_param_T_4 = 0U;
    }
    vlSelfRef.io_prefetchTrain_valid = ((IData)(vlSelfRef.__PVT__task_s3_valid) 
                                        & ((((IData)(vlSelfRef.__PVT__req_acquire_s3) 
                                             | (IData)(vlSelfRef.__PVT__req_get_s3)) 
                                            & ((IData)(vlSelfRef.__PVT__task_s3_bits_needHint) 
                                               & ((~ (IData)(
                                                             (0U 
                                                              != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_128_1)))) 
                                                  | (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_prefetch)))) 
                                           | (IData)(vlSelfRef.__PVT__task_s3_bits_mergeA)));
    __PVT__need_probe_s3_a = ((IData)(vlSelfRef.__PVT__req_get_s3) 
                              & ((0U != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_128_1)) 
                                 & (2U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_state))));
    __PVT__need_acquire_s3_a = ((IData)(vlSelfRef.__PVT__task_s3_bits_channel) 
                                & ((0U != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_128_1))
                                    ? ((1U == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_state)) 
                                       & ((~ (IData)(vlSelfRef.__PVT__req_prefetch_s3)) 
                                          & (IData)(vlSelfRef.__PVT__req_needT_s3)))
                                    : ((IData)(vlSelfRef.__PVT__req_acquire_s3) 
                                       | ((IData)(vlSelfRef.__PVT__req_prefetch_s3) 
                                          | (IData)(vlSelfRef.__PVT__req_get_s3)))));
    vlSelfRef.__PVT__next_counter = (vlSelfRef.__PVT__counter 
                                     + (QData)((IData)(
                                                       ((IData)(vlSelfRef.__PVT__task_s3_valid) 
                                                        & ((~ (IData)(vlSelfRef.__PVT__retry)) 
                                                           & (IData)(vlSelfRef.__PVT__mshr_grant_s3))))));
    vlSelfRef.__PVT__next_counter_2 = (vlSelfRef.__PVT__counter_2 
                                       + (QData)((IData)(
                                                         ((IData)(vlSelfRef.__PVT__task_s3_valid) 
                                                          & ((~ (IData)(vlSelfRef.__PVT__retry)) 
                                                             & (IData)(vlSelfRef.__PVT__mshr_accessackdata_s3))))));
    vlSelfRef.__PVT__next_counter_3 = (vlSelfRef.__PVT__counter_3 
                                       + (QData)((IData)(
                                                         ((IData)(vlSelfRef.__PVT__task_s3_valid) 
                                                          & ((~ (IData)(vlSelfRef.__PVT__retry)) 
                                                             & (IData)(vlSelfRef.__PVT__mshr_hintack_s3))))));
    vlSelfRef.__PVT__mshr_refill_s3 = ((IData)(vlSelfRef.__PVT__mshr_accessackdata_s3) 
                                       | ((IData)(vlSelfRef.__PVT__mshr_hintack_s3) 
                                          | (IData)(vlSelfRef.__PVT__mshr_grant_s3)));
    vlSelfRef.__PVT__next_counter_7 = (vlSelfRef.__PVT__counter_7 
                                       + (QData)((IData)(vlSelfRef.__PVT___T_46)));
    vlSelfRef.__PVT__next_counter_8 = (vlSelfRef.__PVT__counter_8 
                                       + (QData)((IData)(
                                                         ((IData)(vlSelfRef.__PVT___T_46) 
                                                          & (IData)(vlSelfRef.__PVT___req_acquire_s3_T_2)))));
    vlSelfRef.__PVT__next_counter_9 = (vlSelfRef.__PVT__counter_9 
                                       + (QData)((IData)(
                                                         ((IData)(vlSelfRef.__PVT___T_46) 
                                                          & (4U 
                                                             == (IData)(vlSelfRef.__PVT__task_s3_bits_opcode))))));
    vlSelfRef.__PVT__next_counter_11 = (vlSelfRef.__PVT__counter_11 
                                        + (QData)((IData)(vlSelfRef.__PVT___T_70)));
    vlSelfRef.__PVT__next_counter_12 = (vlSelfRef.__PVT__counter_12 
                                        + (QData)((IData)(
                                                          ((IData)(vlSelfRef.__PVT___T_70) 
                                                           & (IData)(vlSelfRef.__PVT___req_acquire_s3_T_2)))));
    vlSelfRef.__PVT__next_counter_13 = (vlSelfRef.__PVT__counter_13 
                                        + (QData)((IData)(
                                                          ((IData)(vlSelfRef.__PVT___T_70) 
                                                           & (4U 
                                                              == (IData)(vlSelfRef.__PVT__task_s3_bits_opcode))))));
    vlSelfRef.__PVT__chnl_fire_s4 = ((IData)(vlSelfRef.__PVT___chnl_fire_s4_T) 
                                     | (IData)(vlSelfRef.__PVT___chnl_fire_s4_T_1));
    vlSelfRef.__PVT__next_counter_16 = (vlSelfRef.__PVT__counter_28 
                                        + (QData)((IData)(vlSelfRef.io_prefetchTrain_valid)));
    vlSelfRef.__PVT___T_156 = ((IData)(vlSelfRef.io_prefetchTrain_valid) 
                               & (IData)(vlSelfRef.__PVT__req_acquire_s3));
    vlSelfRef.__PVT___T_179 = ((IData)(vlSelfRef.io_prefetchTrain_valid) 
                               & (IData)(vlSelfRef.__PVT__req_get_s3));
    vlSelfRef.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_rprobe 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__task_s3_bits_channel)) 
                 | (~ ((IData)(vlSelfRef.io_toMSHRCtl_mshr_alloc_s3_bits_task_aliasTask) 
                       | (IData)(__PVT__need_probe_s3_a)))));
    __PVT___need_write_releaseBuf_T = ((IData)(__PVT__need_probe_s3_a) 
                                       | (IData)(vlSelfRef.io_toMSHRCtl_mshr_alloc_s3_bits_task_aliasTask));
    vlSelfRef.io_toMSHRCtl_mshr_alloc_s3_bits_state_s_acquire 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__task_s3_bits_channel)) 
                 | (~ (IData)(__PVT__need_acquire_s3_a))));
    vlSelfRef.__PVT___io_toDS_req_s3_bits_way_T = ((IData)(vlSelfRef.__PVT__mshr_refill_s3) 
                                                   & (IData)(vlSelfRef.__PVT__task_s3_bits_replTask));
    vlSelfRef.__PVT___metaW_valid_s3_mshr_T_1 = ((IData)(vlSelfRef.__PVT__mshr_refill_s3) 
                                                 & (IData)(vlSelfRef.__PVT__retry));
    vlSelfRef.__PVT___isD_s3_T_1 = ((~ (IData)(vlSelfRef.__PVT__retry)) 
                                    & (IData)(vlSelfRef.__PVT__mshr_refill_s3));
    vlSelfRef.io_toDS_req_s3_bits_wen = ((IData)(vlSelfRef.__PVT__wen_c) 
                                         | ((IData)(vlSelfRef.__PVT__task_s3_bits_dsWen) 
                                            & ((IData)(vlSelfRef.__PVT__mshr_probeack_s3) 
                                               | ((IData)(vlSelfRef.__PVT__mshr_release_s3) 
                                                  | ((IData)(vlSelfRef.__PVT__mshr_refill_s3) 
                                                     & ((~ (IData)(__PVT__need_repl)) 
                                                        & (~ (IData)(vlSelfRef.__PVT__retry))))))));
    __PVT__need_data_mshr_repl = ((IData)(vlSelfRef.__PVT__mshr_refill_s3) 
                                  & ((~ (IData)(vlSelfRef.__PVT__retry)) 
                                     & (IData)(__PVT__need_repl)));
    vlSelfRef.__PVT__req_drop_s4 = ((~ (IData)(vlSelfRef.__PVT__need_write_releaseBuf_s4)) 
                                    & (IData)(vlSelfRef.__PVT__chnl_fire_s4));
    vlSelfRef.__PVT__next_counter_18 = (vlSelfRef.__PVT__counter_30 
                                        + (QData)((IData)(
                                                          ((~ (IData)(
                                                                      (0U 
                                                                       != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_128_1)))) 
                                                           & (IData)(vlSelfRef.__PVT___T_156)))));
    vlSelfRef.__PVT__next_counter_19 = (vlSelfRef.__PVT__counter_31 
                                        + (QData)((IData)(
                                                          ((IData)(vlSelfRef.__PVT___T_156) 
                                                           & (IData)(vlSelfRef.__VdfgRegularize_hd56c4748_0_9)))));
    vlSelfRef.__PVT__next_counter_23 = (vlSelfRef.__PVT__counter_35 
                                        + (QData)((IData)(
                                                          ((~ (IData)(
                                                                      (0U 
                                                                       != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_128_1)))) 
                                                           & (IData)(vlSelfRef.__PVT___T_179)))));
    vlSelfRef.__PVT__next_counter_24 = (vlSelfRef.__PVT__counter_36 
                                        + (QData)((IData)(
                                                          ((IData)(vlSelfRef.__PVT___T_179) 
                                                           & (IData)(vlSelfRef.__VdfgRegularize_hd56c4748_0_9)))));
    __PVT__need_mshr_s3_a = ((IData)(__PVT__need_acquire_s3_a) 
                             | (IData)(__PVT___need_write_releaseBuf_T));
    if (vlSelfRef.__PVT___io_toDS_req_s3_bits_way_T) {
        vlSelfRef.io_tagWReq_bits_way = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_way;
        vlSelfRef.io_toDS_req_s3_bits_way = vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_replResp_bits_way;
    } else {
        vlSelfRef.io_tagWReq_bits_way = vlSelfRef.__PVT__task_s3_bits_way;
        vlSelfRef.io_toDS_req_s3_bits_way = ((IData)(vlSelfRef.__PVT__task_s3_bits_mshrTask)
                                              ? (IData)(vlSelfRef.__PVT__task_s3_bits_way)
                                              : (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_way));
    }
    vlSelfRef.__PVT__next_counter_10 = (vlSelfRef.__PVT__counter_10 
                                        + (QData)((IData)(vlSelfRef.__PVT___metaW_valid_s3_mshr_T_1)));
    vlSelfRef.io_tagWReq_valid = ((IData)(vlSelfRef.__PVT__task_s3_bits_tagWen) 
                                  & ((IData)(vlSelfRef.__PVT__task_s3_valid) 
                                     & (IData)(vlSelfRef.__PVT___isD_s3_T_1)));
    vlSelfRef.io_status_vec_toD_0_valid = ((IData)(vlSelfRef.__PVT__task_s3_valid) 
                                           & ((~ (IData)(vlSelfRef.__PVT__task_s3_bits_mshrTask)) 
                                              | (IData)(vlSelfRef.__PVT___isD_s3_T_1)));
    vlSelfRef.__PVT__need_write_releaseBuf = ((IData)(__PVT___need_write_releaseBuf_T) 
                                              | (((IData)(__PVT__need_data_b) 
                                                  & (IData)(__PVT__need_mshr_s3_b)) 
                                                 | (IData)(__PVT__need_data_mshr_repl)));
    vlSelfRef.io_toDS_req_s3_valid = ((IData)(vlSelfRef.__PVT__task_s3_valid) 
                                      & (((0U != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_128_1)) 
                                          & ((IData)(vlSelfRef.__PVT__req_get_s3) 
                                             | ((IData)(vlSelfRef.__PVT__sinkA_req_s3) 
                                                & (6U 
                                                   == (IData)(vlSelfRef.__PVT__task_s3_bits_opcode))))) 
                                         | (((IData)(__PVT__need_data_b) 
                                             | (IData)(__PVT__need_data_mshr_repl)) 
                                            | (IData)(vlSelfRef.io_toDS_req_s3_bits_wen))));
    vlSelfRef.__PVT___task_s5_valid_T_1 = ((~ (IData)(vlSelfRef.__PVT__req_drop_s4)) 
                                           & (IData)(vlSelfRef.__PVT__task_s4_valid));
    vlSelfRef.__PVT__metaW_valid_s3_a = ((~ (IData)(__PVT__need_mshr_s3_a)) 
                                         & ((IData)(vlSelfRef.__PVT__sinkA_req_s3) 
                                            & ((~ (IData)(vlSelfRef.__PVT__req_get_s3)) 
                                               & (~ (IData)(vlSelfRef.__PVT__req_prefetch_s3)))));
    __PVT__customL1Hint_io_s3_need_mshr = ((IData)(__PVT__need_mshr_s3_a) 
                                           | (IData)(__PVT__need_mshr_s3_b));
    vlSelfRef.__PVT___io_metaWReq_valid_T_1 = ((IData)(vlSelfRef.__PVT__metaW_valid_s3_a) 
                                               | ((~ (IData)(__PVT__need_mshr_s3_b)) 
                                                  & ((IData)(vlSelfRef.__PVT__sinkB_req_s3) 
                                                     & ((0U 
                                                         != (IData)(vlSymsp->TOP.__VdfgRegularize_hd87f99a1_128_1)) 
                                                        & ((3U 
                                                            == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_state)) 
                                                           | ((1U 
                                                               == (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_state)) 
                                                              & (2U 
                                                                 == (IData)(vlSelfRef.__PVT__task_s3_bits_param))))))));
    if (vlSelfRef.__PVT__resetFinish) {
        vlSelfRef.__PVT___GEN_0 = (1U & (IData)(vlSelfRef.__PVT__resetIdx));
        vlSelfRef.io_metaWReq_bits_set = vlSelfRef.__PVT__task_s3_bits_set;
        vlSelfRef.io_metaWReq_bits_wayOH = (3U & ((IData)(1U) 
                                                  << (IData)(vlSelfRef.io_toDS_req_s3_bits_way)));
        vlSelfRef.io_metaWReq_bits_wmeta_state = ((IData)(vlSelfRef.__PVT___io_metaWReq_valid_T_1)
                                                   ? 
                                                  ((IData)(vlSelfRef.__PVT__metaW_valid_s3_a)
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__req_needT_s3) 
                                                     | (IData)(__PVT__sink_resp_s3_a_promoteT))
                                                     ? 2U
                                                     : (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_state))
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelfRef.__PVT__task_s3_bits_param))
                                                     ? 0U
                                                     : 1U))
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__metaW_valid_s3_c)
                                                    ? 
                                                   ((IData)(vlSelfRef.__PVT___wen_c_T_4)
                                                     ? 3U
                                                     : (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__directory_io_resp_bits_meta_state))
                                                    : 
                                                   ((IData)(vlSelfRef.__PVT__task_s3_bits_mergeA)
                                                     ? (IData)(vlSelfRef.__PVT__task_s3_bits_aMergeTask_meta_state)
                                                     : (IData)(vlSelfRef.__PVT__task_s3_bits_meta_state))));
    } else {
        vlSelfRef.__PVT___GEN_0 = (1U & (~ (IData)(vlSelfRef.__PVT__resetIdx)));
        vlSelfRef.io_metaWReq_bits_set = vlSelfRef.__PVT__resetIdx;
        vlSelfRef.io_metaWReq_bits_wayOH = 3U;
        vlSelfRef.io_metaWReq_bits_wmeta_state = 0U;
    }
    vlSelfRef.__PVT___req_drop_s3_T_2 = ((~ (IData)(vlSelfRef.__PVT__task_s3_bits_mshrTask)) 
                                         & (IData)(__PVT__customL1Hint_io_s3_need_mshr));
    __PVT__customL1Hint__DOT___chn_Grant_s3_T_3 = ((IData)(vlSelfRef.__PVT__task_s3_valid) 
                                                   & ((~ (IData)(vlSelfRef.__PVT__task_s3_bits_mshrTask)) 
                                                      & (~ (IData)(__PVT__customL1Hint_io_s3_need_mshr))));
    vlSelfRef.__PVT__sink_resp_s3_valid = ((~ (IData)(__PVT__customL1Hint_io_s3_need_mshr)) 
                                           & (IData)(vlSelfRef.__PVT___io_toMSHRCtl_mshr_alloc_s3_valid_T_1));
    vlSelfRef.io_toMSHRCtl_mshr_alloc_s3_valid = ((IData)(vlSelfRef.__PVT___io_toMSHRCtl_mshr_alloc_s3_valid_T_1) 
                                                  & (IData)(__PVT__customL1Hint_io_s3_need_mshr));
    vlSelfRef.io_metaWReq_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__resetFinish)) 
                                         | ((IData)(vlSelfRef.__PVT__task_s3_valid) 
                                            & ((IData)(vlSelfRef.__PVT___io_metaWReq_valid_T_1) 
                                               | ((IData)(vlSelfRef.__PVT__metaW_valid_s3_c) 
                                                  | ((IData)(vlSelfRef.__PVT__task_s3_bits_mshrTask) 
                                                     & ((~ (IData)(vlSelfRef.__PVT___metaW_valid_s3_mshr_T_1)) 
                                                        & (IData)(vlSelfRef.__PVT__task_s3_bits_metaWen))))))));
    if (vlSelfRef.__PVT__sink_resp_s3_valid) {
        __PVT__c_arb_io_in_2_bits_task_mshrId = (0xffU 
                                                 & ((IData)(0x80U) 
                                                    + (IData)(vlSelfRef.__PVT__task_s3_bits_sourceId)));
        if ((1U & (IData)(vlSelfRef.__PVT__task_s3_bits_channel))) {
            __PVT__c_arb_io_in_2_bits_task_param = vlSelfRef.__PVT___sink_resp_s3_bits_param_T_4;
            __PVT__customL1Hint_io_s3_task_bits_opcode 
                = vlSelfRef.__PVT___GEN_59;
        } else {
            __PVT__c_arb_io_in_2_bits_task_param = vlSelfRef.__PVT___GEN_61;
            __PVT__customL1Hint_io_s3_task_bits_opcode 
                = vlSelfRef.__PVT___GEN_60;
        }
    } else {
        __PVT__c_arb_io_in_2_bits_task_mshrId = (0xffU 
                                                 & (IData)(vlSelfRef.__PVT__task_s3_bits_mshrId));
        __PVT__c_arb_io_in_2_bits_task_param = vlSelfRef.__PVT__task_s3_bits_param;
        __PVT__customL1Hint_io_s3_task_bits_opcode 
            = vlSelfRef.__PVT__task_s3_bits_opcode;
    }
    if (vlSelfRef.io_status_vec_toD_2_valid) {
        vlSelfRef.io_toSourceD_bits_task_set = vlSelfRef.__PVT__task_s5_bits_set;
        vlSelfRef.io_toSourceD_bits_task_tag = vlSelfRef.__PVT__task_s5_bits_tag;
        vlSelfRef.io_toSourceD_bits_task_mergeA = vlSelfRef.__PVT__task_s5_bits_mergeA;
        vlSelfRef.io_toSourceD_bits_task_opcode = vlSelfRef.__PVT__task_s5_bits_opcode;
    } else if (vlSelfRef.__PVT__d_arb_io_in_1_valid) {
        vlSelfRef.io_toSourceD_bits_task_set = vlSelfRef.__PVT__task_s4_bits_set;
        vlSelfRef.io_toSourceD_bits_task_tag = vlSelfRef.__PVT__task_s4_bits_tag;
        vlSelfRef.io_toSourceD_bits_task_mergeA = vlSelfRef.__PVT__task_s4_bits_mergeA;
        vlSelfRef.io_toSourceD_bits_task_opcode = vlSelfRef.__PVT__task_s4_bits_opcode;
    } else {
        vlSelfRef.io_toSourceD_bits_task_set = vlSelfRef.__PVT__task_s3_bits_set;
        vlSelfRef.io_toSourceD_bits_task_tag = vlSelfRef.__PVT__task_s3_bits_tag;
        vlSelfRef.io_toSourceD_bits_task_mergeA = vlSelfRef.__PVT__task_s3_bits_mergeA;
        vlSelfRef.io_toSourceD_bits_task_opcode = __PVT__customL1Hint_io_s3_task_bits_opcode;
    }
    if (vlSelfRef.io_status_vec_toC_2_valid) {
        vlSelfRef.io_toSourceC_bits_task_set = vlSelfRef.__PVT__task_s5_bits_set;
        vlSelfRef.io_toSourceC_bits_task_tag = vlSelfRef.__PVT__task_s5_bits_tag;
        vlSelfRef.io_toSourceC_bits_task_off = vlSelfRef.__PVT__task_s5_bits_off;
        vlSelfRef.io_toSourceC_bits_data_data = vlSelfRef.__PVT__c_arb_io_in_0_bits_data_data;
        vlSelfRef.io_toSourceC_bits_task_mshrId = vlSelfRef.__PVT__task_s5_bits_mshrId;
        vlSelfRef.io_toSourceC_bits_task_param = vlSelfRef.__PVT__task_s5_bits_param;
        vlSelfRef.io_toSourceC_bits_task_opcode = vlSelfRef.__PVT__task_s5_bits_opcode;
    } else if (vlSelfRef.__PVT__c_arb_io_in_1_valid) {
        vlSelfRef.io_toSourceC_bits_task_set = vlSelfRef.__PVT__task_s4_bits_set;
        vlSelfRef.io_toSourceC_bits_task_tag = vlSelfRef.__PVT__task_s4_bits_tag;
        vlSelfRef.io_toSourceC_bits_task_off = vlSelfRef.__PVT__task_s4_bits_off;
        vlSelfRef.io_toSourceC_bits_data_data = vlSelfRef.__PVT__data_s4;
        vlSelfRef.io_toSourceC_bits_task_mshrId = vlSelfRef.__PVT__task_s4_bits_mshrId;
        vlSelfRef.io_toSourceC_bits_task_param = vlSelfRef.__PVT__task_s4_bits_param;
        vlSelfRef.io_toSourceC_bits_task_opcode = vlSelfRef.__PVT__task_s4_bits_opcode;
    } else {
        vlSelfRef.io_toSourceC_bits_task_set = vlSelfRef.__PVT__task_s3_bits_set;
        vlSelfRef.io_toSourceC_bits_task_tag = vlSelfRef.__PVT__task_s3_bits_tag;
        vlSelfRef.io_toSourceC_bits_task_off = vlSelfRef.__PVT__task_s3_bits_off;
        vlSelfRef.io_toSourceC_bits_data_data = __PVT__c_arb_io_in_2_bits_data_data;
        vlSelfRef.io_toSourceC_bits_task_mshrId = __PVT__c_arb_io_in_2_bits_task_mshrId;
        vlSelfRef.io_toSourceC_bits_task_param = __PVT__c_arb_io_in_2_bits_task_param;
        vlSelfRef.io_toSourceC_bits_task_opcode = __PVT__customL1Hint_io_s3_task_bits_opcode;
    }
    vlSelfRef.__PVT__customL1Hint__DOT__chn_Grant_s3 
        = ((IData)(__PVT__customL1Hint__DOT___chn_Grant_s3_T_3) 
           & ((IData)(vlSelfRef.__PVT__task_s3_bits_channel) 
              & (4U == (IData)(__PVT__customL1Hint_io_s3_task_bits_opcode))));
    __PVT___isC_s3_T_5 = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__task_s3_bits_mshrTask)) 
                                   & (IData)(__PVT__customL1Hint_io_s3_task_bits_opcode))));
    vlSelfRef.__PVT__customL1Hint__DOT__enqValid_s3 
        = ((IData)(vlSelfRef.__PVT__customL1Hint__DOT__chn_Grant_s3) 
           | ((IData)(__PVT__customL1Hint__DOT___chn_Grant_s3_T_3) 
              & ((IData)(vlSelfRef.__PVT__task_s3_bits_channel) 
                 & (5U == (IData)(__PVT__customL1Hint_io_s3_task_bits_opcode)))));
    vlSelfRef.__PVT___isC_s3_T_6 = (((IData)(vlSelfRef.__PVT__task_s3_bits_channel) 
                                     >> 1U) & ((~ (IData)(__PVT__customL1Hint_io_s3_need_mshr)) 
                                               & (IData)(__PVT___isC_s3_T_5)));
    vlSelfRef.__PVT___isD_s3_T_12 = (1U & (((IData)(vlSelfRef.__PVT__task_s3_bits_channel) 
                                            >> 2U) 
                                           | ((~ (IData)(__PVT__customL1Hint_io_s3_need_mshr)) 
                                              & ((IData)(vlSelfRef.__PVT__task_s3_bits_channel) 
                                                 & ((IData)(__PVT___isC_s3_T_5) 
                                                    & (5U 
                                                       != (IData)(vlSelfRef.__PVT__task_s3_bits_opcode)))))));
    vlSelfRef.__PVT__customL1Hint__DOT__hint_s1Queue_io_deq_ready 
        = ((~ (IData)(vlSelfRef.__PVT__customL1Hint__DOT__enqValid_s3)) 
           & (IData)(vlSelfRef.__PVT__customL1Hint__DOT__hintQueue_io_enq_ready));
    __PVT__c_arb_io_in_2_valid = ((IData)(vlSelfRef.__PVT__task_s3_valid) 
                                  & ((IData)(vlSelfRef.__PVT__task_s3_bits_mshrTask)
                                      ? (IData)(vlSelfRef.__PVT___isC_s3_T)
                                      : (IData)(vlSelfRef.__PVT___isC_s3_T_6)));
    __PVT__d_arb_io_in_2_valid = ((IData)(vlSelfRef.__PVT__task_s3_valid) 
                                  & ((IData)(vlSelfRef.__PVT__task_s3_bits_mshrTask)
                                      ? (IData)(vlSelfRef.__PVT___isD_s3_T_1)
                                      : (IData)(vlSelfRef.__PVT___isD_s3_T_12)));
    __PVT___chnl_fire_s3_T = (((~ (IData)(vlSelfRef.c_arb__DOT____VdfgRegularize_h365a35c3_0_0)) 
                               & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sourceC__DOT__queue_io_enq_ready)) 
                              & (IData)(__PVT__c_arb_io_in_2_valid));
    vlSelfRef.io_toSourceC_valid = ((IData)(vlSelfRef.c_arb__DOT____VdfgRegularize_h365a35c3_0_0) 
                                    | (IData)(__PVT__c_arb_io_in_2_valid));
    __PVT___chnl_fire_s3_T_1 = ((~ (IData)(vlSelfRef.d_arb__DOT____VdfgRegularize_h365a35c3_0_0)) 
                                & (IData)(__PVT__d_arb_io_in_2_valid));
    vlSelfRef.io_toSourceD_valid = ((IData)(vlSelfRef.d_arb__DOT____VdfgRegularize_h365a35c3_0_0) 
                                    | (IData)(__PVT__d_arb_io_in_2_valid));
    vlSelfRef.__PVT__sourceC_pipe_len = ((((IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sourceC__DOT__queue_io_enq_ready) 
                                           & (IData)(vlSelfRef.io_status_vec_toC_2_valid))
                                           ? 5U : 0U) 
                                         | (((IData)(vlSelfRef.__PVT___chnl_fire_s4_T)
                                              ? 4U : 0U) 
                                            | ((IData)(__PVT___chnl_fire_s3_T)
                                                ? 3U
                                                : 0U)));
    vlSelfRef.__PVT___T_128 = ((IData)(vlSelfRef.io_toSourceC_valid) 
                               & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sourceC__DOT__queue_io_enq_ready));
    vlSelfRef.__PVT__sourceD_pipe_len = (((IData)(vlSelfRef.io_status_vec_toD_2_valid)
                                           ? 5U : 0U) 
                                         | (((IData)(vlSelfRef.__PVT___chnl_fire_s4_T_1)
                                              ? 4U : 0U) 
                                            | ((IData)(__PVT___chnl_fire_s3_T_1)
                                                ? 3U
                                                : 0U)));
    vlSelfRef.__PVT__chnl_fire_s3 = ((IData)(__PVT___chnl_fire_s3_T) 
                                     | (IData)(__PVT___chnl_fire_s3_T_1));
    vlSelfRef.__PVT__req_drop_s3 = (((~ (IData)(vlSelfRef.__PVT__need_write_releaseBuf)) 
                                     & ((IData)(vlSelfRef.__PVT___req_drop_s3_T_2) 
                                        | (IData)(vlSelfRef.__PVT__chnl_fire_s3))) 
                                    | (IData)(vlSelfRef.__PVT___metaW_valid_s3_mshr_T_1));
    vlSelfRef.__PVT___task_s4_valid_T_1 = ((~ (IData)(vlSelfRef.__PVT__req_drop_s3)) 
                                           & (IData)(vlSelfRef.__PVT__task_s3_valid));
}

VL_ATTR_COLD void VVerifyTop_MainPipe___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe__1(VVerifyTop_MainPipe* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_MainPipe___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.io_toReqArb_blockC_s1 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb.__PVT__task_s2_valid) 
                                       & ((IData)(vlSelfRef.__VdfgRegularize_hd56c4748_0_8) 
                                          & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__sinkC.io_task_bits_set) 
                                             == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb.__PVT__task_s2_bits_set))));
}
