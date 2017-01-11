`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:39:22 11/21/2016
// Design Name:   div_baud
// Module Name:   D:/workspace/RS_422/test_div_baud.v
// Project Name:  RS_422
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: div_baud
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_div_baud;

	// Inputs
	reg clk1_8m;
	reg rst;

	// Outputs
	wire clk_baud;

	// Instantiate the Unit Under Test (UUT)
	div_baud uut (
		.clk1_8m(clk1_8m), 
		.clk_baud(clk_baud), 
		.rst(rst)
	);

	initial begin
		// Initialize Inputs
		clk1_8m = 0;
		rst = 0;
		#10;
		rst = 1;
		forever
			#10 clk1_8m = ~clk1_8m;
	end
      
endmodule

