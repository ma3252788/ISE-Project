`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:12:40 01/12/2017 
// Design Name: 
// Module Name:    uart 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module uart(clk,rst,rxd,txd
    );
	 input clk;
	 input rst;
	 input rxd;

	 output txd;

	 wire bps_start1,bps_start2;
	 wire bps_clk1,bps_clk2;
	 wire rx_done;//数据接收完毕信号，由rx输出到tx，rx接收数据由tx发送出去
	 wire[7:0] data;//数据寄存器

	 bps_generate rx_clk(
	 	.clk(clk),
	 	.rst(rst),
	 	.bps_start(bps_start1),
	 	.bps_clk(bps_clk1)
	 	);

	 rx rx(
	 	.clk(clk),
	 	.rst(rst),
	 	.rxd(rxd),
	 	.bps_clk(bps_clk1),
	 	.bps_start(bps_start1),
	 	.rx_done(rx_done),
	 	.data(data)
	 	);

	 bps_generate tx_clk(
	 	.clk(clk),
	 	.rst(rst),
	 	.bps_start(bps_start2),
	 	.bps_clk(bps_clk2)
	 	);

	 tx tx(
	 	.clk(clk),
	 	.rst(rst),
	 	.bps_clk(bps_clk2),
	 	.bps_start(bps_start2),
	 	.data(data),
	 	.rx_done(rx_done),
	 	.txd(txd)
	 	);
		
endmodule
