`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Create Date:    11:28:09 11/21/2016 
// Design Name: 
// Module Name:    div_baud 
//////////////////////////////////////////////////////////////////////////////////
module div_baud(clk1_8m,clk_baud,rst);

input		clk1_8m;
input		rst;

output	clk_baud;//115200������

reg	[3:0]clkdiv;//16��Ƶ

always @(posedge clk1_8m or negedge rst)//���ò���ʱ�ӻ�ò�����
begin
	if (!rst)
		clkdiv <= 4'b0000 ;
	else
		clkdiv <= clkdiv +1 ;
end

assign clk_baud = clkdiv[3] ;


endmodule
