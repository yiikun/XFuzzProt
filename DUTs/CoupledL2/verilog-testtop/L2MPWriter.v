module L2MPWriter(
  input clock,
  input reset,
  input en,
  input [1:0] data_metaWway,
  input [0:0] data_metaWvalid,
  input [7:0] data_mshrId,
  input [7:0] data_allocPtr,
  input [0:0] data_allocValid,
  input [1:0] data_dirWay,
  input [0:0] data_dirHit,
  input [6:0] data_sset,
  input [7:0] data_tag,
  input [2:0] data_opcode,
  input [2:0] data_channel,
  input [0:0] data_mshrTask,
  input [63:0] stamp
);
  parameter string site;

  always@(posedge clock) begin
    if(en && !reset) begin
      
    end
  end
endmodule
