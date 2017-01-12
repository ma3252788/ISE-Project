`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:40:58 01/12/2017 
// Design Name: 
// Module Name:    bps_generate 
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
module bps_generate(clk,rst,bps_start,bps_clk
    );

	input clk;
	input rst;
	input bps_start;

	output bps_clk;

	parameter CNT_NUM = 434;
	parameter CNT_NUM_2 = 216;

	reg[15:0] cnt;
	always @(posedge clk or negedge rst) begin
		if (!rst) 
			cnt <= 16'b0;// reset
		else if (cnt == CNT_NUM)
			cnt <= 16'b0;
		else if (bps_start)
			cnt <= cnt + 1'b1;
		else cnt <= 16'b0; 
	end

	reg bps_clk_r;
	always @(posedge clk or negedge rst) begin
		if (!rst) 
			bps_clk_r <= 1'b0;
		else if (cnt == CNT_NUM_2)
			bps_clk_r <= 1'b1;
		else bps_clk_r <= 1'b0;
	end
	assign bps_clk = bps_clk_r;
endmodule
