`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:49:36 01/12/2017 
// Design Name: 
// Module Name:    rx 
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
module rx(clk,rst,bps_clk,rxd,bps_start,rx_done,data
    );
	input clk;
	input rst;
	input bps_clk;
	input rxd;

	output bps_start;
	output rx_done;
	output[7:0] data;

	reg reg_rxd0;
	always @(posedge clk or posedge rst) begin
		if (rst) 
			reg_rxd0 <= 1'b1;				
		else 
			reg_rxd0 <= rxd;
	end

	reg reg_rxd1,reg_rxd2;
	always @(posedge clk or negedge rst)
	begin
	if(!rst) begin
		reg_rxd1 <= 1'b1;
		reg_rxd2 <= 1'b1;
	end
	else begin
		reg_rxd1 <= reg_rxd0;
		reg_rxd2 <= reg_rxd1;
	end
	end
	wire reg_negedge = reg_rxd2 & (~reg_rxd1); //�½��ؼ��
	reg bps_start_r;
	reg rx_done_r;
	reg[3:0] state;
	always @(posedge clk or negedge rst)
	begin
	if(!rst) begin
			bps_start_r <= 1'b0;
			rx_done_r <= 1'b0;
	end

	else if(reg_negedge)
		bps_start_r <= 1'b1; //��⵽��ʼλ���򿪲�����ʱ��
	else if(state == 4'd9)
		rx_done_r <= 1'b1; //���ݽ�����ɣ�����һ�����ݴ���
	else if(state == 4'd10) begin
		bps_start_r <= 1'b0; //һ֡���ݴ�����ϣ��رղ�����ʱ��
		rx_done_r <= 1'b0; //��־λ�رգ������ظ�����
	end
	end
	assign bps_start = bps_start_r;
	assign rx_done = rx_done_r; //���ݴ����־λ�����ߣ�����rx����һ֡������ɣ�tx����һ�θ�������

	//reg[3:0] state;
	always @(posedge clk or negedge rst)
	begin
	if(!rst)
		state <= 4'b0;
	else if(state == 4'd10)
		state <= 4'b0; //һ֡���ݴ�����ϣ��ص���ʼ״̬
	else if(bps_clk) //������ÿ���ߵ�ƽ����״̬ת��
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
		4'd9: state <= 4'd10;
		4'd10: state <= 4'b0;
	default: state <= 4'b0;
	endcase
	end
	end

	reg[7:0] data_temp;
	always @(posedge clk or negedge rst)
	begin
	if(!rst)
	begin
	data_temp <= 8'b0;
	end
	else if(bps_clk)
	begin
	case(state)
		4'd1: data_temp[0] <= rxd;
		4'd2: data_temp[1] <= rxd;
		4'd3: data_temp[2] <= rxd;
		4'd4: data_temp[3] <= rxd;
		4'd5: data_temp[4] <= rxd;
		4'd6: data_temp[5] <= rxd;
		4'd7: data_temp[6] <= rxd;
		4'd8: data_temp[7] <= rxd; //��λ��������
	endcase
	end
	end
	assign data = data_temp	;
	
endmodule
