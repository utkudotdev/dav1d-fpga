`ifndef B_VH_
/* verilog_format: off */
`define B_VH_
/* verilog_format: on */
`include "./modules/av1_helper_functions.sv"
import av1_helper_functions::*;

module b_transform (
    output logic signed [15:0] x,
    output logic signed [15:0] y,
    input wire signed [15:0] t_a,
    input wire signed [15:0] t_b,
    input wire c,
    input wire [7:0] angle
);

    butterfly_t b_res;
    always_comb begin
        b_res = b(t_a, t_b, c, angle);
        x = b_res.a;
        y = b_res.b;
    end

endmodule

`endif

