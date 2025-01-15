// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VVerifyTop.h for the primary calling header

#include "VVerifyTop__pch.h"
#include "VVerifyTop_RequestBuffer.h"
#include "VVerifyTop__Syms.h"

VL_ATTR_COLD void VVerifyTop_RequestBuffer___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf__0(VVerifyTop_RequestBuffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_RequestBuffer___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __PVT___cntEnable_T_4;
    __PVT___cntEnable_T_4 = 0;
    // Body
    vlSelfRef.__PVT__next_counter_5 = vlSelfRef.__PVT__counter_5;
    vlSelfRef.__PVT___bufferTimer_0_T_1 = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__bufferTimer_0)));
    vlSelfRef.__PVT___bufferTimer_1_T_1 = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__bufferTimer_1)));
    vlSelfRef.__PVT___bufferTimer_2_T_1 = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__bufferTimer_2)));
    vlSelfRef.__PVT___bufferTimer_3_T_1 = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__bufferTimer_3)));
    vlSelfRef.__PVT___counter_T_13 = (1ULL + vlSelfRef.__PVT__counter_12);
    vlSelfRef.__PVT___counter_T_15 = (1ULL + vlSelfRef.__PVT__counter_13);
    vlSelfRef.__PVT___counter_T_17 = (1ULL + vlSelfRef.__PVT__counter_14);
    vlSelfRef.__PVT___counter_T_19 = (1ULL + vlSelfRef.__PVT__counter_15);
    vlSelfRef.__PVT___counter_T_21 = (1ULL + vlSelfRef.__PVT__counter_16);
    vlSelfRef.__PVT___counter_T_23 = (1ULL + vlSelfRef.__PVT__counter_17);
    vlSelfRef.__PVT___counter_T_25 = (1ULL + vlSelfRef.__PVT__counter_18);
    vlSelfRef.__PVT___counter_T_27 = (1ULL + vlSelfRef.__PVT__counter_19);
    vlSelfRef.__PVT___counter_T_29 = (1ULL + vlSelfRef.__PVT__counter_20);
    vlSelfRef.__PVT___counter_T_31 = (1ULL + vlSelfRef.__PVT__counter_21);
    vlSelfRef.__PVT___counter_T_33 = (1ULL + vlSelfRef.__PVT__counter_22);
    vlSelfRef.__PVT___counter_T_35 = (1ULL + vlSelfRef.__PVT__counter_23);
    vlSelfRef.__PVT___counter_T_37 = (1ULL + vlSelfRef.__PVT__counter_24);
    vlSelfRef.__PVT___counter_T_39 = (1ULL + vlSelfRef.__PVT__counter_25);
    vlSelfRef.__PVT___counter_T_41 = (1ULL + vlSelfRef.__PVT__counter_26);
    vlSelfRef.__PVT___counter_T_43 = (1ULL + vlSelfRef.__PVT__counter_27);
    vlSelfRef.__PVT___counter_T_45 = (1ULL + vlSelfRef.__PVT__counter_28);
    vlSelfRef.__PVT___counter_T_47 = (1ULL + vlSelfRef.__PVT__counter_29);
    vlSelfRef.__PVT___counter_T_49 = (1ULL + vlSelfRef.__PVT__counter_30);
    vlSelfRef.__PVT___counter_T_51 = (1ULL + vlSelfRef.__PVT__counter_31);
    vlSelfRef.__PVT___counter_T_53 = (1ULL + vlSelfRef.__PVT__counter_32);
    vlSelfRef.__PVT___counter_T_55 = (1ULL + vlSelfRef.__PVT__counter_33);
    vlSelfRef.__PVT___counter_T_57 = (1ULL + vlSelfRef.__PVT__counter_34);
    vlSelfRef.__PVT___counter_T_59 = (1ULL + vlSelfRef.__PVT__counter_35);
    vlSelfRef.__PVT___counter_T_61 = (1ULL + vlSelfRef.__PVT__counter_36);
    vlSelfRef.__PVT___counter_T_63 = (1ULL + vlSelfRef.__PVT__counter_37);
    vlSelfRef.__PVT___counter_T_65 = (1ULL + vlSelfRef.__PVT__counter_38);
    vlSelfRef.__PVT___counter_T_67 = (1ULL + vlSelfRef.__PVT__counter_39);
    vlSelfRef.__PVT___counter_T_69 = (1ULL + vlSelfRef.__PVT__counter_40);
    vlSelfRef.__PVT___counter_T_71 = (1ULL + vlSelfRef.__PVT__counter_41);
    vlSelfRef.__PVT___counter_T_73 = (1ULL + vlSelfRef.__PVT__counter_42);
    vlSelfRef.__PVT___counter_T_75 = (1ULL + vlSelfRef.__PVT__counter_43);
    vlSelfRef.__PVT___counter_T_77 = (1ULL + vlSelfRef.__PVT__counter_44);
    vlSelfRef.__PVT___counter_T_79 = (1ULL + vlSelfRef.__PVT__counter_45);
    vlSelfRef.__PVT___counter_T_81 = (1ULL + vlSelfRef.__PVT__counter_46);
    vlSelfRef.__PVT___counter_T_83 = (1ULL + vlSelfRef.__PVT__counter_47);
    vlSelfRef.__PVT___counter_T_85 = (1ULL + vlSelfRef.__PVT__counter_48);
    vlSelfRef.__PVT___counter_T_87 = (1ULL + vlSelfRef.__PVT__counter_49);
    vlSelfRef.__PVT___counter_T_89 = (1ULL + vlSelfRef.__PVT__counter_50);
    vlSelfRef.__PVT___counter_T_91 = (1ULL + vlSelfRef.__PVT__counter_51);
    vlSelfRef.__PVT___counter_T_93 = (1ULL + vlSelfRef.__PVT__counter_52);
    vlSelfRef.__PVT___counter_T_95 = (1ULL + vlSelfRef.__PVT__counter_53);
    vlSelfRef.__PVT___counter_T_97 = (1ULL + vlSelfRef.__PVT__counter_54);
    vlSelfRef.__PVT___counter_T_99 = (1ULL + vlSelfRef.__PVT__counter_55);
    vlSelfRef.__PVT___counter_T_101 = (1ULL + vlSelfRef.__PVT__counter_56);
    vlSelfRef.__PVT___counter_T_103 = (1ULL + vlSelfRef.__PVT__counter_57);
    vlSelfRef.__PVT___counter_T_105 = (1ULL + vlSelfRef.__PVT__counter_58);
    vlSelfRef.__PVT___counter_T_107 = (1ULL + vlSelfRef.__PVT__counter_59);
    vlSelfRef.__PVT___counter_T_109 = (1ULL + vlSelfRef.__PVT__counter_60);
    vlSelfRef.__PVT___counter_T_111 = (1ULL + vlSelfRef.__PVT__counter_61);
    vlSelfRef.__PVT___counter_T_113 = (1ULL + vlSelfRef.__PVT__counter_62);
    vlSelfRef.__PVT___counter_T_115 = (1ULL + vlSelfRef.__PVT__counter_63);
    vlSelfRef.__PVT___counter_T_117 = (1ULL + vlSelfRef.__PVT__counter_64);
    vlSelfRef.__PVT___counter_T_119 = (1ULL + vlSelfRef.__PVT__counter_65);
    vlSelfRef.__PVT___counter_T_121 = (1ULL + vlSelfRef.__PVT__counter_66);
    vlSelfRef.__PVT___counter_T_123 = (1ULL + vlSelfRef.__PVT__counter_67);
    vlSelfRef.__PVT___counter_T_125 = (1ULL + vlSelfRef.__PVT__counter_68);
    vlSelfRef.__PVT___counter_T_127 = (1ULL + vlSelfRef.__PVT__counter_69);
    vlSelfRef.__PVT___counter_T_129 = (1ULL + vlSelfRef.__PVT__counter_70);
    vlSelfRef.__PVT___counter_T_131 = (1ULL + vlSelfRef.__PVT__counter_71);
    vlSelfRef.__PVT___counter_T_133 = (1ULL + vlSelfRef.__PVT__counter_72);
    vlSelfRef.__PVT___counter_T_135 = (1ULL + vlSelfRef.__PVT__counter_73);
    vlSelfRef.__PVT___counter_T_137 = (1ULL + vlSelfRef.__PVT__counter_74);
    vlSelfRef.__PVT___counter_T_139 = (1ULL + vlSelfRef.__PVT__counter_75);
    vlSelfRef.__PVT___counter_T_141 = (1ULL + vlSelfRef.__PVT__counter_76);
    vlSelfRef.__PVT___counter_T_143 = (1ULL + vlSelfRef.__PVT__counter_77);
    vlSelfRef.__PVT___counter_T_145 = (1ULL + vlSelfRef.__PVT__counter_78);
    vlSelfRef.__PVT___counter_T_147 = (1ULL + vlSelfRef.__PVT__counter_79);
    vlSelfRef.__PVT___counter_T_149 = (1ULL + vlSelfRef.__PVT__counter_80);
    vlSelfRef.__PVT___counter_T_151 = (1ULL + vlSelfRef.__PVT__counter_81);
    vlSelfRef.__PVT___counter_T_153 = (1ULL + vlSelfRef.__PVT__counter_82);
    vlSelfRef.__PVT___counter_T_155 = (1ULL + vlSelfRef.__PVT__counter_83);
    vlSelfRef.__PVT___counter_T_157 = (1ULL + vlSelfRef.__PVT__counter_84);
    vlSelfRef.__PVT___counter_T_159 = (1ULL + vlSelfRef.__PVT__counter_85);
    vlSelfRef.__PVT___counter_T_161 = (1ULL + vlSelfRef.__PVT__counter_86);
    vlSelfRef.__PVT___counter_T_163 = (1ULL + vlSelfRef.__PVT__counter_87);
    vlSelfRef.__PVT___counter_T_165 = (1ULL + vlSelfRef.__PVT__counter_88);
    vlSelfRef.__PVT___counter_T_167 = (1ULL + vlSelfRef.__PVT__counter_89);
    vlSelfRef.__PVT___counter_T_169 = (1ULL + vlSelfRef.__PVT__counter_90);
    vlSelfRef.__PVT___counter_T_171 = (1ULL + vlSelfRef.__PVT__counter_91);
    vlSelfRef.__PVT___counter_T_173 = (1ULL + vlSelfRef.__PVT__counter_92);
    vlSelfRef.__PVT___counter_T_175 = (1ULL + vlSelfRef.__PVT__counter_93);
    vlSelfRef.__PVT___counter_T_177 = (1ULL + vlSelfRef.__PVT__counter_94);
    vlSelfRef.__PVT___counter_T_179 = (1ULL + vlSelfRef.__PVT__counter_95);
    vlSelfRef.__PVT___counter_T_181 = (1ULL + vlSelfRef.__PVT__counter_96);
    vlSelfRef.__PVT___counter_T_183 = (1ULL + vlSelfRef.__PVT__counter_97);
    vlSelfRef.__PVT___counter_T_185 = (1ULL + vlSelfRef.__PVT__counter_98);
    vlSelfRef.__PVT___counter_T_187 = (1ULL + vlSelfRef.__PVT__counter_99);
    vlSelfRef.__PVT___counter_T_189 = (1ULL + vlSelfRef.__PVT__counter_100);
    vlSelfRef.__PVT___counter_T_191 = (1ULL + vlSelfRef.__PVT__counter_101);
    vlSelfRef.__PVT___counter_T_193 = (1ULL + vlSelfRef.__PVT__counter_102);
    vlSelfRef.__PVT___counter_T_195 = (1ULL + vlSelfRef.__PVT__counter_103);
    vlSelfRef.__PVT___counter_T_197 = (1ULL + vlSelfRef.__PVT__counter_104);
    vlSelfRef.__PVT___counter_T_199 = (1ULL + vlSelfRef.__PVT__counter_105);
    vlSelfRef.__PVT___counter_T_201 = (1ULL + vlSelfRef.__PVT__counter_106);
    vlSelfRef.__PVT___counter_T_203 = (1ULL + vlSelfRef.__PVT__counter_107);
    vlSelfRef.__PVT___counter_T_205 = (1ULL + vlSelfRef.__PVT__counter_108);
    vlSelfRef.__PVT___counter_T_207 = (1ULL + vlSelfRef.__PVT__counter_109);
    vlSelfRef.__PVT___counter_T_209 = (1ULL + vlSelfRef.__PVT__counter_110);
    vlSelfRef.__PVT___counter_T_211 = (1ULL + vlSelfRef.__PVT__counter_111);
    vlSelfRef.__PVT___counter_T_213 = (1ULL + vlSelfRef.__PVT__counter_112);
    vlSelfRef.__PVT___counter_T_215 = (1ULL + vlSelfRef.__PVT__counter_113);
    vlSelfRef.__PVT___counter_T_217 = (1ULL + vlSelfRef.__PVT__counter_114);
    vlSelfRef.__PVT___counter_T_219 = (1ULL + vlSelfRef.__PVT__counter_115);
    vlSelfRef.__PVT___counter_T_221 = (1ULL + vlSelfRef.__PVT__counter_116);
    vlSelfRef.__PVT___counter_T_223 = (1ULL + vlSelfRef.__PVT__counter_117);
    vlSelfRef.__PVT___counter_T_225 = (1ULL + vlSelfRef.__PVT__counter_118);
    vlSelfRef.__PVT___counter_T_227 = (1ULL + vlSelfRef.__PVT__counter_119);
    vlSelfRef.__PVT___counter_T_229 = (1ULL + vlSelfRef.__PVT__counter_120);
    vlSelfRef.__PVT___counter_T_231 = (1ULL + vlSelfRef.__PVT__counter_121);
    vlSelfRef.__PVT___counter_T_233 = (1ULL + vlSelfRef.__PVT__counter_122);
    vlSelfRef.__PVT___counter_T_235 = (1ULL + vlSelfRef.__PVT__counter_123);
    vlSelfRef.__PVT___counter_T_237 = (1ULL + vlSelfRef.__PVT__counter_124);
    vlSelfRef.__PVT___counter_T_239 = (1ULL + vlSelfRef.__PVT__counter_125);
    vlSelfRef.__PVT___counter_T_241 = (1ULL + vlSelfRef.__PVT__counter_126);
    vlSelfRef.__PVT___counter_T_243 = (1ULL + vlSelfRef.__PVT__counter_127);
    vlSelfRef.__PVT___counter_T_245 = (1ULL + vlSelfRef.__PVT__counter_128);
    vlSelfRef.__PVT___counter_T_247 = (1ULL + vlSelfRef.__PVT__counter_129);
    vlSelfRef.__PVT___counter_T_249 = (1ULL + vlSelfRef.__PVT__counter_130);
    vlSelfRef.__PVT___counter_T_251 = (1ULL + vlSelfRef.__PVT__counter_131);
    vlSelfRef.__PVT___counter_T_253 = (1ULL + vlSelfRef.__PVT__counter_132);
    vlSelfRef.__PVT___counter_T_255 = (1ULL + vlSelfRef.__PVT__counter_133);
    vlSelfRef.__PVT___counter_T_257 = (1ULL + vlSelfRef.__PVT__counter_134);
    vlSelfRef.__PVT___counter_T_259 = (1ULL + vlSelfRef.__PVT__counter_135);
    vlSelfRef.__PVT___counter_T_261 = (1ULL + vlSelfRef.__PVT__counter_136);
    vlSelfRef.__PVT___counter_T_263 = (1ULL + vlSelfRef.__PVT__counter_137);
    vlSelfRef.__PVT___counter_T_265 = (1ULL + vlSelfRef.__PVT__counter_138);
    vlSelfRef.__PVT___counter_T_267 = (1ULL + vlSelfRef.__PVT__counter_139);
    vlSelfRef.__PVT___counter_T_269 = (1ULL + vlSelfRef.__PVT__counter_140);
    vlSelfRef.__PVT___counter_T_271 = (1ULL + vlSelfRef.__PVT__counter_141);
    vlSelfRef.__PVT___counter_T_273 = (1ULL + vlSelfRef.__PVT__counter_142);
    vlSelfRef.__PVT___counter_T_275 = (1ULL + vlSelfRef.__PVT__counter_143);
    vlSelfRef.__PVT___counter_T_277 = (1ULL + vlSelfRef.__PVT__counter_144);
    vlSelfRef.__PVT___counter_T_279 = (1ULL + vlSelfRef.__PVT__counter_145);
    vlSelfRef.__PVT___counter_T_281 = (1ULL + vlSelfRef.__PVT__counter_146);
    vlSelfRef.__PVT___counter_T_283 = (1ULL + vlSelfRef.__PVT__counter_147);
    vlSelfRef.__PVT___counter_T_285 = (1ULL + vlSelfRef.__PVT__counter_148);
    vlSelfRef.__PVT___counter_T_287 = (1ULL + vlSelfRef.__PVT__counter_149);
    vlSelfRef.__PVT___counter_T_289 = (1ULL + vlSelfRef.__PVT__counter_150);
    vlSelfRef.__PVT___counter_T_291 = (1ULL + vlSelfRef.__PVT__counter_151);
    vlSelfRef.__PVT___counter_T_293 = (1ULL + vlSelfRef.__PVT__counter_152);
    vlSelfRef.__PVT___counter_T_295 = (1ULL + vlSelfRef.__PVT__counter_153);
    vlSelfRef.__PVT___counter_T_297 = (1ULL + vlSelfRef.__PVT__counter_154);
    vlSelfRef.__PVT___counter_T_299 = (1ULL + vlSelfRef.__PVT__counter_155);
    vlSelfRef.__PVT___counter_T_301 = (1ULL + vlSelfRef.__PVT__counter_156);
    vlSelfRef.__PVT___counter_T_303 = (1ULL + vlSelfRef.__PVT__counter_157);
    vlSelfRef.__PVT___counter_T_305 = (1ULL + vlSelfRef.__PVT__counter_158);
    vlSelfRef.__PVT___counter_T_307 = (1ULL + vlSelfRef.__PVT__counter_159);
    vlSelfRef.__PVT___counter_T_309 = (1ULL + vlSelfRef.__PVT__counter_160);
    vlSelfRef.__PVT___counter_T_311 = (1ULL + vlSelfRef.__PVT__counter_161);
    vlSelfRef.__PVT___counter_T_313 = (1ULL + vlSelfRef.__PVT__counter_162);
    vlSelfRef.__PVT___counter_T_315 = (1ULL + vlSelfRef.__PVT__counter_163);
    vlSelfRef.__PVT___counter_T_317 = (1ULL + vlSelfRef.__PVT__counter_164);
    vlSelfRef.__PVT___counter_T_319 = (1ULL + vlSelfRef.__PVT__counter_165);
    vlSelfRef.__PVT___counter_T_321 = (1ULL + vlSelfRef.__PVT__counter_166);
    vlSelfRef.__PVT___counter_T_323 = (1ULL + vlSelfRef.__PVT__counter_167);
    vlSelfRef.__PVT__next_counter_7 = (vlSelfRef.__PVT__counter_7 
                                       + (QData)((IData)(
                                                         (((0xfU 
                                                            & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_0) 
                                                               >> 1U)) 
                                                           != 
                                                           (((IData)(vlSelfRef.__PVT__io_hasMergeA_REG_tag) 
                                                             << 1U) 
                                                            | (IData)(vlSelfRef.__PVT__io_hasMergeA_REG_set))) 
                                                          & (IData)(vlSelfRef.io_aMergeTask_valid)))));
    vlSelfRef.__PVT__enable = ((~ (IData)(vlSelfRef.__PVT__buffer_0_valid)) 
                               & (IData)(vlSelfRef.__PVT__enable_REG));
    vlSelfRef.__PVT__enable_1 = ((~ (IData)(vlSelfRef.__PVT__buffer_1_valid)) 
                                 & (IData)(vlSelfRef.__PVT__enable_REG_1));
    vlSelfRef.__PVT__enable_2 = ((~ (IData)(vlSelfRef.__PVT__buffer_2_valid)) 
                                 & (IData)(vlSelfRef.__PVT__enable_REG_2));
    vlSelfRef.__PVT__enable_3 = ((~ (IData)(vlSelfRef.__PVT__buffer_3_valid)) 
                                 & (IData)(vlSelfRef.__PVT__enable_REG_3));
    __PVT___cntEnable_T_4 = (7U & ((3U & ((IData)(vlSelfRef.__PVT__buffer_0_valid) 
                                          + (IData)(vlSelfRef.__PVT__buffer_1_valid))) 
                                   + (3U & ((IData)(vlSelfRef.__PVT__buffer_2_valid) 
                                            + (IData)(vlSelfRef.__PVT__buffer_3_valid)))));
    vlSelfRef.__PVT__insertIdx = ((IData)(vlSelfRef.__PVT__buffer_0_valid)
                                   ? ((IData)(vlSelfRef.__PVT__buffer_1_valid)
                                       ? ((IData)(vlSelfRef.__PVT__buffer_2_valid)
                                           ? 3U : 2U)
                                       : 1U) : 0U);
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
    vlSelfRef.__PVT__full = ((IData)(vlSelfRef.__PVT__buffer_0_valid) 
                             & ((IData)(vlSelfRef.__PVT__buffer_1_valid) 
                                & ((IData)(vlSelfRef.__PVT__buffer_2_valid) 
                                   & (IData)(vlSelfRef.__PVT__buffer_3_valid))));
    vlSelfRef.__PVT__next_max = (((IData)(vlSelfRef.__PVT__enable) 
                                  & ((QData)((IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                                     > vlSelfRef.__PVT__max))
                                  ? (QData)((IData)(vlSelfRef.__PVT__bufferTimer_0))
                                  : vlSelfRef.__PVT__max);
    vlSelfRef.__PVT__next_max_1 = (((IData)(vlSelfRef.__PVT__enable_1) 
                                    & ((QData)((IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                                       > vlSelfRef.__PVT__max_1))
                                    ? (QData)((IData)(vlSelfRef.__PVT__bufferTimer_1))
                                    : vlSelfRef.__PVT__max_1);
    vlSelfRef.__PVT__next_max_2 = (((IData)(vlSelfRef.__PVT__enable_2) 
                                    & ((QData)((IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                                       > vlSelfRef.__PVT__max_2))
                                    ? (QData)((IData)(vlSelfRef.__PVT__bufferTimer_2))
                                    : vlSelfRef.__PVT__max_2);
    vlSelfRef.__PVT__next_max_3 = (((IData)(vlSelfRef.__PVT__enable_3) 
                                    & ((QData)((IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                                       > vlSelfRef.__PVT__max_3))
                                    ? (QData)((IData)(vlSelfRef.__PVT__bufferTimer_3))
                                    : vlSelfRef.__PVT__max_3);
    vlSelfRef.__PVT__next_counter_8 = (vlSelfRef.__PVT__counter_8 
                                       + (QData)((IData)(
                                                         (0U 
                                                          == (IData)(__PVT___cntEnable_T_4)))));
    vlSelfRef.__PVT__next_counter_9 = (vlSelfRef.__PVT__counter_9 
                                       + (QData)((IData)(
                                                         (1U 
                                                          == (IData)(__PVT___cntEnable_T_4)))));
    vlSelfRef.__PVT__next_counter_10 = (vlSelfRef.__PVT__counter_10 
                                        + (QData)((IData)(
                                                          (2U 
                                                           == (IData)(__PVT___cntEnable_T_4)))));
    vlSelfRef.__PVT__next_counter_11 = (vlSelfRef.__PVT__counter_11 
                                        + (QData)((IData)(
                                                          (3U 
                                                           == (IData)(__PVT___cntEnable_T_4)))));
    vlSelfRef.__PVT__next_counter_6 = (vlSelfRef.__PVT__counter_6 
                                       + (QData)((IData)(
                                                         ((~ (IData)(vlSelfRef.__PVT___io_out_valid_T)) 
                                                          & (IData)(vlSelfRef.__PVT__chosenQ__DOT__maybe_full)))));
    vlSelfRef.__PVT__next_counter_3 = (vlSelfRef.__PVT__counter_3 
                                       + (QData)((IData)(vlSelfRef.__PVT__full)));
}

VL_ATTR_COLD void VVerifyTop_RequestBuffer___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf__1(VVerifyTop_RequestBuffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_RequestBuffer___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__a_reqBuf__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __PVT___waitMSUpdate_T;
    __PVT___waitMSUpdate_T = 0;
    // Body
    vlSelfRef.__PVT___canFlow_T_46 = (1U & (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toReqBuf_0) 
                                               | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mainPipe.io_toReqBuf_1))));
    vlSelfRef.__PVT___canFlow_T_10 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                                      & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_msInfo_bits_willFree)) 
                                         & (((1U & 
                                              ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_0) 
                                               >> 1U)) 
                                             == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set)) 
                                            & (((7U 
                                                 & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_0) 
                                                    >> 2U)) 
                                                == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_tag)) 
                                               | (((7U 
                                                    & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_0) 
                                                       >> 2U)) 
                                                   == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_tag)) 
                                                  & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__state_w_releaseack)))))));
    vlSelfRef.__PVT___canFlow_T_28 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid) 
                                      & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_msInfo_bits_willFree)) 
                                         & (((1U & 
                                              ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_0) 
                                               >> 1U)) 
                                             == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_set)) 
                                            & (((7U 
                                                 & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_0) 
                                                    >> 2U)) 
                                                == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_tag)) 
                                               | (((7U 
                                                    & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_0) 
                                                       >> 2U)) 
                                                   == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_tag)) 
                                                  & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__state_w_releaseack)))))));
    vlSelfRef.__PVT__dup = (((IData)(vlSelfRef.__PVT__buffer_3_valid) 
                             & ((0xfU & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_0) 
                                         >> 1U)) == 
                                (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                  << 1U) | (IData)(vlSelfRef.__PVT__buffer_3_task_set)))) 
                            | (((IData)(vlSelfRef.__PVT__buffer_2_valid) 
                                & ((0xfU & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_0) 
                                            >> 1U)) 
                                   == (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                        << 1U) | (IData)(vlSelfRef.__PVT__buffer_2_task_set)))) 
                               | (((IData)(vlSelfRef.__PVT__buffer_1_valid) 
                                   & ((0xfU & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_0) 
                                               >> 1U)) 
                                      == (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                           << 1U) | (IData)(vlSelfRef.__PVT__buffer_1_task_set)))) 
                                  | (((IData)(vlSelfRef.__PVT__buffer_0_valid) 
                                      & ((0xfU & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_0) 
                                                  >> 1U)) 
                                         == (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.__PVT__buffer_0_task_set)))) 
                                     | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid) 
                                         & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_acquire) 
                                             | (5U 
                                                == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_opcode))) 
                                            & ((0xfU 
                                                & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_0) 
                                                   >> 1U)) 
                                               == (
                                                   ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_tag) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_set))))) 
                                        | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid) 
                                            & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_acquire) 
                                                | (5U 
                                                   == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_opcode))) 
                                               & ((0xfU 
                                                   & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_0) 
                                                      >> 1U)) 
                                                  == 
                                                  (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_tag) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_set))))) 
                                           | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid) 
                                               & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_acquire) 
                                                   | (5U 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_opcode))) 
                                                  & ((0xfU 
                                                      & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_0) 
                                                         >> 1U)) 
                                                     == 
                                                     (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_tag) 
                                                       << 1U) 
                                                      | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_set))))) 
                                              | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                                                 & (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_acquire) 
                                                     | (5U 
                                                        == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_opcode))) 
                                                    & ((0xfU 
                                                        & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_0) 
                                                           >> 1U)) 
                                                       == 
                                                       (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_tag) 
                                                         << 1U) 
                                                        | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set))))))))))));
    vlSelfRef.__PVT___waitMSUpdate_T_38 = (((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid) 
                                              & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_msInfo_bits_willFree)) 
                                                 & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_set)) 
                                                    & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                        == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_tag)) 
                                                       | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                           == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_tag)) 
                                                          & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__state_w_releaseack))))))) 
                                             << 3U) 
                                            | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid) 
                                                & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_msInfo_bits_willFree)) 
                                                   & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                       == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_set)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                          == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_tag)) 
                                                         | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                             == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_tag)) 
                                                            & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__state_w_releaseack))))))) 
                                               << 2U)) 
                                           | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid) 
                                                & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_msInfo_bits_willFree)) 
                                                   & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                       == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_set)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                          == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_tag)) 
                                                         | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                             == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_tag)) 
                                                            & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__state_w_releaseack))))))) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                                                 & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_msInfo_bits_willFree)) 
                                                    & (((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                                        == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set)) 
                                                       & (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                           == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_tag)) 
                                                          | (((IData)(vlSelfRef.__PVT__buffer_0_task_tag) 
                                                              == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_tag)) 
                                                             & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__state_w_releaseack)))))))));
    vlSelfRef.__PVT___waitMSUpdate_T_77 = (((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid) 
                                              & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_msInfo_bits_willFree)) 
                                                 & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                     == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_set)) 
                                                    & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                        == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_tag)) 
                                                       | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                           == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_tag)) 
                                                          & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__state_w_releaseack))))))) 
                                             << 3U) 
                                            | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid) 
                                                & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_msInfo_bits_willFree)) 
                                                   & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                       == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_set)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                          == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_tag)) 
                                                         | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                             == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_tag)) 
                                                            & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__state_w_releaseack))))))) 
                                               << 2U)) 
                                           | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid) 
                                                & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_msInfo_bits_willFree)) 
                                                   & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                       == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_set)) 
                                                      & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                          == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_tag)) 
                                                         | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                             == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_tag)) 
                                                            & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__state_w_releaseack))))))) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                                                 & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_msInfo_bits_willFree)) 
                                                    & (((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                                        == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set)) 
                                                       & (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                           == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_tag)) 
                                                          | (((IData)(vlSelfRef.__PVT__buffer_1_task_tag) 
                                                              == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_tag)) 
                                                             & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__state_w_releaseack)))))))));
    vlSelfRef.__PVT___waitMSUpdate_T_116 = (((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid) 
                                               & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_msInfo_bits_willFree)) 
                                                  & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_set)) 
                                                     & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                         == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_tag)) 
                                                        | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                            == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_tag)) 
                                                           & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__state_w_releaseack))))))) 
                                              << 3U) 
                                             | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid) 
                                                 & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_msInfo_bits_willFree)) 
                                                    & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                        == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_set)) 
                                                       & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                           == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_tag)) 
                                                          | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                              == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_tag)) 
                                                             & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__state_w_releaseack))))))) 
                                                << 2U)) 
                                            | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid) 
                                                 & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_msInfo_bits_willFree)) 
                                                    & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                        == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_set)) 
                                                       & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                           == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_tag)) 
                                                          | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                              == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_tag)) 
                                                             & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__state_w_releaseack))))))) 
                                                << 1U) 
                                               | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                                                  & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_msInfo_bits_willFree)) 
                                                     & (((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                                         == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                            == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_tag)) 
                                                           | (((IData)(vlSelfRef.__PVT__buffer_2_task_tag) 
                                                               == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_tag)) 
                                                              & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__state_w_releaseack)))))))));
    vlSelfRef.__PVT___waitMSUpdate_T_155 = (((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid) 
                                               & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_msInfo_bits_willFree)) 
                                                  & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                      == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_set)) 
                                                     & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                         == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_tag)) 
                                                        | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                            == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_tag)) 
                                                           & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__state_w_releaseack))))))) 
                                              << 3U) 
                                             | (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid) 
                                                 & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_msInfo_bits_willFree)) 
                                                    & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                        == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_set)) 
                                                       & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                           == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_tag)) 
                                                          | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                              == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__dirResult_tag)) 
                                                             & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__state_w_releaseack))))))) 
                                                << 2U)) 
                                            | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid) 
                                                 & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_msInfo_bits_willFree)) 
                                                    & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                        == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_set)) 
                                                       & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                           == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_tag)) 
                                                          | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                              == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_tag)) 
                                                             & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__state_w_releaseack))))))) 
                                                << 1U) 
                                               | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid) 
                                                  & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_msInfo_bits_willFree)) 
                                                     & (((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                                         == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_set)) 
                                                        & (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                            == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_tag)) 
                                                           | (((IData)(vlSelfRef.__PVT__buffer_3_task_tag) 
                                                               == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__dirResult_tag)) 
                                                              & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__state_w_releaseack)))))))));
    __PVT___waitMSUpdate_T = (0xfU & (~ (((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_msInfo_bits_willFree) 
                                            & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid)) 
                                           << 3U) | 
                                          (((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__io_msInfo_bits_willFree) 
                                            & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_2.__PVT__req_valid)) 
                                           << 2U)) 
                                         | ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_msInfo_bits_willFree) 
                                              & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid)) 
                                             << 1U) 
                                            | ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__io_msInfo_bits_willFree) 
                                               & (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_0.__PVT__req_valid))))));
    vlSelfRef.__PVT___canFlow_T_37 = ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_valid) 
                                      & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__io_msInfo_bits_willFree)) 
                                         & (((1U & 
                                              ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_0) 
                                               >> 1U)) 
                                             == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_set)) 
                                            & (((7U 
                                                 & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_0) 
                                                    >> 2U)) 
                                                == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__req_tag)) 
                                               | (((7U 
                                                    & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_0) 
                                                       >> 2U)) 
                                                   == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__dirResult_tag)) 
                                                  & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_3.__PVT__state_w_releaseack)))))));
    vlSelfRef.__VdfgRegularize_ha1527a7f_2_6 = ((((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_valid) 
                                                  & ((~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__io_msInfo_bits_willFree)) 
                                                     & (((1U 
                                                          & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_0) 
                                                             >> 1U)) 
                                                         == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_set)) 
                                                        & (((7U 
                                                             & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_0) 
                                                                >> 2U)) 
                                                            == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__req_tag)) 
                                                           | (((7U 
                                                                & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_0) 
                                                                   >> 2U)) 
                                                               == (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__dirResult_tag)) 
                                                              & (~ (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1__DOT__slices_0__DOT__mshrCtl__mshrs_1.__PVT__state_w_releaseack))))))) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__PVT___canFlow_T_10));
    vlSelfRef.__PVT__next_counter = (vlSelfRef.__PVT__counter 
                                     + (QData)((IData)(vlSelfRef.__PVT__dup)));
    vlSelfRef.__PVT___waitMSUpdate_T_1 = ((IData)(__PVT___waitMSUpdate_T) 
                                          & (IData)(vlSelfRef.__PVT__buffer_0_waitMS));
    vlSelfRef.__PVT___waitMSUpdate_T_40 = ((IData)(__PVT___waitMSUpdate_T) 
                                           & (IData)(vlSelfRef.__PVT__buffer_1_waitMS));
    vlSelfRef.__PVT___waitMSUpdate_T_79 = ((IData)(__PVT___waitMSUpdate_T) 
                                           & (IData)(vlSelfRef.__PVT__buffer_2_waitMS));
    vlSelfRef.__PVT___waitMSUpdate_T_118 = ((IData)(__PVT___waitMSUpdate_T) 
                                            & (IData)(vlSelfRef.__PVT__buffer_3_waitMS));
    vlSelfRef.__PVT___canFlow_T_38 = (((IData)(vlSelfRef.__PVT___canFlow_T_37) 
                                       << 3U) | (((IData)(vlSelfRef.__PVT___canFlow_T_28) 
                                                  << 2U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_ha1527a7f_2_6)));
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
    vlSelfRef.__PVT__canFlow = ((~ (IData)(vlSelfRef.__PVT__full)) 
                                & ((~ (IData)((0U != (IData)(vlSelfRef.__PVT___canFlow_T_38)))) 
                                   & ((~ (IData)(vlSelfRef.__PVT__chosenQ__DOT__maybe_full)) 
                                      & (IData)(vlSelfRef.__PVT___canFlow_T_46))));
    if (vlSelfRef.__PVT__canFlow) {
        vlSelfRef.io_out_bits_opcode = 5U;
        vlSelfRef.io_out_bits_set = (1U & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_0) 
                                           >> 1U));
    } else {
        vlSelfRef.io_out_bits_opcode = vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_opcode
            [0U];
        vlSelfRef.io_out_bits_set = (1U & vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_set
                                     [0U]);
    }
    vlSelfRef.io_out_valid = (((IData)(vlSelfRef.__PVT___io_out_valid_T) 
                               & (IData)(vlSelfRef.__PVT__chosenQ__DOT__maybe_full)) 
                              | (IData)(vlSelfRef.__PVT__canFlow));
    vlSelfRef.__PVT___pipeBlockOut_T_2 = ((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                          == (IData)(vlSelfRef.io_out_bits_set));
    vlSelfRef.__PVT___pipeBlockOut_T_3 = ((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                          == (IData)(vlSelfRef.io_out_bits_set));
    vlSelfRef.__PVT___pipeBlockOut_T_4 = ((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                          == (IData)(vlSelfRef.io_out_bits_set));
    vlSelfRef.__PVT___pipeBlockOut_T_5 = ((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                          == (IData)(vlSelfRef.io_out_bits_set));
    vlSelfRef.__PVT__issueArb_io_in_0_valid = ((IData)(vlSelfRef.__PVT__buffer_0_valid) 
                                               & ((~ 
                                                   ((IData)(vlSelfRef.io_out_valid) 
                                                    & (IData)(vlSelfRef.__PVT___pipeBlockOut_T_2))) 
                                                  & (IData)(vlSelfRef.__PVT__buffer_0_rdy)));
    vlSelfRef.__PVT__issueArb_io_in_1_valid = ((IData)(vlSelfRef.__PVT__buffer_1_valid) 
                                               & ((~ 
                                                   ((IData)(vlSelfRef.io_out_valid) 
                                                    & (IData)(vlSelfRef.__PVT___pipeBlockOut_T_3))) 
                                                  & (IData)(vlSelfRef.__PVT__buffer_1_rdy)));
    vlSelfRef.__PVT__issueArb_io_in_2_valid = ((IData)(vlSelfRef.__PVT__buffer_2_valid) 
                                               & ((~ 
                                                   ((IData)(vlSelfRef.io_out_valid) 
                                                    & (IData)(vlSelfRef.__PVT___pipeBlockOut_T_4))) 
                                                  & (IData)(vlSelfRef.__PVT__buffer_2_rdy)));
    vlSelfRef.__PVT__issueArb_io_in_3_valid = ((IData)(vlSelfRef.__PVT__buffer_3_valid) 
                                               & ((~ 
                                                   ((IData)(vlSelfRef.io_out_valid) 
                                                    & (IData)(vlSelfRef.__PVT___pipeBlockOut_T_5))) 
                                                  & (IData)(vlSelfRef.__PVT__buffer_3_rdy)));
    vlSelfRef.__PVT__issueArb_io_chosen = (((IData)(vlSelfRef.__PVT__issueArb_io_in_1_valid) 
                                            & (1U > (IData)(vlSelfRef.__PVT__issueArb__DOT__ctrl_validMask_grantMask_lastGrant)))
                                            ? 1U : 
                                           (((IData)(vlSelfRef.__PVT__issueArb_io_in_2_valid) 
                                             & (2U 
                                                > (IData)(vlSelfRef.__PVT__issueArb__DOT__ctrl_validMask_grantMask_lastGrant)))
                                             ? 2U : 
                                            (((IData)(vlSelfRef.__PVT__issueArb_io_in_3_valid) 
                                              & (3U 
                                                 > (IData)(vlSelfRef.__PVT__issueArb__DOT__ctrl_validMask_grantMask_lastGrant)))
                                              ? 3U : 
                                             ((IData)(vlSelfRef.__PVT__issueArb_io_in_0_valid)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__issueArb_io_in_1_valid)
                                                   ? 1U
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__issueArb_io_in_2_valid)
                                                    ? 2U
                                                    : 3U))))));
}

VL_ATTR_COLD void VVerifyTop_RequestBuffer___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf__0(VVerifyTop_RequestBuffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_RequestBuffer___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __PVT___cntEnable_T_4;
    __PVT___cntEnable_T_4 = 0;
    // Body
    vlSelfRef.__PVT__next_counter_5 = vlSelfRef.__PVT__counter_5;
    vlSelfRef.__PVT___bufferTimer_0_T_1 = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__bufferTimer_0)));
    vlSelfRef.__PVT___bufferTimer_1_T_1 = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__bufferTimer_1)));
    vlSelfRef.__PVT___bufferTimer_2_T_1 = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__bufferTimer_2)));
    vlSelfRef.__PVT___bufferTimer_3_T_1 = (0xffffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelfRef.__PVT__bufferTimer_3)));
    vlSelfRef.__PVT___counter_T_13 = (1ULL + vlSelfRef.__PVT__counter_12);
    vlSelfRef.__PVT___counter_T_15 = (1ULL + vlSelfRef.__PVT__counter_13);
    vlSelfRef.__PVT___counter_T_17 = (1ULL + vlSelfRef.__PVT__counter_14);
    vlSelfRef.__PVT___counter_T_19 = (1ULL + vlSelfRef.__PVT__counter_15);
    vlSelfRef.__PVT___counter_T_21 = (1ULL + vlSelfRef.__PVT__counter_16);
    vlSelfRef.__PVT___counter_T_23 = (1ULL + vlSelfRef.__PVT__counter_17);
    vlSelfRef.__PVT___counter_T_25 = (1ULL + vlSelfRef.__PVT__counter_18);
    vlSelfRef.__PVT___counter_T_27 = (1ULL + vlSelfRef.__PVT__counter_19);
    vlSelfRef.__PVT___counter_T_29 = (1ULL + vlSelfRef.__PVT__counter_20);
    vlSelfRef.__PVT___counter_T_31 = (1ULL + vlSelfRef.__PVT__counter_21);
    vlSelfRef.__PVT___counter_T_33 = (1ULL + vlSelfRef.__PVT__counter_22);
    vlSelfRef.__PVT___counter_T_35 = (1ULL + vlSelfRef.__PVT__counter_23);
    vlSelfRef.__PVT___counter_T_37 = (1ULL + vlSelfRef.__PVT__counter_24);
    vlSelfRef.__PVT___counter_T_39 = (1ULL + vlSelfRef.__PVT__counter_25);
    vlSelfRef.__PVT___counter_T_41 = (1ULL + vlSelfRef.__PVT__counter_26);
    vlSelfRef.__PVT___counter_T_43 = (1ULL + vlSelfRef.__PVT__counter_27);
    vlSelfRef.__PVT___counter_T_45 = (1ULL + vlSelfRef.__PVT__counter_28);
    vlSelfRef.__PVT___counter_T_47 = (1ULL + vlSelfRef.__PVT__counter_29);
    vlSelfRef.__PVT___counter_T_49 = (1ULL + vlSelfRef.__PVT__counter_30);
    vlSelfRef.__PVT___counter_T_51 = (1ULL + vlSelfRef.__PVT__counter_31);
    vlSelfRef.__PVT___counter_T_53 = (1ULL + vlSelfRef.__PVT__counter_32);
    vlSelfRef.__PVT___counter_T_55 = (1ULL + vlSelfRef.__PVT__counter_33);
    vlSelfRef.__PVT___counter_T_57 = (1ULL + vlSelfRef.__PVT__counter_34);
    vlSelfRef.__PVT___counter_T_59 = (1ULL + vlSelfRef.__PVT__counter_35);
    vlSelfRef.__PVT___counter_T_61 = (1ULL + vlSelfRef.__PVT__counter_36);
    vlSelfRef.__PVT___counter_T_63 = (1ULL + vlSelfRef.__PVT__counter_37);
    vlSelfRef.__PVT___counter_T_65 = (1ULL + vlSelfRef.__PVT__counter_38);
    vlSelfRef.__PVT___counter_T_67 = (1ULL + vlSelfRef.__PVT__counter_39);
    vlSelfRef.__PVT___counter_T_69 = (1ULL + vlSelfRef.__PVT__counter_40);
    vlSelfRef.__PVT___counter_T_71 = (1ULL + vlSelfRef.__PVT__counter_41);
    vlSelfRef.__PVT___counter_T_73 = (1ULL + vlSelfRef.__PVT__counter_42);
    vlSelfRef.__PVT___counter_T_75 = (1ULL + vlSelfRef.__PVT__counter_43);
    vlSelfRef.__PVT___counter_T_77 = (1ULL + vlSelfRef.__PVT__counter_44);
    vlSelfRef.__PVT___counter_T_79 = (1ULL + vlSelfRef.__PVT__counter_45);
    vlSelfRef.__PVT___counter_T_81 = (1ULL + vlSelfRef.__PVT__counter_46);
    vlSelfRef.__PVT___counter_T_83 = (1ULL + vlSelfRef.__PVT__counter_47);
    vlSelfRef.__PVT___counter_T_85 = (1ULL + vlSelfRef.__PVT__counter_48);
    vlSelfRef.__PVT___counter_T_87 = (1ULL + vlSelfRef.__PVT__counter_49);
    vlSelfRef.__PVT___counter_T_89 = (1ULL + vlSelfRef.__PVT__counter_50);
    vlSelfRef.__PVT___counter_T_91 = (1ULL + vlSelfRef.__PVT__counter_51);
    vlSelfRef.__PVT___counter_T_93 = (1ULL + vlSelfRef.__PVT__counter_52);
    vlSelfRef.__PVT___counter_T_95 = (1ULL + vlSelfRef.__PVT__counter_53);
    vlSelfRef.__PVT___counter_T_97 = (1ULL + vlSelfRef.__PVT__counter_54);
    vlSelfRef.__PVT___counter_T_99 = (1ULL + vlSelfRef.__PVT__counter_55);
    vlSelfRef.__PVT___counter_T_101 = (1ULL + vlSelfRef.__PVT__counter_56);
    vlSelfRef.__PVT___counter_T_103 = (1ULL + vlSelfRef.__PVT__counter_57);
    vlSelfRef.__PVT___counter_T_105 = (1ULL + vlSelfRef.__PVT__counter_58);
    vlSelfRef.__PVT___counter_T_107 = (1ULL + vlSelfRef.__PVT__counter_59);
    vlSelfRef.__PVT___counter_T_109 = (1ULL + vlSelfRef.__PVT__counter_60);
    vlSelfRef.__PVT___counter_T_111 = (1ULL + vlSelfRef.__PVT__counter_61);
    vlSelfRef.__PVT___counter_T_113 = (1ULL + vlSelfRef.__PVT__counter_62);
    vlSelfRef.__PVT___counter_T_115 = (1ULL + vlSelfRef.__PVT__counter_63);
    vlSelfRef.__PVT___counter_T_117 = (1ULL + vlSelfRef.__PVT__counter_64);
    vlSelfRef.__PVT___counter_T_119 = (1ULL + vlSelfRef.__PVT__counter_65);
    vlSelfRef.__PVT___counter_T_121 = (1ULL + vlSelfRef.__PVT__counter_66);
    vlSelfRef.__PVT___counter_T_123 = (1ULL + vlSelfRef.__PVT__counter_67);
    vlSelfRef.__PVT___counter_T_125 = (1ULL + vlSelfRef.__PVT__counter_68);
    vlSelfRef.__PVT___counter_T_127 = (1ULL + vlSelfRef.__PVT__counter_69);
    vlSelfRef.__PVT___counter_T_129 = (1ULL + vlSelfRef.__PVT__counter_70);
    vlSelfRef.__PVT___counter_T_131 = (1ULL + vlSelfRef.__PVT__counter_71);
    vlSelfRef.__PVT___counter_T_133 = (1ULL + vlSelfRef.__PVT__counter_72);
    vlSelfRef.__PVT___counter_T_135 = (1ULL + vlSelfRef.__PVT__counter_73);
    vlSelfRef.__PVT___counter_T_137 = (1ULL + vlSelfRef.__PVT__counter_74);
    vlSelfRef.__PVT___counter_T_139 = (1ULL + vlSelfRef.__PVT__counter_75);
    vlSelfRef.__PVT___counter_T_141 = (1ULL + vlSelfRef.__PVT__counter_76);
    vlSelfRef.__PVT___counter_T_143 = (1ULL + vlSelfRef.__PVT__counter_77);
    vlSelfRef.__PVT___counter_T_145 = (1ULL + vlSelfRef.__PVT__counter_78);
    vlSelfRef.__PVT___counter_T_147 = (1ULL + vlSelfRef.__PVT__counter_79);
    vlSelfRef.__PVT___counter_T_149 = (1ULL + vlSelfRef.__PVT__counter_80);
    vlSelfRef.__PVT___counter_T_151 = (1ULL + vlSelfRef.__PVT__counter_81);
    vlSelfRef.__PVT___counter_T_153 = (1ULL + vlSelfRef.__PVT__counter_82);
    vlSelfRef.__PVT___counter_T_155 = (1ULL + vlSelfRef.__PVT__counter_83);
    vlSelfRef.__PVT___counter_T_157 = (1ULL + vlSelfRef.__PVT__counter_84);
    vlSelfRef.__PVT___counter_T_159 = (1ULL + vlSelfRef.__PVT__counter_85);
    vlSelfRef.__PVT___counter_T_161 = (1ULL + vlSelfRef.__PVT__counter_86);
    vlSelfRef.__PVT___counter_T_163 = (1ULL + vlSelfRef.__PVT__counter_87);
    vlSelfRef.__PVT___counter_T_165 = (1ULL + vlSelfRef.__PVT__counter_88);
    vlSelfRef.__PVT___counter_T_167 = (1ULL + vlSelfRef.__PVT__counter_89);
    vlSelfRef.__PVT___counter_T_169 = (1ULL + vlSelfRef.__PVT__counter_90);
    vlSelfRef.__PVT___counter_T_171 = (1ULL + vlSelfRef.__PVT__counter_91);
    vlSelfRef.__PVT___counter_T_173 = (1ULL + vlSelfRef.__PVT__counter_92);
    vlSelfRef.__PVT___counter_T_175 = (1ULL + vlSelfRef.__PVT__counter_93);
    vlSelfRef.__PVT___counter_T_177 = (1ULL + vlSelfRef.__PVT__counter_94);
    vlSelfRef.__PVT___counter_T_179 = (1ULL + vlSelfRef.__PVT__counter_95);
    vlSelfRef.__PVT___counter_T_181 = (1ULL + vlSelfRef.__PVT__counter_96);
    vlSelfRef.__PVT___counter_T_183 = (1ULL + vlSelfRef.__PVT__counter_97);
    vlSelfRef.__PVT___counter_T_185 = (1ULL + vlSelfRef.__PVT__counter_98);
    vlSelfRef.__PVT___counter_T_187 = (1ULL + vlSelfRef.__PVT__counter_99);
    vlSelfRef.__PVT___counter_T_189 = (1ULL + vlSelfRef.__PVT__counter_100);
    vlSelfRef.__PVT___counter_T_191 = (1ULL + vlSelfRef.__PVT__counter_101);
    vlSelfRef.__PVT___counter_T_193 = (1ULL + vlSelfRef.__PVT__counter_102);
    vlSelfRef.__PVT___counter_T_195 = (1ULL + vlSelfRef.__PVT__counter_103);
    vlSelfRef.__PVT___counter_T_197 = (1ULL + vlSelfRef.__PVT__counter_104);
    vlSelfRef.__PVT___counter_T_199 = (1ULL + vlSelfRef.__PVT__counter_105);
    vlSelfRef.__PVT___counter_T_201 = (1ULL + vlSelfRef.__PVT__counter_106);
    vlSelfRef.__PVT___counter_T_203 = (1ULL + vlSelfRef.__PVT__counter_107);
    vlSelfRef.__PVT___counter_T_205 = (1ULL + vlSelfRef.__PVT__counter_108);
    vlSelfRef.__PVT___counter_T_207 = (1ULL + vlSelfRef.__PVT__counter_109);
    vlSelfRef.__PVT___counter_T_209 = (1ULL + vlSelfRef.__PVT__counter_110);
    vlSelfRef.__PVT___counter_T_211 = (1ULL + vlSelfRef.__PVT__counter_111);
    vlSelfRef.__PVT___counter_T_213 = (1ULL + vlSelfRef.__PVT__counter_112);
    vlSelfRef.__PVT___counter_T_215 = (1ULL + vlSelfRef.__PVT__counter_113);
    vlSelfRef.__PVT___counter_T_217 = (1ULL + vlSelfRef.__PVT__counter_114);
    vlSelfRef.__PVT___counter_T_219 = (1ULL + vlSelfRef.__PVT__counter_115);
    vlSelfRef.__PVT___counter_T_221 = (1ULL + vlSelfRef.__PVT__counter_116);
    vlSelfRef.__PVT___counter_T_223 = (1ULL + vlSelfRef.__PVT__counter_117);
    vlSelfRef.__PVT___counter_T_225 = (1ULL + vlSelfRef.__PVT__counter_118);
    vlSelfRef.__PVT___counter_T_227 = (1ULL + vlSelfRef.__PVT__counter_119);
    vlSelfRef.__PVT___counter_T_229 = (1ULL + vlSelfRef.__PVT__counter_120);
    vlSelfRef.__PVT___counter_T_231 = (1ULL + vlSelfRef.__PVT__counter_121);
    vlSelfRef.__PVT___counter_T_233 = (1ULL + vlSelfRef.__PVT__counter_122);
    vlSelfRef.__PVT___counter_T_235 = (1ULL + vlSelfRef.__PVT__counter_123);
    vlSelfRef.__PVT___counter_T_237 = (1ULL + vlSelfRef.__PVT__counter_124);
    vlSelfRef.__PVT___counter_T_239 = (1ULL + vlSelfRef.__PVT__counter_125);
    vlSelfRef.__PVT___counter_T_241 = (1ULL + vlSelfRef.__PVT__counter_126);
    vlSelfRef.__PVT___counter_T_243 = (1ULL + vlSelfRef.__PVT__counter_127);
    vlSelfRef.__PVT___counter_T_245 = (1ULL + vlSelfRef.__PVT__counter_128);
    vlSelfRef.__PVT___counter_T_247 = (1ULL + vlSelfRef.__PVT__counter_129);
    vlSelfRef.__PVT___counter_T_249 = (1ULL + vlSelfRef.__PVT__counter_130);
    vlSelfRef.__PVT___counter_T_251 = (1ULL + vlSelfRef.__PVT__counter_131);
    vlSelfRef.__PVT___counter_T_253 = (1ULL + vlSelfRef.__PVT__counter_132);
    vlSelfRef.__PVT___counter_T_255 = (1ULL + vlSelfRef.__PVT__counter_133);
    vlSelfRef.__PVT___counter_T_257 = (1ULL + vlSelfRef.__PVT__counter_134);
    vlSelfRef.__PVT___counter_T_259 = (1ULL + vlSelfRef.__PVT__counter_135);
    vlSelfRef.__PVT___counter_T_261 = (1ULL + vlSelfRef.__PVT__counter_136);
    vlSelfRef.__PVT___counter_T_263 = (1ULL + vlSelfRef.__PVT__counter_137);
    vlSelfRef.__PVT___counter_T_265 = (1ULL + vlSelfRef.__PVT__counter_138);
    vlSelfRef.__PVT___counter_T_267 = (1ULL + vlSelfRef.__PVT__counter_139);
    vlSelfRef.__PVT___counter_T_269 = (1ULL + vlSelfRef.__PVT__counter_140);
    vlSelfRef.__PVT___counter_T_271 = (1ULL + vlSelfRef.__PVT__counter_141);
    vlSelfRef.__PVT___counter_T_273 = (1ULL + vlSelfRef.__PVT__counter_142);
    vlSelfRef.__PVT___counter_T_275 = (1ULL + vlSelfRef.__PVT__counter_143);
    vlSelfRef.__PVT___counter_T_277 = (1ULL + vlSelfRef.__PVT__counter_144);
    vlSelfRef.__PVT___counter_T_279 = (1ULL + vlSelfRef.__PVT__counter_145);
    vlSelfRef.__PVT___counter_T_281 = (1ULL + vlSelfRef.__PVT__counter_146);
    vlSelfRef.__PVT___counter_T_283 = (1ULL + vlSelfRef.__PVT__counter_147);
    vlSelfRef.__PVT___counter_T_285 = (1ULL + vlSelfRef.__PVT__counter_148);
    vlSelfRef.__PVT___counter_T_287 = (1ULL + vlSelfRef.__PVT__counter_149);
    vlSelfRef.__PVT___counter_T_289 = (1ULL + vlSelfRef.__PVT__counter_150);
    vlSelfRef.__PVT___counter_T_291 = (1ULL + vlSelfRef.__PVT__counter_151);
    vlSelfRef.__PVT___counter_T_293 = (1ULL + vlSelfRef.__PVT__counter_152);
    vlSelfRef.__PVT___counter_T_295 = (1ULL + vlSelfRef.__PVT__counter_153);
    vlSelfRef.__PVT___counter_T_297 = (1ULL + vlSelfRef.__PVT__counter_154);
    vlSelfRef.__PVT___counter_T_299 = (1ULL + vlSelfRef.__PVT__counter_155);
    vlSelfRef.__PVT___counter_T_301 = (1ULL + vlSelfRef.__PVT__counter_156);
    vlSelfRef.__PVT___counter_T_303 = (1ULL + vlSelfRef.__PVT__counter_157);
    vlSelfRef.__PVT___counter_T_305 = (1ULL + vlSelfRef.__PVT__counter_158);
    vlSelfRef.__PVT___counter_T_307 = (1ULL + vlSelfRef.__PVT__counter_159);
    vlSelfRef.__PVT___counter_T_309 = (1ULL + vlSelfRef.__PVT__counter_160);
    vlSelfRef.__PVT___counter_T_311 = (1ULL + vlSelfRef.__PVT__counter_161);
    vlSelfRef.__PVT___counter_T_313 = (1ULL + vlSelfRef.__PVT__counter_162);
    vlSelfRef.__PVT___counter_T_315 = (1ULL + vlSelfRef.__PVT__counter_163);
    vlSelfRef.__PVT___counter_T_317 = (1ULL + vlSelfRef.__PVT__counter_164);
    vlSelfRef.__PVT___counter_T_319 = (1ULL + vlSelfRef.__PVT__counter_165);
    vlSelfRef.__PVT___counter_T_321 = (1ULL + vlSelfRef.__PVT__counter_166);
    vlSelfRef.__PVT___counter_T_323 = (1ULL + vlSelfRef.__PVT__counter_167);
    vlSelfRef.__PVT__next_counter_7 = (vlSelfRef.__PVT__counter_7 
                                       + (QData)((IData)(
                                                         (((0xfU 
                                                            & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_1) 
                                                               >> 1U)) 
                                                           != 
                                                           (((IData)(vlSelfRef.__PVT__io_hasMergeA_REG_tag) 
                                                             << 1U) 
                                                            | (IData)(vlSelfRef.__PVT__io_hasMergeA_REG_set))) 
                                                          & (IData)(vlSelfRef.io_aMergeTask_valid)))));
    vlSelfRef.__PVT__enable = ((~ (IData)(vlSelfRef.__PVT__buffer_0_valid)) 
                               & (IData)(vlSelfRef.__PVT__enable_REG));
    vlSelfRef.__PVT__enable_1 = ((~ (IData)(vlSelfRef.__PVT__buffer_1_valid)) 
                                 & (IData)(vlSelfRef.__PVT__enable_REG_1));
    vlSelfRef.__PVT__enable_2 = ((~ (IData)(vlSelfRef.__PVT__buffer_2_valid)) 
                                 & (IData)(vlSelfRef.__PVT__enable_REG_2));
    vlSelfRef.__PVT__enable_3 = ((~ (IData)(vlSelfRef.__PVT__buffer_3_valid)) 
                                 & (IData)(vlSelfRef.__PVT__enable_REG_3));
    __PVT___cntEnable_T_4 = (7U & ((3U & ((IData)(vlSelfRef.__PVT__buffer_0_valid) 
                                          + (IData)(vlSelfRef.__PVT__buffer_1_valid))) 
                                   + (3U & ((IData)(vlSelfRef.__PVT__buffer_2_valid) 
                                            + (IData)(vlSelfRef.__PVT__buffer_3_valid)))));
    vlSelfRef.__PVT__insertIdx = ((IData)(vlSelfRef.__PVT__buffer_0_valid)
                                   ? ((IData)(vlSelfRef.__PVT__buffer_1_valid)
                                       ? ((IData)(vlSelfRef.__PVT__buffer_2_valid)
                                           ? 3U : 2U)
                                       : 1U) : 0U);
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
    vlSelfRef.__PVT__full = ((IData)(vlSelfRef.__PVT__buffer_0_valid) 
                             & ((IData)(vlSelfRef.__PVT__buffer_1_valid) 
                                & ((IData)(vlSelfRef.__PVT__buffer_2_valid) 
                                   & (IData)(vlSelfRef.__PVT__buffer_3_valid))));
    vlSelfRef.__PVT__next_max = (((IData)(vlSelfRef.__PVT__enable) 
                                  & ((QData)((IData)(vlSelfRef.__PVT__bufferTimer_0)) 
                                     > vlSelfRef.__PVT__max))
                                  ? (QData)((IData)(vlSelfRef.__PVT__bufferTimer_0))
                                  : vlSelfRef.__PVT__max);
    vlSelfRef.__PVT__next_max_1 = (((IData)(vlSelfRef.__PVT__enable_1) 
                                    & ((QData)((IData)(vlSelfRef.__PVT__bufferTimer_1)) 
                                       > vlSelfRef.__PVT__max_1))
                                    ? (QData)((IData)(vlSelfRef.__PVT__bufferTimer_1))
                                    : vlSelfRef.__PVT__max_1);
    vlSelfRef.__PVT__next_max_2 = (((IData)(vlSelfRef.__PVT__enable_2) 
                                    & ((QData)((IData)(vlSelfRef.__PVT__bufferTimer_2)) 
                                       > vlSelfRef.__PVT__max_2))
                                    ? (QData)((IData)(vlSelfRef.__PVT__bufferTimer_2))
                                    : vlSelfRef.__PVT__max_2);
    vlSelfRef.__PVT__next_max_3 = (((IData)(vlSelfRef.__PVT__enable_3) 
                                    & ((QData)((IData)(vlSelfRef.__PVT__bufferTimer_3)) 
                                       > vlSelfRef.__PVT__max_3))
                                    ? (QData)((IData)(vlSelfRef.__PVT__bufferTimer_3))
                                    : vlSelfRef.__PVT__max_3);
    vlSelfRef.__PVT__next_counter_8 = (vlSelfRef.__PVT__counter_8 
                                       + (QData)((IData)(
                                                         (0U 
                                                          == (IData)(__PVT___cntEnable_T_4)))));
    vlSelfRef.__PVT__next_counter_9 = (vlSelfRef.__PVT__counter_9 
                                       + (QData)((IData)(
                                                         (1U 
                                                          == (IData)(__PVT___cntEnable_T_4)))));
    vlSelfRef.__PVT__next_counter_10 = (vlSelfRef.__PVT__counter_10 
                                        + (QData)((IData)(
                                                          (2U 
                                                           == (IData)(__PVT___cntEnable_T_4)))));
    vlSelfRef.__PVT__next_counter_11 = (vlSelfRef.__PVT__counter_11 
                                        + (QData)((IData)(
                                                          (3U 
                                                           == (IData)(__PVT___cntEnable_T_4)))));
    vlSelfRef.__PVT__next_counter_6 = (vlSelfRef.__PVT__counter_6 
                                       + (QData)((IData)(
                                                         ((~ (IData)(vlSelfRef.__PVT___io_out_valid_T)) 
                                                          & (IData)(vlSelfRef.__PVT__chosenQ__DOT__maybe_full)))));
    vlSelfRef.__PVT__next_counter_3 = (vlSelfRef.__PVT__counter_3 
                                       + (QData)((IData)(vlSelfRef.__PVT__full)));
}

VL_ATTR_COLD void VVerifyTop_RequestBuffer___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf__1(VVerifyTop_RequestBuffer* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VVerifyTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VVerifyTop_RequestBuffer___stl_sequent__TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__a_reqBuf__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __PVT___waitMSUpdate_T;
    __PVT___waitMSUpdate_T = 0;
    // Body
    vlSelfRef.__PVT___canFlow_T_46 = (1U & (~ ((IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toReqBuf_0) 
                                               | (IData)(vlSymsp->TOP__VerifyTop__DOT__coupledL2AsL1_1__DOT__slices_0__DOT__mainPipe.io_toReqBuf_1))));
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
    vlSelfRef.__PVT__next_counter = (vlSelfRef.__PVT__counter 
                                     + (QData)((IData)(vlSelfRef.__PVT__dup)));
    vlSelfRef.__PVT___waitMSUpdate_T_1 = ((IData)(__PVT___waitMSUpdate_T) 
                                          & (IData)(vlSelfRef.__PVT__buffer_0_waitMS));
    vlSelfRef.__PVT___waitMSUpdate_T_40 = ((IData)(__PVT___waitMSUpdate_T) 
                                           & (IData)(vlSelfRef.__PVT__buffer_1_waitMS));
    vlSelfRef.__PVT___waitMSUpdate_T_79 = ((IData)(__PVT___waitMSUpdate_T) 
                                           & (IData)(vlSelfRef.__PVT__buffer_2_waitMS));
    vlSelfRef.__PVT___waitMSUpdate_T_118 = ((IData)(__PVT___waitMSUpdate_T) 
                                            & (IData)(vlSelfRef.__PVT__buffer_3_waitMS));
    vlSelfRef.__PVT___canFlow_T_38 = (((IData)(vlSelfRef.__PVT___canFlow_T_37) 
                                       << 3U) | (((IData)(vlSelfRef.__PVT___canFlow_T_28) 
                                                  << 2U) 
                                                 | (IData)(vlSelfRef.__VdfgRegularize_ha1527a7f_2_6)));
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
    vlSelfRef.__PVT__canFlow = ((~ (IData)(vlSelfRef.__PVT__full)) 
                                & ((~ (IData)((0U != (IData)(vlSelfRef.__PVT___canFlow_T_38)))) 
                                   & ((~ (IData)(vlSelfRef.__PVT__chosenQ__DOT__maybe_full)) 
                                      & (IData)(vlSelfRef.__PVT___canFlow_T_46))));
    if (vlSelfRef.__PVT__canFlow) {
        vlSelfRef.io_out_bits_opcode = 5U;
        vlSelfRef.io_out_bits_set = (1U & ((IData)(vlSymsp->TOP.io_topInputRandomAddrs_1) 
                                           >> 1U));
    } else {
        vlSelfRef.io_out_bits_opcode = vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_opcode
            [0U];
        vlSelfRef.io_out_bits_set = (1U & vlSelfRef.__PVT__chosenQ__DOT__ram_bits_task_set
                                     [0U]);
    }
    vlSelfRef.io_out_valid = (((IData)(vlSelfRef.__PVT___io_out_valid_T) 
                               & (IData)(vlSelfRef.__PVT__chosenQ__DOT__maybe_full)) 
                              | (IData)(vlSelfRef.__PVT__canFlow));
    vlSelfRef.__PVT___pipeBlockOut_T_2 = ((IData)(vlSelfRef.__PVT__buffer_0_task_set) 
                                          == (IData)(vlSelfRef.io_out_bits_set));
    vlSelfRef.__PVT___pipeBlockOut_T_3 = ((IData)(vlSelfRef.__PVT__buffer_1_task_set) 
                                          == (IData)(vlSelfRef.io_out_bits_set));
    vlSelfRef.__PVT___pipeBlockOut_T_4 = ((IData)(vlSelfRef.__PVT__buffer_2_task_set) 
                                          == (IData)(vlSelfRef.io_out_bits_set));
    vlSelfRef.__PVT___pipeBlockOut_T_5 = ((IData)(vlSelfRef.__PVT__buffer_3_task_set) 
                                          == (IData)(vlSelfRef.io_out_bits_set));
    vlSelfRef.__PVT__issueArb_io_in_0_valid = ((IData)(vlSelfRef.__PVT__buffer_0_valid) 
                                               & ((~ 
                                                   ((IData)(vlSelfRef.io_out_valid) 
                                                    & (IData)(vlSelfRef.__PVT___pipeBlockOut_T_2))) 
                                                  & (IData)(vlSelfRef.__PVT__buffer_0_rdy)));
    vlSelfRef.__PVT__issueArb_io_in_1_valid = ((IData)(vlSelfRef.__PVT__buffer_1_valid) 
                                               & ((~ 
                                                   ((IData)(vlSelfRef.io_out_valid) 
                                                    & (IData)(vlSelfRef.__PVT___pipeBlockOut_T_3))) 
                                                  & (IData)(vlSelfRef.__PVT__buffer_1_rdy)));
    vlSelfRef.__PVT__issueArb_io_in_2_valid = ((IData)(vlSelfRef.__PVT__buffer_2_valid) 
                                               & ((~ 
                                                   ((IData)(vlSelfRef.io_out_valid) 
                                                    & (IData)(vlSelfRef.__PVT___pipeBlockOut_T_4))) 
                                                  & (IData)(vlSelfRef.__PVT__buffer_2_rdy)));
    vlSelfRef.__PVT__issueArb_io_in_3_valid = ((IData)(vlSelfRef.__PVT__buffer_3_valid) 
                                               & ((~ 
                                                   ((IData)(vlSelfRef.io_out_valid) 
                                                    & (IData)(vlSelfRef.__PVT___pipeBlockOut_T_5))) 
                                                  & (IData)(vlSelfRef.__PVT__buffer_3_rdy)));
    vlSelfRef.__PVT__issueArb_io_chosen = (((IData)(vlSelfRef.__PVT__issueArb_io_in_1_valid) 
                                            & (1U > (IData)(vlSelfRef.__PVT__issueArb__DOT__ctrl_validMask_grantMask_lastGrant)))
                                            ? 1U : 
                                           (((IData)(vlSelfRef.__PVT__issueArb_io_in_2_valid) 
                                             & (2U 
                                                > (IData)(vlSelfRef.__PVT__issueArb__DOT__ctrl_validMask_grantMask_lastGrant)))
                                             ? 2U : 
                                            (((IData)(vlSelfRef.__PVT__issueArb_io_in_3_valid) 
                                              & (3U 
                                                 > (IData)(vlSelfRef.__PVT__issueArb__DOT__ctrl_validMask_grantMask_lastGrant)))
                                              ? 3U : 
                                             ((IData)(vlSelfRef.__PVT__issueArb_io_in_0_valid)
                                               ? 0U
                                               : ((IData)(vlSelfRef.__PVT__issueArb_io_in_1_valid)
                                                   ? 1U
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__issueArb_io_in_2_valid)
                                                    ? 2U
                                                    : 3U))))));
}
