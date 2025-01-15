# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VTestTop_L2L3L2.mk for the caller.

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
	VTestTop_L2L3L2 \
	VTestTop_L2L3L2___024root__DepSet_h3cf8cac4__0 \
	VTestTop_L2L3L2___024root__DepSet_h3cf8cac4__1 \
	VTestTop_L2L3L2___024root__DepSet_h3cf8cac4__2 \
	VTestTop_L2L3L2___024root__DepSet_h3cf8cac4__3 \
	VTestTop_L2L3L2___024root__DepSet_ha0b5d7fa__0 \
	VTestTop_L2L3L2___024unit__DepSet_hcc388afd__0 \
	VTestTop_L2L3L2_RequestBuffer__DepSet_h8e47a3cd__0 \
	VTestTop_L2L3L2_MSHRCtl__DepSet_ha0b8aa9f__0 \
	VTestTop_L2L3L2_MSHRCtl__DepSet_ha0b8aa9f__1 \
	VTestTop_L2L3L2_MSHRCtl__DepSet_h55dba607__0 \
	VTestTop_L2L3L2_Directory__DepSet_h13e09773__0 \
	VTestTop_L2L3L2_SinkC__DepSet_h21d4af61__0 \
	VTestTop_L2L3L2_GrantBufferFIFO__DepSet_h3fac056c__0 \
	VTestTop_L2L3L2_MSHRBuffer__DepSet_h2944dd92__0 \
	VTestTop_L2L3L2_MSHR_32__DepSet_h89e61e08__0 \
	VTestTop_L2L3L2_MSHR_32__DepSet_h89e61e08__1 \
	VTestTop_L2L3L2_MSHR_32__DepSet_h89e61e08__2 \
	VTestTop_L2L3L2_MSHR_32__DepSet_h89e61e08__3 \
	VTestTop_L2L3L2_MSHR_32__DepSet_h89e61e08__4 \
	VTestTop_L2L3L2_MSHR__DepSet_ha26956c8__0 \
	VTestTop_L2L3L2_MSHR__DepSet_ha26956c8__1 \
	VTestTop_L2L3L2_MSHR__DepSet_ha26956c8__2 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VTestTop_L2L3L2___024root__Slow \
	VTestTop_L2L3L2___024root__DepSet_h3cf8cac4__0__Slow \
	VTestTop_L2L3L2___024root__DepSet_h3cf8cac4__1__Slow \
	VTestTop_L2L3L2___024root__DepSet_ha0b5d7fa__0__Slow \
	VTestTop_L2L3L2___024unit__Slow \
	VTestTop_L2L3L2___024unit__DepSet_h70f617d3__0__Slow \
	VTestTop_L2L3L2_RequestBuffer__Slow \
	VTestTop_L2L3L2_RequestBuffer__DepSet_hcbb522e6__0__Slow \
	VTestTop_L2L3L2_RequestBuffer__DepSet_h8e47a3cd__0__Slow \
	VTestTop_L2L3L2_MSHRCtl__Slow \
	VTestTop_L2L3L2_MSHRCtl__DepSet_ha0b8aa9f__0__Slow \
	VTestTop_L2L3L2_MSHRCtl__DepSet_ha0b8aa9f__1__Slow \
	VTestTop_L2L3L2_MSHRCtl__DepSet_h9dec009e__0__Slow \
	VTestTop_L2L3L2_Directory__Slow \
	VTestTop_L2L3L2_Directory__DepSet_h1763b6d4__0__Slow \
	VTestTop_L2L3L2_Directory__DepSet_h13e09773__0__Slow \
	VTestTop_L2L3L2_SinkC__Slow \
	VTestTop_L2L3L2_SinkC__DepSet_he9a1446c__0__Slow \
	VTestTop_L2L3L2_SinkC__DepSet_h21d4af61__0__Slow \
	VTestTop_L2L3L2_GrantBufferFIFO__Slow \
	VTestTop_L2L3L2_GrantBufferFIFO__DepSet_h17f295b2__0__Slow \
	VTestTop_L2L3L2_GrantBufferFIFO__DepSet_h3fac056c__0__Slow \
	VTestTop_L2L3L2_MSHRBuffer__Slow \
	VTestTop_L2L3L2_MSHRBuffer__DepSet_hfdbf3e55__0__Slow \
	VTestTop_L2L3L2_MSHRBuffer__DepSet_h2944dd92__0__Slow \
	VTestTop_L2L3L2_MSHR_32__Slow \
	VTestTop_L2L3L2_MSHR_32__DepSet_h25f3704d__0__Slow \
	VTestTop_L2L3L2_MSHR_32__DepSet_h89e61e08__0__Slow \
	VTestTop_L2L3L2_MSHR_32__DepSet_h89e61e08__1__Slow \
	VTestTop_L2L3L2_MSHR_32__DepSet_h89e61e08__2__Slow \
	VTestTop_L2L3L2_MSHR__Slow \
	VTestTop_L2L3L2_MSHR__DepSet_h877614f8__0__Slow \
	VTestTop_L2L3L2_MSHR__DepSet_ha26956c8__0__Slow \
	VTestTop_L2L3L2_MSHR__DepSet_ha26956c8__1__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VTestTop_L2L3L2__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VTestTop_L2L3L2__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
