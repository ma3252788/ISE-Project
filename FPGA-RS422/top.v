`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:53:47 11/19/2016 
// Design Name: 
// Module Name:    top 
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
module top(clk59m,rst,txd,rxd,send_over,dout);

input clk59m;
input rst;
input rxd;

output txd;
output send_over;
output dout;

wire txd;
wire rxd;
//产生采样频率模块
wire clk1_8m;					//时钟连线

div_1_8m div_1_8m1 (
								.clk59m(clk59m), 
								.clk1_8m(clk1_8m), 
								.rst(rst)
								);

//产生发送模块波特率
wire clk_baud;
div_baud div_baud1 (
								 .clk1_8m(clk1_8m), 
								 .clk_baud(clk_baud), 
								 .rst(rst)
								 );
//由于每有数据产生，所以手动编写数据
wire wrn;
wire rdn;
wire send_over;
wire data_ready;
wire [7:0] dout;
wire [11:0] addra_cnt;
wire [7:0] douta;


wire [7:0] din;


uart uart1 (
    .clk(clk1_8m), 
    .clk_baud(clk_baud), 
    .rst(rst), 
    .rxd(rxd), 
    .din(din), 
    .wrn(wrn), 
    .txd(txd), 
    .rdn(rdn), 
    .dout(dout), 
    .data_ready(data_ready), 
    .send_over(send_over)
    );


endmodule
