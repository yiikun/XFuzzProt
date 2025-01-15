# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VVerifyTop.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VVerifyTop \
	VVerifyTop___024root__DepSet_h6396dfea__0 \
	VVerifyTop___024root__DepSet_h6396dfea__1 \
	VVerifyTop___024root__DepSet_h6396dfea__2 \
	VVerifyTop___024root__DepSet_h6396dfea__3 \
	VVerifyTop___024root__DepSet_h6396dfea__4 \
	VVerifyTop___024root__DepSet_h6396dfea__5 \
	VVerifyTop___024root__DepSet_ha141af08__0 \
	VVerifyTop_RequestArb__DepSet_hed62ebee__0 \
	VVerifyTop_RequestBuffer__DepSet_hd10c72f4__0 \
	VVerifyTop_RequestBuffer__DepSet_hd10c72f4__1 \
	VVerifyTop_MainPipe__DepSet_h5f18c716__0 \
	VVerifyTop_MSHRCtl__DepSet_h9a67137a__0 \
	VVerifyTop_MSHRCtl__DepSet_h6dc92168__0 \
	VVerifyTop_SinkC__DepSet_h41c17ac8__0 \
	VVerifyTop_GrantBuffer__DepSet_h9227d826__0 \
	VVerifyTop_RequestArb_2__DepSet_h267586b3__0 \
	VVerifyTop_RequestBuffer_2__DepSet_hec86b552__0 \
	VVerifyTop_RequestBuffer_2__DepSet_h93a9c004__0 \
	VVerifyTop_MainPipe_2__DepSet_h27054e82__0 \
	VVerifyTop_SinkC_2__DepSet_h6af5161b__0 \
	VVerifyTop_GrantBuffer_2__DepSet_h245dbe3c__0 \
	VVerifyTop_MSHR_16__DepSet_h94b6fc8f__0 \
	VVerifyTop_MSHR_16__DepSet_h94b6fc8f__1 \
	VVerifyTop_MSHR_16__DepSet_h94b6fc8f__2 \
	VVerifyTop_MSHR__DepSet_hbdc1e095__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VVerifyTop___024root__Slow \
	VVerifyTop___024root__DepSet_h6396dfea__0__Slow \
	VVerifyTop___024root__DepSet_h6396dfea__1__Slow \
	VVerifyTop___024root__DepSet_h6396dfea__2__Slow \
	VVerifyTop___024root__DepSet_ha141af08__0__Slow \
	VVerifyTop_RequestArb__Slow \
	VVerifyTop_RequestArb__DepSet_hc36b3a3f__0__Slow \
	VVerifyTop_RequestArb__DepSet_hed62ebee__0__Slow \
	VVerifyTop_RequestBuffer__Slow \
	VVerifyTop_RequestBuffer__DepSet_h71872468__0__Slow \
	VVerifyTop_RequestBuffer__DepSet_hd10c72f4__0__Slow \
	VVerifyTop_MainPipe__Slow \
	VVerifyTop_MainPipe__DepSet_ha2cb0245__0__Slow \
	VVerifyTop_MainPipe__DepSet_h5f18c716__0__Slow \
	VVerifyTop_MSHRCtl__Slow \
	VVerifyTop_MSHRCtl__DepSet_h9a67137a__0__Slow \
	VVerifyTop_MSHRCtl__DepSet_h2864d122__0__Slow \
	VVerifyTop_SinkC__Slow \
	VVerifyTop_SinkC__DepSet_hf1474fb8__0__Slow \
	VVerifyTop_SinkC__DepSet_h41c17ac8__0__Slow \
	VVerifyTop_GrantBuffer__Slow \
	VVerifyTop_GrantBuffer__DepSet_h01c4482a__0__Slow \
	VVerifyTop_GrantBuffer__DepSet_h9227d826__0__Slow \
	VVerifyTop_RequestArb_2__Slow \
	VVerifyTop_RequestArb_2__DepSet_h142bcb9b__0__Slow \
	VVerifyTop_RequestArb_2__DepSet_h267586b3__0__Slow \
	VVerifyTop_RequestBuffer_2__Slow \
	VVerifyTop_RequestBuffer_2__DepSet_hec86b552__0__Slow \
	VVerifyTop_RequestBuffer_2__DepSet_h93a9c004__0__Slow \
	VVerifyTop_MainPipe_2__Slow \
	VVerifyTop_MainPipe_2__DepSet_hfde41f5a__0__Slow \
	VVerifyTop_MainPipe_2__DepSet_h27054e82__0__Slow \
	VVerifyTop_SinkC_2__Slow \
	VVerifyTop_SinkC_2__DepSet_h8e7a414e__0__Slow \
	VVerifyTop_SinkC_2__DepSet_h6af5161b__0__Slow \
	VVerifyTop_GrantBuffer_2__Slow \
	VVerifyTop_GrantBuffer_2__DepSet_h91bc49c8__0__Slow \
	VVerifyTop_GrantBuffer_2__DepSet_h245dbe3c__0__Slow \
	VVerifyTop_MSHR_16__Slow \
	VVerifyTop_MSHR_16__DepSet_h96e914be__0__Slow \
	VVerifyTop_MSHR_16__DepSet_h94b6fc8f__0__Slow \
	VVerifyTop_MSHR_16__DepSet_h94b6fc8f__1__Slow \
	VVerifyTop_MSHR__Slow \
	VVerifyTop_MSHR__DepSet_h56cbdb46__0__Slow \
	VVerifyTop_MSHR__DepSet_hbdc1e095__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VVerifyTop__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
