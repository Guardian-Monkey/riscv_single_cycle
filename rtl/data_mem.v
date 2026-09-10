// Writes are sequential, reads are combinational
// Memory follows little-endian architecture. I chose this b/c online it says most ISAs use little-endian
module data_mem(
    // synchronous clock
    input clk,
    // inputs, output
    input [31:0] addr, // [12:0] are use for addr; comes from ALU output for load and store operations
    input [31:0] data_in,
    output reg [31:0] data_out,
    // control signals
    input WE_data_mem, // control signal; 1 means write enabled
    input [1:0] mem_size, // for stores & loads; 0 = byte, 1 = halfword, 2 = word
    input sign_val // for signed or unsigned loads; 1 = sign extend
    
);
    parameter 
        BYTE = 2'd0, HALFWORD = 2'd1,
        WORD = 2'd2;

    initial begin
        // path is relative to where the simulation is ran (build directory)
        // in other words: YOU MUST RUN SIM FROM ROOT PROJECT DIRECTORY!!!
        $readmemh("assembler/out/data.mem", RAM); // hex file; each line is data (byte)
    end

    wire [12:0] data_addr;
    assign  data_addr = addr[12:0]; // 2^13 = 8192 mem cells

    reg [7:0] RAM [8191:0]; // 8192 mem cells, byte addressable

    // reads:
    always @(*)
    begin
        data_out = 32'b0; // default; avoids potential latching issues
        // combinational logic for data_mem
        case (mem_size)
            BYTE: data_out = sign_val ? {{24{RAM[data_addr][7]}}, RAM[data_addr]} : {24'b0, RAM[data_addr]};
            HALFWORD: data_out = sign_val ? {{16{RAM[data_addr+1][7]}}, RAM[data_addr+1], RAM[data_addr]} : {16'b0, RAM[data_addr+1], RAM[data_addr]};
            WORD: data_out = {RAM[data_addr+3], RAM[data_addr+2], RAM[data_addr+1], RAM[data_addr]};
            default: ;
        endcase
    end

    // writes:
    always @(posedge clk)
    begin
        // sequential logic for data_mem
        if (WE_data_mem)
        begin
            case (mem_size)
                BYTE: RAM[data_addr] <= data_in[7:0];
                HALFWORD: begin
                    RAM[data_addr]   <= data_in[7:0];
                    RAM[data_addr+1] <= data_in[15:8];
                end
                WORD: begin
                    RAM[data_addr]   <= data_in[7:0];
                    RAM[data_addr+1] <= data_in[15:8];
                    RAM[data_addr+2] <= data_in[23:16];
                    RAM[data_addr+3] <= data_in[31:24];
                end
                default: ;
            endcase
        end
    end
endmodule