# Verilated -*- CMake -*-
# DESCRIPTION: Verilator output: CMake include script with class lists
#
# This CMake script lists generated Verilated files, for including in higher level CMake scripts.
# This file is meant to be consumed by the verilate() function,
# which becomes available after executing `find_package(verilator).

### Constants...
set(PERL "perl" CACHE FILEPATH "Perl executable (from $PERL, defaults to 'perl' if not set)")
set(PYTHON3 "python3" CACHE FILEPATH "Python3 executable (from $PYTHON3, defaults to 'python3' if not set)")
set(VERILATOR_ROOT "/opt/verilator" CACHE PATH "Path to Verilator kit (from $VERILATOR_ROOT)")
set(VERILATOR_SOLVER "" CACHE STRING "Default SMT solver for constrained randomization (from $VERILATOR_SOLVER)")

### Compiler flags...
# User CFLAGS (from -CFLAGS on Verilator command line)
set(Vcontrol_unit_USER_CFLAGS )
# User LDLIBS (from -LDFLAGS on Verilator command line)
set(Vcontrol_unit_USER_LDLIBS )

### Switches...
# SystemC output mode?  0/1 (from --sc)
set(Vcontrol_unit_SC 1)
# Coverage output mode?  0/1 (from --coverage)
set(Vcontrol_unit_COVERAGE 1)
# Timing mode?  0/1
set(Vcontrol_unit_TIMING 0)
# Threaded output mode?  1/N threads (from --threads)
set(Vcontrol_unit_THREADS 1)
# FST Tracing output mode? 0/1 (from --trace-fst)
set(Vcontrol_unit_TRACE_FST 0)

# SAIF Tracing output mode? 0/1 (from --trace-saif)
set(Vcontrol_unit_TRACE_SAIF 0)

# VCD Tracing output mode?  0/1 (from --trace-vcd)
set(Vcontrol_unit_TRACE_VCD 1)
### Sources...
# Global classes, need linked once per executable
set(Vcontrol_unit_GLOBAL /opt/verilator/include/verilated.cpp /opt/verilator/include/verilated_cov.cpp /opt/verilator/include/verilated_vcd_c.cpp /opt/verilator/include/verilated_threads.cpp)
# Generated module classes, non-fast-path, compile with low/medium optimization
set(Vcontrol_unit_CLASSES_SLOW /Users/paulitoad/Desktop/riscv-sc/test_benches/control_unit/build/CMakeFiles/Vcontrol_unit_tb.dir/Vcontrol_unit.dir/Vcontrol_unit___024root__Slow.cpp /Users/paulitoad/Desktop/riscv-sc/test_benches/control_unit/build/CMakeFiles/Vcontrol_unit_tb.dir/Vcontrol_unit.dir/Vcontrol_unit___024root__0__Slow.cpp)
# Generated module classes, fast-path, compile with highest optimization
set(Vcontrol_unit_CLASSES_FAST /Users/paulitoad/Desktop/riscv-sc/test_benches/control_unit/build/CMakeFiles/Vcontrol_unit_tb.dir/Vcontrol_unit.dir/Vcontrol_unit.cpp /Users/paulitoad/Desktop/riscv-sc/test_benches/control_unit/build/CMakeFiles/Vcontrol_unit_tb.dir/Vcontrol_unit.dir/Vcontrol_unit___024root__0.cpp)
# Generated support classes, non-fast-path, compile with low/medium optimization
set(Vcontrol_unit_SUPPORT_SLOW /Users/paulitoad/Desktop/riscv-sc/test_benches/control_unit/build/CMakeFiles/Vcontrol_unit_tb.dir/Vcontrol_unit.dir/Vcontrol_unit__Syms__Slow.cpp /Users/paulitoad/Desktop/riscv-sc/test_benches/control_unit/build/CMakeFiles/Vcontrol_unit_tb.dir/Vcontrol_unit.dir/Vcontrol_unit__Trace__0__Slow.cpp /Users/paulitoad/Desktop/riscv-sc/test_benches/control_unit/build/CMakeFiles/Vcontrol_unit_tb.dir/Vcontrol_unit.dir/Vcontrol_unit__TraceDecls__0__Slow.cpp)
# Generated support classes, fast-path, compile with highest optimization
set(Vcontrol_unit_SUPPORT_FAST /Users/paulitoad/Desktop/riscv-sc/test_benches/control_unit/build/CMakeFiles/Vcontrol_unit_tb.dir/Vcontrol_unit.dir/Vcontrol_unit__Trace__0.cpp)
# All dependencies
set(Vcontrol_unit_DEPS /opt/verilator/bin/verilator_bin /opt/verilator/include/verilated_std.sv /opt/verilator/include/verilated_std_waiver.vlt /Users/paulitoad/Desktop/riscv-sc/test_benches/control_unit/control_unit.v)
# User .cpp files (from .cpp's on Verilator command line)
set(Vcontrol_unit_USER_CLASSES )
