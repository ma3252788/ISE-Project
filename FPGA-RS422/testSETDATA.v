`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:49:52 11/21/2016
// Design Name:   SETDATAuart_send
// Module Name:   D:/workspace/RS_422/testSETDATA.v
// Project Name:  RS_422
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: SETDATAuart_send
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testSETDATA;

	// Inputs
	reg clk_sample;
	reg rst;
	reg data_ready;

	// Outputs
	wire wrn;
	wire rdn;

	// Instantiate the Unit Under Test (UUT)
	SETDATAuart_send uut (
		 .clk_sample(clk_sample), 
		 .rst(rst), 
		 .wrn(wrn), 
		 .rdn(rdn), 
		 .data_ready(data_ready)
	);

	initial begin
		// Initialize Inputs

		rst = 0;
		data_ready = 0;
		#60 rst = 1;
		#200 data_ready <= 1;
		#90 data_ready <= 0;
		
		#400 data_ready <= 1;
		#90 data_ready <= 0;
	end
	
	initial begin
		clk_sample = 0;
		forever
			#3 clk_sample = ~clk_sample;
	end
      
endmodule

