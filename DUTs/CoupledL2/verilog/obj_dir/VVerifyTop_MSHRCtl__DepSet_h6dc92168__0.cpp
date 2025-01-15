// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVerifyTop.h for the primary calling header

#include "VVerifyTop__pch.h"
#include "VVerifyTop_MSHRCtl.h"
#include "VVerifyTop__Syms.h"

VL_INLINE_OPT void VVerifyTop_MSHRCtl___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__0(VVerifyTop_MSHRCtl* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_MSHRCtl___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__0\n"); );
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
    if (VL_UNLIKELY((((IData)(vlSelfRef.__PVT__source_b_arb__DOT___pendingMask_T_2) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (1U < (7U & ((3U & ((IData)(vlSelfRef.__PVT__sourceB__DOT__conflictMask_0) 
                                           + (IData)(vlSelfRef.__PVT__sourceB__DOT__conflictMask_1))) 
                                    + (3U & ((IData)(vlSelfRef.__PVT__sourceB__DOT__conflictMask_2) 
                                             + (IData)(vlSelfRef.__PVT__sourceB__DOT__conflictMask_3))))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at SourceB.scala:97 assert(PopCount(conflictMask) <= 1.U)\n",0);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__sourceB__DOT__helper_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_buffer_util_0, %20#\n",0,
                      64,vlSelfRef.__PVT__sourceB__DOT__helper_timer,
                      64,(vlSelfRef.__PVT__sourceB__DOT__counter 
                          + (QData)((IData)((0U == (IData)(vlSelfRef.__PVT__sourceB__DOT___update_T_4))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__sourceB__DOT__helper_1_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_buffer_util_1, %20#\n",0,
                      64,vlSelfRef.__PVT__sourceB__DOT__helper_1_timer,
                      64,(vlSelfRef.__PVT__sourceB__DOT__counter_1 
                          + (QData)((IData)((1U == (IData)(vlSelfRef.__PVT__sourceB__DOT___update_T_4))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__sourceB__DOT__helper_2_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_buffer_util_2, %20#\n",0,
                      64,vlSelfRef.__PVT__sourceB__DOT__helper_2_timer,
                      64,(vlSelfRef.__PVT__sourceB__DOT__counter_2 
                          + (QData)((IData)((2U == (IData)(vlSelfRef.__PVT__sourceB__DOT___update_T_4))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__sourceB__DOT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_buffer_util_3, %20#\n",0,
                      64,vlSelfRef.__PVT__sourceB__DOT__helper_3_timer,
                      64,(vlSelfRef.__PVT__sourceB__DOT__counter_3 
                          + (QData)((IData)((3U == (IData)(vlSelfRef.__PVT__sourceB__DOT___update_T_4))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: capacity_conflict_to_sinkA, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_timer,
                      64,(vlSelfRef.__PVT__counter 
                          + (QData)((IData)((3U <= (IData)(vlSelfRef.__PVT___mshrFull_T_1))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_1_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: capacity_conflict_to_sinkB, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_1_timer,
                      64,(vlSelfRef.__PVT__counter_1 
                          + (QData)((IData)((4U <= (IData)(vlSelfRef.__PVT___mshrFull_T_1))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_2_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: mshr_alloc_0_1, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_2_timer,
                      64,vlSelfRef.__PVT__counter_2);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_2_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: mshr_alloc_1_2, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_2_timer,
                      64,vlSelfRef.__PVT__counter_3);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_2_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: mshr_alloc_2_3, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_2_timer,
                      64,vlSelfRef.__PVT__counter_4);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_2_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: mshr_alloc_3_4, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_2_timer,
                      64,vlSelfRef.__PVT__counter_5);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: acquire_period_0_5, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__counter_6);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: acquire_period_5_10, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__counter_7);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: acquire_period_10_15, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__counter_8);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: acquire_period_15_20, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__counter_9);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: acquire_period_20_25, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__counter_10);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: acquire_period_25_30, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__counter_11);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: acquire_period_30_35, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__counter_12);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: acquire_period_35_40, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__counter_13);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: acquire_period_40_45, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__counter_14);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: acquire_period_45_50, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__counter_15);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: acquire_period_50_55, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__counter_16);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: acquire_period_55_60, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__counter_17);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: acquire_period_60_65, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__counter_18);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: acquire_period_65_70, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__counter_19);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: acquire_period_70_75, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__counter_20);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: acquire_period_75_80, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__counter_21);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: acquire_period_80_85, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__counter_22);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: acquire_period_85_90, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__counter_23);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: acquire_period_90_95, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__counter_24);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: acquire_period_95_100, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__counter_25);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: release_period_0_5, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_26);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: release_period_5_10, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_27);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: release_period_10_15, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_28);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: release_period_15_20, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_29);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: release_period_20_25, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_30);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: release_period_25_30, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_31);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: release_period_30_35, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_32);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: release_period_35_40, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_33);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: release_period_40_45, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_34);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: release_period_45_50, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_35);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: release_period_50_55, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_36);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: release_period_55_60, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_37);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: release_period_60_65, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_38);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: release_period_65_70, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_39);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: release_period_70_75, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_40);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: release_period_75_80, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_41);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: release_period_80_85, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_42);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: release_period_85_90, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_43);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: release_period_90_95, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_44);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: release_period_95_100, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_45);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_period_0_5, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__counter_46);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_period_5_10, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__counter_47);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_period_10_15, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__counter_48);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_period_15_20, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__counter_49);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_period_20_25, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__counter_50);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_period_25_30, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__counter_51);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_period_30_35, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__counter_52);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_period_35_40, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__counter_53);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_period_40_45, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__counter_54);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_period_45_50, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__counter_55);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_period_50_55, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__counter_56);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_period_55_60, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__counter_57);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_period_60_65, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__counter_58);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_period_65_70, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__counter_59);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_period_70_75, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__counter_60);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_period_75_80, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__counter_61);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_period_80_85, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__counter_62);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_period_85_90, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__counter_63);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_period_90_95, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__counter_64);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_period_95_100, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__counter_65);
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__sourceB__DOT__probes_3_valid = 0U;
        vlSelfRef.__PVT__source_a_arb__DOT__rrGrantMask = 0U;
        vlSelfRef.__PVT__sourceB__DOT__probes_0_valid = 0U;
        vlSelfRef.__PVT__sourceB__DOT__probes_2_valid = 0U;
        vlSelfRef.__PVT__sourceB__DOT__probes_1_valid = 0U;
        vlSelfRef.__PVT__mshr_task_arb__DOT__rrGrantMask = 0U;
        vlSelfRef.__PVT__source_a_arb__DOT__pendingMask = 0U;
        vlSelfRef.__PVT__mshr_task_arb__DOT__pendingMask = 0U;
        vlSelfRef.__PVT__source_b_arb__DOT__rrGrantMask = 0U;
        vlSelfRef.__PVT__source_b_arb__DOT__pendingMask = 0U;
        vlSelfRef.__PVT__sourceB__DOT__counter = 0ULL;
        vlSelfRef.__PVT__sourceB__DOT__counter_1 = 0ULL;
        vlSelfRef.__PVT__sourceB__DOT__counter_2 = 0ULL;
        vlSelfRef.__PVT__sourceB__DOT__counter_3 = 0ULL;
        vlSelfRef.__PVT__counter = 0ULL;
        vlSelfRef.__PVT__counter_1 = 0ULL;
        vlSelfRef.__PVT__counter_46 = 0ULL;
        vlSelfRef.__PVT__counter_47 = 0ULL;
        vlSelfRef.__PVT__counter_48 = 0ULL;
        vlSelfRef.__PVT__counter_49 = 0ULL;
        vlSelfRef.__PVT__counter_50 = 0ULL;
        vlSelfRef.__PVT__counter_51 = 0ULL;
        vlSelfRef.__PVT__counter_52 = 0ULL;
        vlSelfRef.__PVT__counter_53 = 0ULL;
        vlSelfRef.__PVT__counter_54 = 0ULL;
        vlSelfRef.__PVT__counter_55 = 0ULL;
        vlSelfRef.__PVT__counter_56 = 0ULL;
        vlSelfRef.__PVT__counter_57 = 0ULL;
        vlSelfRef.__PVT__counter_58 = 0ULL;
        vlSelfRef.__PVT__counter_59 = 0ULL;
        vlSelfRef.__PVT__counter_60 = 0ULL;
        vlSelfRef.__PVT__counter_61 = 0ULL;
        vlSelfRef.__PVT__counter_62 = 0ULL;
        vlSelfRef.__PVT__counter_63 = 0ULL;
        vlSelfRef.__PVT__counter_64 = 0ULL;
        vlSelfRef.__PVT__counter_65 = 0ULL;
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
        vlSelfRef.__PVT__counter_40 = 0ULL;
        vlSelfRef.__PVT__counter_41 = 0ULL;
        vlSelfRef.__PVT__counter_42 = 0ULL;
        vlSelfRef.__PVT__counter_43 = 0ULL;
        vlSelfRef.__PVT__counter_44 = 0ULL;
        vlSelfRef.__PVT__counter_45 = 0ULL;
        vlSelfRef.__PVT__counter_2 = 0ULL;
        vlSelfRef.__PVT__counter_3 = 0ULL;
        vlSelfRef.__PVT__counter_4 = 0ULL;
        vlSelfRef.__PVT__counter_5 = 0ULL;
    } else {
        if (vlSelfRef.__PVT__source_b_arb__DOT___pendingMask_T_2) {
            vlSelfRef.__PVT__sourceB__DOT__probes_3_valid 
                = vlSelfRef.__PVT__sourceB__DOT___GEN_3;
            vlSelfRef.__PVT__sourceB__DOT__probes_0_valid 
                = vlSelfRef.__PVT__sourceB__DOT___GEN_0;
            vlSelfRef.__PVT__sourceB__DOT__probes_2_valid 
                = vlSelfRef.__PVT__sourceB__DOT___GEN_2;
            vlSelfRef.__PVT__sourceB__DOT__probes_1_valid 
                = vlSelfRef.__PVT__sourceB__DOT___GEN_1;
            vlSelfRef.__PVT__source_b_arb__DOT__rrGrantMask 
                = (((((IData)((0U != (7U & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH)))) 
                      << 1U) | (0U != (3U & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH)))) 
                    << 2U) | (2U & ((IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH) 
                                    << 1U)));
            vlSelfRef.__PVT__source_b_arb__DOT__pendingMask 
                = ((~ (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH)) 
                   & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__valids));
        }
        if (vlSelfRef.__PVT__source_a_arb__DOT___pendingMask_T_2) {
            vlSelfRef.__PVT__source_a_arb__DOT__rrGrantMask 
                = (((((IData)((0U != (7U & (IData)(vlSelfRef.__PVT__source_a_arb__DOT__chosenOH)))) 
                      << 1U) | (0U != (3U & (IData)(vlSelfRef.__PVT__source_a_arb__DOT__chosenOH)))) 
                    << 2U) | (2U & ((IData)(vlSelfRef.__PVT__source_a_arb__DOT__chosenOH) 
                                    << 1U)));
            vlSelfRef.__PVT__source_a_arb__DOT__pendingMask 
                = ((~ (IData)(vlSelfRef.__PVT__source_a_arb__DOT__chosenOH)) 
                   & (IData)(vlSelfRef.__PVT__source_a_arb__DOT__valids));
        }
        if (vlSelfRef.__PVT__mshr_task_arb__DOT___pendingMask_T_2) {
            vlSelfRef.__PVT__mshr_task_arb__DOT__rrGrantMask 
                = (((((IData)((0U != (7U & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH)))) 
                      << 1U) | (0U != (3U & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH)))) 
                    << 2U) | (2U & ((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                    << 1U)));
            vlSelfRef.__PVT__mshr_task_arb__DOT__pendingMask 
                = ((~ (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH)) 
                   & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__valids));
        }
        vlSelfRef.__PVT__sourceB__DOT__counter = ((IData)(vlSelfRef.__PVT__sourceB__DOT__helper_clean)
                                                   ? 0ULL
                                                   : vlSelfRef.__PVT__sourceB__DOT__next_counter);
        vlSelfRef.__PVT__sourceB__DOT__counter_1 = 
            ((IData)(vlSelfRef.__PVT__sourceB__DOT__helper_1_clean)
              ? 0ULL : vlSelfRef.__PVT__sourceB__DOT__next_counter_1);
        vlSelfRef.__PVT__sourceB__DOT__counter_2 = 
            ((IData)(vlSelfRef.__PVT__sourceB__DOT__helper_2_clean)
              ? 0ULL : vlSelfRef.__PVT__sourceB__DOT__next_counter_2);
        vlSelfRef.__PVT__sourceB__DOT__counter_3 = 
            ((IData)(vlSelfRef.__PVT__sourceB__DOT__helper_3_clean)
              ? 0ULL : vlSelfRef.__PVT__sourceB__DOT__next_counter_3);
        vlSelfRef.__PVT__counter = ((IData)(vlSelfRef.__PVT__helper_clean)
                                     ? 0ULL : vlSelfRef.__PVT__next_counter);
        vlSelfRef.__PVT__counter_1 = ((IData)(vlSelfRef.__PVT__helper_1_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_1);
        if (vlSelfRef.__PVT__helper_5_clean) {
            vlSelfRef.__PVT__counter_46 = 0ULL;
            vlSelfRef.__PVT__counter_47 = 0ULL;
            vlSelfRef.__PVT__counter_48 = 0ULL;
            vlSelfRef.__PVT__counter_49 = 0ULL;
            vlSelfRef.__PVT__counter_50 = 0ULL;
            vlSelfRef.__PVT__counter_51 = 0ULL;
            vlSelfRef.__PVT__counter_52 = 0ULL;
            vlSelfRef.__PVT__counter_53 = 0ULL;
            vlSelfRef.__PVT__counter_54 = 0ULL;
            vlSelfRef.__PVT__counter_55 = 0ULL;
            vlSelfRef.__PVT__counter_56 = 0ULL;
            vlSelfRef.__PVT__counter_57 = 0ULL;
            vlSelfRef.__PVT__counter_58 = 0ULL;
            vlSelfRef.__PVT__counter_59 = 0ULL;
            vlSelfRef.__PVT__counter_60 = 0ULL;
            vlSelfRef.__PVT__counter_61 = 0ULL;
            vlSelfRef.__PVT__counter_62 = 0ULL;
            vlSelfRef.__PVT__counter_63 = 0ULL;
            vlSelfRef.__PVT__counter_64 = 0ULL;
            vlSelfRef.__PVT__counter_65 = 0ULL;
        }
        if (vlSelfRef.__PVT__helper_3_clean) {
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
        } else {
            if (((IData)(vlSelfRef.__PVT__acquire_period_en) 
                 & (5ULL > vlSelfRef.__PVT__acquire_period))) {
                vlSelfRef.__PVT__counter_6 = vlSelfRef.__PVT___counter_T_11;
            }
            if (((IData)(vlSelfRef.__PVT__acquire_period_en) 
                 & ((5ULL <= vlSelfRef.__PVT__acquire_period) 
                    & (0xaULL > vlSelfRef.__PVT__acquire_period)))) {
                vlSelfRef.__PVT__counter_7 = vlSelfRef.__PVT___counter_T_13;
            }
            if (((IData)(vlSelfRef.__PVT__acquire_period_en) 
                 & ((0xaULL <= vlSelfRef.__PVT__acquire_period) 
                    & (0xfULL > vlSelfRef.__PVT__acquire_period)))) {
                vlSelfRef.__PVT__counter_8 = vlSelfRef.__PVT___counter_T_15;
            }
            if (((IData)(vlSelfRef.__PVT__acquire_period_en) 
                 & ((0xfULL <= vlSelfRef.__PVT__acquire_period) 
                    & (0x14ULL > vlSelfRef.__PVT__acquire_period)))) {
                vlSelfRef.__PVT__counter_9 = vlSelfRef.__PVT___counter_T_17;
            }
            if (((IData)(vlSelfRef.__PVT__acquire_period_en) 
                 & ((0x14ULL <= vlSelfRef.__PVT__acquire_period) 
                    & (0x19ULL > vlSelfRef.__PVT__acquire_period)))) {
                vlSelfRef.__PVT__counter_10 = vlSelfRef.__PVT___counter_T_19;
            }
            if (((IData)(vlSelfRef.__PVT__acquire_period_en) 
                 & ((0x19ULL <= vlSelfRef.__PVT__acquire_period) 
                    & (0x1eULL > vlSelfRef.__PVT__acquire_period)))) {
                vlSelfRef.__PVT__counter_11 = vlSelfRef.__PVT___counter_T_21;
            }
            if (((IData)(vlSelfRef.__PVT__acquire_period_en) 
                 & ((0x1eULL <= vlSelfRef.__PVT__acquire_period) 
                    & (0x23ULL > vlSelfRef.__PVT__acquire_period)))) {
                vlSelfRef.__PVT__counter_12 = vlSelfRef.__PVT___counter_T_23;
            }
            if (((IData)(vlSelfRef.__PVT__acquire_period_en) 
                 & ((0x23ULL <= vlSelfRef.__PVT__acquire_period) 
                    & (0x28ULL > vlSelfRef.__PVT__acquire_period)))) {
                vlSelfRef.__PVT__counter_13 = vlSelfRef.__PVT___counter_T_25;
            }
            if (((IData)(vlSelfRef.__PVT__acquire_period_en) 
                 & ((0x28ULL <= vlSelfRef.__PVT__acquire_period) 
                    & (0x2dULL > vlSelfRef.__PVT__acquire_period)))) {
                vlSelfRef.__PVT__counter_14 = vlSelfRef.__PVT___counter_T_27;
            }
            if (((IData)(vlSelfRef.__PVT__acquire_period_en) 
                 & ((0x2dULL <= vlSelfRef.__PVT__acquire_period) 
                    & (0x32ULL > vlSelfRef.__PVT__acquire_period)))) {
                vlSelfRef.__PVT__counter_15 = vlSelfRef.__PVT___counter_T_29;
            }
            if (((IData)(vlSelfRef.__PVT__acquire_period_en) 
                 & ((0x32ULL <= vlSelfRef.__PVT__acquire_period) 
                    & (0x37ULL > vlSelfRef.__PVT__acquire_period)))) {
                vlSelfRef.__PVT__counter_16 = vlSelfRef.__PVT___counter_T_31;
            }
            if (((IData)(vlSelfRef.__PVT__acquire_period_en) 
                 & ((0x37ULL <= vlSelfRef.__PVT__acquire_period) 
                    & (0x3cULL > vlSelfRef.__PVT__acquire_period)))) {
                vlSelfRef.__PVT__counter_17 = vlSelfRef.__PVT___counter_T_33;
            }
            if (((IData)(vlSelfRef.__PVT__acquire_period_en) 
                 & ((0x3cULL <= vlSelfRef.__PVT__acquire_period) 
                    & (0x41ULL > vlSelfRef.__PVT__acquire_period)))) {
                vlSelfRef.__PVT__counter_18 = vlSelfRef.__PVT___counter_T_35;
            }
            if (((IData)(vlSelfRef.__PVT__acquire_period_en) 
                 & ((0x41ULL <= vlSelfRef.__PVT__acquire_period) 
                    & (0x46ULL > vlSelfRef.__PVT__acquire_period)))) {
                vlSelfRef.__PVT__counter_19 = vlSelfRef.__PVT___counter_T_37;
            }
            if (((IData)(vlSelfRef.__PVT__acquire_period_en) 
                 & ((0x46ULL <= vlSelfRef.__PVT__acquire_period) 
                    & (0x4bULL > vlSelfRef.__PVT__acquire_period)))) {
                vlSelfRef.__PVT__counter_20 = vlSelfRef.__PVT___counter_T_39;
            }
            if (((IData)(vlSelfRef.__PVT__acquire_period_en) 
                 & ((0x4bULL <= vlSelfRef.__PVT__acquire_period) 
                    & (0x50ULL > vlSelfRef.__PVT__acquire_period)))) {
                vlSelfRef.__PVT__counter_21 = vlSelfRef.__PVT___counter_T_41;
            }
            if (((IData)(vlSelfRef.__PVT__acquire_period_en) 
                 & ((0x50ULL <= vlSelfRef.__PVT__acquire_period) 
                    & (0x55ULL > vlSelfRef.__PVT__acquire_period)))) {
                vlSelfRef.__PVT__counter_22 = vlSelfRef.__PVT___counter_T_43;
            }
            if (((IData)(vlSelfRef.__PVT__acquire_period_en) 
                 & ((0x55ULL <= vlSelfRef.__PVT__acquire_period) 
                    & (0x5aULL > vlSelfRef.__PVT__acquire_period)))) {
                vlSelfRef.__PVT__counter_23 = vlSelfRef.__PVT___counter_T_45;
            }
            if (((IData)(vlSelfRef.__PVT__acquire_period_en) 
                 & ((0x5aULL <= vlSelfRef.__PVT__acquire_period) 
                    & (0x5fULL > vlSelfRef.__PVT__acquire_period)))) {
                vlSelfRef.__PVT__counter_24 = vlSelfRef.__PVT___counter_T_47;
            }
            if (((IData)(vlSelfRef.__PVT__acquire_period_en) 
                 & (((0x5fULL <= vlSelfRef.__PVT__acquire_period) 
                     & (0x64ULL > vlSelfRef.__PVT__acquire_period)) 
                    | (0x64ULL <= vlSelfRef.__PVT__acquire_period)))) {
                vlSelfRef.__PVT__counter_25 = vlSelfRef.__PVT___counter_T_49;
            }
        }
        if (vlSelfRef.__PVT__helper_4_clean) {
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
            vlSelfRef.__PVT__counter_40 = 0ULL;
            vlSelfRef.__PVT__counter_41 = 0ULL;
            vlSelfRef.__PVT__counter_42 = 0ULL;
            vlSelfRef.__PVT__counter_43 = 0ULL;
            vlSelfRef.__PVT__counter_44 = 0ULL;
            vlSelfRef.__PVT__counter_45 = 0ULL;
        } else {
            if (((IData)(vlSelfRef.__PVT__release_period_en) 
                 & (5ULL > vlSelfRef.__PVT__release_period))) {
                vlSelfRef.__PVT__counter_26 = vlSelfRef.__PVT___counter_T_51;
            }
            if (((IData)(vlSelfRef.__PVT__release_period_en) 
                 & ((5ULL <= vlSelfRef.__PVT__release_period) 
                    & (0xaULL > vlSelfRef.__PVT__release_period)))) {
                vlSelfRef.__PVT__counter_27 = vlSelfRef.__PVT___counter_T_53;
            }
            if (((IData)(vlSelfRef.__PVT__release_period_en) 
                 & ((0xaULL <= vlSelfRef.__PVT__release_period) 
                    & (0xfULL > vlSelfRef.__PVT__release_period)))) {
                vlSelfRef.__PVT__counter_28 = vlSelfRef.__PVT___counter_T_55;
            }
            if (((IData)(vlSelfRef.__PVT__release_period_en) 
                 & ((0xfULL <= vlSelfRef.__PVT__release_period) 
                    & (0x14ULL > vlSelfRef.__PVT__release_period)))) {
                vlSelfRef.__PVT__counter_29 = vlSelfRef.__PVT___counter_T_57;
            }
            if (((IData)(vlSelfRef.__PVT__release_period_en) 
                 & ((0x14ULL <= vlSelfRef.__PVT__release_period) 
                    & (0x19ULL > vlSelfRef.__PVT__release_period)))) {
                vlSelfRef.__PVT__counter_30 = vlSelfRef.__PVT___counter_T_59;
            }
            if (((IData)(vlSelfRef.__PVT__release_period_en) 
                 & ((0x19ULL <= vlSelfRef.__PVT__release_period) 
                    & (0x1eULL > vlSelfRef.__PVT__release_period)))) {
                vlSelfRef.__PVT__counter_31 = vlSelfRef.__PVT___counter_T_61;
            }
            if (((IData)(vlSelfRef.__PVT__release_period_en) 
                 & ((0x1eULL <= vlSelfRef.__PVT__release_period) 
                    & (0x23ULL > vlSelfRef.__PVT__release_period)))) {
                vlSelfRef.__PVT__counter_32 = vlSelfRef.__PVT___counter_T_63;
            }
            if (((IData)(vlSelfRef.__PVT__release_period_en) 
                 & ((0x23ULL <= vlSelfRef.__PVT__release_period) 
                    & (0x28ULL > vlSelfRef.__PVT__release_period)))) {
                vlSelfRef.__PVT__counter_33 = vlSelfRef.__PVT___counter_T_65;
            }
            if (((IData)(vlSelfRef.__PVT__release_period_en) 
                 & ((0x28ULL <= vlSelfRef.__PVT__release_period) 
                    & (0x2dULL > vlSelfRef.__PVT__release_period)))) {
                vlSelfRef.__PVT__counter_34 = vlSelfRef.__PVT___counter_T_67;
            }
            if (((IData)(vlSelfRef.__PVT__release_period_en) 
                 & ((0x2dULL <= vlSelfRef.__PVT__release_period) 
                    & (0x32ULL > vlSelfRef.__PVT__release_period)))) {
                vlSelfRef.__PVT__counter_35 = vlSelfRef.__PVT___counter_T_69;
            }
            if (((IData)(vlSelfRef.__PVT__release_period_en) 
                 & ((0x32ULL <= vlSelfRef.__PVT__release_period) 
                    & (0x37ULL > vlSelfRef.__PVT__release_period)))) {
                vlSelfRef.__PVT__counter_36 = vlSelfRef.__PVT___counter_T_71;
            }
            if (((IData)(vlSelfRef.__PVT__release_period_en) 
                 & ((0x37ULL <= vlSelfRef.__PVT__release_period) 
                    & (0x3cULL > vlSelfRef.__PVT__release_period)))) {
                vlSelfRef.__PVT__counter_37 = vlSelfRef.__PVT___counter_T_73;
            }
            if (((IData)(vlSelfRef.__PVT__release_period_en) 
                 & ((0x3cULL <= vlSelfRef.__PVT__release_period) 
                    & (0x41ULL > vlSelfRef.__PVT__release_period)))) {
                vlSelfRef.__PVT__counter_38 = vlSelfRef.__PVT___counter_T_75;
            }
            if (((IData)(vlSelfRef.__PVT__release_period_en) 
                 & ((0x41ULL <= vlSelfRef.__PVT__release_period) 
                    & (0x46ULL > vlSelfRef.__PVT__release_period)))) {
                vlSelfRef.__PVT__counter_39 = vlSelfRef.__PVT___counter_T_77;
            }
            if (((IData)(vlSelfRef.__PVT__release_period_en) 
                 & ((0x46ULL <= vlSelfRef.__PVT__release_period) 
                    & (0x4bULL > vlSelfRef.__PVT__release_period)))) {
                vlSelfRef.__PVT__counter_40 = vlSelfRef.__PVT___counter_T_79;
            }
            if (((IData)(vlSelfRef.__PVT__release_period_en) 
                 & ((0x4bULL <= vlSelfRef.__PVT__release_period) 
                    & (0x50ULL > vlSelfRef.__PVT__release_period)))) {
                vlSelfRef.__PVT__counter_41 = vlSelfRef.__PVT___counter_T_81;
            }
            if (((IData)(vlSelfRef.__PVT__release_period_en) 
                 & ((0x50ULL <= vlSelfRef.__PVT__release_period) 
                    & (0x55ULL > vlSelfRef.__PVT__release_period)))) {
                vlSelfRef.__PVT__counter_42 = vlSelfRef.__PVT___counter_T_83;
            }
            if (((IData)(vlSelfRef.__PVT__release_period_en) 
                 & ((0x55ULL <= vlSelfRef.__PVT__release_period) 
                    & (0x5aULL > vlSelfRef.__PVT__release_period)))) {
                vlSelfRef.__PVT__counter_43 = vlSelfRef.__PVT___counter_T_85;
            }
            if (((IData)(vlSelfRef.__PVT__release_period_en) 
                 & ((0x5aULL <= vlSelfRef.__PVT__release_period) 
                    & (0x5fULL > vlSelfRef.__PVT__release_period)))) {
                vlSelfRef.__PVT__counter_44 = vlSelfRef.__PVT___counter_T_87;
            }
            if (((IData)(vlSelfRef.__PVT__release_period_en) 
                 & (((0x5fULL <= vlSelfRef.__PVT__release_period) 
                     & (0x64ULL > vlSelfRef.__PVT__release_period)) 
                    | (0x64ULL <= vlSelfRef.__PVT__release_period)))) {
                vlSelfRef.__PVT__counter_45 = vlSelfRef.__PVT___counter_T_89;
            }
        }
        if (vlSelfRef.__PVT__helper_2_clean) {
            vlSelfRef.__PVT__counter_2 = 0ULL;
            vlSelfRef.__PVT__counter_3 = 0ULL;
            vlSelfRef.__PVT__counter_4 = 0ULL;
            vlSelfRef.__PVT__counter_5 = 0ULL;
        } else {
            if (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_valid) 
                 & (1U > (IData)(vlSelfRef.io_toMainPipe_mshr_alloc_ptr)))) {
                vlSelfRef.__PVT__counter_2 = vlSelfRef.__PVT___counter_T_3;
            }
            if (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_valid) 
                 & ((1U <= (IData)(vlSelfRef.io_toMainPipe_mshr_alloc_ptr)) 
                    & (2U > (IData)(vlSelfRef.io_toMainPipe_mshr_alloc_ptr))))) {
                vlSelfRef.__PVT__counter_3 = vlSelfRef.__PVT___counter_T_5;
            }
            if (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_valid) 
                 & ((2U <= (IData)(vlSelfRef.io_toMainPipe_mshr_alloc_ptr)) 
                    & (3U > (IData)(vlSelfRef.io_toMainPipe_mshr_alloc_ptr))))) {
                vlSelfRef.__PVT__counter_4 = vlSelfRef.__PVT___counter_T_7;
            }
            if (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_valid) 
                 & (((3U <= (IData)(vlSelfRef.io_toMainPipe_mshr_alloc_ptr)) 
                     & (4U > (IData)(vlSelfRef.io_toMainPipe_mshr_alloc_ptr))) 
                    | (4U <= (IData)(vlSelfRef.io_toMainPipe_mshr_alloc_ptr))))) {
                vlSelfRef.__PVT__counter_5 = vlSelfRef.__PVT___counter_T_9;
            }
        }
    }
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
    vlSelfRef.__PVT__sourceB_io_task_ready = (1U & 
                                              (~ ((IData)(vlSelfRef.__PVT__sourceB__DOT__probes_0_valid) 
                                                  & ((IData)(vlSelfRef.__PVT__sourceB__DOT__probes_1_valid) 
                                                     & ((IData)(vlSelfRef.__PVT__sourceB__DOT__probes_2_valid) 
                                                        & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_3_valid))))));
    __PVT__source_a_arb__DOT___rrSelOH_T = ((IData)(vlSelfRef.__PVT__source_a_arb__DOT__pendingMask) 
                                            & (IData)(vlSelfRef.__PVT__source_a_arb__DOT__rrGrantMask));
    __PVT__mshr_task_arb__DOT___rrSelOH_T = ((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__pendingMask) 
                                             & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__rrGrantMask));
    __PVT__source_b_arb__DOT___rrSelOH_T = ((IData)(vlSelfRef.__PVT__source_b_arb__DOT__pendingMask) 
                                            & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__rrGrantMask));
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
    vlSelfRef.__PVT___counter_T_3 = (1ULL + vlSelfRef.__PVT__counter_2);
    vlSelfRef.__PVT___counter_T_5 = (1ULL + vlSelfRef.__PVT__counter_3);
    vlSelfRef.__PVT___counter_T_7 = (1ULL + vlSelfRef.__PVT__counter_4);
    vlSelfRef.__PVT___counter_T_9 = (1ULL + vlSelfRef.__PVT__counter_5);
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
}

VL_INLINE_OPT void VVerifyTop_MSHRCtl___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__4(VVerifyTop_MSHRCtl* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_MSHRCtl___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mshr_task_arb__DOT___pendingMask_T_2 
        = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__reqArb.io_mshrTask_ready) 
           & (0U != (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__valids)));
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
}

VL_INLINE_OPT void VVerifyTop_MSHRCtl___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__0(VVerifyTop_MSHRCtl* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_MSHRCtl___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__0\n"); );
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
    if (VL_UNLIKELY((((IData)(vlSelfRef.__PVT__source_b_arb__DOT___pendingMask_T_2) 
                      & (~ (IData)(vlSymsp->TOP.reset))) 
                     & (1U < (7U & ((3U & ((IData)(vlSelfRef.__PVT__sourceB__DOT__conflictMask_0) 
                                           + (IData)(vlSelfRef.__PVT__sourceB__DOT__conflictMask_1))) 
                                    + (3U & ((IData)(vlSelfRef.__PVT__sourceB__DOT__conflictMask_2) 
                                             + (IData)(vlSelfRef.__PVT__sourceB__DOT__conflictMask_3))))))))) {
        VL_FWRITEF_NX(0x80000002U,"Assertion failed\n    at SourceB.scala:97 assert(PopCount(conflictMask) <= 1.U)\n",0);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__sourceB__DOT__helper_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_buffer_util_0, %20#\n",0,
                      64,vlSelfRef.__PVT__sourceB__DOT__helper_timer,
                      64,(vlSelfRef.__PVT__sourceB__DOT__counter 
                          + (QData)((IData)((0U == (IData)(vlSelfRef.__PVT__sourceB__DOT___update_T_4))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__sourceB__DOT__helper_1_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_buffer_util_1, %20#\n",0,
                      64,vlSelfRef.__PVT__sourceB__DOT__helper_1_timer,
                      64,(vlSelfRef.__PVT__sourceB__DOT__counter_1 
                          + (QData)((IData)((1U == (IData)(vlSelfRef.__PVT__sourceB__DOT___update_T_4))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__sourceB__DOT__helper_2_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_buffer_util_2, %20#\n",0,
                      64,vlSelfRef.__PVT__sourceB__DOT__helper_2_timer,
                      64,(vlSelfRef.__PVT__sourceB__DOT__counter_2 
                          + (QData)((IData)((2U == (IData)(vlSelfRef.__PVT__sourceB__DOT___update_T_4))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__sourceB__DOT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_buffer_util_3, %20#\n",0,
                      64,vlSelfRef.__PVT__sourceB__DOT__helper_3_timer,
                      64,(vlSelfRef.__PVT__sourceB__DOT__counter_3 
                          + (QData)((IData)((3U == (IData)(vlSelfRef.__PVT__sourceB__DOT___update_T_4))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: capacity_conflict_to_sinkA, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_timer,
                      64,(vlSelfRef.__PVT__counter 
                          + (QData)((IData)((3U <= (IData)(vlSelfRef.__PVT___mshrFull_T_1))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_1_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: capacity_conflict_to_sinkB, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_1_timer,
                      64,(vlSelfRef.__PVT__counter_1 
                          + (QData)((IData)((4U <= (IData)(vlSelfRef.__PVT___mshrFull_T_1))))));
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_2_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: mshr_alloc_0_1, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_2_timer,
                      64,vlSelfRef.__PVT__counter_2);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_2_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: mshr_alloc_1_2, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_2_timer,
                      64,vlSelfRef.__PVT__counter_3);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_2_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: mshr_alloc_2_3, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_2_timer,
                      64,vlSelfRef.__PVT__counter_4);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_2_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: mshr_alloc_3_4, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_2_timer,
                      64,vlSelfRef.__PVT__counter_5);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: acquire_period_0_5, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__counter_6);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: acquire_period_5_10, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__counter_7);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: acquire_period_10_15, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__counter_8);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: acquire_period_15_20, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__counter_9);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: acquire_period_20_25, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__counter_10);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: acquire_period_25_30, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__counter_11);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: acquire_period_30_35, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__counter_12);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: acquire_period_35_40, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__counter_13);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: acquire_period_40_45, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__counter_14);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: acquire_period_45_50, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__counter_15);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: acquire_period_50_55, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__counter_16);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: acquire_period_55_60, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__counter_17);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: acquire_period_60_65, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__counter_18);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: acquire_period_65_70, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__counter_19);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: acquire_period_70_75, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__counter_20);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: acquire_period_75_80, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__counter_21);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: acquire_period_80_85, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__counter_22);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: acquire_period_85_90, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__counter_23);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: acquire_period_90_95, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__counter_24);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_3_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: acquire_period_95_100, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_3_timer,
                      64,vlSelfRef.__PVT__counter_25);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: release_period_0_5, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_26);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: release_period_5_10, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_27);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: release_period_10_15, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_28);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: release_period_15_20, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_29);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: release_period_20_25, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_30);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: release_period_25_30, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_31);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: release_period_30_35, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_32);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: release_period_35_40, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_33);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: release_period_40_45, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_34);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: release_period_45_50, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_35);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: release_period_50_55, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_36);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: release_period_55_60, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_37);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: release_period_60_65, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_38);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: release_period_65_70, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_39);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: release_period_70_75, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_40);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: release_period_75_80, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_41);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: release_period_80_85, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_42);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: release_period_85_90, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_43);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: release_period_90_95, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_44);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_4_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: release_period_95_100, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_4_timer,
                      64,vlSelfRef.__PVT__counter_45);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_period_0_5, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__counter_46);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_period_5_10, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__counter_47);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_period_10_15, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__counter_48);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_period_15_20, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__counter_49);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_period_20_25, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__counter_50);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_period_25_30, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__counter_51);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_period_30_35, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__counter_52);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_period_35_40, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__counter_53);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_period_40_45, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__counter_54);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_period_45_50, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__counter_55);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_period_50_55, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__counter_56);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_period_55_60, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__counter_57);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_period_60_65, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__counter_58);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_period_65_70, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__counter_59);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_period_70_75, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__counter_60);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_period_75_80, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__counter_61);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_period_80_85, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__counter_62);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_period_85_90, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__counter_63);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_period_90_95, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__counter_64);
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.__PVT__helper_5_dump) 
                     & (~ (IData)(vlSymsp->TOP.reset))))) {
        VL_FWRITEF_NX(0x80000002U,"[PERF ][time=%20#] __PERCENTAGE_M__: probe_period_95_100, %20#\n",0,
                      64,vlSelfRef.__PVT__helper_5_timer,
                      64,vlSelfRef.__PVT__counter_65);
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__sourceB__DOT__probes_3_valid = 0U;
        vlSelfRef.__PVT__source_a_arb__DOT__rrGrantMask = 0U;
        vlSelfRef.__PVT__sourceB__DOT__probes_0_valid = 0U;
        vlSelfRef.__PVT__sourceB__DOT__probes_2_valid = 0U;
        vlSelfRef.__PVT__sourceB__DOT__probes_1_valid = 0U;
        vlSelfRef.__PVT__mshr_task_arb__DOT__rrGrantMask = 0U;
        vlSelfRef.__PVT__source_a_arb__DOT__pendingMask = 0U;
        vlSelfRef.__PVT__mshr_task_arb__DOT__pendingMask = 0U;
        vlSelfRef.__PVT__source_b_arb__DOT__rrGrantMask = 0U;
        vlSelfRef.__PVT__source_b_arb__DOT__pendingMask = 0U;
        vlSelfRef.__PVT__sourceB__DOT__counter = 0ULL;
        vlSelfRef.__PVT__sourceB__DOT__counter_1 = 0ULL;
        vlSelfRef.__PVT__sourceB__DOT__counter_2 = 0ULL;
        vlSelfRef.__PVT__sourceB__DOT__counter_3 = 0ULL;
        vlSelfRef.__PVT__counter = 0ULL;
        vlSelfRef.__PVT__counter_1 = 0ULL;
        vlSelfRef.__PVT__counter_46 = 0ULL;
        vlSelfRef.__PVT__counter_47 = 0ULL;
        vlSelfRef.__PVT__counter_48 = 0ULL;
        vlSelfRef.__PVT__counter_49 = 0ULL;
        vlSelfRef.__PVT__counter_50 = 0ULL;
        vlSelfRef.__PVT__counter_51 = 0ULL;
        vlSelfRef.__PVT__counter_52 = 0ULL;
        vlSelfRef.__PVT__counter_53 = 0ULL;
        vlSelfRef.__PVT__counter_54 = 0ULL;
        vlSelfRef.__PVT__counter_55 = 0ULL;
        vlSelfRef.__PVT__counter_56 = 0ULL;
        vlSelfRef.__PVT__counter_57 = 0ULL;
        vlSelfRef.__PVT__counter_58 = 0ULL;
        vlSelfRef.__PVT__counter_59 = 0ULL;
        vlSelfRef.__PVT__counter_60 = 0ULL;
        vlSelfRef.__PVT__counter_61 = 0ULL;
        vlSelfRef.__PVT__counter_62 = 0ULL;
        vlSelfRef.__PVT__counter_63 = 0ULL;
        vlSelfRef.__PVT__counter_64 = 0ULL;
        vlSelfRef.__PVT__counter_65 = 0ULL;
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
        vlSelfRef.__PVT__counter_40 = 0ULL;
        vlSelfRef.__PVT__counter_41 = 0ULL;
        vlSelfRef.__PVT__counter_42 = 0ULL;
        vlSelfRef.__PVT__counter_43 = 0ULL;
        vlSelfRef.__PVT__counter_44 = 0ULL;
        vlSelfRef.__PVT__counter_45 = 0ULL;
        vlSelfRef.__PVT__counter_2 = 0ULL;
        vlSelfRef.__PVT__counter_3 = 0ULL;
        vlSelfRef.__PVT__counter_4 = 0ULL;
        vlSelfRef.__PVT__counter_5 = 0ULL;
    } else {
        if (vlSelfRef.__PVT__source_b_arb__DOT___pendingMask_T_2) {
            vlSelfRef.__PVT__sourceB__DOT__probes_3_valid 
                = vlSelfRef.__PVT__sourceB__DOT___GEN_3;
            vlSelfRef.__PVT__sourceB__DOT__probes_0_valid 
                = vlSelfRef.__PVT__sourceB__DOT___GEN_0;
            vlSelfRef.__PVT__sourceB__DOT__probes_2_valid 
                = vlSelfRef.__PVT__sourceB__DOT___GEN_2;
            vlSelfRef.__PVT__sourceB__DOT__probes_1_valid 
                = vlSelfRef.__PVT__sourceB__DOT___GEN_1;
            vlSelfRef.__PVT__source_b_arb__DOT__rrGrantMask 
                = (((((IData)((0U != (7U & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH)))) 
                      << 1U) | (0U != (3U & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH)))) 
                    << 2U) | (2U & ((IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH) 
                                    << 1U)));
            vlSelfRef.__PVT__source_b_arb__DOT__pendingMask 
                = ((~ (IData)(vlSelfRef.__PVT__source_b_arb__DOT__chosenOH)) 
                   & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__valids));
        }
        if (vlSelfRef.__PVT__source_a_arb__DOT___pendingMask_T_2) {
            vlSelfRef.__PVT__source_a_arb__DOT__rrGrantMask 
                = (((((IData)((0U != (7U & (IData)(vlSelfRef.__PVT__source_a_arb__DOT__chosenOH)))) 
                      << 1U) | (0U != (3U & (IData)(vlSelfRef.__PVT__source_a_arb__DOT__chosenOH)))) 
                    << 2U) | (2U & ((IData)(vlSelfRef.__PVT__source_a_arb__DOT__chosenOH) 
                                    << 1U)));
            vlSelfRef.__PVT__source_a_arb__DOT__pendingMask 
                = ((~ (IData)(vlSelfRef.__PVT__source_a_arb__DOT__chosenOH)) 
                   & (IData)(vlSelfRef.__PVT__source_a_arb__DOT__valids));
        }
        if (vlSelfRef.__PVT__mshr_task_arb__DOT___pendingMask_T_2) {
            vlSelfRef.__PVT__mshr_task_arb__DOT__rrGrantMask 
                = (((((IData)((0U != (7U & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH)))) 
                      << 1U) | (0U != (3U & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH)))) 
                    << 2U) | (2U & ((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH) 
                                    << 1U)));
            vlSelfRef.__PVT__mshr_task_arb__DOT__pendingMask 
                = ((~ (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__chosenOH)) 
                   & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__valids));
        }
        vlSelfRef.__PVT__sourceB__DOT__counter = ((IData)(vlSelfRef.__PVT__sourceB__DOT__helper_clean)
                                                   ? 0ULL
                                                   : vlSelfRef.__PVT__sourceB__DOT__next_counter);
        vlSelfRef.__PVT__sourceB__DOT__counter_1 = 
            ((IData)(vlSelfRef.__PVT__sourceB__DOT__helper_1_clean)
              ? 0ULL : vlSelfRef.__PVT__sourceB__DOT__next_counter_1);
        vlSelfRef.__PVT__sourceB__DOT__counter_2 = 
            ((IData)(vlSelfRef.__PVT__sourceB__DOT__helper_2_clean)
              ? 0ULL : vlSelfRef.__PVT__sourceB__DOT__next_counter_2);
        vlSelfRef.__PVT__sourceB__DOT__counter_3 = 
            ((IData)(vlSelfRef.__PVT__sourceB__DOT__helper_3_clean)
              ? 0ULL : vlSelfRef.__PVT__sourceB__DOT__next_counter_3);
        vlSelfRef.__PVT__counter = ((IData)(vlSelfRef.__PVT__helper_clean)
                                     ? 0ULL : vlSelfRef.__PVT__next_counter);
        vlSelfRef.__PVT__counter_1 = ((IData)(vlSelfRef.__PVT__helper_1_clean)
                                       ? 0ULL : vlSelfRef.__PVT__next_counter_1);
        if (vlSelfRef.__PVT__helper_5_clean) {
            vlSelfRef.__PVT__counter_46 = 0ULL;
            vlSelfRef.__PVT__counter_47 = 0ULL;
            vlSelfRef.__PVT__counter_48 = 0ULL;
            vlSelfRef.__PVT__counter_49 = 0ULL;
            vlSelfRef.__PVT__counter_50 = 0ULL;
            vlSelfRef.__PVT__counter_51 = 0ULL;
            vlSelfRef.__PVT__counter_52 = 0ULL;
            vlSelfRef.__PVT__counter_53 = 0ULL;
            vlSelfRef.__PVT__counter_54 = 0ULL;
            vlSelfRef.__PVT__counter_55 = 0ULL;
            vlSelfRef.__PVT__counter_56 = 0ULL;
            vlSelfRef.__PVT__counter_57 = 0ULL;
            vlSelfRef.__PVT__counter_58 = 0ULL;
            vlSelfRef.__PVT__counter_59 = 0ULL;
            vlSelfRef.__PVT__counter_60 = 0ULL;
            vlSelfRef.__PVT__counter_61 = 0ULL;
            vlSelfRef.__PVT__counter_62 = 0ULL;
            vlSelfRef.__PVT__counter_63 = 0ULL;
            vlSelfRef.__PVT__counter_64 = 0ULL;
            vlSelfRef.__PVT__counter_65 = 0ULL;
        }
        if (vlSelfRef.__PVT__helper_3_clean) {
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
        } else {
            if (((IData)(vlSelfRef.__PVT__acquire_period_en) 
                 & (5ULL > vlSelfRef.__PVT__acquire_period))) {
                vlSelfRef.__PVT__counter_6 = vlSelfRef.__PVT___counter_T_11;
            }
            if (((IData)(vlSelfRef.__PVT__acquire_period_en) 
                 & ((5ULL <= vlSelfRef.__PVT__acquire_period) 
                    & (0xaULL > vlSelfRef.__PVT__acquire_period)))) {
                vlSelfRef.__PVT__counter_7 = vlSelfRef.__PVT___counter_T_13;
            }
            if (((IData)(vlSelfRef.__PVT__acquire_period_en) 
                 & ((0xaULL <= vlSelfRef.__PVT__acquire_period) 
                    & (0xfULL > vlSelfRef.__PVT__acquire_period)))) {
                vlSelfRef.__PVT__counter_8 = vlSelfRef.__PVT___counter_T_15;
            }
            if (((IData)(vlSelfRef.__PVT__acquire_period_en) 
                 & ((0xfULL <= vlSelfRef.__PVT__acquire_period) 
                    & (0x14ULL > vlSelfRef.__PVT__acquire_period)))) {
                vlSelfRef.__PVT__counter_9 = vlSelfRef.__PVT___counter_T_17;
            }
            if (((IData)(vlSelfRef.__PVT__acquire_period_en) 
                 & ((0x14ULL <= vlSelfRef.__PVT__acquire_period) 
                    & (0x19ULL > vlSelfRef.__PVT__acquire_period)))) {
                vlSelfRef.__PVT__counter_10 = vlSelfRef.__PVT___counter_T_19;
            }
            if (((IData)(vlSelfRef.__PVT__acquire_period_en) 
                 & ((0x19ULL <= vlSelfRef.__PVT__acquire_period) 
                    & (0x1eULL > vlSelfRef.__PVT__acquire_period)))) {
                vlSelfRef.__PVT__counter_11 = vlSelfRef.__PVT___counter_T_21;
            }
            if (((IData)(vlSelfRef.__PVT__acquire_period_en) 
                 & ((0x1eULL <= vlSelfRef.__PVT__acquire_period) 
                    & (0x23ULL > vlSelfRef.__PVT__acquire_period)))) {
                vlSelfRef.__PVT__counter_12 = vlSelfRef.__PVT___counter_T_23;
            }
            if (((IData)(vlSelfRef.__PVT__acquire_period_en) 
                 & ((0x23ULL <= vlSelfRef.__PVT__acquire_period) 
                    & (0x28ULL > vlSelfRef.__PVT__acquire_period)))) {
                vlSelfRef.__PVT__counter_13 = vlSelfRef.__PVT___counter_T_25;
            }
            if (((IData)(vlSelfRef.__PVT__acquire_period_en) 
                 & ((0x28ULL <= vlSelfRef.__PVT__acquire_period) 
                    & (0x2dULL > vlSelfRef.__PVT__acquire_period)))) {
                vlSelfRef.__PVT__counter_14 = vlSelfRef.__PVT___counter_T_27;
            }
            if (((IData)(vlSelfRef.__PVT__acquire_period_en) 
                 & ((0x2dULL <= vlSelfRef.__PVT__acquire_period) 
                    & (0x32ULL > vlSelfRef.__PVT__acquire_period)))) {
                vlSelfRef.__PVT__counter_15 = vlSelfRef.__PVT___counter_T_29;
            }
            if (((IData)(vlSelfRef.__PVT__acquire_period_en) 
                 & ((0x32ULL <= vlSelfRef.__PVT__acquire_period) 
                    & (0x37ULL > vlSelfRef.__PVT__acquire_period)))) {
                vlSelfRef.__PVT__counter_16 = vlSelfRef.__PVT___counter_T_31;
            }
            if (((IData)(vlSelfRef.__PVT__acquire_period_en) 
                 & ((0x37ULL <= vlSelfRef.__PVT__acquire_period) 
                    & (0x3cULL > vlSelfRef.__PVT__acquire_period)))) {
                vlSelfRef.__PVT__counter_17 = vlSelfRef.__PVT___counter_T_33;
            }
            if (((IData)(vlSelfRef.__PVT__acquire_period_en) 
                 & ((0x3cULL <= vlSelfRef.__PVT__acquire_period) 
                    & (0x41ULL > vlSelfRef.__PVT__acquire_period)))) {
                vlSelfRef.__PVT__counter_18 = vlSelfRef.__PVT___counter_T_35;
            }
            if (((IData)(vlSelfRef.__PVT__acquire_period_en) 
                 & ((0x41ULL <= vlSelfRef.__PVT__acquire_period) 
                    & (0x46ULL > vlSelfRef.__PVT__acquire_period)))) {
                vlSelfRef.__PVT__counter_19 = vlSelfRef.__PVT___counter_T_37;
            }
            if (((IData)(vlSelfRef.__PVT__acquire_period_en) 
                 & ((0x46ULL <= vlSelfRef.__PVT__acquire_period) 
                    & (0x4bULL > vlSelfRef.__PVT__acquire_period)))) {
                vlSelfRef.__PVT__counter_20 = vlSelfRef.__PVT___counter_T_39;
            }
            if (((IData)(vlSelfRef.__PVT__acquire_period_en) 
                 & ((0x4bULL <= vlSelfRef.__PVT__acquire_period) 
                    & (0x50ULL > vlSelfRef.__PVT__acquire_period)))) {
                vlSelfRef.__PVT__counter_21 = vlSelfRef.__PVT___counter_T_41;
            }
            if (((IData)(vlSelfRef.__PVT__acquire_period_en) 
                 & ((0x50ULL <= vlSelfRef.__PVT__acquire_period) 
                    & (0x55ULL > vlSelfRef.__PVT__acquire_period)))) {
                vlSelfRef.__PVT__counter_22 = vlSelfRef.__PVT___counter_T_43;
            }
            if (((IData)(vlSelfRef.__PVT__acquire_period_en) 
                 & ((0x55ULL <= vlSelfRef.__PVT__acquire_period) 
                    & (0x5aULL > vlSelfRef.__PVT__acquire_period)))) {
                vlSelfRef.__PVT__counter_23 = vlSelfRef.__PVT___counter_T_45;
            }
            if (((IData)(vlSelfRef.__PVT__acquire_period_en) 
                 & ((0x5aULL <= vlSelfRef.__PVT__acquire_period) 
                    & (0x5fULL > vlSelfRef.__PVT__acquire_period)))) {
                vlSelfRef.__PVT__counter_24 = vlSelfRef.__PVT___counter_T_47;
            }
            if (((IData)(vlSelfRef.__PVT__acquire_period_en) 
                 & (((0x5fULL <= vlSelfRef.__PVT__acquire_period) 
                     & (0x64ULL > vlSelfRef.__PVT__acquire_period)) 
                    | (0x64ULL <= vlSelfRef.__PVT__acquire_period)))) {
                vlSelfRef.__PVT__counter_25 = vlSelfRef.__PVT___counter_T_49;
            }
        }
        if (vlSelfRef.__PVT__helper_4_clean) {
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
            vlSelfRef.__PVT__counter_40 = 0ULL;
            vlSelfRef.__PVT__counter_41 = 0ULL;
            vlSelfRef.__PVT__counter_42 = 0ULL;
            vlSelfRef.__PVT__counter_43 = 0ULL;
            vlSelfRef.__PVT__counter_44 = 0ULL;
            vlSelfRef.__PVT__counter_45 = 0ULL;
        } else {
            if (((IData)(vlSelfRef.__PVT__release_period_en) 
                 & (5ULL > vlSelfRef.__PVT__release_period))) {
                vlSelfRef.__PVT__counter_26 = vlSelfRef.__PVT___counter_T_51;
            }
            if (((IData)(vlSelfRef.__PVT__release_period_en) 
                 & ((5ULL <= vlSelfRef.__PVT__release_period) 
                    & (0xaULL > vlSelfRef.__PVT__release_period)))) {
                vlSelfRef.__PVT__counter_27 = vlSelfRef.__PVT___counter_T_53;
            }
            if (((IData)(vlSelfRef.__PVT__release_period_en) 
                 & ((0xaULL <= vlSelfRef.__PVT__release_period) 
                    & (0xfULL > vlSelfRef.__PVT__release_period)))) {
                vlSelfRef.__PVT__counter_28 = vlSelfRef.__PVT___counter_T_55;
            }
            if (((IData)(vlSelfRef.__PVT__release_period_en) 
                 & ((0xfULL <= vlSelfRef.__PVT__release_period) 
                    & (0x14ULL > vlSelfRef.__PVT__release_period)))) {
                vlSelfRef.__PVT__counter_29 = vlSelfRef.__PVT___counter_T_57;
            }
            if (((IData)(vlSelfRef.__PVT__release_period_en) 
                 & ((0x14ULL <= vlSelfRef.__PVT__release_period) 
                    & (0x19ULL > vlSelfRef.__PVT__release_period)))) {
                vlSelfRef.__PVT__counter_30 = vlSelfRef.__PVT___counter_T_59;
            }
            if (((IData)(vlSelfRef.__PVT__release_period_en) 
                 & ((0x19ULL <= vlSelfRef.__PVT__release_period) 
                    & (0x1eULL > vlSelfRef.__PVT__release_period)))) {
                vlSelfRef.__PVT__counter_31 = vlSelfRef.__PVT___counter_T_61;
            }
            if (((IData)(vlSelfRef.__PVT__release_period_en) 
                 & ((0x1eULL <= vlSelfRef.__PVT__release_period) 
                    & (0x23ULL > vlSelfRef.__PVT__release_period)))) {
                vlSelfRef.__PVT__counter_32 = vlSelfRef.__PVT___counter_T_63;
            }
            if (((IData)(vlSelfRef.__PVT__release_period_en) 
                 & ((0x23ULL <= vlSelfRef.__PVT__release_period) 
                    & (0x28ULL > vlSelfRef.__PVT__release_period)))) {
                vlSelfRef.__PVT__counter_33 = vlSelfRef.__PVT___counter_T_65;
            }
            if (((IData)(vlSelfRef.__PVT__release_period_en) 
                 & ((0x28ULL <= vlSelfRef.__PVT__release_period) 
                    & (0x2dULL > vlSelfRef.__PVT__release_period)))) {
                vlSelfRef.__PVT__counter_34 = vlSelfRef.__PVT___counter_T_67;
            }
            if (((IData)(vlSelfRef.__PVT__release_period_en) 
                 & ((0x2dULL <= vlSelfRef.__PVT__release_period) 
                    & (0x32ULL > vlSelfRef.__PVT__release_period)))) {
                vlSelfRef.__PVT__counter_35 = vlSelfRef.__PVT___counter_T_69;
            }
            if (((IData)(vlSelfRef.__PVT__release_period_en) 
                 & ((0x32ULL <= vlSelfRef.__PVT__release_period) 
                    & (0x37ULL > vlSelfRef.__PVT__release_period)))) {
                vlSelfRef.__PVT__counter_36 = vlSelfRef.__PVT___counter_T_71;
            }
            if (((IData)(vlSelfRef.__PVT__release_period_en) 
                 & ((0x37ULL <= vlSelfRef.__PVT__release_period) 
                    & (0x3cULL > vlSelfRef.__PVT__release_period)))) {
                vlSelfRef.__PVT__counter_37 = vlSelfRef.__PVT___counter_T_73;
            }
            if (((IData)(vlSelfRef.__PVT__release_period_en) 
                 & ((0x3cULL <= vlSelfRef.__PVT__release_period) 
                    & (0x41ULL > vlSelfRef.__PVT__release_period)))) {
                vlSelfRef.__PVT__counter_38 = vlSelfRef.__PVT___counter_T_75;
            }
            if (((IData)(vlSelfRef.__PVT__release_period_en) 
                 & ((0x41ULL <= vlSelfRef.__PVT__release_period) 
                    & (0x46ULL > vlSelfRef.__PVT__release_period)))) {
                vlSelfRef.__PVT__counter_39 = vlSelfRef.__PVT___counter_T_77;
            }
            if (((IData)(vlSelfRef.__PVT__release_period_en) 
                 & ((0x46ULL <= vlSelfRef.__PVT__release_period) 
                    & (0x4bULL > vlSelfRef.__PVT__release_period)))) {
                vlSelfRef.__PVT__counter_40 = vlSelfRef.__PVT___counter_T_79;
            }
            if (((IData)(vlSelfRef.__PVT__release_period_en) 
                 & ((0x4bULL <= vlSelfRef.__PVT__release_period) 
                    & (0x50ULL > vlSelfRef.__PVT__release_period)))) {
                vlSelfRef.__PVT__counter_41 = vlSelfRef.__PVT___counter_T_81;
            }
            if (((IData)(vlSelfRef.__PVT__release_period_en) 
                 & ((0x50ULL <= vlSelfRef.__PVT__release_period) 
                    & (0x55ULL > vlSelfRef.__PVT__release_period)))) {
                vlSelfRef.__PVT__counter_42 = vlSelfRef.__PVT___counter_T_83;
            }
            if (((IData)(vlSelfRef.__PVT__release_period_en) 
                 & ((0x55ULL <= vlSelfRef.__PVT__release_period) 
                    & (0x5aULL > vlSelfRef.__PVT__release_period)))) {
                vlSelfRef.__PVT__counter_43 = vlSelfRef.__PVT___counter_T_85;
            }
            if (((IData)(vlSelfRef.__PVT__release_period_en) 
                 & ((0x5aULL <= vlSelfRef.__PVT__release_period) 
                    & (0x5fULL > vlSelfRef.__PVT__release_period)))) {
                vlSelfRef.__PVT__counter_44 = vlSelfRef.__PVT___counter_T_87;
            }
            if (((IData)(vlSelfRef.__PVT__release_period_en) 
                 & (((0x5fULL <= vlSelfRef.__PVT__release_period) 
                     & (0x64ULL > vlSelfRef.__PVT__release_period)) 
                    | (0x64ULL <= vlSelfRef.__PVT__release_period)))) {
                vlSelfRef.__PVT__counter_45 = vlSelfRef.__PVT___counter_T_89;
            }
        }
        if (vlSelfRef.__PVT__helper_2_clean) {
            vlSelfRef.__PVT__counter_2 = 0ULL;
            vlSelfRef.__PVT__counter_3 = 0ULL;
            vlSelfRef.__PVT__counter_4 = 0ULL;
            vlSelfRef.__PVT__counter_5 = 0ULL;
        } else {
            if (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_valid) 
                 & (1U > (IData)(vlSelfRef.io_toMainPipe_mshr_alloc_ptr)))) {
                vlSelfRef.__PVT__counter_2 = vlSelfRef.__PVT___counter_T_3;
            }
            if (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_valid) 
                 & ((1U <= (IData)(vlSelfRef.io_toMainPipe_mshr_alloc_ptr)) 
                    & (2U > (IData)(vlSelfRef.io_toMainPipe_mshr_alloc_ptr))))) {
                vlSelfRef.__PVT__counter_3 = vlSelfRef.__PVT___counter_T_5;
            }
            if (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_valid) 
                 & ((2U <= (IData)(vlSelfRef.io_toMainPipe_mshr_alloc_ptr)) 
                    & (3U > (IData)(vlSelfRef.io_toMainPipe_mshr_alloc_ptr))))) {
                vlSelfRef.__PVT__counter_4 = vlSelfRef.__PVT___counter_T_7;
            }
            if (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toMSHRCtl_mshr_alloc_s3_valid) 
                 & (((3U <= (IData)(vlSelfRef.io_toMainPipe_mshr_alloc_ptr)) 
                     & (4U > (IData)(vlSelfRef.io_toMainPipe_mshr_alloc_ptr))) 
                    | (4U <= (IData)(vlSelfRef.io_toMainPipe_mshr_alloc_ptr))))) {
                vlSelfRef.__PVT__counter_5 = vlSelfRef.__PVT___counter_T_9;
            }
        }
    }
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
    vlSelfRef.__PVT__sourceB_io_task_ready = (1U & 
                                              (~ ((IData)(vlSelfRef.__PVT__sourceB__DOT__probes_0_valid) 
                                                  & ((IData)(vlSelfRef.__PVT__sourceB__DOT__probes_1_valid) 
                                                     & ((IData)(vlSelfRef.__PVT__sourceB__DOT__probes_2_valid) 
                                                        & (IData)(vlSelfRef.__PVT__sourceB__DOT__probes_3_valid))))));
    __PVT__source_a_arb__DOT___rrSelOH_T = ((IData)(vlSelfRef.__PVT__source_a_arb__DOT__pendingMask) 
                                            & (IData)(vlSelfRef.__PVT__source_a_arb__DOT__rrGrantMask));
    __PVT__mshr_task_arb__DOT___rrSelOH_T = ((IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__pendingMask) 
                                             & (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__rrGrantMask));
    __PVT__source_b_arb__DOT___rrSelOH_T = ((IData)(vlSelfRef.__PVT__source_b_arb__DOT__pendingMask) 
                                            & (IData)(vlSelfRef.__PVT__source_b_arb__DOT__rrGrantMask));
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
    vlSelfRef.__PVT___counter_T_3 = (1ULL + vlSelfRef.__PVT__counter_2);
    vlSelfRef.__PVT___counter_T_5 = (1ULL + vlSelfRef.__PVT__counter_3);
    vlSelfRef.__PVT___counter_T_7 = (1ULL + vlSelfRef.__PVT__counter_4);
    vlSelfRef.__PVT___counter_T_9 = (1ULL + vlSelfRef.__PVT__counter_5);
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
}

VL_INLINE_OPT void VVerifyTop_MSHRCtl___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__4(VVerifyTop_MSHRCtl* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_MSHRCtl___nba_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mshrCtl__4\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mshr_task_arb__DOT___pendingMask_T_2 
        = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__reqArb.io_mshrTask_ready) 
           & (0U != (IData)(vlSelfRef.__PVT__mshr_task_arb__DOT__valids)));
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
}
