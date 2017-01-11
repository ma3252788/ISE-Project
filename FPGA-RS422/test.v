`timescale 100ps / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:18:20 12/05/2016
// Design Name:   top
// Module Name:   D:/workspace/RS_422/test.v
// Project Name:  RS_422
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg clk59m;
	reg rst;
	reg rxd;

	// Outputs
	wire txd;
	wire send_over;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.clk59m(clk59m), 
		.rst(rst), 
		.txd(txd), 
		.rxd(rxd), 
		.send_over(send_over)
	);

	initial begin
		clk59m = 0;
		forever 
			#3 clk59m = ~clk59m;
	end
	
	initial begin
		rst = 0;
		rxd <= 1;
		#100 rst = 1;
		#10000
		rxd <= 0;
		
		#4000 rxd <= 1;//01011001
		#4000 rxd <= 0;
		#4000 rxd <= 0;
		#4000 rxd <= 1;
		#4000 rxd <= 1;
		#4000 rxd <= 0;
		#4000 rxd <= 1;
		#4000 rxd <= 0;
		
		#4000 rxd <= 1;
		#10000
		rxd <= 0;
		
		#4000 rxd <= 0;//10111010
		#4000 rxd <= 1;
		#4000 rxd <= 0;
		#4000 rxd <= 1;
		#4000 rxd <= 1;
		#4000 rxd <= 1;
		#4000 rxd <= 0;
		#4000 rxd <= 1;
		
	   #4000 rxd <= 1;
		#10000
		rxd <= 0;
		
		#4000 rxd <= 1;//01100101
		#4000 rxd <= 0;
		#4000 rxd <= 1;
		#4000 rxd <= 0;
		#4000 rxd <= 0;
		#4000 rxd <= 1;
		#4000 rxd <= 1;
		#4000 rxd <= 0; 
		end		
endmodule

