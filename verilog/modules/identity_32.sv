`ifndef IDEN_32_VH
/* verilog_format: off */
`define IDEN_32_VH
/* verilog_format: on */

module identity_32      (   output signed [15:0] out_array [32],
                            output done_row,
                            input  signed [15:0] in_array [32],
                            input  load,
                            input  clk,
                            input  rst
                        )

    // for now this does nothing and just passes the array out every cycle (with latency 1)
    logic [15:0] internal_registers [32];
    logic done_reg;

    always_ff @(posedge clk) begin
        if (rst) begin
            internal_registers <= '{16'b0};
            done_reg <= 0;
        end else begin
            if (load) begin
                internal_registers <= in_array;
                done_reg <= 1;
            end else
                done_reg <= 0;
        end
    end
    assign out_array = internal_registers;
    assign done_row <= done_reg;
endmodule

`endif