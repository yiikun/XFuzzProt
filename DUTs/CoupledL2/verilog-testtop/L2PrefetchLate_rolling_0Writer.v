module L2PrefetchLate_rolling_0Writer(
  input clock,
  input reset,
  input en,
  input [63:0] data_yAxisPt,
  input [63:0] data_xAxisPt,
  input [63:0] stamp
);
  parameter string site;

  always@(posedge clock) begin
    if(en && !reset) begin
      
    end
  end
endmodule
