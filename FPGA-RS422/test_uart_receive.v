`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:44:30 11/19/2016
// Design Name:   uart_receive
// Module Name:   D:/workspace/RS_422/test_uart_receive.v
// Project Name:  RS_422
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: uart_receive
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_uart_receive;

	//接收模块 Inputs
	reg clk_sample;
	reg rst;
	//reg rxd;
	reg rdn;

	//接收模块 Outputs
	wire [7:0] dout;
	wire data_ready;
	
	//发送模块 Inputs
	reg clk_baud;
	reg rst1;
	reg [7:0] din;
	reg wrn;

	//发送模块 Outputs
	wire txd;
	wire send_over;

	// Instantiate the Unit Under Test (UUT)
	uart_send uut1 (
		.clk_sample(clk_sample), 
		.clk_baud(clk_baud), 
		.rst(rst1), 
		.txd(txd), 
		.din(din), 
		.wrn(wrn), 
		.send_over(send_over)
	);
	
	uart_receive uut (
		.clk_sample(clk_sample), 
		.rst(rst), 
		.rxd(txd), 
		.dout(dout), 
		.rdn(rdn), 
		.data_ready(data_ready)
	);

//时钟初始化
	initial fork
		clk_sample = 0;
		clk_baud = 0;
		forever 
			#10 clk_sample = ~clk_sample;
		forever
			#160 clk_baud = ~clk_baud;
	join
//发送模块初始化	
	initial begin
		rst1 = 0;
		din = 0;
		wrn = 1;
		#10 wrn = 0;
		#10 rst1 = 1;
		din = 8'b01001010;
		
		#6000rst1 = 0;
		din = 0;
		wrn = 1;
		#10 wrn = 0;
		#10 rst1 = 1;
		din =8'b01110011;
	end
//接收模块初始化	
	initial begin
		rst = 0;
		rdn = 1;
		#10 rst = 1;
		#4000 rdn =0;
		
		#1000 rst = 0;
		rdn = 1;
		#10 rst = 1;
		#4000 rdn =0;
	end
      
endmodule

