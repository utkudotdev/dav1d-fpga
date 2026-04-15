`include "M10K_16_1024.sv"
`include "identity_32.sv"
`include "arr_writer.sv"
`include "arr_reader.sv"

`ifndef BLOCK_32_VH_
/* verilog_format: off */
`define BLOCK_32_VH_
/* verilog_format: on */

module single_block_32   (
                    output  signed  [15:0] mem_write_data,
                    output          [9:0]  mem_write_addr,
                    output          [9:0]  mem_read_addr,
                    output  we,
                    output  ready,
                    input   signed  [15:0] mem_read_data,
                    input   request,
                    input   clk,
                    input   rst
                    );

    // load signal logic
    typedef enum logic [1:0] {
        INIT,
        START_JOB,
        WORKING_ARR,
        SWAP_TO_COL
    } state_t;
    state_t state;

    logic done_rows;
    wire  done_all_writes;
    always_ff @(posedge clk) begin
        if (rst) begin
            done_rows <= 0;
            state <= INIT;
        end
        else begin
            case (state)
                INIT: begin
                    state       <= request ? START_JOB : INIT;
                    done_rows   <= 0;
                end
                START_JOB: begin
                    state       <= WORKING_ARR;
                end
                WORKING_ARR: begin
                    state       <= done_all_writes ? SWAP_TO_COL : WORKING_ARR;
                end
                SWAP_TO_COL: begin // TODO: this state can disappear later
                    state       <= done_rows ? INIT : START_JOB;
                    done_rows   <= !done_rows;
                end
                default: begin
                    state       <= INIT;
                    done_rows   <= 0;
                end
            endcase
        end
    end


    // talk to qsys attached memory --> put in array
    localparam N = 32;

    wire signed [15:0] arr [N];
    wire read_valid;
    wire read_ready;
    logic start_read;

    logic [$clog2(N)-1:0] arr_read_counter;
    always_ff @(posedge clk) begin
        if (rst)
            arr_read_counter <= 0;
        else begin
            if (state == (INIT) || state == (START_JOB)) begin
                arr_read_counter <= 0;
                start_read <= 1;
            end
            // only go onto next read if there is no stalling ahead (compute and write and both good)
            else if (read_valid && compute_ready && write_ready && !start_read) begin
                arr_read_counter <= arr_read_counter + 1;
                start_read <= 1;
            end else begin
                start_read <= 0;
            end
        end
    end

    arr_reader  #(.N(N)) reader
                    (
                        .array(arr),
                        .mem_read_addr(mem_read_addr),
                        .valid(read_valid),
                        .ready(read_ready),
                        .mem_read_data(mem_read_data),
                        .start_addr(arr_read_counter),
                        .start_read(start_read),
                        .is_column(done_rows),
                        .clk(clk),
                        .rst(rst)
                    );


    wire compute_valid;
    wire compute_ready;
    logic start_compute;

    assign start_compute = (state == WORKING_ARR) && read_valid && compute_ready && write_ready;

    identity_32 iden    (   .out_array(arr_to_write),
                            .valid(compute_valid),
                            .ready(compute_ready),
                            .in_array(arr),
                            .load(start_compute),
                            .clk(clk),
                            .rst(rst)
                        );

    wire [15:0] arr_to_write [N];

    wire write_valid;
    wire write_ready;
    wire start_write;

    assign start_write = (state == WORKING_ARR) && compute_valid && write_ready;

    arr_writer  #(.N(N)) writer
                (
                    .mem_write_addr(mem_write_addr),
                    .mem_write_data(mem_write_data),
                    .valid(write_valid),
                    .ready(write_ready),
                    .we(we),
                    .arr(arr_to_write),
                    .start_addr(arr_write_counter),
                    .start_write(start_write),
                    .is_column(done_rows),
                    .clk(clk),
                    .rst(rst)
                );

    logic [$clog2(N)-1:0] arr_write_counter;
    always_ff @(posedge clk) begin
        if (rst)
            arr_write_counter <= 0;
        else begin
            if (state == (INIT) || state == (START_JOB)) begin
                arr_write_counter <= 0;
            end else if (write_valid && !write_ready) begin // TODO: i have no idea if this will actually work ngl
                arr_write_counter <= arr_write_counter + 1;
            end
        end
    end

endmodule
`endif
