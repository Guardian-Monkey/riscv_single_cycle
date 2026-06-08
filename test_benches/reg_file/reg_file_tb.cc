// This is a C++/SystemC file, and will serve as our test bench
#include <systemc.h> // this includes systemC
#include <verilated.h> // this includes Verilator
#include <verilated_vcd_sc.h> // this helps systemC and Verilator to create vcd's (waveform files for GTKWave)

#include "Vreg_file.h" // the C++ representation of the verilog module

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

    // input
    sc_signal<uint32_t> rs1;
    sc_signal<uint32_t> rs2;
    sc_signal<uint32_t> rd;
    sc_signal<uint32_t> data_in;
    // output
    sc_signal<uint32_t> rs1_out;
    sc_signal<uint32_t> rs2_out;
    // control signal
    sc_signal<bool> WE_reg_file;

    // instantiate the C++ representation of our verilog module
    // Vreg_file: verilog module name prefixed with V; verilator naming convention
    // reg_file: your local C++ variable name for the ptr
    // "reg_file_vcd_debug": a string name for the instance, used in waveform dumps and debug output; can be anything descriptive
    const std::unique_ptr<Vreg_file> reg_file{new Vreg_file{"reg_file_vcd_debug"}};

    // connect all the signals we have created in systemC to the verilated module
    reg_file->clk(clk);
    reg_file->rs1(rs1);
    reg_file->rs2(rs2);
    reg_file->rd(rd);
    reg_file->data_in(data_in);
    reg_file->rs1_out(rs1_out);
    reg_file->rs2_out(rs2_out);
    reg_file->WE_reg_file(WE_reg_file);

    // start simulation and trace
    std::cout << "Vreg_file start!" << std::endl;

    // every systemC simulation starts with sc_start(amount of time we will simulate, time scale)
    sc_start(0, SC_NS); // runs the simulation for 0 ns;
                        // no sim time will pass, done to initialize everything, 
                        // and to start the tracing of the signals

    // create a trace, and connect that trace onto our buffer
    VerilatedVcdSc* trace = new VerilatedVcdSc();
    reg_file->trace(trace, 99);

    // make sure we can actually write to the vcd on our filepath that was passed in through cmd line, or write to a default instead
    if(vcd_file_path.empty()) {
        trace->open("Vreg_file_tb.vcd");
    } else {
        trace->open(vcd_file_path.c_str());
    }

    // ======= TESTING =======

    // write to reg file
    rd.write(4);
    data_in.write(123456);
    WE_reg_file.write(true);

    sc_start(1, SC_NS);

    // write to reg file again
    rd.write(7);
    data_in.write(676767);
    WE_reg_file.write(true);

    sc_start(1, SC_NS);

    // read value from reg file which was written
    rs1.write(4);
    rs2.write(7);
    WE_reg_file.write(false);

    sc_start(1, SC_NS);

    assert(rs1_out.read() == 123456);
    assert(rs2_out.read() == 676767);
    
    // test if reads and writes can occur at the same time:
    rd.write(9);
    data_in.write(454545);
    WE_reg_file.write(true);

    rs1.write(4);
    rs2.write(7);

    sc_start(1, SC_NS);

    assert(rs1_out.read() == 123456);
    assert(rs2_out.read() == 676767);

    // test if the write was successful
    rs1.write(9);
    WE_reg_file.write(false);

    sc_start(1, SC_NS);

    assert(rs1_out.read() == 454545);

    // test if same reg can be read and written to in the same cycle:
    rs1.write(9); // should currently be 454545
    WE_reg_file.write(true);
    rd.write(9);
    data_in.write(123456);

    sc_start(.25, SC_NS); // .25 ns into the curr cycle, clk LOW

    assert(rs1_out.read() == 454545);

    sc_start(.5, SC_NS); // .75 ns into the curr cycle, clk HIGH

    assert(rs1_out.read() == 123456);

    // ======= ALL TESTS PASSED SUCCESSFULLY =======


    // to end the simulation, buffer final is called; deinitializes all the signals of our buffer module
    reg_file->final();

    // flush the trace, meaning write everything to the disk
    trace->flush();
    trace->close(); // close the trace

    // delete the trace obj b/c it was dynamically allocated
    delete trace;

    std::cout << "Vreg_file done!" << std::endl;
    return 0;
}