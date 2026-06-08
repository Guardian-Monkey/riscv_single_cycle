// This is a C++/SystemC file, and will serve as our test bench
#include <systemc.h> // this includes systemC
#include <verilated.h> // this includes Verilator
#include <verilated_vcd_sc.h> // this helps systemC and Verilator to create vcd's (waveform files for GTKWave)

#include "Valu.h" // the C++ representation of the verilog module

#include <iostream>

// ALU FUNCTIONS
#define ADD      ((uint32_t) 0)
#define SUB      ((uint32_t) 1)
#define SLL      ((uint32_t) 2)
#define SLT      ((uint32_t) 3)
#define SLTU     ((uint32_t) 4)
#define XOR      ((uint32_t) 5)
#define SRL      ((uint32_t) 6)
#define SRA      ((uint32_t) 7)
#define OR       ((uint32_t) 8)
#define AND      ((uint32_t) 9)
#define JALR_ALU ((uint32_t) 10)


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
    sc_clock clk_i{"clk", 1, SC_NS, 0.5, 0, SC_NS, true};

    // Control signal
    sc_signal<uint32_t> ALU_funct;
    // in1, in2, out
    sc_signal<uint32_t> in1;
    sc_signal<uint32_t> in2;
    sc_signal<uint32_t> out;
    // branch logic flags
    sc_signal<bool> zero_flag;
    sc_signal<bool> unsigned_less_than;
    sc_signal<bool> signed_less_than;

    // instantiate the C++ representation of our verilog module
    // Valu: verilog module name prefixed with V; verilator naming convention
    // alu: your local C++ variable name for the ptr
    // "alu_vcd_debug": a string name for the instance, used in waveform dumps and debug output; can be anything descriptive
    const std::unique_ptr<Valu> alu{new Valu{"alu_vcd_debug"}};

    // connect all the signals we have created in systemC to the verilated module
    alu->ALU_funct(ALU_funct);
    alu->in1(in1);
    alu->in2(in2);
    alu->out(out);
    alu->zero_flag(zero_flag);
    alu->unsigned_less_than(unsigned_less_than);
    alu->signed_less_than(signed_less_than);

    // start simulation and trace
    std::cout << "Valu start!" << std::endl;

    // every systemC simulation starts with sc_start(amount of time we will simulate, time scale)
    sc_start(0, SC_NS); // runs the simulation for 0 ns;
                        // no sim time will pass, done to initialize everything, 
                        // and to start the tracing of the signals

    // create a trace, and connect that trace onto our buffer
    VerilatedVcdSc* trace = new VerilatedVcdSc();
    alu->trace(trace, 99);

    // make sure we can actually write to the vcd on our filepath that was passed in through cmd line, or write to a default instead
    if(vcd_file_path.empty()) {
        trace->open("Valu_tb.vcd");
    } else {
        trace->open(vcd_file_path.c_str());
    }

    // testing occurs here:

    // ======= TESTING =======
    // ADD FUNCTION =======
    uint32_t A = 12;
    uint32_t B = 14;

    in1.write(A);
    in2.write(B);
    ALU_funct.write(ADD);

    sc_start(1, SC_NS);

    assert(out.read() == 26);

    // SUB FUNCTION =======
    A = 30;
    B = 4;

    in1.write(A);
    in2.write(B);
    ALU_funct.write(SUB);

    sc_start(1, SC_NS);

    assert(out.read() == 26);

    // SLL FUNCTION =======
    A = 678;
    B = 5;

    in1.write(A);
    in2.write(B);
    ALU_funct.write(SLL);

    sc_start(1, SC_NS);

    assert(out.read() == (A << B));

    // SRL FUNCTION =======
    A = 1234923;
    B = 18;

    in1.write(A);
    in2.write(B);
    ALU_funct.write(SRL);

    sc_start(1, SC_NS);

    assert(out.read() == (A >> B));

    // SRA FUNCTION =======
    A = ~(345) + 1;
    B = 4;

    in1.write(A);
    in2.write(B);
    ALU_funct.write(SRA);

    sc_start(1, SC_NS);

    assert((~(out.read()) + 1) == 22); // -345 >> 4 arithmetic must be -22

    // SLT FUNCTION =======
    // pos & pos, true
    A = 45;
    B = 80;
    in1.write(A);
    in2.write(B);
    ALU_funct.write(SLT);

    sc_start(1, SC_NS);

    assert(out.read() == 1);

    // pos & pos, false
    A = 80;
    B = 45;
    in1.write(A);
    in2.write(B);
    ALU_funct.write(SLT);

    sc_start(1, SC_NS);

    assert(out.read() == 0);

    // neg & pos, true
    A = ~A + 1;
    B = 36;
    in1.write(A);
    in2.write(B);
    ALU_funct.write(SLT);

    sc_start(1, SC_NS);

    assert(out.read() == 1);

    // pos & neg, false
    B = A;
    A = 40;
    in1.write(A);
    in2.write(B);
    ALU_funct.write(SLT);

    sc_start(1, SC_NS);

    assert(out.read() == 0);

    // neg & neg, true
    A = ~(80) + 1;
    B = ~(40) + 1;
    in1.write(A);
    in2.write(B);
    ALU_funct.write(SLT);

    sc_start(1, SC_NS);

    assert(out.read() == 1);

    // neg & neg, false
    A = ~(40) + 1;
    B = ~(80) + 1;
    in1.write(A);
    in2.write(B);
    ALU_funct.write(SLT);

    sc_start(1, SC_NS);

    assert(out.read() == 0);

    // SLTU INSTRUCTION
    // true
    A = 80;
    B = 95;
    in1.write(A);
    in2.write(B);
    ALU_funct.write(SLTU);

    sc_start(1, SC_NS);

    assert(out.read() == 1);

    // false
    A = 1234;
    B = 1233;
    in1.write(A);
    in2.write(B);
    ALU_funct.write(SLTU);

    sc_start(1, SC_NS);

    assert(out.read() == 0);

    // XOR, OR & AND FUNCTIONS 
    // XOR
    A = 123456;
    B = 2345;
    in1.write(A);
    in2.write(B);
    ALU_funct.write(XOR);

    sc_start(1, SC_NS);

    assert(out.read() == (A ^ B));
    // OR
    in1.write(A);
    in2.write(B);
    ALU_funct.write(OR);

    sc_start(1, SC_NS);

    assert(out.read() == (A | B));
    // AND
    in1.write(A);
    in2.write(B);
    ALU_funct.write(AND);

    sc_start(1, SC_NS);

    assert(out.read() == (A & B));

    // JALR_ALU FUNCTION
    A = 35;
    B = 62;
    in1.write(A);
    in2.write(B);
    ALU_funct.write(JALR_ALU);

    sc_start(1, SC_NS);

    assert(out.read() == ((A + B) & (~1)));

    // ALL TESTS PASSED SUCCESSFULLY

    // to end the simulation, buffer final is called; deinitializes all the signals of our buffer module
    alu->final();

    // flush the trace, meaning write everything to the disk
    trace->flush();
    trace->close(); // close the trace

    // delete the trace obj b/c it was dynamically allocated
    delete trace;

    std::cout << "Valu done!" << std::endl;
    return 0;
}