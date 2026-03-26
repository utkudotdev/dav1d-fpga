`include "M10K_16_1024.sv"
`include "identity_32.sv"

`ifndef AV1_VH_
/* verilog_format: off */
`define AV1_VH_
/* verilog_format: on */

module av1_decode   (
                    output  signed  [15:0] mem_write_data,
                    output          [9:0]  mem_write_addr,
                    output  signed  [15:0] mem_read_data,
                    output  we,
                    input           [9:0]  mem_read_addr,
                    input   load,
                    input   clk,
                    input   rst
                    )

    // load signal logic
    
    // talk to qsys attached memory --> put in array
    localparam N = 32;
    logic signed [15:0] row_arr [N];
    logic signed [15:0] row_reg_D [N];
    logic [15:0] row_reg_sel;
    always_ff @(posedge clk) begin
        if (rst) begin
            row_arr <= '{N'b0};
        end
        else begin
            if (load) begin
                row_arr <= row_reg_in;
            end
        end
    end

    genvar i
    generate
        for (i = 0; i < N; i++) begin : : gen_reg_row_in
            always_comb begin 
                if (!load) begin
                    row_reg_D[i] = row_arr[i];
                end
                else begin
                    // load each register with some value from memory when we enable that
                    row_reg_D[i] = row_reg_sel[i] ? mem_read_data : row_arr[i];
                end 
            end        
        end
    endgenerate
     

    // pass some stuff into compute (the identity PL for now) (horizontal)
    // put an entire row (i.e. 0:31 into an array)

    // write that stuff to a temporary memory

    // read temp mem 
    // pass that stuff into compute (the identity PL for now) (vertical)
    // put an entire column (i.e. 0, 32, 64, 48)

    // write temp mem back to qsys mem

endmodule
`endif