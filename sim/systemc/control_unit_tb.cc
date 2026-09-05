// This is a C++/SystemC file, and will serve as our test bench
#include <systemc.h> // this includes systemC
#include <verilated.h> // this includes Verilator
#include <verilated_vcd_sc.h> // this helps systemC and Verilator to create vcd's (waveform files for GTKWave)

#include "Vcontrol_unit.h" // the C++ representation of the verilog module (e.g. Buffer.v)

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
    sc_clock clk_i{"clk", 1, SC_NS, 0.5, 0, SC_NS, true};

    // instruction
    sc_signal<uint32_t> instr;
    // rs1, rs2, rd
    sc_signal<uint32_t> rs1;
    sc_signal<uint32_t> rs2;
    sc_signal<uint32_t> rd;
    // imm
    sc_signal<uint32_t> imm;
    // control signals
    sc_signal<bool> mux_adder;
    sc_signal<bool> mux_PC;
    sc_signal<uint32_t> mux_reg; // [1:0]
    sc_signal<bool> WE_reg_file;
    sc_signal<bool> WE_data_mem;
    sc_signal<uint32_t> mux_ALU2; // [1:0]s
    sc_signal<bool> mux_ALU1;
    sc_signal<uint32_t> ALU_funct; // [3:0]
    sc_signal<uint32_t> mem_size; // [1:0]
    sc_signal<bool> sign_val;
    // branch logic flags
    sc_signal<bool> zero_flag;
    sc_signal<bool> unsigned_less_than;
    sc_signal<bool> signed_less_than;

    // instantiate the C++ representation of our verilog module
    // Vcontrol_unit: verilog module name prefixed with V; verilator naming convention
    // control_unit: your local C++ variable name for the ptr
    // "control_unit_vcd_debug": a string name for the instance, used in waveform dumps and debug output; can be anything descriptive
    const std::unique_ptr<Vcontrol_unit> control_unit{new Vcontrol_unit{"control_unit_vcd_debug"}};

    // connect all the signals we have created in systemC to the verilated module
    // instruction
    control_unit->instr(instr);
    // rs1, rs2, rd
    control_unit->rs1(rs1);
    control_unit->rs2(rs2);
    control_unit->rd(rd);
    // imm
    control_unit->imm(imm);
    // control signals
    control_unit->mux_adder(mux_adder);
    control_unit->mux_PC(mux_PC);
    control_unit->mux_reg(mux_reg);
    control_unit->WE_reg_file(WE_reg_file);
    control_unit->WE_data_mem(WE_data_mem);
    control_unit->mux_ALU2(mux_ALU2);
    control_unit->mux_ALU1(mux_ALU1);
    control_unit->ALU_funct(ALU_funct);
    control_unit->mem_size(mem_size);
    control_unit->sign_val(sign_val);
    // branch logic flags
    control_unit->zero_flag(zero_flag);
    control_unit->unsigned_less_than(unsigned_less_than);
    control_unit->signed_less_than(signed_less_than);

    // start simulation and trace
    std::cout << "Vcontrol_unit start!" << std::endl;

    // every systemC simulation starts with sc_start(amount of time we will simulate, time scale)
    sc_start(0, SC_NS); // runs the simulation for 0 ns;
                        // no sim time will pass, done to initialize everything, 
                        // and to start the tracing of the signals

    // create a trace, and connect that trace onto our buffer
    VerilatedVcdSc* trace = new VerilatedVcdSc();
    control_unit->trace(trace, 99);

    // make sure we can actually write to the vcd on our filepath that was passed in through cmd line, or write to a default instead
    if(vcd_file_path.empty()) {
        trace->open("Vcontrol_unit_tb.vcd");
    } else {
        trace->open(vcd_file_path.c_str());
    }

    // testing occurs here:

    // ===== OP TESTING: START =====
    // ADD INSTRUCTION
    // opcode, rd, funct3, rs1, rs2, funct7
    // 30th bit == 0 in funct7
    uint32_t instruction = (0b0110011 <<0) | (0b00011 <<7) | (0b000 <<12) | (0b00001 <<15) | (0b00010 <<20) | (0b0000000 <<25);
    instr.write(instruction);
    sc_start(1, SC_NS);
    // assert ADD
    assert(ALU_funct.read() == 0);
    // assert control signals for OP type:
    assert(mux_adder.read() == 0);
    assert(mux_PC.read() == 1);
    assert(mux_reg.read() == 0);
    assert(WE_reg_file.read() == true);
    assert(WE_data_mem.read() == false);
    assert(mux_ALU2.read() == 0);
    assert(mux_ALU1.read() == 0);
    // assert rs1, rs2, rd, and imm are all proper
    assert(rs1.read() == 1);
    assert(rs2.read() == 2);
    assert(rd.read() == 3);
    assert(imm.read() == 0);

    // SUB INSTRUCTION
    // opcode, rd, funct3, rs1, rs2, funct7
    // 30th bit == 1 in funct7
    instruction = (0b0110011 <<0) | (0b00000 <<7) | (0b000 <<12) | (0b00000 <<15) | (0b00000 <<20) | (0b0100000 <<25);
    instr.write(instruction);
    sc_start(1, SC_NS);
    // assert SUB
    assert(ALU_funct.read() == 1);

    // SLL INSTRUCTION
    // opcode, rd, funct3, rs1, rs2, funct7
    instruction = (0b0110011 <<0) | (0b00000 <<7) | (0b001 <<12) | (0b00000 <<15) | (0b00000 <<20) | (0b0000000 <<25);
    instr.write(instruction);
    sc_start(1, SC_NS);
    // assert SLL
    assert(ALU_funct.read() == 2);

    // SLT INSTRUCTION
    // opcode, rd, funct3, rs1, rs2, funct7
    instruction = (0b0110011 <<0) | (0b00000 <<7) | (0b010 <<12) | (0b00000 <<15) | (0b00000 <<20) | (0b0000000 <<25);
    instr.write(instruction);
    sc_start(1, SC_NS);
    // assert SLT
    assert(ALU_funct.read() == 3);

    // SLTU INSTRUCTION
    // opcode, rd, funct3, rs1, rs2, funct7
    instruction = (0b0110011 <<0) | (0b00000 <<7) | (0b011 <<12) | (0b00000 <<15) | (0b00000 <<20) | (0b0000000 <<25);
    instr.write(instruction);
    sc_start(1, SC_NS);
    // assert SLTU
    assert(ALU_funct.read() == 4);

    // XOR INSTRUCTION
    // opcode, rd, funct3, rs1, rs2, funct7
    instruction = (0b0110011 <<0) | (0b00000 <<7) | (0b100 <<12) | (0b00000 <<15) | (0b00000 <<20) | (0b0000000 <<25);
    instr.write(instruction);
    sc_start(1, SC_NS);
    // assert XOR
    assert(ALU_funct.read() == 5);

    // SRL INSTRUCTION
    // opcode, rd, funct3, rs1, rs2, funct7
    // 30th bit == 0 in funct7
    instruction = (0b0110011 <<0) | (0b00000 <<7) | (0b101 <<12) | (0b00000 <<15) | (0b00000 <<20) | (0b0000000 <<25);
    instr.write(instruction);
    sc_start(1, SC_NS);
    // assert SRL
    assert(ALU_funct.read() == 6);

    // SRA INSTRUCTION
    // opcode, rd, funct3, rs1, rs2, funct7
    // 30th bit == 1 in funct7
    instruction = (0b0110011 <<0) | (0b00000 <<7) | (0b101 <<12) | (0b00000 <<15) | (0b00000 <<20) | (0b0100000 <<25);
    instr.write(instruction);
    sc_start(1, SC_NS);
    // assert SRA
    assert(ALU_funct.read() == 7);

    // OR INSTRUCTION
    // opcode, rd, funct3, rs1, rs2, funct7
    instruction = (0b0110011 <<0) | (0b00000 <<7) | (0b110 <<12) | (0b00000 <<15) | (0b00000 <<20) | (0b0000000 <<25);
    instr.write(instruction);
    sc_start(1, SC_NS);
    // assert OR
    assert(ALU_funct.read() == 8);

    // AND INSTRUCTION
    // opcode, rd, funct3, rs1, rs2, funct7
    instruction = (0b0110011 <<0) | (0b00000 <<7) | (0b111 <<12) | (0b00000 <<15) | (0b00000 <<20) | (0b0000000 <<25);
    instr.write(instruction);
    sc_start(1, SC_NS);
    // assert AND
    assert(ALU_funct.read() == 9);

    // ===== OP TESTING: FINISH; ALL TESTS PASSED =====

    // ===== OP_IMM TESTING: START =====
    // ADDI INSTRUCTION
    // opcode, rd, funct3, rs1, imm
    // 0010 0001 1111 = 543 in decimal; msb = 0, therefore should still be 543
    instruction = (0b0010011 <<0) | (0b00011 <<7) | (0b000 <<12) | (0b00001 <<15) | (0b11111 <<20) | (0b0010000 <<25);
    instr.write(instruction);
    sc_start(1, SC_NS);
    // assert ADDI
    assert(ALU_funct.read() == 0);
    // assert control signals for OP_IMM type:
    assert(mux_adder.read() == 0);
    assert(mux_PC.read() == 1);
    assert(mux_reg.read() == 0);
    assert(WE_reg_file.read() == true);
    assert(WE_data_mem.read() == false);
    assert(mux_ALU2.read() == 0);
    assert(mux_ALU1.read() == 1);
    // assert rs1, rs2, rd, and imm are all proper
    assert(rs1.read() == 1);
    assert(rd.read() == 3);
    assert(imm.read() == 543);

    // testing sign extension: imm = -2 in 2's complement
    // 1111111 11110
    instruction = (0b0010011 <<0) | (0b00011 <<7) | (0b000 <<12) | (0b00001 <<15) | (0b11110 <<20) | (0b1111111 <<25);
    instr.write(instruction);
    sc_start(1, SC_NS);
    // assert that sign extension worked:
    assert(imm.read() == 4294967294);

    // SLTI INSTRUCTION
    // opcode, rd, funct3, rs1, imm
    // 0010 0001 1111 = 543 in decimal; msb = 0, therefore should still be 543
    instruction = (0b0010011 <<0) | (0b00011 <<7) | (0b010 <<12) | (0b00001 <<15) | (0b11111 <<20) | (0b0010000 <<25);
    instr.write(instruction);
    sc_start(1, SC_NS);
    // assert SLTI
    assert(ALU_funct.read() == 3);

    // SLTIU INSTRUCTION
    // opcode, rd, funct3, rs1, imm
    // 0010 0001 1111 = 543 in decimal; msb = 0, therefore should still be 543
    instruction = (0b0010011 <<0) | (0b00011 <<7) | (0b011 <<12) | (0b00001 <<15) | (0b11111 <<20) | (0b0010000 <<25);
    instr.write(instruction);
    sc_start(1, SC_NS);
    // assert SLTIU
    assert(ALU_funct.read() == 4);

    // XORI INSTRUCTION
    // opcode, rd, funct3, rs1, imm
    // 0010 0001 1111 = 543 in decimal; msb = 0, therefore should still be 543
    instruction = (0b0010011 <<0) | (0b00011 <<7) | (0b100 <<12) | (0b00001 <<15) | (0b11111 <<20) | (0b0010000 <<25);
    instr.write(instruction);
    sc_start(1, SC_NS);
    // assert XORI
    assert(ALU_funct.read() == 5);

    // ORI INSTRUCTION
    // opcode, rd, funct3, rs1, imm
    // 0010 0001 1111 = 543 in decimal; msb = 0, therefore should still be 543
    instruction = (0b0010011 <<0) | (0b00011 <<7) | (0b110 <<12) | (0b00001 <<15) | (0b11111 <<20) | (0b0010000 <<25);
    instr.write(instruction);
    sc_start(1, SC_NS);
    // assert ORI
    assert(ALU_funct.read() == 8);

    // ANDI INSTRUCTION
    // opcode, rd, funct3, rs1, imm
    // 0010 0001 1111 = 543 in decimal; msb = 0, therefore should still be 543
    instruction = (0b0010011 <<0) | (0b00011 <<7) | (0b111 <<12) | (0b00001 <<15) | (0b11111 <<20) | (0b0010000 <<25);
    instr.write(instruction);
    sc_start(1, SC_NS);
    // assert ANDI
    assert(ALU_funct.read() == 9);

    // SLLI INSTRUCTION
    // opcode, rd, funct3, rs1, imm
    // 0010 0001 1111 = 543 in decimal; msb = 0, therefore should still be 543
    // instr[31:25] should all be zeroes for SLLI; using 1 for msb to test against sign extension from I-type imm; specialization needs to be seen
    instruction = (0b0010011 <<0) | (0b00011 <<7) | (0b001 <<12) | (0b00001 <<15) | (0b00011 <<20) | (0b1000000 <<25);
    instr.write(instruction);
    sc_start(1, SC_NS);
    // assert ANDI
    assert(ALU_funct.read() == 2);
    // assert that the shamt has been read
    assert(imm.read() == 3);

    // SRLI INSTRUCTION
    // opcode, rd, funct3, rs1, imm
    // 0010 0001 1111 = 543 in decimal; msb = 0, therefore should still be 543
    // instr[31:25] should all be zeroes for SLLI; using 1 for msb to test against sign extension from I-type imm; specialization needs to be seen
    instruction = (0b0010011 <<0) | (0b00011 <<7) | (0b101 <<12) | (0b00001 <<15) | (0b00011 <<20) | (0b0000000 <<25);
    instr.write(instruction);
    sc_start(1, SC_NS);
    // assert ANDI
    assert(ALU_funct.read() == 6);
    // assert that the shamt has been read
    assert(imm.read() == 3);

    // SRAI INSTRUCTION
    // opcode, rd, funct3, rs1, imm
    // 0010 0001 1111 = 543 in decimal; msb = 0, therefore should still be 543
    // instr[31:25] should all be zeroes for SLLI; using 1 for msb to test against sign extension from I-type imm; specialization needs to be seen
    instruction = (0b0010011 <<0) | (0b00011 <<7) | (0b101 <<12) | (0b00001 <<15) | (0b00011 <<20) | (0b0100000 <<25);
    instr.write(instruction);
    sc_start(1, SC_NS);
    // assert ANDI
    assert(ALU_funct.read() == 7);
    // assert that the shamt has been read
    assert(imm.read() == 3);

    // ===== OP_IMM TESTING: FINISH; ALL TESTS PASSED =====

    // ===== STORE TESTING: START =====
    // SB INSTRUCTION
    // opcode, imm[4:0], funct3, rs1, rs2, imm[11:5]
    // 0010000 11111 = 543 in decimal; msb = 0, therefore should still be 543
    instruction = (0b0100011 <<0) | (0b11111 <<7) | (0b000 <<12) | (0b00001 <<15) | (0b00011 <<20) | (0b0010000 <<25);
    instr.write(instruction);
    sc_start(1, SC_NS);
    // assert STORE
    assert(ALU_funct.read() == 0);
    // assert control signals for STORE type:
    assert(mux_adder.read() == 0);
    assert(mux_PC.read() == 1);
    assert(mux_reg.read() == 0);
    assert(WE_reg_file.read() == false);
    assert(WE_data_mem.read() == true);
    assert(mux_ALU2.read() == 0);
    assert(mux_ALU1.read() == 1);
    // assert rs1, rs2, rd, and imm are all proper
    assert(rs1.read() == 1);
    assert(rs2.read() == 3);
    assert(imm.read() == 543);
    // assert we're storing a byte
    assert(mem_size.read() == 0);

    // SH INSTRUCTION
    instruction = (0b0100011 <<0) | (0b11111 <<7) | (0b001 <<12) | (0b00001 <<15) | (0b00011 <<20) | (0b0010000 <<25);
    instr.write(instruction);
    sc_start(1, SC_NS);
    // assert we're storing a halfword
    assert(mem_size.read() == 1);

    // SW INSTRUCTION
    instruction = (0b0100011 <<0) | (0b11111 <<7) | (0b010 <<12) | (0b00001 <<15) | (0b00011 <<20) | (0b0010000 <<25);
    instr.write(instruction);
    sc_start(1, SC_NS);
    // assert we're storing a word
    assert(mem_size.read() == 2);

    // ===== STORE TESTING: FINISH; ALL TESTS PASSED =====

    // ===== LOAD TESTING: START =====
    
    // LB INSTRUCTION
    // opcode, rd, funct3, rs1, imm[11:0]
    // 0010000 11111 = 543 in decimal; msb = 0, therefore should still be 543
    instruction = (0b0000011 <<0) | (0b00001 <<7) | (0b000 <<12) | (0b00010 <<15) | (0b11111 <<20) | (0b0010000 <<25);
    instr.write(instruction);
    sc_start(1, SC_NS);

    assert(rd.read() == 1);
    assert(rs1.read() == 2);
    assert(imm.read() == 543);
    assert(mem_size.read() == 0); // byte size load
    assert(sign_val.read() == 1); // sign extended load

    // LH INSTRUCTION
    // opcode, rd, funct3, rs1, imm[11:0]
    // 0010000 11111 = 543 in decimal; msb = 0, therefore should still be 543
    instruction = (0b0000011 <<0) | (0b00001 <<7) | (0b001 <<12) | (0b00010 <<15) | (0b11111 <<20) | (0b0010000 <<25);
    instr.write(instruction);
    sc_start(1, SC_NS);
    assert(mem_size.read() == 1); // halfword size load

    // LW INSTRUCTION
    // opcode, rd, funct3, rs1, imm[11:0]
    // 0010000 11111 = 543 in decimal; msb = 0, therefore should still be 543
    instruction = (0b0000011 <<0) | (0b00001 <<7) | (0b010 <<12) | (0b00010 <<15) | (0b11111 <<20) | (0b0010000 <<25);
    instr.write(instruction);
    sc_start(1, SC_NS);
    assert(mem_size.read() == 2); // word size load

    // LBU INSTRUCTION
    // opcode, rd, funct3, rs1, imm[11:0]
    // 0010000 11111 = 543 in decimal; msb = 0, therefore should still be 543
    instruction = (0b0000011 <<0) | (0b00001 <<7) | (0b100 <<12) | (0b00010 <<15) | (0b11111 <<20) | (0b0010000 <<25);
    instr.write(instruction);
    sc_start(1, SC_NS);
    assert(mem_size.read() == 0); // byte size load
    assert(sign_val.read() == 0); // zero extended load

    // LHU INSTRUCTION
    // opcode, rd, funct3, rs1, imm[11:0]
    // 0010000 11111 = 543 in decimal; msb = 0, therefore should still be 543
    instruction = (0b0000011 <<0) | (0b00001 <<7) | (0b101 <<12) | (0b00010 <<15) | (0b11111 <<20) | (0b0010000 <<25);
    instr.write(instruction);
    sc_start(1, SC_NS);
    assert(mem_size.read() == 1); // halfword size load
    assert(sign_val.read() == 0); // zero extended load

    // ===== LOAD TESTING: FINISH; ALL TESTS PASSED =====

    // TODO: test unconditional jumps, conditional jumps, AUIPC, & LUI control signals
    
    // ===== BRANCH TESTING: START =====
    // BEQ INSTRUCTION
    // opcode, imm[4:1|11], funct3, rs1, rs2, imm[12|10:5]
    // 0 0 101010 1010 = 682, but since msb of 0 is missing, number is actually = 1364
    instruction = (0b1100011 <<0) | (0b10100 <<7) | (0b000 <<12) | (0b00010 <<15) | (0b00001 <<20) | (0b0101010 <<25);
    instr.write(instruction);
    zero_flag.write(1); // zero flag is set, therefore branch
    sc_start(1, SC_NS);
    
    assert(ALU_funct.read() == 1); // SUB
    assert(rs1.read() == 2);
    assert(rs2.read() == 1);
    assert(imm.read() == 1364);
    assert(mux_adder.read() == 1); // indicates branch will be taken

    // BNE INSTRUCTION
    // opcode, imm[4:1|11], funct3, rs1, rs2, imm[12|10:5]
    // 0 0 101010 1010 = 682, but since msb of 0 is missing, number is actually = 1364
    instruction = (0b1100011 <<0) | (0b10100 <<7) | (0b001 <<12) | (0b00010 <<15) | (0b00001 <<20) | (0b0101010 <<25);
    instr.write(instruction);
    zero_flag.write(0); // zero flag is not set, therefore branch
    sc_start(1, SC_NS);

    assert(mux_adder.read() == 1); // indicates branch will be taken

    // BLT INSTRUCTION
    // opcode, imm[4:1|11], funct3, rs1, rs2, imm[12|10:5]
    // 0 0 101010 1010 = 682, but since msb of 0 is missing, number is actually = 1364
    instruction = (0b1100011 <<0) | (0b10100 <<7) | (0b100 <<12) | (0b00010 <<15) | (0b00001 <<20) | (0b0101010 <<25);
    instr.write(instruction);
    signed_less_than.write(1); // signed less than true, therefore branch
    sc_start(1, SC_NS);

    assert(mux_adder.read() == 1); // indicates branch will be taken

    // BGE INSTRUCTION
    // opcode, imm[4:1|11], funct3, rs1, rs2, imm[12|10:5]
    // 0 0 101010 1010 = 682, but since msb of 0 is missing, number is actually = 1364
    instruction = (0b1100011 <<0) | (0b10100 <<7) | (0b101 <<12) | (0b00010 <<15) | (0b00001 <<20) | (0b0101010 <<25);
    instr.write(instruction);
    signed_less_than.write(0); // signed less than false, therefore branch
    sc_start(1, SC_NS);

    assert(mux_adder.read() == 1); // indicates branch will be taken

    // BLTU INSTRUCTION
    // opcode, imm[4:1|11], funct3, rs1, rs2, imm[12|10:5]
    // 0 0 101010 1010 = 682, but since msb of 0 is missing, number is actually = 1364
    instruction = (0b1100011 <<0) | (0b10100 <<7) | (0b110 <<12) | (0b00010 <<15) | (0b00001 <<20) | (0b0101010 <<25);
    instr.write(instruction);
    unsigned_less_than.write(1); // unsigned less than true, therefore branch
    sc_start(1, SC_NS);

    assert(mux_adder.read() == 1); // indicates branch will be taken

    // BGEU INSTRUCTION
    // opcode, imm[4:1|11], funct3, rs1, rs2, imm[12|10:5]
    // 0 0 101010 1010 = 682, but since msb of 0 is missing, number is actually = 1364
    instruction = (0b1100011 <<0) | (0b10100 <<7) | (0b111 <<12) | (0b00010 <<15) | (0b00001 <<20) | (0b0101010 <<25);
    instr.write(instruction);
    unsigned_less_than.write(0); // unsigned less than false, therefore branch
    sc_start(1, SC_NS);

    assert(mux_adder.read() == 1); // indicates branch will be taken

    // ===== BRANCH TESTING: FINISH; ALL TESTS PASSED =====

    // ===== JAL TESTING: START =====
    // opcode, rd, imm[20|10:1|11|19:12]
    // -4 will be imm
    instruction = (0b1101111 <<0) | (0b00010 <<7) | (0b111 <<12) | (0b11111 <<15) | (0b11101 <<20) | (0b1111111 <<25);
    instr.write(instruction);
    sc_start(1, SC_NS);

    assert(((~imm.read())+1) == 4); // imm must be -4 in 2's complement
    assert(rd.read() == 2);

    // ===== JAL TESTING: FINISH; ALL TESTS PASSED =====

    // ===== JALR TESTING: START =====
    // opcode, rd, funct3, rs1, imm[11:0]
    // 0010101 01010 = 682
    instruction = (0b1100111 <<0) | (0b00010 <<7) | (0b000 <<12) | (0b00001 <<15) | (0b01010 <<20) | (0b0010101 <<25);
    instr.write(instruction);
    sc_start(1, SC_NS);

    assert(imm.read() == 682);
    assert(rs1.read() == 1);
    assert(rd.read() == 2);
    assert(ALU_funct.read() == 10); // JALR_ALU

    // ===== JALR TESTING: FINISH; ALL TESTS PASSED =====

    // ===== LUI TESTING: START =====
    // opcode, rd, imm[31:12]
    // imm = 151,552, upper imm = 00000000000000100101
    instruction = (0b0110111 <<0) | (0b00010 <<7) | (0b101 <<12) | (0b00100 <<15) | (0b00000 <<20) | (0b0000000 <<25);
    instr.write(instruction);
    sc_start(1, SC_NS);

    assert(rd.read() == 2);
    assert(imm.read() == 151552);
    assert(ALU_funct.read() == 0);

    // ===== LUI TESTING: FINISH =====

    // ===== AUIPC TESTING: START =====
    // opcode, rd, imm[31:12]
    // imm = 151,552, upper imm = 00000000000000100101
    instruction = (0b0010111 <<0) | (0b00010 <<7) | (0b101 <<12) | (0b00100 <<15) | (0b00000 <<20) | (0b0000000 <<25);
    instr.write(instruction);
    sc_start(1, SC_NS);

    assert(rd.read() == 2);
    assert(imm.read() == 151552);
    assert(ALU_funct.read() == 0);

    // ===== AUIPC TESTING: FINISH =====

    // to end the simulation, buffer final is called; deinitializes all the signals of our buffer module
    control_unit->final();

    // flush the trace, meaning write everything to the disk
    trace->flush();
    trace->close(); // close the trace

    // delete the trace obj b/c it was dynamically allocated
    delete trace;

    std::cout << "Vcontrol_unit done!" << std::endl;
    return 0;
}