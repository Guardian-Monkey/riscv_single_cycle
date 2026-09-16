cmake_minimum_required(VERSION 3.12)
cmake_policy(SET CMP0074 NEW)

# IMPORTANT!!!
# CMAKE FILE IS INTENDED TO BE EXECUTED IN THE "systemc/unit/(the_specific_unit)", TREATING IT AS CMAKE_SOURCE_DIR

project(control_unit_test_bench)

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
add_executable(Vcontrol_unit_tb)
target_sources(Vcontrol_unit_tb
	PRIVATE
		./control_unit_tb.cc
)

target_compile_features(Vcontrol_unit_tb PUBLIC cxx_std_17)

set_property(TARGET Vcontrol_unit_tb PROPERTY CXX_STANDARD ${SystemC_CXX_STANDARD})

# Add the Verilated circuit to the target
verilate(Vcontrol_unit_tb COVERAGE SYSTEMC TRACE
  INCLUDE_DIRS ${CMAKE_SOURCE_DIR}/../../../../rtl
  SOURCES ${CMAKE_SOURCE_DIR}/../../../../rtl/control_unit.v
  TOP_MODULE control_unit
)

verilator_link_systemc(Vcontrol_unit_tb)