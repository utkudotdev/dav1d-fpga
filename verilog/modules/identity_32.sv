`ifndef IDEN_32_VH
/* verilog_format: off */
`define IDEN_32_VH
/* verilog_format: on */

// computes identity 32 on a 1-D array of 16-bit elements (i.e. a row or column)
module identity_32 (
    output signed [15:0] out_array[32],
    output valid,
    output        [15:0] job_id_out,
    output ready,
    input signed [15:0] in_array[32],
    input        [15:0] job_id_in,
    input start_compute,
    input clk,
    input rst
);

    // for now this does nothing and just passes the array out every cycle (with latency 1)
    logic [15:0] internal_registers[32];
    logic valid_reg;
    logic [15:0] internal_job_id;

    integer j;
    always_ff @(posedge clk) begin
        if (rst) begin
            for (j = 0; j < 32; j = j + 1) begin
                internal_registers[j] <= 0;
            end
            valid_reg <= 0;
            internal_job_id <= 0;
        end else begin
            if (start_compute) begin
                internal_registers <= in_array;
                valid_reg <= 1;
                internal_job_id <= job_id_in;
            end
        end
    end
    assign out_array = internal_registers;
    assign valid = valid_reg;
    assign job_id_out = internal_job_id;
    // s-cycle so always ready
    assign ready = 1;
endmodule

`endif
