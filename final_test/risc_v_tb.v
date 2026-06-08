/* Defines time units and precision for the simulator */
// 1ns means all delays are in nanoseconds (e.g. `#3` = 3ns, `#1000` = 1000ns)
// 100ps means the simulator rounds to 0.1 ns precision (100 pico seconds = .1 nano second)
`timescale 1ns/100ps
// Forces you to explicitely declare all wires/regs; 
// results in errors being thrown at compilation if is the case.
`default_nettype none
// Copies the contents of that file before compilation so the module risc_v becomes visible.
`include "./../verilog/risc_v.v"

// Defines a testbench module; no ports means it's the top-level simulation unit.
module risc_v_TB;

   // Declares a register named 'clk' which is initialized to 0 at time 0.
   // In testbenches, `reg` = "a variable I can assign in procedural blocks".
   reg clk = 0;

   // Instantiate the design under test (DUT).
   // Meaning: the testbench drives clk, the processor runs using that clk.
   risc_v proc(.clk(clk));

   // This creates a clock signal.
   // How it works: every 3ns, invert clk (therefore, 0 -> 3ns -> 1 -> 6ns -> 0 etc.).
   // This produces a period of 6ns.
   always #3
     clk = ~clk;

   // The initial block always only executes once at time = 0.
   // Used for: setup, and simulation control.
   initial begin
      // Creates a VCD file (used in tools like GTKWave to visualize signals)
      $dumpfile("risc_v_tb.vcd");
      // Dumps all signals in this module (and below it); 0 means include everything recursively.
      $dumpvars(0, risc_v_TB);
      // Wait 1000 ns.
      // While waiting, the simulation continues running (clk keeps toggling, processor keeps executing).

      #3
      $display("=============== NEXT ===============");
      $display("prog_counter:%h", proc.pc);
      $display("DATA MEM SIGNALS:");
      $display("ALU_out (address for data mem):%h", proc.ALU_out);
      $display("REG FILE SIGNALS:");
      $display("rd:%h", proc.rd);
      $display("WE_reg_file:%h", proc.WE_reg_file);
      $display("reg_data_in:%h", proc.reg_data_in);
      #3
      $display("=============== NEXT ===============");
      $display("prog_counter:%h", proc.pc);
      $display("DATA MEM SIGNALS:");
      $display("ALU_out (address for data mem):%h", proc.ALU_out);
      $display("REG FILE SIGNALS:");
      $display("rd:%h", proc.rd);
      $display("WE_reg_file:%h", proc.WE_reg_file);
      $display("reg_data_in:%h", proc.reg_data_in);
      #6
      $display("=============== NEXT ===============");
      $display("prog_counter:%h", proc.pc);
      $display("DATA MEM SIGNALS:");
      $display("ALU_out (address for data mem):%h", proc.ALU_out);
      $display("REG FILE SIGNALS:");
      $display("rd:%h", proc.rd);
      $display("WE_reg_file:%h", proc.WE_reg_file);
      $display("reg_data_in:%h", proc.reg_data_in);
      #6
      $display("=============== NEXT ===============");
      $display("prog_counter:%h", proc.pc);
      $display("DATA MEM SIGNALS:");
      $display("ALU_out (address for data mem):%h", proc.ALU_out);
      $display("REG FILE SIGNALS:");
      $display("rd:%h", proc.rd);
      $display("WE_reg_file:%h", proc.WE_reg_file);
      $display("reg_data_in:%h", proc.reg_data_in);
      #6
      $display("=============== NEXT ===============");
      $display("prog_counter:%h", proc.pc);
      $display("DATA MEM SIGNALS:");
      $display("ALU_out (address for data mem):%h", proc.ALU_out);
      $display("REG FILE SIGNALS:");
      $display("rd:%h", proc.rd);
      $display("WE_reg_file:%h", proc.WE_reg_file);
      $display("reg_data_in:%h", proc.reg_data_in);
      #6
      $display("=============== NEXT ===============");
      $display("prog_counter:%h", proc.pc);
      $display("DATA MEM SIGNALS:");
      $display("ALU_out (address for data mem):%h", proc.ALU_out);
      $display("REG FILE SIGNALS:");
      $display("rd:%h", proc.rd);
      $display("WE_reg_file:%h", proc.WE_reg_file);
      $display("reg_data_in:%h", proc.reg_data_in);
      #1000
      // Print values to the console by accessing the internal signals of the module.
      // This assumes that those registers are declared in risc_v and are visible (not hidden)
      $display("Final state of register file:\n\tx1=%h\n\tx2=%h", 
          proc.REG_FILE.registers[0], proc.REG_FILE.registers[1]);
      $display("\tx3=%h\n\tx4=%h\n\tx5=%h\n\tx6=%h\n\tx7=%h\n\tx8=%h\n\tx9=%h\n\tx10=%h",
        proc.REG_FILE.registers[2], proc.REG_FILE.registers[3], proc.REG_FILE.registers[4], proc.REG_FILE.registers[5],
        proc.REG_FILE.registers[6], proc.REG_FILE.registers[7], proc.REG_FILE.registers[8], proc.REG_FILE.registers[9]);
    //   $display("Final state of instruction memory:\n\taddr0:%h\n\taddr1:%h\n\taddr2:%h\n\taddr3:%h",
    //     proc.instr_mem[0], proc.instr_mem[1], proc.instr_mem[2], proc.instr_mem[3]);
    //   $display("Final state of data memory:\n\taddr0:%h\n\taddr1:%h",
    //   proc.DATA_MEM.RAM[0], proc.DATA_MEM.RAM[4]);
      // Stops the simulation completely
      $finish;
   // closes the intitial block
   end
// closes the module
endmodule // risc_v_TB