module alu(
    input [3:0] ALU_funct, // control signal; tells ALU what function to perform
    input [31:0] in1,
    input [31:0] in2,
    output reg [31:0] out,
    output zero_flag,
    output unsigned_less_than,
    output signed_less_than
);
    // ALU_funct FUNCTIONS
    parameter
        ADD  = 4'd0, SUB = 4'd1,
        SLL  = 4'd2, SLT = 4'd3,
        SLTU = 4'd4, XOR = 4'd5,
        SRL  = 4'd6, SRA = 4'd7,
        OR   = 4'd8, AND = 4'd9,
        JALR_ALU = 4'd10;
    
    wire [31:0] a1_out, s1_out;
    wire A, B, C, a1_carry_flag, s1_carry_flag;
    // branch logic flag: zero
    assign zero_flag = (s1_out == 32'b0);

    // branch logic flag: unsigned less than
    assign unsigned_less_than = ~s1_carry_flag;

    // branch logic flag: signed less than
    assign A = in1[31]; // msb
    assign B = in2[31]; // msb
    assign C = s1_out[31]; // msb of subtraction output

    assign signed_less_than = ((~B) & C) | (A & (~B)) | (A & C); // I came up with this logic through a long
                                                                 // thought process; info on tablet.
    // sll, srl, sra output
    wire [31:0] sll_out, srl_out, sra_out;
    
    always @(*)
    begin
        out = 32'b0; // default; avoids potential latching issues

        case (ALU_funct)
            ADD:  out  = a1_out;
            SUB:  out  = s1_out;
            SLL:  out  = sll_out;
            SLT:  out  = {31'b0, signed_less_than};
            SLTU: out  = {31'b0, unsigned_less_than};
            XOR:  out  = in1 ^ in2;
            SRL:  out  = srl_out;
            SRA:  out  = sra_out;
            OR:   out  = in1 | in2;
            AND:  out  = in1 & in2;
            JALR_ALU: out = {a1_out[31:1], 1'b0};
            default: ;
        endcase
    end

    // adder
    adder a1(in1, in2, 1'b0, a1_out, a1_carry_flag);
    // subtracter
    adder s1(in1, ~in2, 1'b1, s1_out, s1_carry_flag);
    // SLL barrel shifter
    SLL_barrel_shifter sll(in1, in2, sll_out);
    // SRL barrel shifter
    SRL_barrel_shifter srl(in1, in2, srl_out);
    // SRA barrel shifter
    SRA_barrel_shifter sra(in1, in2, sra_out);
endmodule

// ====== HELPER MODULES ======

// full 32-bit adder
module adder(A, B, Cin, S, Cout);

    input [31:0] A;
    input [31:0] B;
    input Cin;
    output[31:0] S;
    output Cout;

    /*
        Some notes for myself to refer to, since this syntax is a useful shortcut:
        * The LHS expects 33 bits: 1 for Cout, and 32 for S
        * The RHS extends A & B by 1 bit to adhere to this rule, and Cin by 32 bits for the same
          reason. This saved me the headache of creating a ripple carry adder, or a special adder.
    */
    assign {Cout, S} = {1'b0, A} + {1'b0, B} + {32'b0, Cin};

endmodule

// 32-bit right logical barrel shifter
module SRL_barrel_shifter(
    input [31:0] in,
    input [31:0] shamt, // [4:0] are shamt bits
    output [31:0] out
);

    wire [31:0] s1, s2, s3, s4;

    // Shift by 1
    assign s1 = shamt[0] ? {1'b0,  in[31:1]} : in;

    // Shift by 2
    assign s2 = shamt[1] ? {2'b0,  s1[31:2]} : s1;

    // Shift by 4
    assign s3 = shamt[2] ? {4'b0,  s2[31:4]} : s2;

    // Shift by 8
    assign s4 = shamt[3] ? {8'b0,  s3[31:8]} : s3;

    // Shift by 16
    assign out = shamt[4] ? {16'b0, s4[31:16]} : s4;
endmodule

// 32-bit right arithmetic barrel shifter
module SRA_barrel_shifter(
    input [31:0] in,
    input [31:0] shamt, // [4:0] are shamt bits
    output [31:0] out
);

    wire [31:0] s1, s2, s3, s4;

    // Shift by 1
    assign s1 = shamt[0] ? {{in[31]},  in[31:1]} : in;

    // Shift by 2
    assign s2 = shamt[1] ? {{2{in[31]}},  s1[31:2]} : s1;

    // Shift by 4
    assign s3 = shamt[2] ? {{4{in[31]}},  s2[31:4]} : s2;

    // Shift by 8
    assign s4 = shamt[3] ? {{8{in[31]}},  s3[31:8]} : s3;

    // Shift by 16
    assign out = shamt[4] ? {{16{in[31]}}, s4[31:16]} : s4;

endmodule

// 32-bit left logical barrel shifter
module SLL_barrel_shifter(
    input  wire [31:0] in,
    input  wire [31:0]  shamt, // [4:0] are shamt bits
    output wire [31:0] out
);

    wire [31:0] s1, s2, s3, s4;

    // Shift by 1
    assign s1 = shamt[0] ? {in[30:0], 1'b0} : in;

    // Shift by 2
    assign s2 = shamt[1] ? {s1[29:0], 2'b0} : s1;

    // Shift by 4
    assign s3 = shamt[2] ? {s2[27:0], 4'b0} : s2;

    // Shift by 8
    assign s4 = shamt[3] ? {s3[23:0], 8'b0} : s3;

    // Shift by 16
    assign out = shamt[4] ? {s4[15:0], 16'b0} : s4;

endmodule
