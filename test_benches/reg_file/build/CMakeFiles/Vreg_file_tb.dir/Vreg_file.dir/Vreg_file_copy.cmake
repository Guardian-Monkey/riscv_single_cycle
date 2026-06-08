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
set(Vreg_file_USER_CFLAGS )
# User LDLIBS (from -LDFLAGS on Verilator command line)
set(Vreg_file_USER_LDLIBS )

### Switches...
# SystemC output mode?  0/1 (from --sc)
set(Vreg_file_SC 1)
# Coverage output mode?  0/1 (from --coverage)
set(Vreg_file_COVERAGE 1)
# Timing mode?  0/1
set(Vreg_file_TIMING 0)
# Threaded output mode?  1/N threads (from --threads)
set(Vreg_file_THREADS 1)
# FST Tracing output mode? 0/1 (from --trace-fst)
set(Vreg_file_TRACE_FST 0)

# SAIF Tracing output mode? 0/1 (from --trace-saif)
set(Vreg_file_TRACE_SAIF 0)

# VCD Tracing output mode?  0/1 (from --trace-vcd)
set(Vreg_file_TRACE_VCD 1)
### Sources...
# Global classes, need linked once per executable
set(Vreg_file_GLOBAL /opt/verilator/include/verilated.cpp /opt/verilator/include/verilated_cov.cpp /opt/verilator/include/verilated_vcd_c.cpp /opt/verilator/include/verilated_threads.cpp)
# Generated module classes, non-fast-path, compile with low/medium optimization
set(Vreg_file_CLASSES_SLOW /Users/paulitoad/Desktop/riscv-sc/test_benches/reg_file/build/CMakeFiles/Vreg_file_tb.dir/Vreg_file.dir/Vreg_file___024root__Slow.cpp /Users/paulitoad/Desktop/riscv-sc/test_benches/reg_file/build/CMakeFiles/Vreg_file_tb.dir/Vreg_file.dir/Vreg_file___024root__0__Slow.cpp)
# Generated module classes, fast-path, compile with highest optimization
set(Vreg_file_CLASSES_FAST /Users/paulitoad/Desktop/riscv-sc/test_benches/reg_file/build/CMakeFiles/Vreg_file_tb.dir/Vreg_file.dir/Vreg_file.cpp /Users/paulitoad/Desktop/riscv-sc/test_benches/reg_file/build/CMakeFiles/Vreg_file_tb.dir/Vreg_file.dir/Vreg_file___024root__0.cpp)
# Generated support classes, non-fast-path, compile with low/medium optimization
set(Vreg_file_SUPPORT_SLOW /Users/paulitoad/Desktop/riscv-sc/test_benches/reg_file/build/CMakeFiles/Vreg_file_tb.dir/Vreg_file.dir/Vreg_file__Syms__Slow.cpp /Users/paulitoad/Desktop/riscv-sc/test_benches/reg_file/build/CMakeFiles/Vreg_file_tb.dir/Vreg_file.dir/Vreg_file__Trace__0__Slow.cpp /Users/paulitoad/Desktop/riscv-sc/test_benches/reg_file/build/CMakeFiles/Vreg_file_tb.dir/Vreg_file.dir/Vreg_file__TraceDecls__0__Slow.cpp)
# Generated support classes, fast-path, compile with highest optimization
set(Vreg_file_SUPPORT_FAST /Users/paulitoad/Desktop/riscv-sc/test_benches/reg_file/build/CMakeFiles/Vreg_file_tb.dir/Vreg_file.dir/Vreg_file__Trace__0.cpp)
# All dependencies
set(Vreg_file_DEPS /opt/verilator/bin/verilator_bin /opt/verilator/include/verilated_std.sv /opt/verilator/include/verilated_std_waiver.vlt /Users/paulitoad/Desktop/riscv-sc/test_benches/reg_file/reg_file.v)
# User .cpp files (from .cpp's on Verilator command line)
set(Vreg_file_USER_CLASSES )
