module control_unit(
    // INSTRUCTION
    input [31:0] instr,
    // RS1, RS2, RD
    output reg [4:0] rs1,
    output reg [4:0] rs2,
    output reg [4:0] rd,
    // IMM VAL
    output reg [31:0] imm,
    // CONTROL SIGNALS
    output reg mux_PC,
    output reg [1:0] mux_reg,
    output reg WE_reg_file,
    output reg WE_data_mem,
    output reg [1:0] mux_ALU2,
    output reg mux_ALU1,
    output reg [3:0] ALU_funct,
    output reg [1:0] mem_size, // for stores & loads; 0 = byte, 1 = halfword, 2 = word
    output reg sign_val, // for signed or unsigned loads; 1 = sign extend
    output reg branch_decoder,
    output reg [2:0] branch_op
);
    // OPCODES
    parameter
        OP     = 7'b0110011, OP_IMM = 7'b0010011,
        STORE  = 7'b0100011, LOAD   = 7'b0000011,
        BRANCH = 7'b1100011, JALR   = 7'b1100111,
        JAL    = 7'b1101111, AUIPC  = 7'b0010111,
        LUI    = 7'b0110111;
        // FENCE & SYSTEM instructions will not be implemented till maybe in the future
    
    // ALU_funct FUNCTIONS
    parameter
        ADD  = 4'd0, SUB = 4'd1,
        SLL  = 4'd2, SLT = 4'd3,
        SLTU = 4'd4, XOR = 4'd5,
        SRL  = 4'd6, SRA = 4'd7,
        OR   = 4'd8, AND = 4'd9,
        JALR_ALU = 4'd10; // only instruction which requires unique modification of lsb; easy to just make it part of the ALU

    always @(*)
    begin
        // defaults; avoids potential latching issues
        mux_PC         = 1'b1;  // select output from pc adder
        mux_reg        = 2'b00;
        WE_reg_file    = 1'b0;
        WE_data_mem    = 1'b0;
        mux_ALU2       = 2'b00;
        mux_ALU1       = 1'b0;
        rs1            = 5'd0;
        rs2            = 5'd0;
        rd             = 5'd0;
        imm            = 32'd0;
        ALU_funct      = AND;
        mem_size       = 2'b10;  // read word by default for store and load
        sign_val       = 1'b1;   // sign extend by default for load
        branch_decoder = 1'b0;   // decoder off
        branch_op      = 3'b0;
        
        // opcode checked first
        case (instr[6:0])
            OP: begin
                // no imm, therefore ignored; dealt with in default
                mux_PC      = 1'b1;  // select output from pc adder
                mux_reg     = 2'b00; // select ALU output
                WE_reg_file = 1'b1;  // write enabled for reg file
                WE_data_mem = 1'b0;  // write disabled for data mem
                mux_ALU2    = 2'b00; // select rs1_out from reg file
                mux_ALU1    = 1'b0;  // select rs2_out from reg file
                rd          = instr[11:7];
                rs1         = instr[19:15];
                rs2         = instr[24:20];

                case (instr[14:12]) // funct3 bits
                    3'b000: begin // ADD or SUB
                        case (instr[30]) // funct7 bit
                            1'b0: ALU_funct = ADD; // ADD
                            1'b1: ALU_funct = SUB; // SUB
                            default: ;
                        endcase
                    end
                    3'b001: ALU_funct = SLL;  // SLL
                    3'b010: ALU_funct = SLT;  // SLT
                    3'b011: ALU_funct = SLTU; // SLTU
                    3'b100: ALU_funct = XOR;  // XOR
                    3'b101: begin // SRL or SRA
                        case (instr[30]) // funct7 bit
                            1'b0: ALU_funct = SRL; // SRL
                            1'b1: ALU_funct = SRA; // SRA
                            default: ;
                        endcase
                    end
                    3'b110: ALU_funct = OR;  // OR
                    3'b111: ALU_funct = AND; // AND
                    default: ;
                endcase
            end
            OP_IMM: begin
                mux_PC      = 1'b1;  // select output from pc adder
                mux_reg     = 2'b00; // select ALU output
                WE_reg_file = 1'b1;  // write enabled for reg file
                WE_data_mem = 1'b0;  // write disabled for data mem
                mux_ALU2    = 2'b00; // select rs1_out from reg file
                mux_ALU1    = 1'b1;  // select imm val as 2nd argument to ALU (in_2)
                rd          = instr[11:7];
                rs1         = instr[19:15];
                imm         = {{20{instr[31]}}, instr[31:20]}; // imm for I-type instr (op_imm)
                                                               // this is different for SLLI, SRLI, and SRAI
                case (instr[14:12]) // funct3 bits
                    3'b000: ALU_funct = ADD;  // ADDI
                    3'b010: ALU_funct = SLT;  // SLTI
                    3'b011: ALU_funct = SLTU; // SLTIU
                    3'b100: ALU_funct = XOR;  // XORI
                    3'b110: ALU_funct = OR;   // ORI
                    3'b111: ALU_funct = AND;  // ANDI
                    3'b001: begin // SLLI
                        ALU_funct = SLL;
                        imm = {27'b0, instr[24:20]}; // specialization of I-type instr format for shift
                    end
                    3'b101: begin // SRLI or SRAI
                        case (instr[30]) // funct7 bit
                            1'b0: begin 
                                ALU_funct = SRL; // SRLI
                                imm = {27'b0, instr[24:20]}; // specialization of I-type instr format for shift
                            end
                            1'b1: begin 
                                ALU_funct = SRA; // SRAI
                                imm = {27'b0, instr[24:20]}; // specialization of I-type instr format for shift
                            end
                            default: ;
                        endcase
                    end
                endcase
            end
            STORE: begin
                mux_PC      = 1'b1;  // select output from pc adder
                // mux_reg, WE_reg_file not needed here; defaults used
                WE_data_mem = 1'b1;  // select rs1_out from reg file
                mux_ALU2    = 2'b00; // select rs1_out from reg file
                mux_ALU1    = 1'b1;  // select imm val as 2nd argument to ALU (in_2)
                rs1         = instr[19:15];
                rs2         = instr[24:20];
                imm         = {{20{instr[31]}}, instr[31:25], instr[11:7]}; // S-type imm, sign extended
                ALU_funct   = ADD;   // all store instructions require the ADD functionality of the ALU
                case (instr[14:12]) // funct3 bits
                    3'b000: mem_size = 2'b00; // SB
                    3'b001: mem_size = 2'b01; // SH
                    3'b010: mem_size = 2'b10; // SW
                    default: ;
                endcase
            end
            LOAD: begin
                WE_reg_file = 1'b1;  // need to write to register file, therefore signal ON
                mux_reg     = 2'b10; // select output from data_mem
                mux_PC      = 1'b1;  // select output from pc adder
                mux_ALU2    = 2'b00; // select rs1_out from reg file
                mux_ALU1    = 1'b1;  // select imm
                rd          = instr[11:7];
                rs1         = instr[19:15];
                imm         = {{20{instr[31]}}, instr[31:20]}; // imm for I-type instr (load);
                ALU_funct   = ADD;
                case (instr[14:12]) // funct3 bits
                    3'b000: mem_size = 2'b00; // LB
                    3'b001: mem_size = 2'b01; // LH
                    3'b010: mem_size = 2'b10; // LW
                    3'b100: begin // LBU
                        mem_size = 2'b00;
                        sign_val = 1'b0; // zero extend
                    end
                    3'b101: begin // LHU
                        mem_size = 2'b01;
                        sign_val = 1'b0; // zero extend
                    end
                    default: ;
                endcase
            end
            BRANCH: begin
                mux_PC         = 1'b1;  // select adder output
                mux_reg        = 2'b00;
                WE_reg_file    = 1'b0;
                WE_data_mem    = 1'b0;
                mux_ALU2       = 2'b0;  // rs1_out
                mux_ALU1       = 1'b0;  // rs2_out
                rs1            = instr[19:15];
                rs2            = instr[24:20];
                ALU_funct      = SUB;
                imm            = {{20{instr[31]}}, instr[7], instr[30:25], instr[11:8], 1'b0}; // B-type imm (branch)
                branch_decoder = 1'b1;
                branch_op      = instr[14:12];
            end
            JALR: begin
                mux_PC      = 1'b0;  // jump target address
                mux_reg     = 2'b01; // pc + 32'd32
                WE_reg_file = 1'b1;  // enable write to register file
                WE_data_mem = 1'b0;
                mux_ALU2    = 2'b00; // rs1_out
                mux_ALU1    = 1'b1;  // imm
                ALU_funct   = JALR_ALU;
                rd          = instr[11:7];
                rs1         = instr[19:15];
                imm         = {{20{instr[31]}}, instr[31:20]}; // imm for I-type instr (load);
            end
            JAL: begin
                mux_PC      = 1'b0;  // jump target address
                mux_reg     = 2'b01; // pc + 32'd32
                WE_reg_file = 1'b1;  // enable write to register file
                WE_data_mem = 1'b0;
                mux_ALU2    = 2'b10; // pc
                mux_ALU1    = 1'b1;  // imm
                ALU_funct   = ADD;
                rd          = instr[11:7];
                imm         = {{12{instr[31]}}, instr[19:12], instr[20], instr[30:21], 1'b0}; // J-type imm (jump)
            end
            AUIPC: begin
                mux_PC      = 1'b1;  // select adder output to pc
                mux_reg     = 2'b00; // select ALU output
                WE_reg_file = 1'b1;  // enable write to the register file
                WE_data_mem = 1'b0;
                mux_ALU2    = 2'b10; // pc
                mux_ALU1    = 1'b1;  // imm
                ALU_funct   = ADD;
                rd          = instr[11:7];
                imm         = {instr[31:12], 12'b0}; // U-type imm (add upper imm to pc)
            end
            LUI: begin
                mux_PC      = 1'b1;  // select adder output to pc
                mux_reg     = 2'b00; // select ALU output
                WE_reg_file = 1'b1;  // enable write to the register file
                WE_data_mem = 1'b0;
                mux_ALU2    = 2'b01; // 0x0
                mux_ALU1    = 1'b1;  // imm
                ALU_funct   = ADD;
                rd          = instr[11:7];
                imm         = {instr[31:12], 12'b0}; // U-type imm (load upper imm)
            end
            default: ; // catch all default arm; no need to assign anything b/c top-of-block default pattern used
        endcase
    end
endmodule