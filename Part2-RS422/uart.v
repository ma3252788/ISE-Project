`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:45:45 01/11/2017 
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
module uart(clk59m,rst,txd,rxd,send_over,dout
    );
	 
//设置输入输出
input clk59m;
input rst;
input rxd;

output txd;
output send_over;
output dout;


wire txd;//将txd和rxd设为线网型
wire rxd;

wire samp_baud;//生成采样频率模块  










endmodule
