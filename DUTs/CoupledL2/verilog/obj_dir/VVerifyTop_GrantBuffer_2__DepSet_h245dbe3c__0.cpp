// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVerifyTop.h for the primary calling header

#include "VVerifyTop__pch.h"
#include "VVerifyTop_GrantBuffer_2.h"
#include "VVerifyTop__Syms.h"

VL_INLINE_OPT void VVerifyTop_GrantBuffer_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__grantBuf__0(VVerifyTop_GrantBuffer_2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_GrantBuffer_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__grantBuf__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ __Vdly__counter_1;
    __Vdly__counter_1 = 0;
    QData/*63:0*/ __Vdly__counter_3;
    __Vdly__counter_3 = 0;
    QData/*63:0*/ __Vdly__max;
    __Vdly__max = 0;
    QData/*63:0*/ __Vdly__max_1;
    __Vdly__max_1 = 0;
    QData/*63:0*/ __Vdly__max_2;
    __Vdly__max_2 = 0;
    QData/*63:0*/ __Vdly__max_3;
    __Vdly__max_3 = 0;
    QData/*63:0*/ __Vdly__counter_52;
    __Vdly__counter_52 = 0;
    CData/*0:0*/ __Vdly__grantBufValid;
    __Vdly__grantBufValid = 0;
    CData/*2:0*/ __VdlyVal__grantQueue__DOT__ram_task_opcode__v0;
    __VdlyVal__grantQueue__DOT__ram_task_opcode__v0 = 0;
    CData/*1:0*/ __VdlyDim0__grantQueue__DOT__ram_task_opcode__v0;
    __VdlyDim0__grantQueue__DOT__ram_task_opcode__v0 = 0;
    CData/*0:0*/ __VdlySet__grantQueue__DOT__ram_task_opcode__v0;
    __VdlySet__grantQueue__DOT__ram_task_opcode__v0 = 0;
    CData/*2:0*/ __VdlyVal__grantQueue__DOT__ram_task_param__v0;
    __VdlyVal__grantQueue__DOT__ram_task_param__v0 = 0;
    CData/*1:0*/ __VdlyDim0__grantQueue__DOT__ram_task_param__v0;
    __VdlyDim0__grantQueue__DOT__ram_task_param__v0 = 0;
    CData/*0:0*/ __VdlySet__grantQueue__DOT__ram_task_param__v0;
    __VdlySet__grantQueue__DOT__ram_task_param__v0 = 0;
    CData/*7:0*/ __VdlyVal__grantQueue__DOT__ram_task_sourceId__v0;
    __VdlyVal__grantQueue__DOT__ram_task_sourceId__v0 = 0;
    CData/*1:0*/ __VdlyDim0__grantQueue__DOT__ram_task_sourceId__v0;
    __VdlyDim0__grantQueue__DOT__ram_task_sourceId__v0 = 0;
    CData/*0:0*/ __VdlySet__grantQueue__DOT__ram_task_sourceId__v0;
    __VdlySet__grantQueue__DOT__ram_task_sourceId__v0 = 0;
    SData/*15:0*/ __VdlyVal__grantQueue__DOT__ram_data_data__v0;
    __VdlyVal__grantQueue__DOT__ram_data_data__v0 = 0;
    CData/*1:0*/ __VdlyDim0__grantQueue__DOT__ram_data_data__v0;
    __VdlyDim0__grantQueue__DOT__ram_data_data__v0 = 0;
    CData/*0:0*/ __VdlySet__grantQueue__DOT__ram_data_data__v0;
    __VdlySet__grantQueue__DOT__ram_data_data__v0 = 0;
    CData/*7:0*/ __VdlyVal__grantQueue__DOT__ram_grantid__v0;
    __VdlyVal__grantQueue__DOT__ram_grantid__v0 = 0;
    CData/*1:0*/ __VdlyDim0__grantQueue__DOT__ram_grantid__v0;
    __VdlyDim0__grantQueue__DOT__ram_grantid__v0 = 0;
    CData/*0:0*/ __VdlySet__grantQueue__DOT__ram_grantid__v0;
    __VdlySet__grantQueue__DOT__ram_grantid__v0 = 0;
    // Body
    __Vdly__grantBufValid = vlSelfRef.__PVT__grantBufValid;
    __Vdly__counter_1 = vlSelfRef.__PVT__counter_1;
    __Vdly__counter_3 = vlSelfRef.__PVT__counter_3;
    __Vdly__counter_52 = vlSelfRef.__PVT__counter_52;
    __Vdly__max = vlSelfRef.__PVT__max;
    __Vdly__max_1 = vlSelfRef.__PVT__max_1;
    __Vdly__max_2 = vlSelfRef.__PVT__max_2;
    __Vdly__max_3 = vlSelfRef.__PVT__max_3;
    __VdlySet__grantQueue__DOT__ram_task_param__v0 = 0U;
    __VdlySet__grantQueue__DOT__ram_data_data__v0 = 0U;
    __VdlySet__grantQueue__DOT__ram_grantid__v0 = 0U;
    __VdlySet__grantQueue__DOT__ram_task_opcode__v0 = 0U;
    __VdlySet__grantQueue__DOT__ram_task_sourceId__v0 = 0U;
    __Vdly__grantBufValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                             && ((1U & (~ ((IData)(vlSelfRef.__PVT__grantBufValid) 
                                           & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0_io_in_d_ready)))) 
                                 && (IData)(vlSelfRef.__PVT___GEN_0)));
    if (vlSymsp->TOP.reset) {
        __Vdly__counter_1 = 0ULL;
        __Vdly__counter_3 = 0ULL;
        __Vdly__max = 0ULL;
        __Vdly__max_1 = 0ULL;
        __Vdly__max_2 = 0ULL;
        __Vdly__max_3 = 0ULL;
        __Vdly__counter_52 = 0ULL;
    } else {
        __Vdly__counter_1 = ((IData)(vlSelfRef.__PVT__helper_1_clean)
                              ? 0ULL : vlSelfRef.__PVT__counter_1);
        __Vdly__counter_3 = ((IData)(vlSelfRef.__PVT__helper_3_clean)
                              ? 0ULL : vlSelfRef.__PVT__counter_3);
        if (vlSelfRef.__PVT__helper_5_clean) {
            __Vdly__max = 0ULL;
        } else if (((IData)(vlSelfRef.__PVT__enable) 
                    & (vlSelfRef.__PVT__timers_0 > vlSelfRef.__PVT__max))) {
            __Vdly__max = vlSelfRef.__PVT__timers_0;
        }
        if (vlSelfRef.__PVT__helper_7_clean) {
            __Vdly__max_1 = 0ULL;
        } else if (((IData)(vlSelfRef.__PVT__enable_1) 
                    & (vlSelfRef.__PVT__timers_1 > vlSelfRef.__PVT__max_1))) {
            __Vdly__max_1 = vlSelfRef.__PVT__timers_1;
        }
        if (vlSelfRef.__PVT__helper_9_clean) {
            __Vdly__max_2 = 0ULL;
        } else if (((IData)(vlSelfRef.__PVT__enable_2) 
                    & (vlSelfRef.__PVT__timers_2 > vlSelfRef.__PVT__max_2))) {
            __Vdly__max_2 = vlSelfRef.__PVT__timers_2;
        }
        if (vlSelfRef.__PVT__helper_11_clean) {
            __Vdly__max_3 = 0ULL;
        } else if (((IData)(vlSelfRef.__PVT__enable_3) 
                    & (vlSelfRef.__PVT__timers_3 > vlSelfRef.__PVT__max_3))) {
            __Vdly__max_3 = vlSelfRef.__PVT__timers_3;
        }
        __Vdly__counter_52 = ((IData)(vlSelfRef.__PVT__helper_12_clean)
                               ? 0ULL : vlSelfRef.__PVT__counter_52);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & ((IData)(vlSelfRef.__PVT__full) 
                        & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_toSourceD_valid))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: GrantBuf full and RECEIVE new task, back pressure failed\n    at GrantBuffer.scala:159 assert(!(full && io.d_task.valid), \"GrantBuf full and RECEIVE new task, back pressure failed\")\n",0);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: toTLBundleD_valid, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_timer,
                      64,vlSelfRef.__PVT__next_counter);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_1_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: toTLBundleD_valid_isKeyword, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_1_timer,
                      64,vlSelfRef.__PVT__counter_1);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_2_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: toTLBundleD_fire, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_2_timer,
                      64,vlSelfRef.__PVT__next_counter_2);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: toTLBundleD_fire_isKeyword, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__counter_3);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (((IData)(vlSelfRef.__PVT__inflightGrant_0_valid) 
                         & ((IData)(vlSelfRef.__PVT__inflightGrant_1_valid) 
                            & ((IData)(vlSelfRef.__PVT__inflightGrant_2_valid) 
                               & (IData)(vlSelfRef.__PVT__inflightGrant_3_valid)))) 
                        & (IData)(vlSelfRef.__PVT___T_27))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: inflightGrant entries overflow\n    at GrantBuffer.scala:256 assert(!(inflight_full & (io.d_task.fire && (dtaskOpcode(2, 1) === Grant(2, 1) || io.d_task.bits.task.mergeA))), \"inflightGrant entries overflow\")\n",0);
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.VerifyTop__DOT__buffer__DOT__nodeOut_e_q_io_deq_valid) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (4U <= (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_e_bits_sink))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: GrantBuf: e.sink overflow inflightGrant size\n    at GrantBuffer.scala:267 assert(io.e.bits.sink < grantBufInflightSize.U, \"GrantBuf: e.sink overflow inflightGrant size\")\n",0);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0x2710ULL <= vlSelfRef.__PVT__timers_0)))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Inflight Grant Leak\n    at GrantBuffer.scala:316 assert(t < 10000.U, \"Inflight Grant Leak\")\n",0);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_0_1, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_4);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_1_2, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_5);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_2_3, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_6);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_3_4, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_7);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_4_5, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_8);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_5_6, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_9);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_6_7, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_10);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_7_8, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_11);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_8_9, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_12);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_9_10, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_13);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_10_11, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_14);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_11_12, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_15);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: max_grant_grantack_period_max, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__next_max);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0x2710ULL <= vlSelfRef.__PVT__timers_1)))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Inflight Grant Leak\n    at GrantBuffer.scala:316 assert(t < 10000.U, \"Inflight Grant Leak\")\n",0);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_6_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_0_1, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_6_timer,
                      64,vlSelfRef.__PVT__counter_16);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_6_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_1_2, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_6_timer,
                      64,vlSelfRef.__PVT__counter_17);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_6_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_2_3, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_6_timer,
                      64,vlSelfRef.__PVT__counter_18);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_6_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_3_4, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_6_timer,
                      64,vlSelfRef.__PVT__counter_19);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_6_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_4_5, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_6_timer,
                      64,vlSelfRef.__PVT__counter_20);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_6_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_5_6, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_6_timer,
                      64,vlSelfRef.__PVT__counter_21);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_6_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_6_7, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_6_timer,
                      64,vlSelfRef.__PVT__counter_22);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_6_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_7_8, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_6_timer,
                      64,vlSelfRef.__PVT__counter_23);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_6_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_8_9, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_6_timer,
                      64,vlSelfRef.__PVT__counter_24);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_6_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_9_10, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_6_timer,
                      64,vlSelfRef.__PVT__counter_25);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_6_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_10_11, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_6_timer,
                      64,vlSelfRef.__PVT__counter_26);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_6_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_11_12, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_6_timer,
                      64,vlSelfRef.__PVT__counter_27);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_7_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: max_grant_grantack_period_max, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_7_timer,
                      64,vlSelfRef.__PVT__next_max_1);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0x2710ULL <= vlSelfRef.__PVT__timers_2)))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Inflight Grant Leak\n    at GrantBuffer.scala:316 assert(t < 10000.U, \"Inflight Grant Leak\")\n",0);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_8_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_0_1, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_8_timer,
                      64,vlSelfRef.__PVT__counter_28);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_8_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_1_2, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_8_timer,
                      64,vlSelfRef.__PVT__counter_29);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_8_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_2_3, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_8_timer,
                      64,vlSelfRef.__PVT__counter_30);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_8_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_3_4, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_8_timer,
                      64,vlSelfRef.__PVT__counter_31);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_8_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_4_5, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_8_timer,
                      64,vlSelfRef.__PVT__counter_32);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_8_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_5_6, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_8_timer,
                      64,vlSelfRef.__PVT__counter_33);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_8_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_6_7, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_8_timer,
                      64,vlSelfRef.__PVT__counter_34);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_8_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_7_8, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_8_timer,
                      64,vlSelfRef.__PVT__counter_35);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_8_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_8_9, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_8_timer,
                      64,vlSelfRef.__PVT__counter_36);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_8_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_9_10, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_8_timer,
                      64,vlSelfRef.__PVT__counter_37);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_8_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_10_11, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_8_timer,
                      64,vlSelfRef.__PVT__counter_38);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_8_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_11_12, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_8_timer,
                      64,vlSelfRef.__PVT__counter_39);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_9_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: max_grant_grantack_period_max, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_9_timer,
                      64,vlSelfRef.__PVT__next_max_2);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0x2710ULL <= vlSelfRef.__PVT__timers_3)))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Inflight Grant Leak\n    at GrantBuffer.scala:316 assert(t < 10000.U, \"Inflight Grant Leak\")\n",0);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_10_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_0_1, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_10_timer,
                      64,vlSelfRef.__PVT__counter_40);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_10_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_1_2, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_10_timer,
                      64,vlSelfRef.__PVT__counter_41);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_10_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_2_3, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_10_timer,
                      64,vlSelfRef.__PVT__counter_42);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_10_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_3_4, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_10_timer,
                      64,vlSelfRef.__PVT__counter_43);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_10_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_4_5, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_10_timer,
                      64,vlSelfRef.__PVT__counter_44);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_10_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_5_6, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_10_timer,
                      64,vlSelfRef.__PVT__counter_45);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_10_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_6_7, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_10_timer,
                      64,vlSelfRef.__PVT__counter_46);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_10_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_7_8, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_10_timer,
                      64,vlSelfRef.__PVT__counter_47);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_10_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_8_9, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_10_timer,
                      64,vlSelfRef.__PVT__counter_48);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_10_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_9_10, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_10_timer,
                      64,vlSelfRef.__PVT__counter_49);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_10_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_10_11, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_10_timer,
                      64,vlSelfRef.__PVT__counter_50);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_10_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_11_12, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_10_timer,
                      64,vlSelfRef.__PVT__counter_51);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_11_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: max_grant_grantack_period_max, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_11_timer,
                      64,vlSelfRef.__PVT__next_max_3);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: pftRespQueue_about_to_full, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,vlSelfRef.__PVT__counter_52);
    }
    if (vlSelfRef.__PVT__grantQueue__DOT__ram_task_opcode_MPORT_en) {
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_toSourceD_bits_task_mergeA) {
            if (vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_status_vec_toD_2_valid) {
                __VdlyVal__grantQueue__DOT__ram_task_opcode__v0 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.__PVT__task_s5_bits_aMergeTask_opcode;
                __VdlyVal__grantQueue__DOT__ram_task_param__v0 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.__PVT__task_s5_bits_aMergeTask_param;
                __VdlyVal__grantQueue__DOT__ram_task_sourceId__v0 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.__PVT__task_s5_bits_aMergeTask_sourceId;
            } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.__PVT__d_arb_io_in_1_valid) {
                __VdlyVal__grantQueue__DOT__ram_task_opcode__v0 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.__PVT__task_s4_bits_aMergeTask_opcode;
                __VdlyVal__grantQueue__DOT__ram_task_param__v0 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.__PVT__task_s4_bits_aMergeTask_param;
                __VdlyVal__grantQueue__DOT__ram_task_sourceId__v0 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.__PVT__task_s4_bits_aMergeTask_sourceId;
            } else {
                __VdlyVal__grantQueue__DOT__ram_task_opcode__v0 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_aMergeTask_opcode;
                __VdlyVal__grantQueue__DOT__ram_task_param__v0 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_aMergeTask_param;
                __VdlyVal__grantQueue__DOT__ram_task_sourceId__v0 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_aMergeTask_sourceId;
            }
        } else {
            __VdlyVal__grantQueue__DOT__ram_task_opcode__v0 
                = vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_toSourceD_bits_task_opcode;
            if (vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_status_vec_toD_2_valid) {
                __VdlyVal__grantQueue__DOT__ram_task_param__v0 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.__PVT__task_s5_bits_param;
                __VdlyVal__grantQueue__DOT__ram_task_sourceId__v0 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.__PVT__task_s5_bits_sourceId;
            } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.__PVT__d_arb_io_in_1_valid) {
                __VdlyVal__grantQueue__DOT__ram_task_param__v0 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.__PVT__task_s4_bits_param;
                __VdlyVal__grantQueue__DOT__ram_task_sourceId__v0 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.__PVT__task_s4_bits_sourceId;
            } else {
                __VdlyVal__grantQueue__DOT__ram_task_param__v0 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.__PVT__c_arb_io_in_2_bits_task_param;
                __VdlyVal__grantQueue__DOT__ram_task_sourceId__v0 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_sourceId;
            }
        }
        __VdlyDim0__grantQueue__DOT__ram_task_opcode__v0 
            = vlSelfRef.__PVT__grantQueue__DOT__enq_ptr_value;
        __VdlySet__grantQueue__DOT__ram_task_opcode__v0 = 1U;
        __VdlyDim0__grantQueue__DOT__ram_task_param__v0 
            = vlSelfRef.__PVT__grantQueue__DOT__enq_ptr_value;
        __VdlySet__grantQueue__DOT__ram_task_param__v0 = 1U;
        __VdlyDim0__grantQueue__DOT__ram_task_sourceId__v0 
            = vlSelfRef.__PVT__grantQueue__DOT__enq_ptr_value;
        __VdlySet__grantQueue__DOT__ram_task_sourceId__v0 = 1U;
        __VdlyVal__grantQueue__DOT__ram_data_data__v0 
            = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_status_vec_toD_2_valid)
                ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.__PVT__c_arb_io_in_0_bits_data_data)
                : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.__PVT__d_arb_io_in_1_valid)
                    ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.__PVT__data_s4)
                    : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.__PVT__c_arb_io_in_2_bits_data_data)));
        __VdlyDim0__grantQueue__DOT__ram_data_data__v0 
            = vlSelfRef.__PVT__grantQueue__DOT__enq_ptr_value;
        __VdlySet__grantQueue__DOT__ram_data_data__v0 = 1U;
        __VdlyVal__grantQueue__DOT__ram_grantid__v0 
            = vlSelfRef.__PVT__inflight_insertIdx;
        __VdlyDim0__grantQueue__DOT__ram_grantid__v0 
            = vlSelfRef.__PVT__grantQueue__DOT__enq_ptr_value;
        __VdlySet__grantQueue__DOT__ram_grantid__v0 = 1U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__counter_2 = 0ULL;
        vlSelfRef.__PVT__counter = 0ULL;
        vlSelfRef.__PVT__grantBuf_task_opcode = 0U;
        vlSelfRef.__PVT__inflightGrant_0_bits_tag = 0U;
        vlSelfRef.__PVT__inflightGrant_0_bits_set = 0U;
        vlSelfRef.__PVT__inflightGrant_1_bits_tag = 0U;
        vlSelfRef.__PVT__inflightGrant_1_bits_set = 0U;
        vlSelfRef.__PVT__inflightGrant_3_bits_tag = 0U;
        vlSelfRef.__PVT__inflightGrant_2_bits_tag = 0U;
        vlSelfRef.__PVT__inflightGrant_2_bits_set = 0U;
        vlSelfRef.__PVT__inflightGrant_3_bits_set = 0U;
        vlSelfRef.__PVT__grantQueue__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__grantBuf_task_sourceId = 0U;
        vlSelfRef.__PVT__grantBuf_task_param = 0U;
        vlSelfRef.__PVT__grantBuf_grantid = 0U;
        vlSelfRef.__PVT__grantBuf_data_data = 0U;
        vlSelfRef.__PVT__counter_40 = 0ULL;
        vlSelfRef.__PVT__counter_41 = 0ULL;
        vlSelfRef.__PVT__counter_42 = 0ULL;
        vlSelfRef.__PVT__counter_43 = 0ULL;
        vlSelfRef.__PVT__counter_44 = 0ULL;
        vlSelfRef.__PVT__counter_45 = 0ULL;
        vlSelfRef.__PVT__counter_46 = 0ULL;
        vlSelfRef.__PVT__counter_47 = 0ULL;
        vlSelfRef.__PVT__counter_48 = 0ULL;
        vlSelfRef.__PVT__counter_49 = 0ULL;
        vlSelfRef.__PVT__counter_50 = 0ULL;
        vlSelfRef.__PVT__counter_51 = 0ULL;
        vlSelfRef.__PVT__counter_4 = 0ULL;
        vlSelfRef.__PVT__counter_5 = 0ULL;
        vlSelfRef.__PVT__counter_6 = 0ULL;
        vlSelfRef.__PVT__counter_7 = 0ULL;
        vlSelfRef.__PVT__counter_8 = 0ULL;
        vlSelfRef.__PVT__counter_9 = 0ULL;
        vlSelfRef.__PVT__counter_10 = 0ULL;
        vlSelfRef.__PVT__counter_11 = 0ULL;
        vlSelfRef.__PVT__counter_12 = 0ULL;
        vlSelfRef.__PVT__counter_13 = 0ULL;
        vlSelfRef.__PVT__counter_14 = 0ULL;
        vlSelfRef.__PVT__counter_15 = 0ULL;
        vlSelfRef.__PVT__counter_16 = 0ULL;
        vlSelfRef.__PVT__counter_17 = 0ULL;
        vlSelfRef.__PVT__counter_18 = 0ULL;
        vlSelfRef.__PVT__counter_19 = 0ULL;
        vlSelfRef.__PVT__counter_20 = 0ULL;
        vlSelfRef.__PVT__counter_21 = 0ULL;
        vlSelfRef.__PVT__counter_22 = 0ULL;
        vlSelfRef.__PVT__counter_23 = 0ULL;
        vlSelfRef.__PVT__counter_24 = 0ULL;
        vlSelfRef.__PVT__counter_25 = 0ULL;
        vlSelfRef.__PVT__counter_26 = 0ULL;
        vlSelfRef.__PVT__counter_27 = 0ULL;
        vlSelfRef.__PVT__counter_28 = 0ULL;
        vlSelfRef.__PVT__counter_29 = 0ULL;
        vlSelfRef.__PVT__counter_30 = 0ULL;
        vlSelfRef.__PVT__counter_31 = 0ULL;
        vlSelfRef.__PVT__counter_32 = 0ULL;
        vlSelfRef.__PVT__counter_33 = 0ULL;
        vlSelfRef.__PVT__counter_34 = 0ULL;
        vlSelfRef.__PVT__counter_35 = 0ULL;
        vlSelfRef.__PVT__counter_36 = 0ULL;
        vlSelfRef.__PVT__counter_37 = 0ULL;
        vlSelfRef.__PVT__counter_38 = 0ULL;
        vlSelfRef.__PVT__counter_39 = 0ULL;
        vlSelfRef.__PVT__grantQueue__DOT__enq_ptr_value = 0U;
        vlSelfRef.__PVT__grantQueue__DOT__deq_ptr_value = 0U;
        vlSelfRef.__PVT__timers_3 = 0ULL;
        vlSelfRef.__PVT__timers_0 = 0ULL;
        vlSelfRef.__PVT__timers_1 = 0ULL;
        vlSelfRef.__PVT__timers_2 = 0ULL;
    } else {
        vlSelfRef.__PVT__counter_2 = ((IData)(vlSelfRef.__PVT__helper_2_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_2);
        vlSelfRef.__PVT__counter = ((IData)(vlSelfRef.__PVT__helper_clean)
                                     ? 0ULL : vlSelfRef.__PVT__next_counter);
        if (((((IData)(vlSelfRef.__PVT__grantQueue_io_deq_valid) 
               & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0_io_in_d_ready)) 
              & (~ (IData)(vlSelfRef.__PVT__grantBufValid))) 
             & (IData)(vlSelfRef.__PVT__grantQueue_io_deq_bits_task_opcode))) {
            vlSelfRef.__PVT__grantBuf_task_opcode = vlSelfRef.__PVT__grantQueue_io_deq_bits_task_opcode;
            vlSelfRef.__PVT__grantBuf_task_sourceId 
                = vlSelfRef.__PVT__grantQueue__DOT__ram_task_sourceId
                [vlSelfRef.__PVT__grantQueue__DOT__deq_ptr_value];
            vlSelfRef.__PVT__grantBuf_task_param = 
                vlSelfRef.__PVT__grantQueue__DOT__ram_task_param
                [vlSelfRef.__PVT__grantQueue__DOT__deq_ptr_value];
            vlSelfRef.__PVT__grantBuf_grantid = vlSelfRef.__PVT__grantQueue__DOT__ram_grantid
                [vlSelfRef.__PVT__grantQueue__DOT__deq_ptr_value];
            vlSelfRef.__PVT__grantBuf_data_data = (0xffU 
                                                   & (vlSelfRef.__PVT__grantQueue__DOT__ram_data_data
                                                      [vlSelfRef.__PVT__grantQueue__DOT__deq_ptr_value] 
                                                      >> 8U));
        }
        if (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_toSourceD_valid) 
             & ((2U == (3U & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_toSourceD_bits_task_opcode) 
                              >> 1U))) | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_toSourceD_bits_task_mergeA)))) {
            if ((0U == (IData)(vlSelfRef.__PVT__inflight_insertIdx))) {
                vlSelfRef.__PVT__inflightGrant_0_bits_tag 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_toSourceD_bits_task_tag;
                vlSelfRef.__PVT__inflightGrant_0_bits_set 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_toSourceD_bits_task_set;
            }
            if ((1U == (IData)(vlSelfRef.__PVT__inflight_insertIdx))) {
                vlSelfRef.__PVT__inflightGrant_1_bits_tag 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_toSourceD_bits_task_tag;
                vlSelfRef.__PVT__inflightGrant_1_bits_set 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_toSourceD_bits_task_set;
            }
            if ((3U == (IData)(vlSelfRef.__PVT__inflight_insertIdx))) {
                vlSelfRef.__PVT__inflightGrant_3_bits_tag 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_toSourceD_bits_task_tag;
                vlSelfRef.__PVT__inflightGrant_3_bits_set 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_toSourceD_bits_task_set;
            }
            if ((2U == (IData)(vlSelfRef.__PVT__inflight_insertIdx))) {
                vlSelfRef.__PVT__inflightGrant_2_bits_tag 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_toSourceD_bits_task_tag;
                vlSelfRef.__PVT__inflightGrant_2_bits_set 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_toSourceD_bits_task_set;
            }
        }
        if (((IData)(vlSelfRef.__PVT__grantQueue__DOT__ram_task_opcode_MPORT_en) 
             != (IData)(vlSelfRef.__PVT__grantQueue__DOT__do_deq))) {
            vlSelfRef.__PVT__grantQueue__DOT__maybe_full 
                = vlSelfRef.__PVT__grantQueue__DOT__ram_task_opcode_MPORT_en;
        }
        if (vlSelfRef.__PVT__helper_10_clean) {
            vlSelfRef.__PVT__counter_40 = 0ULL;
            vlSelfRef.__PVT__counter_41 = 0ULL;
            vlSelfRef.__PVT__counter_42 = 0ULL;
            vlSelfRef.__PVT__counter_43 = 0ULL;
            vlSelfRef.__PVT__counter_44 = 0ULL;
            vlSelfRef.__PVT__counter_45 = 0ULL;
            vlSelfRef.__PVT__counter_46 = 0ULL;
            vlSelfRef.__PVT__counter_47 = 0ULL;
            vlSelfRef.__PVT__counter_48 = 0ULL;
            vlSelfRef.__PVT__counter_49 = 0ULL;
            vlSelfRef.__PVT__counter_50 = 0ULL;
            vlSelfRef.__PVT__counter_51 = 0ULL;
        } else {
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & (1ULL > vlSelfRef.__PVT__timers_3))) {
                vlSelfRef.__PVT__counter_40 = vlSelfRef.__PVT___counter_T_77;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((1ULL <= vlSelfRef.__PVT__timers_3) 
                    & (2ULL > vlSelfRef.__PVT__timers_3)))) {
                vlSelfRef.__PVT__counter_41 = vlSelfRef.__PVT___counter_T_79;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((2ULL <= vlSelfRef.__PVT__timers_3) 
                    & (3ULL > vlSelfRef.__PVT__timers_3)))) {
                vlSelfRef.__PVT__counter_42 = vlSelfRef.__PVT___counter_T_81;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((3ULL <= vlSelfRef.__PVT__timers_3) 
                    & (4ULL > vlSelfRef.__PVT__timers_3)))) {
                vlSelfRef.__PVT__counter_43 = vlSelfRef.__PVT___counter_T_83;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((4ULL <= vlSelfRef.__PVT__timers_3) 
                    & (5ULL > vlSelfRef.__PVT__timers_3)))) {
                vlSelfRef.__PVT__counter_44 = vlSelfRef.__PVT___counter_T_85;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((5ULL <= vlSelfRef.__PVT__timers_3) 
                    & (6ULL > vlSelfRef.__PVT__timers_3)))) {
                vlSelfRef.__PVT__counter_45 = vlSelfRef.__PVT___counter_T_87;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((6ULL <= vlSelfRef.__PVT__timers_3) 
                    & (7ULL > vlSelfRef.__PVT__timers_3)))) {
                vlSelfRef.__PVT__counter_46 = vlSelfRef.__PVT___counter_T_89;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((7ULL <= vlSelfRef.__PVT__timers_3) 
                    & (8ULL > vlSelfRef.__PVT__timers_3)))) {
                vlSelfRef.__PVT__counter_47 = vlSelfRef.__PVT___counter_T_91;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((8ULL <= vlSelfRef.__PVT__timers_3) 
                    & (9ULL > vlSelfRef.__PVT__timers_3)))) {
                vlSelfRef.__PVT__counter_48 = vlSelfRef.__PVT___counter_T_93;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((9ULL <= vlSelfRef.__PVT__timers_3) 
                    & (0xaULL > vlSelfRef.__PVT__timers_3)))) {
                vlSelfRef.__PVT__counter_49 = vlSelfRef.__PVT___counter_T_95;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0xaULL <= vlSelfRef.__PVT__timers_3) 
                    & (0xbULL > vlSelfRef.__PVT__timers_3)))) {
                vlSelfRef.__PVT__counter_50 = vlSelfRef.__PVT___counter_T_97;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & (((0xbULL <= vlSelfRef.__PVT__timers_3) 
                     & (0xcULL > vlSelfRef.__PVT__timers_3)) 
                    | (0xcULL <= vlSelfRef.__PVT__timers_3)))) {
                vlSelfRef.__PVT__counter_51 = vlSelfRef.__PVT___counter_T_99;
            }
        }
        if (vlSelfRef.__PVT__helper_4_clean) {
            vlSelfRef.__PVT__counter_4 = 0ULL;
            vlSelfRef.__PVT__counter_5 = 0ULL;
            vlSelfRef.__PVT__counter_6 = 0ULL;
            vlSelfRef.__PVT__counter_7 = 0ULL;
            vlSelfRef.__PVT__counter_8 = 0ULL;
            vlSelfRef.__PVT__counter_9 = 0ULL;
            vlSelfRef.__PVT__counter_10 = 0ULL;
            vlSelfRef.__PVT__counter_11 = 0ULL;
            vlSelfRef.__PVT__counter_12 = 0ULL;
            vlSelfRef.__PVT__counter_13 = 0ULL;
            vlSelfRef.__PVT__counter_14 = 0ULL;
            vlSelfRef.__PVT__counter_15 = 0ULL;
        } else {
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 (1ULL > vlSelfRef.__PVT__timers_0))) {
                vlSelfRef.__PVT__counter_4 = vlSelfRef.__PVT___counter_T_5;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((1ULL <= vlSelfRef.__PVT__timers_0) 
                  & (2ULL > vlSelfRef.__PVT__timers_0)))) {
                vlSelfRef.__PVT__counter_5 = vlSelfRef.__PVT___counter_T_7;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((2ULL <= vlSelfRef.__PVT__timers_0) 
                  & (3ULL > vlSelfRef.__PVT__timers_0)))) {
                vlSelfRef.__PVT__counter_6 = vlSelfRef.__PVT___counter_T_9;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((3ULL <= vlSelfRef.__PVT__timers_0) 
                  & (4ULL > vlSelfRef.__PVT__timers_0)))) {
                vlSelfRef.__PVT__counter_7 = vlSelfRef.__PVT___counter_T_11;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((4ULL <= vlSelfRef.__PVT__timers_0) 
                  & (5ULL > vlSelfRef.__PVT__timers_0)))) {
                vlSelfRef.__PVT__counter_8 = vlSelfRef.__PVT___counter_T_13;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((5ULL <= vlSelfRef.__PVT__timers_0) 
                  & (6ULL > vlSelfRef.__PVT__timers_0)))) {
                vlSelfRef.__PVT__counter_9 = vlSelfRef.__PVT___counter_T_15;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((6ULL <= vlSelfRef.__PVT__timers_0) 
                  & (7ULL > vlSelfRef.__PVT__timers_0)))) {
                vlSelfRef.__PVT__counter_10 = vlSelfRef.__PVT___counter_T_17;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((7ULL <= vlSelfRef.__PVT__timers_0) 
                  & (8ULL > vlSelfRef.__PVT__timers_0)))) {
                vlSelfRef.__PVT__counter_11 = vlSelfRef.__PVT___counter_T_19;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((8ULL <= vlSelfRef.__PVT__timers_0) 
                  & (9ULL > vlSelfRef.__PVT__timers_0)))) {
                vlSelfRef.__PVT__counter_12 = vlSelfRef.__PVT___counter_T_21;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((9ULL <= vlSelfRef.__PVT__timers_0) 
                  & (0xaULL > vlSelfRef.__PVT__timers_0)))) {
                vlSelfRef.__PVT__counter_13 = vlSelfRef.__PVT___counter_T_23;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0xaULL <= vlSelfRef.__PVT__timers_0) 
                  & (0xbULL > vlSelfRef.__PVT__timers_0)))) {
                vlSelfRef.__PVT__counter_14 = vlSelfRef.__PVT___counter_T_25;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 (((0xbULL <= vlSelfRef.__PVT__timers_0) 
                   & (0xcULL > vlSelfRef.__PVT__timers_0)) 
                  | (0xcULL <= vlSelfRef.__PVT__timers_0)))) {
                vlSelfRef.__PVT__counter_15 = vlSelfRef.__PVT___counter_T_27;
            }
        }
        if (vlSelfRef.__PVT__helper_6_clean) {
            vlSelfRef.__PVT__counter_16 = 0ULL;
            vlSelfRef.__PVT__counter_17 = 0ULL;
            vlSelfRef.__PVT__counter_18 = 0ULL;
            vlSelfRef.__PVT__counter_19 = 0ULL;
            vlSelfRef.__PVT__counter_20 = 0ULL;
            vlSelfRef.__PVT__counter_21 = 0ULL;
            vlSelfRef.__PVT__counter_22 = 0ULL;
            vlSelfRef.__PVT__counter_23 = 0ULL;
            vlSelfRef.__PVT__counter_24 = 0ULL;
            vlSelfRef.__PVT__counter_25 = 0ULL;
            vlSelfRef.__PVT__counter_26 = 0ULL;
            vlSelfRef.__PVT__counter_27 = 0ULL;
        } else {
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & (1ULL > vlSelfRef.__PVT__timers_1))) {
                vlSelfRef.__PVT__counter_16 = vlSelfRef.__PVT___counter_T_29;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((1ULL <= vlSelfRef.__PVT__timers_1) 
                    & (2ULL > vlSelfRef.__PVT__timers_1)))) {
                vlSelfRef.__PVT__counter_17 = vlSelfRef.__PVT___counter_T_31;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((2ULL <= vlSelfRef.__PVT__timers_1) 
                    & (3ULL > vlSelfRef.__PVT__timers_1)))) {
                vlSelfRef.__PVT__counter_18 = vlSelfRef.__PVT___counter_T_33;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((3ULL <= vlSelfRef.__PVT__timers_1) 
                    & (4ULL > vlSelfRef.__PVT__timers_1)))) {
                vlSelfRef.__PVT__counter_19 = vlSelfRef.__PVT___counter_T_35;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((4ULL <= vlSelfRef.__PVT__timers_1) 
                    & (5ULL > vlSelfRef.__PVT__timers_1)))) {
                vlSelfRef.__PVT__counter_20 = vlSelfRef.__PVT___counter_T_37;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((5ULL <= vlSelfRef.__PVT__timers_1) 
                    & (6ULL > vlSelfRef.__PVT__timers_1)))) {
                vlSelfRef.__PVT__counter_21 = vlSelfRef.__PVT___counter_T_39;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((6ULL <= vlSelfRef.__PVT__timers_1) 
                    & (7ULL > vlSelfRef.__PVT__timers_1)))) {
                vlSelfRef.__PVT__counter_22 = vlSelfRef.__PVT___counter_T_41;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((7ULL <= vlSelfRef.__PVT__timers_1) 
                    & (8ULL > vlSelfRef.__PVT__timers_1)))) {
                vlSelfRef.__PVT__counter_23 = vlSelfRef.__PVT___counter_T_43;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((8ULL <= vlSelfRef.__PVT__timers_1) 
                    & (9ULL > vlSelfRef.__PVT__timers_1)))) {
                vlSelfRef.__PVT__counter_24 = vlSelfRef.__PVT___counter_T_45;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((9ULL <= vlSelfRef.__PVT__timers_1) 
                    & (0xaULL > vlSelfRef.__PVT__timers_1)))) {
                vlSelfRef.__PVT__counter_25 = vlSelfRef.__PVT___counter_T_47;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0xaULL <= vlSelfRef.__PVT__timers_1) 
                    & (0xbULL > vlSelfRef.__PVT__timers_1)))) {
                vlSelfRef.__PVT__counter_26 = vlSelfRef.__PVT___counter_T_49;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & (((0xbULL <= vlSelfRef.__PVT__timers_1) 
                     & (0xcULL > vlSelfRef.__PVT__timers_1)) 
                    | (0xcULL <= vlSelfRef.__PVT__timers_1)))) {
                vlSelfRef.__PVT__counter_27 = vlSelfRef.__PVT___counter_T_51;
            }
        }
        if (vlSelfRef.__PVT__helper_8_clean) {
            vlSelfRef.__PVT__counter_28 = 0ULL;
            vlSelfRef.__PVT__counter_29 = 0ULL;
            vlSelfRef.__PVT__counter_30 = 0ULL;
            vlSelfRef.__PVT__counter_31 = 0ULL;
            vlSelfRef.__PVT__counter_32 = 0ULL;
            vlSelfRef.__PVT__counter_33 = 0ULL;
            vlSelfRef.__PVT__counter_34 = 0ULL;
            vlSelfRef.__PVT__counter_35 = 0ULL;
            vlSelfRef.__PVT__counter_36 = 0ULL;
            vlSelfRef.__PVT__counter_37 = 0ULL;
            vlSelfRef.__PVT__counter_38 = 0ULL;
            vlSelfRef.__PVT__counter_39 = 0ULL;
        } else {
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & (1ULL > vlSelfRef.__PVT__timers_2))) {
                vlSelfRef.__PVT__counter_28 = vlSelfRef.__PVT___counter_T_53;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((1ULL <= vlSelfRef.__PVT__timers_2) 
                    & (2ULL > vlSelfRef.__PVT__timers_2)))) {
                vlSelfRef.__PVT__counter_29 = vlSelfRef.__PVT___counter_T_55;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((2ULL <= vlSelfRef.__PVT__timers_2) 
                    & (3ULL > vlSelfRef.__PVT__timers_2)))) {
                vlSelfRef.__PVT__counter_30 = vlSelfRef.__PVT___counter_T_57;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((3ULL <= vlSelfRef.__PVT__timers_2) 
                    & (4ULL > vlSelfRef.__PVT__timers_2)))) {
                vlSelfRef.__PVT__counter_31 = vlSelfRef.__PVT___counter_T_59;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((4ULL <= vlSelfRef.__PVT__timers_2) 
                    & (5ULL > vlSelfRef.__PVT__timers_2)))) {
                vlSelfRef.__PVT__counter_32 = vlSelfRef.__PVT___counter_T_61;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((5ULL <= vlSelfRef.__PVT__timers_2) 
                    & (6ULL > vlSelfRef.__PVT__timers_2)))) {
                vlSelfRef.__PVT__counter_33 = vlSelfRef.__PVT___counter_T_63;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((6ULL <= vlSelfRef.__PVT__timers_2) 
                    & (7ULL > vlSelfRef.__PVT__timers_2)))) {
                vlSelfRef.__PVT__counter_34 = vlSelfRef.__PVT___counter_T_65;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((7ULL <= vlSelfRef.__PVT__timers_2) 
                    & (8ULL > vlSelfRef.__PVT__timers_2)))) {
                vlSelfRef.__PVT__counter_35 = vlSelfRef.__PVT___counter_T_67;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((8ULL <= vlSelfRef.__PVT__timers_2) 
                    & (9ULL > vlSelfRef.__PVT__timers_2)))) {
                vlSelfRef.__PVT__counter_36 = vlSelfRef.__PVT___counter_T_69;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((9ULL <= vlSelfRef.__PVT__timers_2) 
                    & (0xaULL > vlSelfRef.__PVT__timers_2)))) {
                vlSelfRef.__PVT__counter_37 = vlSelfRef.__PVT___counter_T_71;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0xaULL <= vlSelfRef.__PVT__timers_2) 
                    & (0xbULL > vlSelfRef.__PVT__timers_2)))) {
                vlSelfRef.__PVT__counter_38 = vlSelfRef.__PVT___counter_T_73;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & (((0xbULL <= vlSelfRef.__PVT__timers_2) 
                     & (0xcULL > vlSelfRef.__PVT__timers_2)) 
                    | (0xcULL <= vlSelfRef.__PVT__timers_2)))) {
                vlSelfRef.__PVT__counter_39 = vlSelfRef.__PVT___counter_T_75;
            }
        }
        if (vlSelfRef.__PVT__grantQueue__DOT__ram_task_opcode_MPORT_en) {
            vlSelfRef.__PVT__grantQueue__DOT__enq_ptr_value 
                = vlSelfRef.__PVT__grantQueue__DOT___value_T_1;
        }
        if (vlSelfRef.__PVT__grantQueue__DOT__do_deq) {
            vlSelfRef.__PVT__grantQueue__DOT__deq_ptr_value 
                = vlSelfRef.__PVT__grantQueue__DOT___value_T_3;
        }
        if (((IData)(vlSelfRef.__PVT__REG_3) & (~ (IData)(vlSelfRef.__PVT__inflightGrant_3_valid)))) {
            vlSelfRef.__PVT__timers_3 = 0ULL;
        } else if (vlSelfRef.__PVT__inflightGrant_3_valid) {
            vlSelfRef.__PVT__timers_3 = vlSelfRef.__PVT___timers_3_T_1;
        }
        if (((IData)(vlSelfRef.__PVT__REG) & (~ (IData)(vlSelfRef.__PVT__inflightGrant_0_valid)))) {
            vlSelfRef.__PVT__timers_0 = 0ULL;
        } else if (vlSelfRef.__PVT__inflightGrant_0_valid) {
            vlSelfRef.__PVT__timers_0 = vlSelfRef.__PVT___timers_0_T_1;
        }
        if (((IData)(vlSelfRef.__PVT__REG_1) & (~ (IData)(vlSelfRef.__PVT__inflightGrant_1_valid)))) {
            vlSelfRef.__PVT__timers_1 = 0ULL;
        } else if (vlSelfRef.__PVT__inflightGrant_1_valid) {
            vlSelfRef.__PVT__timers_1 = vlSelfRef.__PVT___timers_1_T_1;
        }
        if (((IData)(vlSelfRef.__PVT__REG_2) & (~ (IData)(vlSelfRef.__PVT__inflightGrant_2_valid)))) {
            vlSelfRef.__PVT__timers_2 = 0ULL;
        } else if (vlSelfRef.__PVT__inflightGrant_2_valid) {
            vlSelfRef.__PVT__timers_2 = vlSelfRef.__PVT___timers_2_T_1;
        }
    }
    vlSelfRef.__PVT__counter_1 = __Vdly__counter_1;
    vlSelfRef.__PVT__counter_3 = __Vdly__counter_3;
    vlSelfRef.__PVT__counter_52 = __Vdly__counter_52;
    vlSelfRef.__PVT__max = __Vdly__max;
    vlSelfRef.__PVT__max_1 = __Vdly__max_1;
    vlSelfRef.__PVT__max_2 = __Vdly__max_2;
    vlSelfRef.__PVT__max_3 = __Vdly__max_3;
    if (__VdlySet__grantQueue__DOT__ram_task_opcode__v0) {
        vlSelfRef.__PVT__grantQueue__DOT__ram_task_opcode[__VdlyDim0__grantQueue__DOT__ram_task_opcode__v0] 
            = __VdlyVal__grantQueue__DOT__ram_task_opcode__v0;
    }
    if (__VdlySet__grantQueue__DOT__ram_task_sourceId__v0) {
        vlSelfRef.__PVT__grantQueue__DOT__ram_task_sourceId[__VdlyDim0__grantQueue__DOT__ram_task_sourceId__v0] 
            = __VdlyVal__grantQueue__DOT__ram_task_sourceId__v0;
    }
    if (__VdlySet__grantQueue__DOT__ram_task_param__v0) {
        vlSelfRef.__PVT__grantQueue__DOT__ram_task_param[__VdlyDim0__grantQueue__DOT__ram_task_param__v0] 
            = __VdlyVal__grantQueue__DOT__ram_task_param__v0;
    }
    if (__VdlySet__grantQueue__DOT__ram_grantid__v0) {
        vlSelfRef.__PVT__grantQueue__DOT__ram_grantid[__VdlyDim0__grantQueue__DOT__ram_grantid__v0] 
            = __VdlyVal__grantQueue__DOT__ram_grantid__v0;
    }
    if (__VdlySet__grantQueue__DOT__ram_data_data__v0) {
        vlSelfRef.__PVT__grantQueue__DOT__ram_data_data[__VdlyDim0__grantQueue__DOT__ram_data_data__v0] 
            = __VdlyVal__grantQueue__DOT__ram_data_data__v0;
    }
    vlSelfRef.__PVT__grantBufValid = __Vdly__grantBufValid;
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
    vlSelfRef.__PVT__enable_REG_3 = vlSelfRef.__PVT__inflightGrant_3_valid;
    vlSelfRef.__PVT__REG_3 = vlSelfRef.__PVT__inflightGrant_3_valid;
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
    vlSelfRef.__PVT__enable_REG = vlSelfRef.__PVT__inflightGrant_0_valid;
    vlSelfRef.__PVT__REG = vlSelfRef.__PVT__inflightGrant_0_valid;
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
    vlSelfRef.__PVT__enable_REG_1 = vlSelfRef.__PVT__inflightGrant_1_valid;
    vlSelfRef.__PVT__REG_1 = vlSelfRef.__PVT__inflightGrant_1_valid;
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
    vlSelfRef.__PVT__enable_REG_2 = vlSelfRef.__PVT__inflightGrant_2_valid;
    vlSelfRef.__PVT__REG_2 = vlSelfRef.__PVT__inflightGrant_2_valid;
    vlSelfRef.__PVT__grantQueue__DOT___value_T_1 = 
        (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__grantQueue__DOT__enq_ptr_value)));
    vlSelfRef.__PVT__grantQueue__DOT___value_T_3 = 
        (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__grantQueue__DOT__deq_ptr_value)));
    vlSelfRef.__PVT__grantQueue_io_deq_bits_task_opcode 
        = vlSelfRef.__PVT__grantQueue__DOT__ram_task_opcode
        [vlSelfRef.__PVT__grantQueue__DOT__deq_ptr_value];
    if (vlSelfRef.__PVT__grantBufValid) {
        vlSelfRef.io_d_bits_opcode = vlSelfRef.__PVT__grantBuf_task_opcode;
        vlSelfRef.io_d_bits_source = vlSelfRef.__PVT__grantBuf_task_sourceId;
    } else {
        vlSelfRef.io_d_bits_opcode = vlSelfRef.__PVT__grantQueue__DOT__ram_task_opcode
            [vlSelfRef.__PVT__grantQueue__DOT__deq_ptr_value];
        vlSelfRef.io_d_bits_source = vlSelfRef.__PVT__grantQueue__DOT__ram_task_sourceId
            [vlSelfRef.__PVT__grantQueue__DOT__deq_ptr_value];
    }
    vlSelfRef.__PVT__grantQueue__DOT__ptr_match = ((IData)(vlSelfRef.__PVT__grantQueue__DOT__deq_ptr_value) 
                                                   == (IData)(vlSelfRef.__PVT__grantQueue__DOT__enq_ptr_value));
    vlSelfRef.__PVT__full = ((IData)(vlSelfRef.__PVT__grantQueue__DOT__ptr_match) 
                             & (IData)(vlSelfRef.__PVT__grantQueue__DOT__maybe_full));
    vlSelfRef.__PVT__grantQueue_io_deq_valid = (1U 
                                                & (~ 
                                                   ((~ (IData)(vlSelfRef.__PVT__grantQueue__DOT__maybe_full)) 
                                                    & (IData)(vlSelfRef.__PVT__grantQueue__DOT__ptr_match))));
    vlSelfRef.__PVT___timers_3_T_1 = (1ULL + vlSelfRef.__PVT__timers_3);
    vlSelfRef.__PVT__inflightGrant_3_valid = ((1U & 
                                               (~ (IData)(vlSymsp->TOP.reset))) 
                                              && ((IData)(vlSymsp->TOP.VerifyTop__DOT__buffer__DOT__nodeOut_e_q_io_deq_valid)
                                                   ? 
                                                  ((3U 
                                                    != 
                                                    (3U 
                                                     & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_e_bits_sink))) 
                                                   && (IData)(vlSelfRef.__PVT___GEN_63))
                                                   : (IData)(vlSelfRef.__PVT___GEN_63)));
    vlSelfRef.__PVT___timers_0_T_1 = (1ULL + vlSelfRef.__PVT__timers_0);
    vlSelfRef.__PVT__inflightGrant_0_valid = ((1U & 
                                               (~ (IData)(vlSymsp->TOP.reset))) 
                                              && ((IData)(vlSymsp->TOP.VerifyTop__DOT__buffer__DOT__nodeOut_e_q_io_deq_valid)
                                                   ? 
                                                  ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_e_bits_sink))) 
                                                   && (IData)(vlSelfRef.__PVT___GEN_60))
                                                   : (IData)(vlSelfRef.__PVT___GEN_60)));
    vlSelfRef.__PVT___timers_1_T_1 = (1ULL + vlSelfRef.__PVT__timers_1);
    vlSelfRef.__PVT__inflightGrant_1_valid = ((1U & 
                                               (~ (IData)(vlSymsp->TOP.reset))) 
                                              && ((IData)(vlSymsp->TOP.VerifyTop__DOT__buffer__DOT__nodeOut_e_q_io_deq_valid)
                                                   ? 
                                                  ((1U 
                                                    != 
                                                    (3U 
                                                     & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_e_bits_sink))) 
                                                   && (IData)(vlSelfRef.__PVT___GEN_61))
                                                   : (IData)(vlSelfRef.__PVT___GEN_61)));
    vlSelfRef.__PVT___timers_2_T_1 = (1ULL + vlSelfRef.__PVT__timers_2);
    vlSelfRef.__PVT__inflightGrant_2_valid = ((1U & 
                                               (~ (IData)(vlSymsp->TOP.reset))) 
                                              && ((IData)(vlSymsp->TOP.VerifyTop__DOT__buffer__DOT__nodeOut_e_q_io_deq_valid)
                                                   ? 
                                                  ((2U 
                                                    != 
                                                    (3U 
                                                     & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_auto_out_e_bits_sink))) 
                                                   && (IData)(vlSelfRef.__PVT___GEN_62))
                                                   : (IData)(vlSelfRef.__PVT___GEN_62)));
    vlSelfRef.__PVT__next_counter = (vlSelfRef.__PVT__counter 
                                     + (QData)((IData)(vlSelfRef.__PVT__grantQueue_io_deq_valid)));
    vlSelfRef.io_d_valid = ((IData)(vlSelfRef.__PVT__grantQueue_io_deq_valid) 
                            | (IData)(vlSelfRef.__PVT__grantBufValid));
    vlSelfRef.__PVT__enable_3 = ((~ (IData)(vlSelfRef.__PVT__inflightGrant_3_valid)) 
                                 & (IData)(vlSelfRef.__PVT__enable_REG_3));
    vlSelfRef.__PVT__enable = ((~ (IData)(vlSelfRef.__PVT__inflightGrant_0_valid)) 
                               & (IData)(vlSelfRef.__PVT__enable_REG));
    vlSelfRef.__PVT__enable_1 = ((~ (IData)(vlSelfRef.__PVT__inflightGrant_1_valid)) 
                                 & (IData)(vlSelfRef.__PVT__enable_REG_1));
    vlSelfRef.__PVT__enable_2 = ((~ (IData)(vlSelfRef.__PVT__inflightGrant_2_valid)) 
                                 & (IData)(vlSelfRef.__PVT__enable_REG_2));
    vlSelfRef.__PVT__inflight_insertIdx = ((IData)(vlSelfRef.__PVT__inflightGrant_0_valid)
                                            ? ((IData)(vlSelfRef.__PVT__inflightGrant_1_valid)
                                                ? ((IData)(vlSelfRef.__PVT__inflightGrant_2_valid)
                                                    ? 3U
                                                    : 2U)
                                                : 1U)
                                            : 0U);
    vlSelfRef.__PVT__next_max_3 = (((IData)(vlSelfRef.__PVT__enable_3) 
                                    & (vlSelfRef.__PVT__timers_3 
                                       > vlSelfRef.__PVT__max_3))
                                    ? vlSelfRef.__PVT__timers_3
                                    : vlSelfRef.__PVT__max_3);
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
}

VL_INLINE_OPT void VVerifyTop_GrantBuffer_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__grantBuf__1(VVerifyTop_GrantBuffer_2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_GrantBuffer_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__grantBuf__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___T_5;
    __PVT___T_5 = 0;
    // Body
    vlSelfRef.__PVT__grantQueue__DOT__do_deq = ((IData)(vlSelfRef.__PVT__grantQueue_io_deq_valid) 
                                                & ((~ (IData)(vlSelfRef.__PVT__grantBufValid)) 
                                                   & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0_io_in_d_ready)));
    __PVT___T_5 = ((IData)(vlSelfRef.__PVT__grantQueue_io_deq_valid) 
                   & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2__DOT__slices_0_io_in_d_ready));
    vlSelfRef.__PVT__next_counter_2 = (vlSelfRef.__PVT__counter_2 
                                       + (QData)((IData)(__PVT___T_5)));
    vlSelfRef.__PVT___GEN_0 = (((IData)(__PVT___T_5) 
                                & ((~ (IData)(vlSelfRef.__PVT__grantBufValid)) 
                                   & vlSelfRef.__PVT__grantQueue__DOT__ram_task_opcode
                                   [vlSelfRef.__PVT__grantQueue__DOT__deq_ptr_value])) 
                               | (IData)(vlSelfRef.__PVT__grantBufValid));
}

VL_INLINE_OPT void VVerifyTop_GrantBuffer_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__grantBuf__2(VVerifyTop_GrantBuffer_2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_GrantBuffer_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__grantBuf__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

VL_INLINE_OPT void VVerifyTop_GrantBuffer_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__grantBuf__3(VVerifyTop_GrantBuffer_2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_GrantBuffer_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__grantBuf__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___noSpaceForSinkReq_T_5;
    __PVT___noSpaceForSinkReq_T_5 = 0;
    CData/*0:0*/ __PVT___noSpaceWaitSinkEForSinkReq_T_2;
    __PVT___noSpaceWaitSinkEForSinkReq_T_2 = 0;
    // Body
    vlSelfRef.__PVT__grantQueue__DOT__ram_task_opcode_MPORT_en 
        = ((~ (IData)(vlSelfRef.__PVT__full)) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_toSourceD_valid) 
                                                 & ((2U 
                                                     != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_toSourceD_bits_task_opcode)) 
                                                    | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_toSourceD_bits_task_mergeA))));
    vlSelfRef.__PVT___T_27 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_toSourceD_valid) 
                              & ((2U == (3U & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_toSourceD_bits_task_opcode) 
                                               >> 1U))) 
                                 | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__mainPipe.io_toSourceD_bits_task_mergeA)));
    __PVT___noSpaceWaitSinkEForSinkReq_T_2 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb.__PVT__task_s2_valid) 
                                              & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb.__PVT__task_s2_bits_channel));
    __PVT___noSpaceForSinkReq_T_5 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb.__PVT__task_s2_valid) 
                                     & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb.__PVT__task_s2_bits_channel) 
                                        | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2__DOT__slices_0__DOT__reqArb.__PVT__task_s2_bits_channel) 
                                           >> 2U)));
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
    vlSelfRef.io_toReqArb_blockSinkReqEntrance_blockA_s1 
        = ((4U <= (IData)(vlSelfRef.__PVT___noSpaceForSinkReq_T_36)) 
           | (4U <= (IData)(vlSelfRef.__PVT___noSpaceWaitSinkEForSinkReq_T_30)));
}

VL_INLINE_OPT void VVerifyTop_GrantBuffer_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__grantBuf__0(VVerifyTop_GrantBuffer_2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_GrantBuffer_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__grantBuf__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ __Vdly__counter_1;
    __Vdly__counter_1 = 0;
    QData/*63:0*/ __Vdly__counter_3;
    __Vdly__counter_3 = 0;
    QData/*63:0*/ __Vdly__max;
    __Vdly__max = 0;
    QData/*63:0*/ __Vdly__max_1;
    __Vdly__max_1 = 0;
    QData/*63:0*/ __Vdly__max_2;
    __Vdly__max_2 = 0;
    QData/*63:0*/ __Vdly__max_3;
    __Vdly__max_3 = 0;
    QData/*63:0*/ __Vdly__counter_52;
    __Vdly__counter_52 = 0;
    CData/*0:0*/ __Vdly__grantBufValid;
    __Vdly__grantBufValid = 0;
    CData/*2:0*/ __VdlyVal__grantQueue__DOT__ram_task_opcode__v0;
    __VdlyVal__grantQueue__DOT__ram_task_opcode__v0 = 0;
    CData/*1:0*/ __VdlyDim0__grantQueue__DOT__ram_task_opcode__v0;
    __VdlyDim0__grantQueue__DOT__ram_task_opcode__v0 = 0;
    CData/*0:0*/ __VdlySet__grantQueue__DOT__ram_task_opcode__v0;
    __VdlySet__grantQueue__DOT__ram_task_opcode__v0 = 0;
    CData/*2:0*/ __VdlyVal__grantQueue__DOT__ram_task_param__v0;
    __VdlyVal__grantQueue__DOT__ram_task_param__v0 = 0;
    CData/*1:0*/ __VdlyDim0__grantQueue__DOT__ram_task_param__v0;
    __VdlyDim0__grantQueue__DOT__ram_task_param__v0 = 0;
    CData/*0:0*/ __VdlySet__grantQueue__DOT__ram_task_param__v0;
    __VdlySet__grantQueue__DOT__ram_task_param__v0 = 0;
    CData/*7:0*/ __VdlyVal__grantQueue__DOT__ram_task_sourceId__v0;
    __VdlyVal__grantQueue__DOT__ram_task_sourceId__v0 = 0;
    CData/*1:0*/ __VdlyDim0__grantQueue__DOT__ram_task_sourceId__v0;
    __VdlyDim0__grantQueue__DOT__ram_task_sourceId__v0 = 0;
    CData/*0:0*/ __VdlySet__grantQueue__DOT__ram_task_sourceId__v0;
    __VdlySet__grantQueue__DOT__ram_task_sourceId__v0 = 0;
    SData/*15:0*/ __VdlyVal__grantQueue__DOT__ram_data_data__v0;
    __VdlyVal__grantQueue__DOT__ram_data_data__v0 = 0;
    CData/*1:0*/ __VdlyDim0__grantQueue__DOT__ram_data_data__v0;
    __VdlyDim0__grantQueue__DOT__ram_data_data__v0 = 0;
    CData/*0:0*/ __VdlySet__grantQueue__DOT__ram_data_data__v0;
    __VdlySet__grantQueue__DOT__ram_data_data__v0 = 0;
    CData/*7:0*/ __VdlyVal__grantQueue__DOT__ram_grantid__v0;
    __VdlyVal__grantQueue__DOT__ram_grantid__v0 = 0;
    CData/*1:0*/ __VdlyDim0__grantQueue__DOT__ram_grantid__v0;
    __VdlyDim0__grantQueue__DOT__ram_grantid__v0 = 0;
    CData/*0:0*/ __VdlySet__grantQueue__DOT__ram_grantid__v0;
    __VdlySet__grantQueue__DOT__ram_grantid__v0 = 0;
    // Body
    __Vdly__grantBufValid = vlSelfRef.__PVT__grantBufValid;
    __Vdly__counter_1 = vlSelfRef.__PVT__counter_1;
    __Vdly__counter_3 = vlSelfRef.__PVT__counter_3;
    __Vdly__counter_52 = vlSelfRef.__PVT__counter_52;
    __Vdly__max = vlSelfRef.__PVT__max;
    __Vdly__max_1 = vlSelfRef.__PVT__max_1;
    __Vdly__max_2 = vlSelfRef.__PVT__max_2;
    __Vdly__max_3 = vlSelfRef.__PVT__max_3;
    __VdlySet__grantQueue__DOT__ram_task_param__v0 = 0U;
    __VdlySet__grantQueue__DOT__ram_data_data__v0 = 0U;
    __VdlySet__grantQueue__DOT__ram_grantid__v0 = 0U;
    __VdlySet__grantQueue__DOT__ram_task_opcode__v0 = 0U;
    __VdlySet__grantQueue__DOT__ram_task_sourceId__v0 = 0U;
    __Vdly__grantBufValid = ((1U & (~ (IData)(vlSymsp->TOP.reset))) 
                             && ((1U & (~ ((IData)(vlSelfRef.__PVT__grantBufValid) 
                                           & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0_io_in_d_ready)))) 
                                 && (IData)(vlSelfRef.__PVT___GEN_0)));
    if (vlSymsp->TOP.reset) {
        __Vdly__counter_1 = 0ULL;
        __Vdly__counter_3 = 0ULL;
        __Vdly__max = 0ULL;
        __Vdly__max_1 = 0ULL;
        __Vdly__max_2 = 0ULL;
        __Vdly__max_3 = 0ULL;
        __Vdly__counter_52 = 0ULL;
    } else {
        __Vdly__counter_1 = ((IData)(vlSelfRef.__PVT__helper_1_clean)
                              ? 0ULL : vlSelfRef.__PVT__counter_1);
        __Vdly__counter_3 = ((IData)(vlSelfRef.__PVT__helper_3_clean)
                              ? 0ULL : vlSelfRef.__PVT__counter_3);
        if (vlSelfRef.__PVT__helper_5_clean) {
            __Vdly__max = 0ULL;
        } else if (((IData)(vlSelfRef.__PVT__enable) 
                    & (vlSelfRef.__PVT__timers_0 > vlSelfRef.__PVT__max))) {
            __Vdly__max = vlSelfRef.__PVT__timers_0;
        }
        if (vlSelfRef.__PVT__helper_7_clean) {
            __Vdly__max_1 = 0ULL;
        } else if (((IData)(vlSelfRef.__PVT__enable_1) 
                    & (vlSelfRef.__PVT__timers_1 > vlSelfRef.__PVT__max_1))) {
            __Vdly__max_1 = vlSelfRef.__PVT__timers_1;
        }
        if (vlSelfRef.__PVT__helper_9_clean) {
            __Vdly__max_2 = 0ULL;
        } else if (((IData)(vlSelfRef.__PVT__enable_2) 
                    & (vlSelfRef.__PVT__timers_2 > vlSelfRef.__PVT__max_2))) {
            __Vdly__max_2 = vlSelfRef.__PVT__timers_2;
        }
        if (vlSelfRef.__PVT__helper_11_clean) {
            __Vdly__max_3 = 0ULL;
        } else if (((IData)(vlSelfRef.__PVT__enable_3) 
                    & (vlSelfRef.__PVT__timers_3 > vlSelfRef.__PVT__max_3))) {
            __Vdly__max_3 = vlSelfRef.__PVT__timers_3;
        }
        __Vdly__counter_52 = ((IData)(vlSelfRef.__PVT__helper_12_clean)
                               ? 0ULL : vlSelfRef.__PVT__counter_52);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & ((IData)(vlSelfRef.__PVT__full) 
                        & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_toSourceD_valid))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: GrantBuf full and RECEIVE new task, back pressure failed\n    at GrantBuffer.scala:159 assert(!(full && io.d_task.valid), \"GrantBuf full and RECEIVE new task, back pressure failed\")\n",0);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: toTLBundleD_valid, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_timer,
                      64,vlSelfRef.__PVT__next_counter);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_1_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: toTLBundleD_valid_isKeyword, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_1_timer,
                      64,vlSelfRef.__PVT__counter_1);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_2_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: toTLBundleD_fire, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_2_timer,
                      64,vlSelfRef.__PVT__next_counter_2);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: toTLBundleD_fire_isKeyword, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__counter_3);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (((IData)(vlSelfRef.__PVT__inflightGrant_0_valid) 
                         & ((IData)(vlSelfRef.__PVT__inflightGrant_1_valid) 
                            & ((IData)(vlSelfRef.__PVT__inflightGrant_2_valid) 
                               & (IData)(vlSelfRef.__PVT__inflightGrant_3_valid)))) 
                        & (IData)(vlSelfRef.__PVT___T_27))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: inflightGrant entries overflow\n    at GrantBuffer.scala:256 assert(!(inflight_full & (io.d_task.fire && (dtaskOpcode(2, 1) === Grant(2, 1) || io.d_task.bits.task.mergeA))), \"inflightGrant entries overflow\")\n",0);
    }
    if (VL_UNLIKELY((((IData)(vlSymsp->TOP.VerifyTop__DOT__buffer_1__DOT__nodeOut_e_q_io_deq_valid) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (4U <= (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_e_bits_sink))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: GrantBuf: e.sink overflow inflightGrant size\n    at GrantBuffer.scala:267 assert(io.e.bits.sink < grantBufInflightSize.U, \"GrantBuf: e.sink overflow inflightGrant size\")\n",0);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0x2710ULL <= vlSelfRef.__PVT__timers_0)))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Inflight Grant Leak\n    at GrantBuffer.scala:316 assert(t < 10000.U, \"Inflight Grant Leak\")\n",0);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_0_1, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_4);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_1_2, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_5);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_2_3, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_6);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_3_4, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_7);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_4_5, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_8);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_5_6, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_9);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_6_7, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_10);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_7_8, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_11);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_8_9, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_12);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_9_10, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_13);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_10_11, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_14);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_11_12, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_15);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: max_grant_grantack_period_max, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__next_max);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0x2710ULL <= vlSelfRef.__PVT__timers_1)))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Inflight Grant Leak\n    at GrantBuffer.scala:316 assert(t < 10000.U, \"Inflight Grant Leak\")\n",0);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_6_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_0_1, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_6_timer,
                      64,vlSelfRef.__PVT__counter_16);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_6_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_1_2, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_6_timer,
                      64,vlSelfRef.__PVT__counter_17);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_6_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_2_3, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_6_timer,
                      64,vlSelfRef.__PVT__counter_18);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_6_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_3_4, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_6_timer,
                      64,vlSelfRef.__PVT__counter_19);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_6_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_4_5, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_6_timer,
                      64,vlSelfRef.__PVT__counter_20);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_6_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_5_6, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_6_timer,
                      64,vlSelfRef.__PVT__counter_21);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_6_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_6_7, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_6_timer,
                      64,vlSelfRef.__PVT__counter_22);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_6_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_7_8, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_6_timer,
                      64,vlSelfRef.__PVT__counter_23);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_6_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_8_9, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_6_timer,
                      64,vlSelfRef.__PVT__counter_24);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_6_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_9_10, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_6_timer,
                      64,vlSelfRef.__PVT__counter_25);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_6_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_10_11, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_6_timer,
                      64,vlSelfRef.__PVT__counter_26);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_6_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_11_12, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_6_timer,
                      64,vlSelfRef.__PVT__counter_27);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_7_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: max_grant_grantack_period_max, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_7_timer,
                      64,vlSelfRef.__PVT__next_max_1);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0x2710ULL <= vlSelfRef.__PVT__timers_2)))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Inflight Grant Leak\n    at GrantBuffer.scala:316 assert(t < 10000.U, \"Inflight Grant Leak\")\n",0);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_8_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_0_1, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_8_timer,
                      64,vlSelfRef.__PVT__counter_28);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_8_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_1_2, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_8_timer,
                      64,vlSelfRef.__PVT__counter_29);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_8_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_2_3, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_8_timer,
                      64,vlSelfRef.__PVT__counter_30);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_8_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_3_4, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_8_timer,
                      64,vlSelfRef.__PVT__counter_31);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_8_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_4_5, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_8_timer,
                      64,vlSelfRef.__PVT__counter_32);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_8_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_5_6, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_8_timer,
                      64,vlSelfRef.__PVT__counter_33);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_8_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_6_7, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_8_timer,
                      64,vlSelfRef.__PVT__counter_34);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_8_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_7_8, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_8_timer,
                      64,vlSelfRef.__PVT__counter_35);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_8_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_8_9, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_8_timer,
                      64,vlSelfRef.__PVT__counter_36);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_8_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_9_10, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_8_timer,
                      64,vlSelfRef.__PVT__counter_37);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_8_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_10_11, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_8_timer,
                      64,vlSelfRef.__PVT__counter_38);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_8_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_11_12, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_8_timer,
                      64,vlSelfRef.__PVT__counter_39);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_9_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: max_grant_grantack_period_max, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_9_timer,
                      64,vlSelfRef.__PVT__next_max_2);
    }
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP.reset)) 
                     & (0x2710ULL <= vlSelfRef.__PVT__timers_3)))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed: Inflight Grant Leak\n    at GrantBuffer.scala:316 assert(t < 10000.U, \"Inflight Grant Leak\")\n",0);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_10_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_0_1, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_10_timer,
                      64,vlSelfRef.__PVT__counter_40);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_10_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_1_2, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_10_timer,
                      64,vlSelfRef.__PVT__counter_41);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_10_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_2_3, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_10_timer,
                      64,vlSelfRef.__PVT__counter_42);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_10_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_3_4, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_10_timer,
                      64,vlSelfRef.__PVT__counter_43);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_10_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_4_5, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_10_timer,
                      64,vlSelfRef.__PVT__counter_44);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_10_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_5_6, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_10_timer,
                      64,vlSelfRef.__PVT__counter_45);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_10_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_6_7, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_10_timer,
                      64,vlSelfRef.__PVT__counter_46);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_10_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_7_8, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_10_timer,
                      64,vlSelfRef.__PVT__counter_47);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_10_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_8_9, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_10_timer,
                      64,vlSelfRef.__PVT__counter_48);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_10_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_9_10, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_10_timer,
                      64,vlSelfRef.__PVT__counter_49);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_10_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_10_11, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_10_timer,
                      64,vlSelfRef.__PVT__counter_50);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_10_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: grant_grantack_period_11_12, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_10_timer,
                      64,vlSelfRef.__PVT__counter_51);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_11_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: max_grant_grantack_period_max, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_11_timer,
                      64,vlSelfRef.__PVT__next_max_3);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_12_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: pftRespQueue_about_to_full, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_12_timer,
                      64,vlSelfRef.__PVT__counter_52);
    }
    if (vlSelfRef.__PVT__grantQueue__DOT__ram_task_opcode_MPORT_en) {
        if (vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_toSourceD_bits_task_mergeA) {
            if (vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_status_vec_toD_2_valid) {
                __VdlyVal__grantQueue__DOT__ram_task_opcode__v0 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s5_bits_aMergeTask_opcode;
                __VdlyVal__grantQueue__DOT__ram_task_param__v0 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s5_bits_aMergeTask_param;
                __VdlyVal__grantQueue__DOT__ram_task_sourceId__v0 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s5_bits_aMergeTask_sourceId;
            } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.__PVT__d_arb_io_in_1_valid) {
                __VdlyVal__grantQueue__DOT__ram_task_opcode__v0 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s4_bits_aMergeTask_opcode;
                __VdlyVal__grantQueue__DOT__ram_task_param__v0 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s4_bits_aMergeTask_param;
                __VdlyVal__grantQueue__DOT__ram_task_sourceId__v0 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s4_bits_aMergeTask_sourceId;
            } else {
                __VdlyVal__grantQueue__DOT__ram_task_opcode__v0 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_aMergeTask_opcode;
                __VdlyVal__grantQueue__DOT__ram_task_param__v0 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_aMergeTask_param;
                __VdlyVal__grantQueue__DOT__ram_task_sourceId__v0 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_aMergeTask_sourceId;
            }
        } else {
            __VdlyVal__grantQueue__DOT__ram_task_opcode__v0 
                = vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_toSourceD_bits_task_opcode;
            if (vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_status_vec_toD_2_valid) {
                __VdlyVal__grantQueue__DOT__ram_task_param__v0 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s5_bits_param;
                __VdlyVal__grantQueue__DOT__ram_task_sourceId__v0 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s5_bits_sourceId;
            } else if (vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.__PVT__d_arb_io_in_1_valid) {
                __VdlyVal__grantQueue__DOT__ram_task_param__v0 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s4_bits_param;
                __VdlyVal__grantQueue__DOT__ram_task_sourceId__v0 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s4_bits_sourceId;
            } else {
                __VdlyVal__grantQueue__DOT__ram_task_param__v0 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.__PVT__c_arb_io_in_2_bits_task_param;
                __VdlyVal__grantQueue__DOT__ram_task_sourceId__v0 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.__PVT__task_s3_bits_sourceId;
            }
        }
        __VdlyDim0__grantQueue__DOT__ram_task_opcode__v0 
            = vlSelfRef.__PVT__grantQueue__DOT__enq_ptr_value;
        __VdlySet__grantQueue__DOT__ram_task_opcode__v0 = 1U;
        __VdlyDim0__grantQueue__DOT__ram_task_param__v0 
            = vlSelfRef.__PVT__grantQueue__DOT__enq_ptr_value;
        __VdlySet__grantQueue__DOT__ram_task_param__v0 = 1U;
        __VdlyDim0__grantQueue__DOT__ram_task_sourceId__v0 
            = vlSelfRef.__PVT__grantQueue__DOT__enq_ptr_value;
        __VdlySet__grantQueue__DOT__ram_task_sourceId__v0 = 1U;
        __VdlyVal__grantQueue__DOT__ram_data_data__v0 
            = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_status_vec_toD_2_valid)
                ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.__PVT__c_arb_io_in_0_bits_data_data)
                : ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.__PVT__d_arb_io_in_1_valid)
                    ? (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.__PVT__data_s4)
                    : (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.__PVT__c_arb_io_in_2_bits_data_data)));
        __VdlyDim0__grantQueue__DOT__ram_data_data__v0 
            = vlSelfRef.__PVT__grantQueue__DOT__enq_ptr_value;
        __VdlySet__grantQueue__DOT__ram_data_data__v0 = 1U;
        __VdlyVal__grantQueue__DOT__ram_grantid__v0 
            = vlSelfRef.__PVT__inflight_insertIdx;
        __VdlyDim0__grantQueue__DOT__ram_grantid__v0 
            = vlSelfRef.__PVT__grantQueue__DOT__enq_ptr_value;
        __VdlySet__grantQueue__DOT__ram_grantid__v0 = 1U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__counter_2 = 0ULL;
        vlSelfRef.__PVT__counter = 0ULL;
        vlSelfRef.__PVT__grantBuf_task_opcode = 0U;
        vlSelfRef.__PVT__inflightGrant_0_bits_tag = 0U;
        vlSelfRef.__PVT__inflightGrant_0_bits_set = 0U;
        vlSelfRef.__PVT__inflightGrant_1_bits_tag = 0U;
        vlSelfRef.__PVT__inflightGrant_1_bits_set = 0U;
        vlSelfRef.__PVT__inflightGrant_3_bits_tag = 0U;
        vlSelfRef.__PVT__inflightGrant_2_bits_tag = 0U;
        vlSelfRef.__PVT__inflightGrant_2_bits_set = 0U;
        vlSelfRef.__PVT__inflightGrant_3_bits_set = 0U;
        vlSelfRef.__PVT__grantQueue__DOT__maybe_full = 0U;
        vlSelfRef.__PVT__grantBuf_task_sourceId = 0U;
        vlSelfRef.__PVT__grantBuf_task_param = 0U;
        vlSelfRef.__PVT__grantBuf_grantid = 0U;
        vlSelfRef.__PVT__grantBuf_data_data = 0U;
        vlSelfRef.__PVT__counter_40 = 0ULL;
        vlSelfRef.__PVT__counter_41 = 0ULL;
        vlSelfRef.__PVT__counter_42 = 0ULL;
        vlSelfRef.__PVT__counter_43 = 0ULL;
        vlSelfRef.__PVT__counter_44 = 0ULL;
        vlSelfRef.__PVT__counter_45 = 0ULL;
        vlSelfRef.__PVT__counter_46 = 0ULL;
        vlSelfRef.__PVT__counter_47 = 0ULL;
        vlSelfRef.__PVT__counter_48 = 0ULL;
        vlSelfRef.__PVT__counter_49 = 0ULL;
        vlSelfRef.__PVT__counter_50 = 0ULL;
        vlSelfRef.__PVT__counter_51 = 0ULL;
        vlSelfRef.__PVT__counter_4 = 0ULL;
        vlSelfRef.__PVT__counter_5 = 0ULL;
        vlSelfRef.__PVT__counter_6 = 0ULL;
        vlSelfRef.__PVT__counter_7 = 0ULL;
        vlSelfRef.__PVT__counter_8 = 0ULL;
        vlSelfRef.__PVT__counter_9 = 0ULL;
        vlSelfRef.__PVT__counter_10 = 0ULL;
        vlSelfRef.__PVT__counter_11 = 0ULL;
        vlSelfRef.__PVT__counter_12 = 0ULL;
        vlSelfRef.__PVT__counter_13 = 0ULL;
        vlSelfRef.__PVT__counter_14 = 0ULL;
        vlSelfRef.__PVT__counter_15 = 0ULL;
        vlSelfRef.__PVT__counter_16 = 0ULL;
        vlSelfRef.__PVT__counter_17 = 0ULL;
        vlSelfRef.__PVT__counter_18 = 0ULL;
        vlSelfRef.__PVT__counter_19 = 0ULL;
        vlSelfRef.__PVT__counter_20 = 0ULL;
        vlSelfRef.__PVT__counter_21 = 0ULL;
        vlSelfRef.__PVT__counter_22 = 0ULL;
        vlSelfRef.__PVT__counter_23 = 0ULL;
        vlSelfRef.__PVT__counter_24 = 0ULL;
        vlSelfRef.__PVT__counter_25 = 0ULL;
        vlSelfRef.__PVT__counter_26 = 0ULL;
        vlSelfRef.__PVT__counter_27 = 0ULL;
        vlSelfRef.__PVT__counter_28 = 0ULL;
        vlSelfRef.__PVT__counter_29 = 0ULL;
        vlSelfRef.__PVT__counter_30 = 0ULL;
        vlSelfRef.__PVT__counter_31 = 0ULL;
        vlSelfRef.__PVT__counter_32 = 0ULL;
        vlSelfRef.__PVT__counter_33 = 0ULL;
        vlSelfRef.__PVT__counter_34 = 0ULL;
        vlSelfRef.__PVT__counter_35 = 0ULL;
        vlSelfRef.__PVT__counter_36 = 0ULL;
        vlSelfRef.__PVT__counter_37 = 0ULL;
        vlSelfRef.__PVT__counter_38 = 0ULL;
        vlSelfRef.__PVT__counter_39 = 0ULL;
        vlSelfRef.__PVT__grantQueue__DOT__enq_ptr_value = 0U;
        vlSelfRef.__PVT__grantQueue__DOT__deq_ptr_value = 0U;
        vlSelfRef.__PVT__timers_3 = 0ULL;
        vlSelfRef.__PVT__timers_0 = 0ULL;
        vlSelfRef.__PVT__timers_1 = 0ULL;
        vlSelfRef.__PVT__timers_2 = 0ULL;
    } else {
        vlSelfRef.__PVT__counter_2 = ((IData)(vlSelfRef.__PVT__helper_2_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_2);
        vlSelfRef.__PVT__counter = ((IData)(vlSelfRef.__PVT__helper_clean)
                                     ? 0ULL : vlSelfRef.__PVT__next_counter);
        if (((((IData)(vlSelfRef.__PVT__grantQueue_io_deq_valid) 
               & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0_io_in_d_ready)) 
              & (~ (IData)(vlSelfRef.__PVT__grantBufValid))) 
             & (IData)(vlSelfRef.__PVT__grantQueue_io_deq_bits_task_opcode))) {
            vlSelfRef.__PVT__grantBuf_task_opcode = vlSelfRef.__PVT__grantQueue_io_deq_bits_task_opcode;
            vlSelfRef.__PVT__grantBuf_task_sourceId 
                = vlSelfRef.__PVT__grantQueue__DOT__ram_task_sourceId
                [vlSelfRef.__PVT__grantQueue__DOT__deq_ptr_value];
            vlSelfRef.__PVT__grantBuf_task_param = 
                vlSelfRef.__PVT__grantQueue__DOT__ram_task_param
                [vlSelfRef.__PVT__grantQueue__DOT__deq_ptr_value];
            vlSelfRef.__PVT__grantBuf_grantid = vlSelfRef.__PVT__grantQueue__DOT__ram_grantid
                [vlSelfRef.__PVT__grantQueue__DOT__deq_ptr_value];
            vlSelfRef.__PVT__grantBuf_data_data = (0xffU 
                                                   & (vlSelfRef.__PVT__grantQueue__DOT__ram_data_data
                                                      [vlSelfRef.__PVT__grantQueue__DOT__deq_ptr_value] 
                                                      >> 8U));
        }
        if (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_toSourceD_valid) 
             & ((2U == (3U & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_toSourceD_bits_task_opcode) 
                              >> 1U))) | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_toSourceD_bits_task_mergeA)))) {
            if ((0U == (IData)(vlSelfRef.__PVT__inflight_insertIdx))) {
                vlSelfRef.__PVT__inflightGrant_0_bits_tag 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_toSourceD_bits_task_tag;
                vlSelfRef.__PVT__inflightGrant_0_bits_set 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_toSourceD_bits_task_set;
            }
            if ((1U == (IData)(vlSelfRef.__PVT__inflight_insertIdx))) {
                vlSelfRef.__PVT__inflightGrant_1_bits_tag 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_toSourceD_bits_task_tag;
                vlSelfRef.__PVT__inflightGrant_1_bits_set 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_toSourceD_bits_task_set;
            }
            if ((3U == (IData)(vlSelfRef.__PVT__inflight_insertIdx))) {
                vlSelfRef.__PVT__inflightGrant_3_bits_tag 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_toSourceD_bits_task_tag;
                vlSelfRef.__PVT__inflightGrant_3_bits_set 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_toSourceD_bits_task_set;
            }
            if ((2U == (IData)(vlSelfRef.__PVT__inflight_insertIdx))) {
                vlSelfRef.__PVT__inflightGrant_2_bits_tag 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_toSourceD_bits_task_tag;
                vlSelfRef.__PVT__inflightGrant_2_bits_set 
                    = vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_toSourceD_bits_task_set;
            }
        }
        if (((IData)(vlSelfRef.__PVT__grantQueue__DOT__ram_task_opcode_MPORT_en) 
             != (IData)(vlSelfRef.__PVT__grantQueue__DOT__do_deq))) {
            vlSelfRef.__PVT__grantQueue__DOT__maybe_full 
                = vlSelfRef.__PVT__grantQueue__DOT__ram_task_opcode_MPORT_en;
        }
        if (vlSelfRef.__PVT__helper_10_clean) {
            vlSelfRef.__PVT__counter_40 = 0ULL;
            vlSelfRef.__PVT__counter_41 = 0ULL;
            vlSelfRef.__PVT__counter_42 = 0ULL;
            vlSelfRef.__PVT__counter_43 = 0ULL;
            vlSelfRef.__PVT__counter_44 = 0ULL;
            vlSelfRef.__PVT__counter_45 = 0ULL;
            vlSelfRef.__PVT__counter_46 = 0ULL;
            vlSelfRef.__PVT__counter_47 = 0ULL;
            vlSelfRef.__PVT__counter_48 = 0ULL;
            vlSelfRef.__PVT__counter_49 = 0ULL;
            vlSelfRef.__PVT__counter_50 = 0ULL;
            vlSelfRef.__PVT__counter_51 = 0ULL;
        } else {
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & (1ULL > vlSelfRef.__PVT__timers_3))) {
                vlSelfRef.__PVT__counter_40 = vlSelfRef.__PVT___counter_T_77;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((1ULL <= vlSelfRef.__PVT__timers_3) 
                    & (2ULL > vlSelfRef.__PVT__timers_3)))) {
                vlSelfRef.__PVT__counter_41 = vlSelfRef.__PVT___counter_T_79;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((2ULL <= vlSelfRef.__PVT__timers_3) 
                    & (3ULL > vlSelfRef.__PVT__timers_3)))) {
                vlSelfRef.__PVT__counter_42 = vlSelfRef.__PVT___counter_T_81;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((3ULL <= vlSelfRef.__PVT__timers_3) 
                    & (4ULL > vlSelfRef.__PVT__timers_3)))) {
                vlSelfRef.__PVT__counter_43 = vlSelfRef.__PVT___counter_T_83;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((4ULL <= vlSelfRef.__PVT__timers_3) 
                    & (5ULL > vlSelfRef.__PVT__timers_3)))) {
                vlSelfRef.__PVT__counter_44 = vlSelfRef.__PVT___counter_T_85;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((5ULL <= vlSelfRef.__PVT__timers_3) 
                    & (6ULL > vlSelfRef.__PVT__timers_3)))) {
                vlSelfRef.__PVT__counter_45 = vlSelfRef.__PVT___counter_T_87;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((6ULL <= vlSelfRef.__PVT__timers_3) 
                    & (7ULL > vlSelfRef.__PVT__timers_3)))) {
                vlSelfRef.__PVT__counter_46 = vlSelfRef.__PVT___counter_T_89;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((7ULL <= vlSelfRef.__PVT__timers_3) 
                    & (8ULL > vlSelfRef.__PVT__timers_3)))) {
                vlSelfRef.__PVT__counter_47 = vlSelfRef.__PVT___counter_T_91;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((8ULL <= vlSelfRef.__PVT__timers_3) 
                    & (9ULL > vlSelfRef.__PVT__timers_3)))) {
                vlSelfRef.__PVT__counter_48 = vlSelfRef.__PVT___counter_T_93;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((9ULL <= vlSelfRef.__PVT__timers_3) 
                    & (0xaULL > vlSelfRef.__PVT__timers_3)))) {
                vlSelfRef.__PVT__counter_49 = vlSelfRef.__PVT___counter_T_95;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & ((0xaULL <= vlSelfRef.__PVT__timers_3) 
                    & (0xbULL > vlSelfRef.__PVT__timers_3)))) {
                vlSelfRef.__PVT__counter_50 = vlSelfRef.__PVT___counter_T_97;
            }
            if (((IData)(vlSelfRef.__PVT__enable_3) 
                 & (((0xbULL <= vlSelfRef.__PVT__timers_3) 
                     & (0xcULL > vlSelfRef.__PVT__timers_3)) 
                    | (0xcULL <= vlSelfRef.__PVT__timers_3)))) {
                vlSelfRef.__PVT__counter_51 = vlSelfRef.__PVT___counter_T_99;
            }
        }
        if (vlSelfRef.__PVT__helper_4_clean) {
            vlSelfRef.__PVT__counter_4 = 0ULL;
            vlSelfRef.__PVT__counter_5 = 0ULL;
            vlSelfRef.__PVT__counter_6 = 0ULL;
            vlSelfRef.__PVT__counter_7 = 0ULL;
            vlSelfRef.__PVT__counter_8 = 0ULL;
            vlSelfRef.__PVT__counter_9 = 0ULL;
            vlSelfRef.__PVT__counter_10 = 0ULL;
            vlSelfRef.__PVT__counter_11 = 0ULL;
            vlSelfRef.__PVT__counter_12 = 0ULL;
            vlSelfRef.__PVT__counter_13 = 0ULL;
            vlSelfRef.__PVT__counter_14 = 0ULL;
            vlSelfRef.__PVT__counter_15 = 0ULL;
        } else {
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 (1ULL > vlSelfRef.__PVT__timers_0))) {
                vlSelfRef.__PVT__counter_4 = vlSelfRef.__PVT___counter_T_5;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((1ULL <= vlSelfRef.__PVT__timers_0) 
                  & (2ULL > vlSelfRef.__PVT__timers_0)))) {
                vlSelfRef.__PVT__counter_5 = vlSelfRef.__PVT___counter_T_7;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((2ULL <= vlSelfRef.__PVT__timers_0) 
                  & (3ULL > vlSelfRef.__PVT__timers_0)))) {
                vlSelfRef.__PVT__counter_6 = vlSelfRef.__PVT___counter_T_9;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((3ULL <= vlSelfRef.__PVT__timers_0) 
                  & (4ULL > vlSelfRef.__PVT__timers_0)))) {
                vlSelfRef.__PVT__counter_7 = vlSelfRef.__PVT___counter_T_11;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((4ULL <= vlSelfRef.__PVT__timers_0) 
                  & (5ULL > vlSelfRef.__PVT__timers_0)))) {
                vlSelfRef.__PVT__counter_8 = vlSelfRef.__PVT___counter_T_13;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((5ULL <= vlSelfRef.__PVT__timers_0) 
                  & (6ULL > vlSelfRef.__PVT__timers_0)))) {
                vlSelfRef.__PVT__counter_9 = vlSelfRef.__PVT___counter_T_15;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((6ULL <= vlSelfRef.__PVT__timers_0) 
                  & (7ULL > vlSelfRef.__PVT__timers_0)))) {
                vlSelfRef.__PVT__counter_10 = vlSelfRef.__PVT___counter_T_17;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((7ULL <= vlSelfRef.__PVT__timers_0) 
                  & (8ULL > vlSelfRef.__PVT__timers_0)))) {
                vlSelfRef.__PVT__counter_11 = vlSelfRef.__PVT___counter_T_19;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((8ULL <= vlSelfRef.__PVT__timers_0) 
                  & (9ULL > vlSelfRef.__PVT__timers_0)))) {
                vlSelfRef.__PVT__counter_12 = vlSelfRef.__PVT___counter_T_21;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((9ULL <= vlSelfRef.__PVT__timers_0) 
                  & (0xaULL > vlSelfRef.__PVT__timers_0)))) {
                vlSelfRef.__PVT__counter_13 = vlSelfRef.__PVT___counter_T_23;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 ((0xaULL <= vlSelfRef.__PVT__timers_0) 
                  & (0xbULL > vlSelfRef.__PVT__timers_0)))) {
                vlSelfRef.__PVT__counter_14 = vlSelfRef.__PVT___counter_T_25;
            }
            if (((IData)(vlSelfRef.__PVT__enable) & 
                 (((0xbULL <= vlSelfRef.__PVT__timers_0) 
                   & (0xcULL > vlSelfRef.__PVT__timers_0)) 
                  | (0xcULL <= vlSelfRef.__PVT__timers_0)))) {
                vlSelfRef.__PVT__counter_15 = vlSelfRef.__PVT___counter_T_27;
            }
        }
        if (vlSelfRef.__PVT__helper_6_clean) {
            vlSelfRef.__PVT__counter_16 = 0ULL;
            vlSelfRef.__PVT__counter_17 = 0ULL;
            vlSelfRef.__PVT__counter_18 = 0ULL;
            vlSelfRef.__PVT__counter_19 = 0ULL;
            vlSelfRef.__PVT__counter_20 = 0ULL;
            vlSelfRef.__PVT__counter_21 = 0ULL;
            vlSelfRef.__PVT__counter_22 = 0ULL;
            vlSelfRef.__PVT__counter_23 = 0ULL;
            vlSelfRef.__PVT__counter_24 = 0ULL;
            vlSelfRef.__PVT__counter_25 = 0ULL;
            vlSelfRef.__PVT__counter_26 = 0ULL;
            vlSelfRef.__PVT__counter_27 = 0ULL;
        } else {
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & (1ULL > vlSelfRef.__PVT__timers_1))) {
                vlSelfRef.__PVT__counter_16 = vlSelfRef.__PVT___counter_T_29;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((1ULL <= vlSelfRef.__PVT__timers_1) 
                    & (2ULL > vlSelfRef.__PVT__timers_1)))) {
                vlSelfRef.__PVT__counter_17 = vlSelfRef.__PVT___counter_T_31;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((2ULL <= vlSelfRef.__PVT__timers_1) 
                    & (3ULL > vlSelfRef.__PVT__timers_1)))) {
                vlSelfRef.__PVT__counter_18 = vlSelfRef.__PVT___counter_T_33;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((3ULL <= vlSelfRef.__PVT__timers_1) 
                    & (4ULL > vlSelfRef.__PVT__timers_1)))) {
                vlSelfRef.__PVT__counter_19 = vlSelfRef.__PVT___counter_T_35;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((4ULL <= vlSelfRef.__PVT__timers_1) 
                    & (5ULL > vlSelfRef.__PVT__timers_1)))) {
                vlSelfRef.__PVT__counter_20 = vlSelfRef.__PVT___counter_T_37;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((5ULL <= vlSelfRef.__PVT__timers_1) 
                    & (6ULL > vlSelfRef.__PVT__timers_1)))) {
                vlSelfRef.__PVT__counter_21 = vlSelfRef.__PVT___counter_T_39;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((6ULL <= vlSelfRef.__PVT__timers_1) 
                    & (7ULL > vlSelfRef.__PVT__timers_1)))) {
                vlSelfRef.__PVT__counter_22 = vlSelfRef.__PVT___counter_T_41;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((7ULL <= vlSelfRef.__PVT__timers_1) 
                    & (8ULL > vlSelfRef.__PVT__timers_1)))) {
                vlSelfRef.__PVT__counter_23 = vlSelfRef.__PVT___counter_T_43;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((8ULL <= vlSelfRef.__PVT__timers_1) 
                    & (9ULL > vlSelfRef.__PVT__timers_1)))) {
                vlSelfRef.__PVT__counter_24 = vlSelfRef.__PVT___counter_T_45;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((9ULL <= vlSelfRef.__PVT__timers_1) 
                    & (0xaULL > vlSelfRef.__PVT__timers_1)))) {
                vlSelfRef.__PVT__counter_25 = vlSelfRef.__PVT___counter_T_47;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & ((0xaULL <= vlSelfRef.__PVT__timers_1) 
                    & (0xbULL > vlSelfRef.__PVT__timers_1)))) {
                vlSelfRef.__PVT__counter_26 = vlSelfRef.__PVT___counter_T_49;
            }
            if (((IData)(vlSelfRef.__PVT__enable_1) 
                 & (((0xbULL <= vlSelfRef.__PVT__timers_1) 
                     & (0xcULL > vlSelfRef.__PVT__timers_1)) 
                    | (0xcULL <= vlSelfRef.__PVT__timers_1)))) {
                vlSelfRef.__PVT__counter_27 = vlSelfRef.__PVT___counter_T_51;
            }
        }
        if (vlSelfRef.__PVT__helper_8_clean) {
            vlSelfRef.__PVT__counter_28 = 0ULL;
            vlSelfRef.__PVT__counter_29 = 0ULL;
            vlSelfRef.__PVT__counter_30 = 0ULL;
            vlSelfRef.__PVT__counter_31 = 0ULL;
            vlSelfRef.__PVT__counter_32 = 0ULL;
            vlSelfRef.__PVT__counter_33 = 0ULL;
            vlSelfRef.__PVT__counter_34 = 0ULL;
            vlSelfRef.__PVT__counter_35 = 0ULL;
            vlSelfRef.__PVT__counter_36 = 0ULL;
            vlSelfRef.__PVT__counter_37 = 0ULL;
            vlSelfRef.__PVT__counter_38 = 0ULL;
            vlSelfRef.__PVT__counter_39 = 0ULL;
        } else {
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & (1ULL > vlSelfRef.__PVT__timers_2))) {
                vlSelfRef.__PVT__counter_28 = vlSelfRef.__PVT___counter_T_53;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((1ULL <= vlSelfRef.__PVT__timers_2) 
                    & (2ULL > vlSelfRef.__PVT__timers_2)))) {
                vlSelfRef.__PVT__counter_29 = vlSelfRef.__PVT___counter_T_55;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((2ULL <= vlSelfRef.__PVT__timers_2) 
                    & (3ULL > vlSelfRef.__PVT__timers_2)))) {
                vlSelfRef.__PVT__counter_30 = vlSelfRef.__PVT___counter_T_57;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((3ULL <= vlSelfRef.__PVT__timers_2) 
                    & (4ULL > vlSelfRef.__PVT__timers_2)))) {
                vlSelfRef.__PVT__counter_31 = vlSelfRef.__PVT___counter_T_59;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((4ULL <= vlSelfRef.__PVT__timers_2) 
                    & (5ULL > vlSelfRef.__PVT__timers_2)))) {
                vlSelfRef.__PVT__counter_32 = vlSelfRef.__PVT___counter_T_61;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((5ULL <= vlSelfRef.__PVT__timers_2) 
                    & (6ULL > vlSelfRef.__PVT__timers_2)))) {
                vlSelfRef.__PVT__counter_33 = vlSelfRef.__PVT___counter_T_63;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((6ULL <= vlSelfRef.__PVT__timers_2) 
                    & (7ULL > vlSelfRef.__PVT__timers_2)))) {
                vlSelfRef.__PVT__counter_34 = vlSelfRef.__PVT___counter_T_65;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((7ULL <= vlSelfRef.__PVT__timers_2) 
                    & (8ULL > vlSelfRef.__PVT__timers_2)))) {
                vlSelfRef.__PVT__counter_35 = vlSelfRef.__PVT___counter_T_67;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((8ULL <= vlSelfRef.__PVT__timers_2) 
                    & (9ULL > vlSelfRef.__PVT__timers_2)))) {
                vlSelfRef.__PVT__counter_36 = vlSelfRef.__PVT___counter_T_69;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((9ULL <= vlSelfRef.__PVT__timers_2) 
                    & (0xaULL > vlSelfRef.__PVT__timers_2)))) {
                vlSelfRef.__PVT__counter_37 = vlSelfRef.__PVT___counter_T_71;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & ((0xaULL <= vlSelfRef.__PVT__timers_2) 
                    & (0xbULL > vlSelfRef.__PVT__timers_2)))) {
                vlSelfRef.__PVT__counter_38 = vlSelfRef.__PVT___counter_T_73;
            }
            if (((IData)(vlSelfRef.__PVT__enable_2) 
                 & (((0xbULL <= vlSelfRef.__PVT__timers_2) 
                     & (0xcULL > vlSelfRef.__PVT__timers_2)) 
                    | (0xcULL <= vlSelfRef.__PVT__timers_2)))) {
                vlSelfRef.__PVT__counter_39 = vlSelfRef.__PVT___counter_T_75;
            }
        }
        if (vlSelfRef.__PVT__grantQueue__DOT__ram_task_opcode_MPORT_en) {
            vlSelfRef.__PVT__grantQueue__DOT__enq_ptr_value 
                = vlSelfRef.__PVT__grantQueue__DOT___value_T_1;
        }
        if (vlSelfRef.__PVT__grantQueue__DOT__do_deq) {
            vlSelfRef.__PVT__grantQueue__DOT__deq_ptr_value 
                = vlSelfRef.__PVT__grantQueue__DOT___value_T_3;
        }
        if (((IData)(vlSelfRef.__PVT__REG_3) & (~ (IData)(vlSelfRef.__PVT__inflightGrant_3_valid)))) {
            vlSelfRef.__PVT__timers_3 = 0ULL;
        } else if (vlSelfRef.__PVT__inflightGrant_3_valid) {
            vlSelfRef.__PVT__timers_3 = vlSelfRef.__PVT___timers_3_T_1;
        }
        if (((IData)(vlSelfRef.__PVT__REG) & (~ (IData)(vlSelfRef.__PVT__inflightGrant_0_valid)))) {
            vlSelfRef.__PVT__timers_0 = 0ULL;
        } else if (vlSelfRef.__PVT__inflightGrant_0_valid) {
            vlSelfRef.__PVT__timers_0 = vlSelfRef.__PVT___timers_0_T_1;
        }
        if (((IData)(vlSelfRef.__PVT__REG_1) & (~ (IData)(vlSelfRef.__PVT__inflightGrant_1_valid)))) {
            vlSelfRef.__PVT__timers_1 = 0ULL;
        } else if (vlSelfRef.__PVT__inflightGrant_1_valid) {
            vlSelfRef.__PVT__timers_1 = vlSelfRef.__PVT___timers_1_T_1;
        }
        if (((IData)(vlSelfRef.__PVT__REG_2) & (~ (IData)(vlSelfRef.__PVT__inflightGrant_2_valid)))) {
            vlSelfRef.__PVT__timers_2 = 0ULL;
        } else if (vlSelfRef.__PVT__inflightGrant_2_valid) {
            vlSelfRef.__PVT__timers_2 = vlSelfRef.__PVT___timers_2_T_1;
        }
    }
    vlSelfRef.__PVT__counter_1 = __Vdly__counter_1;
    vlSelfRef.__PVT__counter_3 = __Vdly__counter_3;
    vlSelfRef.__PVT__counter_52 = __Vdly__counter_52;
    vlSelfRef.__PVT__max = __Vdly__max;
    vlSelfRef.__PVT__max_1 = __Vdly__max_1;
    vlSelfRef.__PVT__max_2 = __Vdly__max_2;
    vlSelfRef.__PVT__max_3 = __Vdly__max_3;
    if (__VdlySet__grantQueue__DOT__ram_task_opcode__v0) {
        vlSelfRef.__PVT__grantQueue__DOT__ram_task_opcode[__VdlyDim0__grantQueue__DOT__ram_task_opcode__v0] 
            = __VdlyVal__grantQueue__DOT__ram_task_opcode__v0;
    }
    if (__VdlySet__grantQueue__DOT__ram_task_sourceId__v0) {
        vlSelfRef.__PVT__grantQueue__DOT__ram_task_sourceId[__VdlyDim0__grantQueue__DOT__ram_task_sourceId__v0] 
            = __VdlyVal__grantQueue__DOT__ram_task_sourceId__v0;
    }
    if (__VdlySet__grantQueue__DOT__ram_task_param__v0) {
        vlSelfRef.__PVT__grantQueue__DOT__ram_task_param[__VdlyDim0__grantQueue__DOT__ram_task_param__v0] 
            = __VdlyVal__grantQueue__DOT__ram_task_param__v0;
    }
    if (__VdlySet__grantQueue__DOT__ram_grantid__v0) {
        vlSelfRef.__PVT__grantQueue__DOT__ram_grantid[__VdlyDim0__grantQueue__DOT__ram_grantid__v0] 
            = __VdlyVal__grantQueue__DOT__ram_grantid__v0;
    }
    if (__VdlySet__grantQueue__DOT__ram_data_data__v0) {
        vlSelfRef.__PVT__grantQueue__DOT__ram_data_data[__VdlyDim0__grantQueue__DOT__ram_data_data__v0] 
            = __VdlyVal__grantQueue__DOT__ram_data_data__v0;
    }
    vlSelfRef.__PVT__grantBufValid = __Vdly__grantBufValid;
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
    vlSelfRef.__PVT__enable_REG_3 = vlSelfRef.__PVT__inflightGrant_3_valid;
    vlSelfRef.__PVT__REG_3 = vlSelfRef.__PVT__inflightGrant_3_valid;
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
    vlSelfRef.__PVT__enable_REG = vlSelfRef.__PVT__inflightGrant_0_valid;
    vlSelfRef.__PVT__REG = vlSelfRef.__PVT__inflightGrant_0_valid;
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
    vlSelfRef.__PVT__enable_REG_1 = vlSelfRef.__PVT__inflightGrant_1_valid;
    vlSelfRef.__PVT__REG_1 = vlSelfRef.__PVT__inflightGrant_1_valid;
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
    vlSelfRef.__PVT__enable_REG_2 = vlSelfRef.__PVT__inflightGrant_2_valid;
    vlSelfRef.__PVT__REG_2 = vlSelfRef.__PVT__inflightGrant_2_valid;
    vlSelfRef.__PVT__grantQueue__DOT___value_T_1 = 
        (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__grantQueue__DOT__enq_ptr_value)));
    vlSelfRef.__PVT__grantQueue__DOT___value_T_3 = 
        (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__grantQueue__DOT__deq_ptr_value)));
    vlSelfRef.__PVT__grantQueue_io_deq_bits_task_opcode 
        = vlSelfRef.__PVT__grantQueue__DOT__ram_task_opcode
        [vlSelfRef.__PVT__grantQueue__DOT__deq_ptr_value];
    if (vlSelfRef.__PVT__grantBufValid) {
        vlSelfRef.io_d_bits_opcode = vlSelfRef.__PVT__grantBuf_task_opcode;
        vlSelfRef.io_d_bits_source = vlSelfRef.__PVT__grantBuf_task_sourceId;
    } else {
        vlSelfRef.io_d_bits_opcode = vlSelfRef.__PVT__grantQueue__DOT__ram_task_opcode
            [vlSelfRef.__PVT__grantQueue__DOT__deq_ptr_value];
        vlSelfRef.io_d_bits_source = vlSelfRef.__PVT__grantQueue__DOT__ram_task_sourceId
            [vlSelfRef.__PVT__grantQueue__DOT__deq_ptr_value];
    }
    vlSelfRef.__PVT__grantQueue__DOT__ptr_match = ((IData)(vlSelfRef.__PVT__grantQueue__DOT__deq_ptr_value) 
                                                   == (IData)(vlSelfRef.__PVT__grantQueue__DOT__enq_ptr_value));
    vlSelfRef.__PVT__full = ((IData)(vlSelfRef.__PVT__grantQueue__DOT__ptr_match) 
                             & (IData)(vlSelfRef.__PVT__grantQueue__DOT__maybe_full));
    vlSelfRef.__PVT__grantQueue_io_deq_valid = (1U 
                                                & (~ 
                                                   ((~ (IData)(vlSelfRef.__PVT__grantQueue__DOT__maybe_full)) 
                                                    & (IData)(vlSelfRef.__PVT__grantQueue__DOT__ptr_match))));
    vlSelfRef.__PVT___timers_3_T_1 = (1ULL + vlSelfRef.__PVT__timers_3);
    vlSelfRef.__PVT__inflightGrant_3_valid = ((1U & 
                                               (~ (IData)(vlSymsp->TOP.reset))) 
                                              && ((IData)(vlSymsp->TOP.VerifyTop__DOT__buffer_1__DOT__nodeOut_e_q_io_deq_valid)
                                                   ? 
                                                  ((3U 
                                                    != 
                                                    (3U 
                                                     & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_e_bits_sink))) 
                                                   && (IData)(vlSelfRef.__PVT___GEN_63))
                                                   : (IData)(vlSelfRef.__PVT___GEN_63)));
    vlSelfRef.__PVT___timers_0_T_1 = (1ULL + vlSelfRef.__PVT__timers_0);
    vlSelfRef.__PVT__inflightGrant_0_valid = ((1U & 
                                               (~ (IData)(vlSymsp->TOP.reset))) 
                                              && ((IData)(vlSymsp->TOP.VerifyTop__DOT__buffer_1__DOT__nodeOut_e_q_io_deq_valid)
                                                   ? 
                                                  ((0U 
                                                    != 
                                                    (3U 
                                                     & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_e_bits_sink))) 
                                                   && (IData)(vlSelfRef.__PVT___GEN_60))
                                                   : (IData)(vlSelfRef.__PVT___GEN_60)));
    vlSelfRef.__PVT___timers_1_T_1 = (1ULL + vlSelfRef.__PVT__timers_1);
    vlSelfRef.__PVT__inflightGrant_1_valid = ((1U & 
                                               (~ (IData)(vlSymsp->TOP.reset))) 
                                              && ((IData)(vlSymsp->TOP.VerifyTop__DOT__buffer_1__DOT__nodeOut_e_q_io_deq_valid)
                                                   ? 
                                                  ((1U 
                                                    != 
                                                    (3U 
                                                     & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_e_bits_sink))) 
                                                   && (IData)(vlSelfRef.__PVT___GEN_61))
                                                   : (IData)(vlSelfRef.__PVT___GEN_61)));
    vlSelfRef.__PVT___timers_2_T_1 = (1ULL + vlSelfRef.__PVT__timers_2);
    vlSelfRef.__PVT__inflightGrant_2_valid = ((1U & 
                                               (~ (IData)(vlSymsp->TOP.reset))) 
                                              && ((IData)(vlSymsp->TOP.VerifyTop__DOT__buffer_1__DOT__nodeOut_e_q_io_deq_valid)
                                                   ? 
                                                  ((2U 
                                                    != 
                                                    (3U 
                                                     & (IData)(vlSymsp->TOP.VerifyTop__DOT__logger_1_auto_out_e_bits_sink))) 
                                                   && (IData)(vlSelfRef.__PVT___GEN_62))
                                                   : (IData)(vlSelfRef.__PVT___GEN_62)));
    vlSelfRef.__PVT__next_counter = (vlSelfRef.__PVT__counter 
                                     + (QData)((IData)(vlSelfRef.__PVT__grantQueue_io_deq_valid)));
    vlSelfRef.io_d_valid = ((IData)(vlSelfRef.__PVT__grantQueue_io_deq_valid) 
                            | (IData)(vlSelfRef.__PVT__grantBufValid));
    vlSelfRef.__PVT__enable_3 = ((~ (IData)(vlSelfRef.__PVT__inflightGrant_3_valid)) 
                                 & (IData)(vlSelfRef.__PVT__enable_REG_3));
    vlSelfRef.__PVT__enable = ((~ (IData)(vlSelfRef.__PVT__inflightGrant_0_valid)) 
                               & (IData)(vlSelfRef.__PVT__enable_REG));
    vlSelfRef.__PVT__enable_1 = ((~ (IData)(vlSelfRef.__PVT__inflightGrant_1_valid)) 
                                 & (IData)(vlSelfRef.__PVT__enable_REG_1));
    vlSelfRef.__PVT__enable_2 = ((~ (IData)(vlSelfRef.__PVT__inflightGrant_2_valid)) 
                                 & (IData)(vlSelfRef.__PVT__enable_REG_2));
    vlSelfRef.__PVT__inflight_insertIdx = ((IData)(vlSelfRef.__PVT__inflightGrant_0_valid)
                                            ? ((IData)(vlSelfRef.__PVT__inflightGrant_1_valid)
                                                ? ((IData)(vlSelfRef.__PVT__inflightGrant_2_valid)
                                                    ? 3U
                                                    : 2U)
                                                : 1U)
                                            : 0U);
    vlSelfRef.__PVT__next_max_3 = (((IData)(vlSelfRef.__PVT__enable_3) 
                                    & (vlSelfRef.__PVT__timers_3 
                                       > vlSelfRef.__PVT__max_3))
                                    ? vlSelfRef.__PVT__timers_3
                                    : vlSelfRef.__PVT__max_3);
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
}

VL_INLINE_OPT void VVerifyTop_GrantBuffer_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__grantBuf__1(VVerifyTop_GrantBuffer_2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_GrantBuffer_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__grantBuf__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___T_5;
    __PVT___T_5 = 0;
    // Body
    vlSelfRef.__PVT__grantQueue__DOT__do_deq = ((IData)(vlSelfRef.__PVT__grantQueue_io_deq_valid) 
                                                & ((~ (IData)(vlSelfRef.__PVT__grantBufValid)) 
                                                   & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0_io_in_d_ready)));
    __PVT___T_5 = ((IData)(vlSelfRef.__PVT__grantQueue_io_deq_valid) 
                   & (IData)(vlSymsp->TOP.VerifyTop__DOT__coupledL2_1__DOT__slices_0_io_in_d_ready));
    vlSelfRef.__PVT__next_counter_2 = (vlSelfRef.__PVT__counter_2 
                                       + (QData)((IData)(__PVT___T_5)));
    vlSelfRef.__PVT___GEN_0 = (((IData)(__PVT___T_5) 
                                & ((~ (IData)(vlSelfRef.__PVT__grantBufValid)) 
                                   & vlSelfRef.__PVT__grantQueue__DOT__ram_task_opcode
                                   [vlSelfRef.__PVT__grantQueue__DOT__deq_ptr_value])) 
                               | (IData)(vlSelfRef.__PVT__grantBufValid));
}

VL_INLINE_OPT void VVerifyTop_GrantBuffer_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__grantBuf__2(VVerifyTop_GrantBuffer_2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_GrantBuffer_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__grantBuf__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

VL_INLINE_OPT void VVerifyTop_GrantBuffer_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__grantBuf__3(VVerifyTop_GrantBuffer_2* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_GrantBuffer_2___nba_sequent__TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__grantBuf__3\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __PVT___noSpaceForSinkReq_T_5;
    __PVT___noSpaceForSinkReq_T_5 = 0;
    CData/*0:0*/ __PVT___noSpaceWaitSinkEForSinkReq_T_2;
    __PVT___noSpaceWaitSinkEForSinkReq_T_2 = 0;
    // Body
    vlSelfRef.__PVT__grantQueue__DOT__ram_task_opcode_MPORT_en 
        = ((~ (IData)(vlSelfRef.__PVT__full)) & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_toSourceD_valid) 
                                                 & ((2U 
                                                     != (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_toSourceD_bits_task_opcode)) 
                                                    | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_toSourceD_bits_task_mergeA))));
    vlSelfRef.__PVT___T_27 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_toSourceD_valid) 
                              & ((2U == (3U & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_toSourceD_bits_task_opcode) 
                                               >> 1U))) 
                                 | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__mainPipe.io_toSourceD_bits_task_mergeA)));
    __PVT___noSpaceWaitSinkEForSinkReq_T_2 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.__PVT__task_s2_valid) 
                                              & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.__PVT__task_s2_bits_channel));
    __PVT___noSpaceForSinkReq_T_5 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.__PVT__task_s2_valid) 
                                     & ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.__PVT__task_s2_bits_channel) 
                                        | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2_1__DOT__slices_0__DOT__reqArb.__PVT__task_s2_bits_channel) 
                                           >> 2U)));
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
    vlSelfRef.io_toReqArb_blockSinkReqEntrance_blockA_s1 
        = ((4U <= (IData)(vlSelfRef.__PVT___noSpaceForSinkReq_T_36)) 
           | (4U <= (IData)(vlSelfRef.__PVT___noSpaceWaitSinkEForSinkReq_T_30)));
}
