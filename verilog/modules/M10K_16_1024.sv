`ifndef MEM_VH_
/* verilog_format: off */
`define MEM_VH_
/* verilog_format: on */

//============================================================
// M10K module for testing
//============================================================

module M10K_16_1024 (
    output reg [15:0] q,
    input [15:0] d,
    input [9:0] write_address, read_address,
    input we, clk
);
    // force M10K ram style
    reg [15:0] mem [1024]  /* synthesis ramstyle = "no_rw_check, M10K" */;

    always @ (posedge clk) begin
        if (we) begin
            mem[write_address] <= d;
        end
        q <= mem[read_address]; // q doesn't get d in this clock cycle
    end
endmodule

`endif
