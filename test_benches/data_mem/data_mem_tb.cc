// This is a C++/SystemC file, and will serve as our test bench
#include <systemc.h> // this includes systemC
#include <verilated.h> // this includes Verilator
#include <verilated_vcd_sc.h> // this helps systemC and Verilator to create vcd's (waveform files for GTKWave)

#include "Vdata_mem.h" // the C++ representation of the verilog module

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

    // address
    sc_signal<uint32_t> addr;
    // data in and out
    sc_signal<uint32_t> data_in;
    sc_signal<uint32_t> data_out;
    // control signal
    sc_signal<bool> WE_data_mem;
    sc_signal<uint32_t> mem_size;
    sc_signal<bool> sign_val;

    // instantiate the C++ representation of our verilog module
    // Vdata_mem: verilog module name prefixed with V; verilator naming convention
    // data_mem: your local C++ variable name for the ptr
    // "data_mem_vcd_debug": a string name for the instance, used in waveform dumps and debug output; can be anything descriptive
    const std::unique_ptr<Vdata_mem> data_mem{new Vdata_mem{"data_mem_vcd_debug"}};

    // connect all the signals we have created in systemC to the verilated module
    data_mem->clk(clk);
    data_mem->addr(addr);
    data_mem->data_in(data_in);
    data_mem->data_out(data_out);
    data_mem->WE_data_mem(WE_data_mem);
    data_mem->mem_size(mem_size);
    data_mem->sign_val(sign_val);

    // start simulation and trace
    std::cout << "Vdata_mem start!" << std::endl;

    // every systemC simulation starts with sc_start(amount of time we will simulate, time scale)
    sc_start(0, SC_NS); // runs the simulation for 0 ns;
                        // no sim time will pass, done to initialize everything, 
                        // and to start the tracing of the signals

    // create a trace, and connect that trace onto our buffer
    VerilatedVcdSc* trace = new VerilatedVcdSc();
    data_mem->trace(trace, 99);

    // make sure we can actually write to the vcd on our filepath that was passed in through cmd line, or write to a default instead
    if(vcd_file_path.empty()) {
        trace->open("Vdata_mem_tb.vcd");
    } else {
        trace->open(vcd_file_path.c_str());
    }

    // ======= TESTING =======
    uint32_t A = 0x12345678;
    uint32_t address = 0;
    // for stores & loads; 0 = byte, 1 = halfword, 2 = word

    // write our data to a specific address
    data_in.write(A);
    addr.write(address);
    WE_data_mem.write(true);
    mem_size.write(2); // WORD
    sign_val.write(false); // not necessary for writes (store ops)

    sc_start(1, SC_NS);

    // read our stored data at specific address (WORD)
    addr.write(address);
    WE_data_mem.write(false);
    mem_size.write(2); // WORD
    sign_val.write(false); // not necessary for reads of word length

    sc_start(1, SC_NS);

    assert(data_out.read() == A);

    // read our stored data at specific address (HALFWORD)
    addr.write(address);
    WE_data_mem.write(false);
    mem_size.write(1); // HALFWORD
    sign_val.write(false); // zero extend

    sc_start(1, SC_NS);

    assert(data_out.read() == (0x5678));

    // read our stored data at specific address (BYTE)
    addr.write(address);
    WE_data_mem.write(false);
    mem_size.write(0); // BYTE
    sign_val.write(false); // zero extend

    sc_start(1, SC_NS);

    assert(data_out.read() == (0x78));

    // check if sign extension works: (BYTE)
    addr.write(address);
    WE_data_mem.write(false);
    mem_size.write(0); // BYTE
    sign_val.write(true); // sign extend

    sc_start(1, SC_NS);

    assert(data_out.read() == (0x78)); // msb of 0x78 is 0, zero extend

    // check if sign extension works: (HALFWORD)
    addr.write(address);
    WE_data_mem.write(false);
    mem_size.write(1); // HALFWORD
    sign_val.write(true); // sign extend

    sc_start(1, SC_NS);
    
    assert(data_out.read() == (0x5678)); // msb of 0x5678 is 0, zero extend

    // check sign extension when it is needed:
    // write:
    A = 0xFFFF;
    addr.write(address);
    WE_data_mem.write(true);
    data_in.write(A);
    mem_size.write(2); // WORD WRITE
    sign_val.write(false); // irrelevant to writes

    sc_start(1, SC_NS);

    // read: (BYTE)
    addr.write(address);
    WE_data_mem.write(false);
    mem_size.write(0); // BYTE READ
    sign_val.write(true); // sign extend

    sc_start(1, SC_NS);

    assert(data_out.read() == 0xFFFFFFFF);

    // read: (HALFWORD)
    addr.write(address);
    WE_data_mem.write(false);
    mem_size.write(1); // HALFWORD READ
    sign_val.write(true); // sign extend

    sc_start(1, SC_NS);

    assert(data_out.read() == 0xFFFFFFFF);

    // ========= ALL TESTS PASSED SUCCESSFULLY =========


    // to end the simulation, buffer final is called; deinitializes all the signals of our buffer module
    data_mem->final();

    // flush the trace, meaning write everything to the disk
    trace->flush();
    trace->close(); // close the trace

    // delete the trace obj b/c it was dynamically allocated
    delete trace;

    std::cout << "Vdata_mem done!" << std::endl;
    return 0;
}