`ifndef MEMT_VH_
/* verilog_format: off */
`define MEMT_VH_
/* verilog_format: on */

//============================================================
// M10K module for testing ONLY!
//============================================================

module TESTMEM_16_1024 (
    output reg [15:0] q,
    input [15:0] d,
    input [9:0] write_address,
    input [9:0] read_address,
    input we,
    input rst,
    input clk
);
    // force M10K ram style
    reg [15:0] mem[1024]  /* synthesis ramstyle = "no_rw_check, M10K" */;

    integer i;
    always @(posedge clk) begin
        if (rst) begin
            for (i = 0; i < 1024; i = i + 1) begin
                mem[i] = i;
            end
        end
        else if (we) begin
            mem[write_address] <= d;
        end
        q <= mem[read_address];  // q doesn't get d in this clock cycle
    end
endmodule

`endif
