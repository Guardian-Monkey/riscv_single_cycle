`include "./../../verilog/control_unit.v"
`include "./../../verilog/alu.v"
`include "./../../verilog/data_mem.v"
`include "./../../verilog/reg_file.v"

module risc_v(
    // synchronous clock
    input clk,

    // =============== top-level ports; for testing purposes ===============
    output reg [4:0] RS1, 
    output reg [4:0] RS2, 
    output reg [4:0] RD,
    output reg [3:0] ALU_FUNCT,
    output reg [31:0] ALU_OUT,
    output reg [31:0] RS1_OUT,
    output reg [31:0] RS2_OUT
);

    // instruction mem
    reg [31:0] instr_mem [8191:0]; // 32-bit mem, 8192 cells; word addressable
    // program counter
    reg [12:0] pc;

    // branch logic flags
    wire zero_flag, unsigned_less_than, signed_less_than;

    // rs1, rs2, rd select bits
    wire [4:0] rs1, rs2, rd;

    // imm value
    wire [31:0] imm;

    // control signals
    wire mux_adder, mux_PC, WE_reg_file, WE_data_mem, mux_ALU1, sign_val;
    wire [1:0] mux_reg, mux_ALU2, mem_size;
    wire [3:0] ALU_funct;

    // ALU inputs
    wire [31:0] ALU_in1, ALU_in2;

    // ALU output
    wire [31:0] ALU_out;

    // REG_FILE inputs & outputs
    wire [31:0] reg_data_in, rs1_out, rs2_out;

    // DATA_MEM output
    wire [31:0] data_mem_out;

    // helper: ADDER input & outputs
    wire [31:0] adder_in1, adder_out;
    wire adder_cout;

    // helper: branch_decoder inputs & output
    wire branch_decoder_on;
    wire [2:0] branch_op;
    wire branch_decision;

    initial begin
        // path is relative to where the simulation is ran (build directory)
        $readmemh("../../../memory/instr.mem", instr_mem); // hex file; each line is an instruction
        pc = 13'b0; // set pc point to start of instr_mem
    end

    // MUX COMBINATIONAL DECISIONS
    assign adder_in1 = branch_decision ? imm : 32'b0;
    assign reg_data_in = mux_reg == 0 ? ALU_out : (mux_reg == 1 ? adder_out : data_mem_out);
    assign ALU_in1 = mux_ALU2 == 0 ? rs1_out : (mux_ALU2 == 1 ? 32'b0 : {19'b0, pc});
    assign ALU_in2 = mux_ALU1 ? imm : rs2_out;

    always @(posedge clk)
    begin
        pc <= mux_PC ? adder_out[12:0] : ALU_out[12:0];
        // =============== TEST BENCH PORTS ===============
        RS1 <= rs1;
        RS2 <= rs2;
        RD <= rd;
        ALU_FUNCT <= ALU_funct;
        ALU_OUT <= ALU_out;
        RS1_OUT <= rs1_out;
        RS2_OUT <= rs2_out;
    end

    // ====== HELPER MODULE ======

    helper_adder ADDER(adder_in1, {19'b0, pc}, 1'b0, adder_out, adder_cout);

    branch_decoder BRANCH_DECODER(
        zero_flag,
        unsigned_less_than,
        signed_less_than,
        branch_decoder_on,
        branch_op,
        branch_decision
    );

    // ======= PROCESSOR MODULES =======

    control_unit CONTROL_UNIT(
        // ===== INPUTS =====
        // current instruction
        .instr(instr_mem[pc]),
        // ===== OUTPUTS =====
        // rs1, rs2, rd select bits
        .rs1(rs1),
        .rs2(rs2),
        .rd(rd),
        // imm value
        .imm(imm),
        // control signals
        .mux_PC(mux_PC),
        .mux_reg(mux_reg),
        .WE_reg_file(WE_reg_file),
        .WE_data_mem(WE_data_mem),
        .mux_ALU2(mux_ALU2),
        .mux_ALU1(mux_ALU1),
        .ALU_funct(ALU_funct),
        .mem_size(mem_size),
        .sign_val(sign_val),
        .branch_decoder(branch_decoder_on),
        .branch_op(branch_op)
    );

    ALU alu(
        // ===== INPUTS =====
        // control signal
        ALU_funct,
        // in1, in2
        ALU_in1,
        ALU_in2,
        // ===== OUTPUTS =====
        // out
        ALU_out,
        // branch logic flags
        zero_flag,
        unsigned_less_than,
        signed_less_than
    );

    data_mem DATA_MEM(
        // ===== INPUTS =====
        clk, // sync
        ALU_out, // address
        rs2_out, // data_in
        // ===== OUTPUTS =====
        data_mem_out, // data_out
        // ===== CONTROL SIGNAL INPUT =====
        WE_data_mem,
        mem_size,
        sign_val
    );

    reg_file REG_FILE(
        // ===== INPUTS =====
        clk, // sync
        // rs1, rs2, rd select
        rs1,
        rs2,
        rd,
        reg_data_in, // data input
        // ===== OUTPUTS =====
        rs1_out,
        rs2_out,
        // ===== CONTROL SIGNAL INPUT =====
        WE_reg_file
    );
endmodule

// ====== HELPER MODULE ======
// full 32-bit adder
module helper_adder(A, B, Cin, S, Cout);

    input [31:0] A;
    input [31:0] B;
    input Cin;
    output[31:0] S;
    output Cout;

    assign {Cout, S} = A + B + Cin;

endmodule

// branch decoder
module branch_decoder(
    // branch logic flags
    input zero_flag,
    input unsigned_less_than,
    input signed_less_than,
    // enable branch decoder
    input branch_decoder,
    input [2:0] branch_op, // branch op, e.g. BEQ, BNE, etc.
    output reg branch_decision // branch taken, branch not taken
);

    always @(*)
    begin
        if (branch_decoder) begin
            branch_decision = 1'b0;
            case (branch_op)
                3'b000: branch_decision =  zero_flag;          // BEQ
                3'b001: branch_decision = ~zero_flag;          // BNE
                3'b100: branch_decision = signed_less_than;    // BLT
                3'b101: branch_decision = ~signed_less_than;   // BGE
                3'b110: branch_decision = unsigned_less_than;  // BLTU
                3'b111: branch_decision = ~unsigned_less_than; // BGEU
                default: ;
            endcase
        end
        else begin
            branch_decision = 1'b0; // branch not taken
        end
    end
endmodule