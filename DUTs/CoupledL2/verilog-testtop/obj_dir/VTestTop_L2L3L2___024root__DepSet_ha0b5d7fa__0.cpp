// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestTop_L2L3L2.h for the primary calling header

#include "VTestTop_L2L3L2__pch.h"
#include "VTestTop_L2L3L2___024root.h"

void VTestTop_L2L3L2___024root___ico_sequent__TOP__0(VTestTop_L2L3L2___024root* vlSelf);

void VTestTop_L2L3L2___024root___eval_ico(VTestTop_L2L3L2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTop_L2L3L2___024root___eval_ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VTestTop_L2L3L2___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VTestTop_L2L3L2___024root___ico_sequent__TOP__0(VTestTop_L2L3L2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTop_L2L3L2___024root___ico_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.TestTop_L2L3L2__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_MPORT_en 
        = ((IData)(vlSelfRef.master_port_0_0_a_ready) 
           & (IData)(vlSelfRef.master_port_0_0_a_valid));
    vlSelfRef.TestTop_L2L3L2__DOT__buffer__DOT__bundleIn_0_b_q__DOT__do_deq 
        = ((IData)(vlSelfRef.master_port_0_0_b_valid) 
           & (IData)(vlSelfRef.master_port_0_0_b_ready));
    vlSelfRef.TestTop_L2L3L2__DOT__buffer__DOT__bundleOut_0_c_q__DOT__ram_opcode_MPORT_en 
        = ((IData)(vlSelfRef.master_port_0_0_c_ready) 
           & (IData)(vlSelfRef.master_port_0_0_c_valid));
    vlSelfRef.TestTop_L2L3L2__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq 
        = ((IData)(vlSelfRef.master_port_0_0_d_valid) 
           & (IData)(vlSelfRef.master_port_0_0_d_ready));
    vlSelfRef.TestTop_L2L3L2__DOT__buffer__DOT__bundleOut_0_e_q__DOT__ram_sink_MPORT_en 
        = ((IData)(vlSelfRef.master_port_0_0_e_ready) 
           & (IData)(vlSelfRef.master_port_0_0_e_valid));
    vlSelfRef.TestTop_L2L3L2__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_MPORT_en 
        = ((IData)(vlSelfRef.master_port_1_0_a_ready) 
           & (IData)(vlSelfRef.master_port_1_0_a_valid));
    vlSelfRef.TestTop_L2L3L2__DOT__buffer_1__DOT__bundleIn_0_b_q__DOT__do_deq 
        = ((IData)(vlSelfRef.master_port_1_0_b_valid) 
           & (IData)(vlSelfRef.master_port_1_0_b_ready));
    vlSelfRef.TestTop_L2L3L2__DOT__buffer_1__DOT__bundleOut_0_c_q__DOT__ram_opcode_MPORT_en 
        = ((IData)(vlSelfRef.master_port_1_0_c_ready) 
           & (IData)(vlSelfRef.master_port_1_0_c_valid));
    vlSelfRef.TestTop_L2L3L2__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_deq 
        = ((IData)(vlSelfRef.master_port_1_0_d_valid) 
           & (IData)(vlSelfRef.master_port_1_0_d_ready));
    vlSelfRef.TestTop_L2L3L2__DOT__buffer_1__DOT__bundleOut_0_e_q__DOT__ram_sink_MPORT_en 
        = ((IData)(vlSelfRef.master_port_1_0_e_ready) 
           & (IData)(vlSelfRef.master_port_1_0_e_valid));
}

void VTestTop_L2L3L2___024root___eval_triggers__ico(VTestTop_L2L3L2___024root* vlSelf);

bool VTestTop_L2L3L2___024root___eval_phase__ico(VTestTop_L2L3L2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTop_L2L3L2___024root___eval_phase__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VTestTop_L2L3L2___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        VTestTop_L2L3L2___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VTestTop_L2L3L2___024root___eval_act(VTestTop_L2L3L2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTop_L2L3L2___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_INLINE_OPT void VTestTop_L2L3L2___024root___nba_sequent__TOP__2(VTestTop_L2L3L2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTop_L2L3L2___024root___nba_sequent__TOP__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.reset) {
        vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir__DOT__lfsr_prng__DOT__state_3 = 0U;
        vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir__DOT__lfsr_prng__DOT__state_2 = 0U;
        vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir__DOT__lfsr_prng__DOT__state_1 = 0U;
    } else if (vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__pipeline_3__DOT__stages_0__DOT__maybe_full) {
        vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir__DOT__lfsr_prng__DOT__state_3 
            = vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir__DOT__lfsr_prng__DOT__state_2;
        vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir__DOT__lfsr_prng__DOT__state_2 
            = vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir__DOT__lfsr_prng__DOT__state_1;
        vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir__DOT__lfsr_prng__DOT__state_1 
            = vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir__DOT__lfsr_prng__DOT__state_0;
    }
    vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir__DOT__lfsr_prng__DOT__state_0 
        = ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.TestTop_L2L3L2__DOT__l3__DOT__slices_0__DOT__directory__DOT__clientDir__DOT__lfsr_prng__DOT___GEN_0));
}

void VTestTop_L2L3L2___024root___eval_triggers__act(VTestTop_L2L3L2___024root* vlSelf);

bool VTestTop_L2L3L2___024root___eval_phase__act(VTestTop_L2L3L2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTop_L2L3L2___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VTestTop_L2L3L2___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VTestTop_L2L3L2___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void VTestTop_L2L3L2___024root___eval_nba(VTestTop_L2L3L2___024root* vlSelf);

bool VTestTop_L2L3L2___024root___eval_phase__nba(VTestTop_L2L3L2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTop_L2L3L2___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VTestTop_L2L3L2___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestTop_L2L3L2___024root___dump_triggers__ico(VTestTop_L2L3L2___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTestTop_L2L3L2___024root___dump_triggers__nba(VTestTop_L2L3L2___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTestTop_L2L3L2___024root___dump_triggers__act(VTestTop_L2L3L2___024root* vlSelf);
#endif  // VL_DEBUG

void VTestTop_L2L3L2___024root___eval(VTestTop_L2L3L2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTop_L2L3L2___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VTestTop_L2L3L2___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("TestTop_L2L3L2.sv", 101973, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VTestTop_L2L3L2___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VTestTop_L2L3L2___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("TestTop_L2L3L2.sv", 101973, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                VTestTop_L2L3L2___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("TestTop_L2L3L2.sv", 101973, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VTestTop_L2L3L2___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VTestTop_L2L3L2___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VTestTop_L2L3L2___024root___eval_debug_assertions(VTestTop_L2L3L2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VTestTop_L2L3L2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTop_L2L3L2___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelfRef.reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelfRef.master_port_0_0_a_valid 
                     & 0xfeU))) {
        Verilated::overWidthError("master_port_0_0_a_valid");}
    if (VL_UNLIKELY((vlSelfRef.master_port_0_0_a_bits_opcode 
                     & 0xf8U))) {
        Verilated::overWidthError("master_port_0_0_a_bits_opcode");}
    if (VL_UNLIKELY((vlSelfRef.master_port_0_0_a_bits_param 
                     & 0xf8U))) {
        Verilated::overWidthError("master_port_0_0_a_bits_param");}
    if (VL_UNLIKELY((vlSelfRef.master_port_0_0_a_bits_size 
                     & 0xfeU))) {
        Verilated::overWidthError("master_port_0_0_a_bits_size");}
    if (VL_UNLIKELY((vlSelfRef.master_port_0_0_a_bits_source 
                     & 0xe0U))) {
        Verilated::overWidthError("master_port_0_0_a_bits_source");}
    if (VL_UNLIKELY((vlSelfRef.master_port_0_0_a_bits_user_alias 
                     & 0xfcU))) {
        Verilated::overWidthError("master_port_0_0_a_bits_user_alias");}
    if (VL_UNLIKELY((vlSelfRef.master_port_0_0_a_bits_mask 
                     & 0xfeU))) {
        Verilated::overWidthError("master_port_0_0_a_bits_mask");}
    if (VL_UNLIKELY((vlSelfRef.master_port_0_0_a_bits_corrupt 
                     & 0xfeU))) {
        Verilated::overWidthError("master_port_0_0_a_bits_corrupt");}
    if (VL_UNLIKELY((vlSelfRef.master_port_0_0_b_ready 
                     & 0xfeU))) {
        Verilated::overWidthError("master_port_0_0_b_ready");}
    if (VL_UNLIKELY((vlSelfRef.master_port_0_0_c_valid 
                     & 0xfeU))) {
        Verilated::overWidthError("master_port_0_0_c_valid");}
    if (VL_UNLIKELY((vlSelfRef.master_port_0_0_c_bits_opcode 
                     & 0xf8U))) {
        Verilated::overWidthError("master_port_0_0_c_bits_opcode");}
    if (VL_UNLIKELY((vlSelfRef.master_port_0_0_c_bits_param 
                     & 0xf8U))) {
        Verilated::overWidthError("master_port_0_0_c_bits_param");}
    if (VL_UNLIKELY((vlSelfRef.master_port_0_0_c_bits_size 
                     & 0xfeU))) {
        Verilated::overWidthError("master_port_0_0_c_bits_size");}
    if (VL_UNLIKELY((vlSelfRef.master_port_0_0_c_bits_source 
                     & 0xe0U))) {
        Verilated::overWidthError("master_port_0_0_c_bits_source");}
    if (VL_UNLIKELY((vlSelfRef.master_port_0_0_c_bits_user_alias 
                     & 0xfcU))) {
        Verilated::overWidthError("master_port_0_0_c_bits_user_alias");}
    if (VL_UNLIKELY((vlSelfRef.master_port_0_0_c_bits_corrupt 
                     & 0xfeU))) {
        Verilated::overWidthError("master_port_0_0_c_bits_corrupt");}
    if (VL_UNLIKELY((vlSelfRef.master_port_0_0_d_ready 
                     & 0xfeU))) {
        Verilated::overWidthError("master_port_0_0_d_ready");}
    if (VL_UNLIKELY((vlSelfRef.master_port_0_0_e_valid 
                     & 0xfeU))) {
        Verilated::overWidthError("master_port_0_0_e_valid");}
    if (VL_UNLIKELY((vlSelfRef.master_port_1_0_a_valid 
                     & 0xfeU))) {
        Verilated::overWidthError("master_port_1_0_a_valid");}
    if (VL_UNLIKELY((vlSelfRef.master_port_1_0_a_bits_opcode 
                     & 0xf8U))) {
        Verilated::overWidthError("master_port_1_0_a_bits_opcode");}
    if (VL_UNLIKELY((vlSelfRef.master_port_1_0_a_bits_param 
                     & 0xf8U))) {
        Verilated::overWidthError("master_port_1_0_a_bits_param");}
    if (VL_UNLIKELY((vlSelfRef.master_port_1_0_a_bits_size 
                     & 0xfeU))) {
        Verilated::overWidthError("master_port_1_0_a_bits_size");}
    if (VL_UNLIKELY((vlSelfRef.master_port_1_0_a_bits_source 
                     & 0xe0U))) {
        Verilated::overWidthError("master_port_1_0_a_bits_source");}
    if (VL_UNLIKELY((vlSelfRef.master_port_1_0_a_bits_user_alias 
                     & 0xfcU))) {
        Verilated::overWidthError("master_port_1_0_a_bits_user_alias");}
    if (VL_UNLIKELY((vlSelfRef.master_port_1_0_a_bits_mask 
                     & 0xfeU))) {
        Verilated::overWidthError("master_port_1_0_a_bits_mask");}
    if (VL_UNLIKELY((vlSelfRef.master_port_1_0_a_bits_corrupt 
                     & 0xfeU))) {
        Verilated::overWidthError("master_port_1_0_a_bits_corrupt");}
    if (VL_UNLIKELY((vlSelfRef.master_port_1_0_b_ready 
                     & 0xfeU))) {
        Verilated::overWidthError("master_port_1_0_b_ready");}
    if (VL_UNLIKELY((vlSelfRef.master_port_1_0_c_valid 
                     & 0xfeU))) {
        Verilated::overWidthError("master_port_1_0_c_valid");}
    if (VL_UNLIKELY((vlSelfRef.master_port_1_0_c_bits_opcode 
                     & 0xf8U))) {
        Verilated::overWidthError("master_port_1_0_c_bits_opcode");}
    if (VL_UNLIKELY((vlSelfRef.master_port_1_0_c_bits_param 
                     & 0xf8U))) {
        Verilated::overWidthError("master_port_1_0_c_bits_param");}
    if (VL_UNLIKELY((vlSelfRef.master_port_1_0_c_bits_size 
                     & 0xfeU))) {
        Verilated::overWidthError("master_port_1_0_c_bits_size");}
    if (VL_UNLIKELY((vlSelfRef.master_port_1_0_c_bits_source 
                     & 0xe0U))) {
        Verilated::overWidthError("master_port_1_0_c_bits_source");}
    if (VL_UNLIKELY((vlSelfRef.master_port_1_0_c_bits_user_alias 
                     & 0xfcU))) {
        Verilated::overWidthError("master_port_1_0_c_bits_user_alias");}
    if (VL_UNLIKELY((vlSelfRef.master_port_1_0_c_bits_corrupt 
                     & 0xfeU))) {
        Verilated::overWidthError("master_port_1_0_c_bits_corrupt");}
    if (VL_UNLIKELY((vlSelfRef.master_port_1_0_d_ready 
                     & 0xfeU))) {
        Verilated::overWidthError("master_port_1_0_d_ready");}
    if (VL_UNLIKELY((vlSelfRef.master_port_1_0_e_valid 
                     & 0xfeU))) {
        Verilated::overWidthError("master_port_1_0_e_valid");}
}
#endif  // VL_DEBUG
