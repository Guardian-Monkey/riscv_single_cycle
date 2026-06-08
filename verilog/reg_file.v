module reg_file(
    // synchronous clock
    input clk,
    // inputs
    input [4:0] rs1,
    input [4:0] rs2,
    input [4:0] rd,
    input [31:0] data_in,
    // outputs
    output reg [31:0] rs1_out,
    output reg [31:0] rs2_out,
    // control signal
    input WE_reg_file
);
    wire [31:0] r0; // register zero; read-only register (x0 in risc-v)
    assign r0 = 32'b0; // hardwired to zero

    reg [31:0] registers [30:0]; // 31 general-purpose registers, each 32 bits in length

    integer i;

    initial begin
        for (i = 0; i < 31; i = i + 1)
            registers[i] = 32'b0;
    end

    // rs1:
    always @(*)
    begin
        if (rs1 == 5'b0)
            rs1_out = r0;
        else
            rs1_out = registers[rs1 - 1];
    end

    // rs2:
    always @(*)
    begin
        if (rs2 == 5'b0)
            rs2_out = r0;
        else
            rs2_out = registers[rs2 - 1];
    end

    // rd:
    always @(posedge clk)
    begin
        if (WE_reg_file)
        begin
            if (rd != 5'b0)
                registers[rd - 1] <= data_in;
        end
    end
endmodule