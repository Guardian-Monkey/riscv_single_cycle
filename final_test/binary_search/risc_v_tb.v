/* Defines time units and precision for the simulator */
// 1ns means all delays are in nanoseconds (e.g. `#3` = 3ns, `#1000` = 1000ns)
// 100ps means the simulator rounds to 0.1 ns precision (100 pico seconds = .1 nano second)
`timescale 1ns/100ps
// Forces you to explicitely declare all wires/regs; 
// results in errors being thrown at compilation if is the case.
`default_nettype none
// Copies the contents of that file before compilation so the module risc_v becomes visible.
`include "../../verilog/risc_v.v"

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
      #1000
      // Print values to the console by accessing the internal signals of the module.
      // This assumes that those registers are declared in risc_v and are visible (not hidden)
      $display("x1, low ptr:%h", proc.REG_FILE.registers[0]); // low ptr
      $display("x2, length of array:%h", proc.REG_FILE.registers[1]); // length of array
      $display("x3, high ptr:%h", proc.REG_FILE.registers[2]); // high ptr
      $display("x4, target value:%h", proc.REG_FILE.registers[3]); // target value
      $display("x5, midpoint:%h", proc.REG_FILE.registers[4]); // midpoint
      $display("x6, value at midpoint:%h", proc.REG_FILE.registers[5]); // value at midpoint
      $display("x30, output:%h", proc.REG_FILE.registers[29]);
      // Stops the simulation completely
      $finish;
   // closes the intitial block
   end
// closes the module
endmodule // risc_v_TB