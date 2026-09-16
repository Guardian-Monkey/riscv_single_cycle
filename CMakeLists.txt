cmake_minimum_required(VERSION 3.12)
cmake_policy(SET CMP0074 NEW)

project(riscv_core)

find_package(verilator HINTS $ENV{VERILATOR_ROOT} ${VERILATOR_ROOT})
if(NOT verilator_FOUND)
    message(
        FATAL_ERROR
        "Verilator was not found. Either install it, or set the VERILATOR_ROOT environment variable"
    )
endif()

# SystemC dependencies
set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

# Find SystemC using SystemC's CMake integration
find_package(SystemCLanguage QUIET)

# Create a new executable target that will contain all your sources
add_executable(riscv_proc)
target_sources(riscv_proc
	PRIVATE
		./sim/systemc/processor/risc_v_tb.cc
)

target_compile_features(riscv_proc PUBLIC cxx_std_17)

set_property(TARGET riscv_proc PROPERTY CXX_STANDARD ${SystemC_CXX_STANDARD})

# Add the Verilated circuit to the target
verilate(riscv_proc COVERAGE SYSTEMC TRACE
  INCLUDE_DIRS "./rtl"
  SOURCES ./rtl/risc_v.v
  TOP_MODULE risc_v
)

verilator_link_systemc(riscv_proc)