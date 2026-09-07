# This file helps us compile everything together into an executable
cmake_minimum_required(VERSION 3.16) # states the min required version for cmake
project(test CXX) # say that our project is actually a C++ project, and has the name 'test' (can be changed later on)

# Find Verilator
# tells cmake where to find verilator; env variables
find_package(verilator HINTS ${VERILATOR_ROOT} $ENV{VERILATOR_ROOT})

# SystemC dependencies
set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

# Find SystemC using SystemC's CMake integration
find_package(SystemCLanguage PATHS ${SYSTEMC_HOME})

# once cmake has found systemC and verilator, we can declare our executable
# give it a name of executable, and the executable we will create through the compilation
add_executable(Valu_tb alu_tb.cc)

# we have to add a property to the executable: it should use the same C++ standard as the systemC we are compiling
set_property(
	TARGET Valu_tb
	PROPERTY CXX_STANDARD ${SystemC_CXX_STANDARD}
)

# we also have to tell our verilator to turn our Buffer.v verilog module into C++ code
# this is done through the verilate command, which is called through add_executable()
verilate(Valu_tb SYSTEMC COVERAGE TRACE_VCD
	INCLUDE_DIRECTORIES "."
	SOURCES alu.v
)

# we want to link everything together to systemC, so we call verilator_link_systemc(the executable we've just added)
verilator_link_systemc(Valu_tb)