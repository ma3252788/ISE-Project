`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Create Date:   11:18:03 11/19/2016
// Design Name:   uart_send
// Module Name:   D:/workspace/RS_422/test_uart_send.v
// Project Name:  RS_422
////////////////////////////////////////////////////////////////////////////////

module test_uart_send;

	// Inputs
	reg clk_sample;
	reg clk_baud;
	reg rst;
	reg [7:0] din;
	reg wrn;

	// Outputs
	wire txd;
	wire send_over;

	// Instantiate the Unit Under Test (UUT)
	uart_send uut (
		.clk_sample(clk_sample), 
		.clk_baud(clk_baud), 
		.rst(rst), 
		.txd(txd), 
		.din(din), 
		.wrn(wrn), 
		.send_over(send_over)
	);

	initial fork
		clk_sample = 0;
		clk_baud = 0;
		forever 
			#10 clk_sample = ~clk_sample;
		forever
			#160 clk_baud = ~clk_baud;
	join
	initial begin
		// Initialize Inputs
		rst = 0;
		din = 0;
		wrn = 1;
		#10 wrn = 0;
		#10 rst = 1;
		din <= 8'b01001010;
		// Wait 100 ns for global reset to finish

        
		// Add stimulus here
	end
	
	
      
endmodule

