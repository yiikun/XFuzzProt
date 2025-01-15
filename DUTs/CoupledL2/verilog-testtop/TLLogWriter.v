module TLLogWriter(
  input clock,
  input reset,
  input en,
  input [63:0] data_echo,
  input [63:0] data_user,
  input [63:0] data_data_0,
  input [63:0] data_data_1,
  input [63:0] data_data_2,
  input [63:0] data_data_3,
  input [63:0] data_address,
  input [7:0] data_sink,
  input [7:0] data_source,
  input [7:0] data_param,
  input [7:0] data_opcode,
  input [7:0] data_channel,
  input [63:0] stamp
);
  parameter string site;

  always@(posedge clock) begin
    if(en && !reset) begin
      
    end
  end
endmodule
