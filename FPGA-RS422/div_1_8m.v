`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Create Date:    10:50:07 11/21/2016 
// Design Name: 
// Module Name:    div_1_8m 
//////////////////////////////////////////////////////////////////////////////////
module div_1_8m(clk59m,clk1_8m,rst); //32·ÖÆµ£¬59M/32/16£½115200
input	rst;
input clk59m;
output clk1_8m;

reg		[11:0]clk_cnt;
reg		clk_out;

parameter	full_time = 32;
parameter	half_time = 16;

assign	clk1_8m = clk_out;

always @(posedge clk59m or negedge rst)
begin
	if(!rst)
		begin
			clk_cnt <= 0;
			clk_out <= 1'b0; 
		end
	else
		begin
			if(clk_cnt < half_time)
				begin
					clk_out <= 1'b1;
					clk_cnt <= clk_cnt + 1;
				end
			else if(clk_cnt >= half_time && clk_cnt < full_time)
				begin
					clk_out <= 1'b0;
					clk_cnt <= clk_cnt + 1;
				end
			else
				begin
					clk_cnt <= 0;
				end
		end
end

endmodule
