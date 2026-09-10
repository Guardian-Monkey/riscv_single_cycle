// This is a C++/SystemC file, and will serve as our test bench
#include <systemc.h> // this includes systemC
#include <verilated.h> // this includes Verilator
#include <verilated_vcd_sc.h> // this helps systemC and Verilator to create vcd's (waveform files for GTKWave)

#include "Vrisc_v.h" // the C++ representation of the verilog module

#include <iostream>

// every systemC program starts with sc_main; kind of like main for C++ programs
int sc_main(int argc, char** argv) {
    // Pass the command line args to Verilator; our module is very simple so we won't use these.
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    // get vcd file path from command line arguments (the path where we would like to store the waveform file)
    std::string vcd_file_path;

    if(argc == 2) {
        vcd_file_path = std::string(argv[1]);
    }

    // signals (interface the verilog module we have created)
    // the signals match the names and the data width of the verilog signals we have 
    // created in the verilog module.
    sc_clock clk{"clk", 1, SC_NS, 0.5, 0, SC_NS, false}; // false: start clk LOW

    // sc_signal<type> name;
    sc_signal<uint32_t> RS1;
    sc_signal<uint32_t> RS2;
    sc_signal<uint32_t> RD;
    sc_signal<uint32_t> ALU_FUNCT;
    sc_signal<uint32_t> ALU_OUT;

    const std::unique_ptr<Vrisc_v> risc_v{new Vrisc_v{"risc_v_vcd_debug"}};

    // connect all the signals we have created in systemC to the verilated module
    // risc_v->name_sig(name_sig);
    risc_v->clk(clk);

    risc_v->RS1(RS1);
    risc_v->RS2(RS2);
    risc_v->RD(RD);
    risc_v->ALU_FUNCT(ALU_FUNCT);
    risc_v->ALU_OUT(ALU_OUT);

    // start simulation and trace
    std::cout << "Vrisc_v start!" << std::endl;

    // every systemC simulation starts with sc_start(amount of time we will simulate, time scale)
    sc_start(0, SC_NS); // runs the simulation for 0 ns;
                        // no sim time will pass, done to initialize everything, 
                        // and to start the tracing of the signals

    // create a trace, and connect that trace onto our buffer
    VerilatedVcdSc* trace = new VerilatedVcdSc();
    risc_v->trace(trace, 99);

    // make sure we can actually write to the vcd on our filepath that was passed in through cmd line, or write to a default instead
    if(vcd_file_path.empty()) {
        trace->open("Vrisc_v_tb.vcd");
    } else {
        trace->open(vcd_file_path.c_str());
    }

    // ======= TESTING =======

    sc_start(1, SC_NS);
    // add, rd, rs1, rs2 (structure of add ops)
    // add, x14, x9, x13
    assert(RD.read() == 14);
    assert(RS1.read() == 9);
    assert(RS2.read() == 13);
    assert(ALU_FUNCT.read() == 0); // add = 0

    // now I want to check if loads are working.
    // I'll load two values from data_mem into registers, add them, and see the output of the ALU.
    // this tests if:
        // data_mem is loading data.mem properly
        // load instructions are working properly (little endian)
        // alu is working properly

    // to end the simulation, buffer final is called; deinitializes all the signals of our buffer module
    risc_v->final();

    // flush the trace, meaning write everything to the disk
    trace->flush();
    trace->close(); // close the trace

    // delete the trace obj b/c it was dynamically allocated
    delete trace;

    std::cout << "Vrisc_v done!" << std::endl;
    return 0;
}