cmake_minimum_required(VERSION 3.12)
cmake_policy(SET CMP0074 NEW)

# IMPORTANT!!!
# CMAKE FILE IS INTENDED TO BE EXECUTED IN THE "systemc/unit/(the_specific_unit)", TREATING IT AS CMAKE_SOURCE_DIR

project(data_mem_test_bench)

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
add_executable(Vdata_mem_tb)
target_sources(Vdata_mem_tb
	PRIVATE
		./data_mem_tb.cc
)

target_compile_features(Vdata_mem_tb PUBLIC cxx_std_17)

set_property(TARGET Vdata_mem_tb PROPERTY CXX_STANDARD ${SystemC_CXX_STANDARD})

# Add the Verilated circuit to the target
verilate(Vdata_mem_tb COVERAGE SYSTEMC TRACE
  INCLUDE_DIRS ${CMAKE_SOURCE_DIR}/../../../../rtl
  SOURCES ${CMAKE_SOURCE_DIR}/../../../../rtl/data_mem.v
  TOP_MODULE data_mem
)

verilator_link_systemc(Vdata_mem_tb)