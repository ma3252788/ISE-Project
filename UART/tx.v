`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:02:34 01/12/2017 
// Design Name: 
// Module Name:    tx 
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
module tx(
input clk,
input rst,
input bps_clk,
input rx_done,
input[7:0] data,
output bps_start,
output txd
);
reg bps_start_r;
reg[3:0] state;
always @(posedge clk or negedge rst)
begin
 if(!rst)
  bps_start_r <= 1'b0;
 else if(rx_done)
  bps_start_r <= 1'b1;
 else if(state == 4'd11)
  bps_start_r <= 1'b0;
end
assign bps_start = bps_start_r;
reg[7:0] tx_data;
always @(posedge clk or negedge rst)
begin
 if(!rst) 
  tx_data <= 8'b0;
 else if(rx_done)
  tx_data <= data;
end

always @(posedge clk or negedge rst)
begin
 if(!rst)
  state <= 4'b0;
 else if(bps_clk)
 begin
  case(state)
   4'd0: state <= 4'd1;
   4'd1: state <= 4'd2;
   4'd2: state <= 4'd3;
   4'd3: state <= 4'd4;
   4'd4: state <= 4'd5;
   4'd5: state <= 4'd6;
   4'd6: state <= 4'd7;
   4'd7: state <= 4'd8;
   4'd8: state <= 4'd9;
   4'd9: state <= 4'd11;
  // 4'd10: state <= 4'd11;
   4'd11: state <= 4'b0;
   default: state <= 4'b0;
  endcase
 end
end

reg txd_r;
always @(posedge clk or negedge rst)
begin
 if(!rst)
  txd_r <= 1'b1;
 else if(bps_clk)
 begin
  case(state)
   4'd1: txd_r <= 1'b0;
   4'd2: txd_r <= tx_data[0];
   4'd3: txd_r <= tx_data[1];
   4'd4: txd_r <= tx_data[2];
   4'd5: txd_r <= tx_data[3];
   4'd6: txd_r <= tx_data[4];
   4'd7: txd_r <= tx_data[5];
   4'd8: txd_r <= tx_data[6];
   4'd9: txd_r <= tx_data[7];
  // 4'd10: txd_r <= 1'b1; //crc
   4'd11: txd_r <= 1'b1; //stop
  endcase
 end
end
assign txd = txd_r;
endmodule