`include "modules/identity_32.sv"
// `include "modules/inv_dct_32.sv"
`include "modules/arr_writer.sv"
`include "modules/arr_reader.sv"
`include "modules/fair_rw_lock_mgr.sv"
`include "modules/av1_helper_functions.sv"
import av1_helper_functions::*;

`ifndef BLOCK_32_VH_
/* verilog_format: off */
`define BLOCK_32_VH_
/* verilog_format: on */

module single_block_32 (
    output signed [15:0] mem_write_data,
    output        [ 9:0] mem_write_addr,
    output        [ 9:0] mem_read_addr,
    output               we,
    output               ready,
    output               reading,
    output               writing,
    input  signed [15:0] mem_read_data,
    input                request,
    input                clk,
    input                rst
);
    // talk to qsys attached memory --> put in array
    localparam N = 32;

    // load signal logic
    typedef enum logic [1:0] {
        INIT,
        START_JOB,
        WORKING_ARR,
        SWAP_TO_COL
    } state_t;
    state_t state;
    state_t prev_state;
    always_ff @(posedge clk) begin
        if (rst)
            prev_state <= INIT;
        else
            prev_state <= state;
    end

    assign ready = state == INIT;

    logic done_rows;
    wire done_all_writes;

    wire compute_ready;
    wire write_ready;
    logic start_write;
    logic write_ready_prev;
    wire write_ready_pos_edge = write_ready == 1 && write_ready_prev == 0;
    logic [$clog2(N)-1:0] arr_write_counter;
    assign done_all_writes = (arr_write_counter == N - 1) && write_ready_pos_edge;

    always_ff @(posedge clk) begin
        if (rst) begin
            done_rows <= 0;
            state <= INIT;
        end else begin
            case (state)
                INIT: begin
                    state     <= state_t'(request ? START_JOB : INIT);
                    done_rows <= 0;
                end
                START_JOB: begin
                    state <= WORKING_ARR;
                end
                WORKING_ARR: begin
                    state <= state_t'(done_all_writes ? SWAP_TO_COL : WORKING_ARR);
                end
                SWAP_TO_COL: begin  // TODO: this state can disappear later
                    state     <= state_t'(done_rows ? INIT : START_JOB);
                    done_rows <= !done_rows;
                end
                default: begin
                    state     <= INIT;
                    done_rows <= 0;
                end
            endcase
        end
    end

    wire read_lock;
    wire write_lock;
    wire read_request;
    wire write_request;

    assign reading = read_lock;
    assign writing = write_lock;

    fair_rw_lock_mgr lock_mgr (
        .read_lock(read_lock),
        .write_lock(write_lock),
        .read_request(read_request),
        .write_request(write_request),
        .clk(clk),
        .rst(rst)
    );

    wire signed [15:0] arr[N];
    wire read_valid;
    wire read_ready;
    wire start_read;

    logic [$clog2(N)-1:0] arr_read_counter;
    always_ff @(posedge clk) begin
        if (rst) arr_read_counter <= 0;
        else begin
            if (state == (INIT) || state == (START_JOB)) begin
                arr_read_counter <= 0;
                // start_read <= 1;
            end
            // only go onto next read if there is no stalling ahead (compute and write and both good)
            else if (neg_edge_start_read) begin // && !start_read ?????
                arr_read_counter <= arr_read_counter + 1;
                //start_read <= 1;
            end else begin
                // start_read <= 0;
            end
        end
    end
    assign start_read = ((prev_state == (START_JOB))) || 
                        (read_valid && compute_ready && write_ready && !start_write);
    wire neg_edge_start_read;
    logic start_read_prev;
    always_ff @(posedge clk) begin
        if (rst)
            start_read_prev <= 0;
        else
            start_read_prev <= start_read;
    end

    assign neg_edge_start_read = start_read_prev && !start_read; 


    arr_reader #(
        .N(N)
    ) reader (
        .array(arr),
        .mem_read_addr(mem_read_addr),
        .valid(read_valid),
        .ready(read_ready),
        .mem_read_data(mem_read_data),
        .mem_lock_request(read_request),
        .mem_lock(read_lock),
        .start_addr(done_rows ? arr_read_counter : arr_read_counter * N),
        .start_read(start_read),
        .is_column(done_rows),
        .clk(clk),
        .rst(rst || (state == START_JOB))
    );


    wire  compute_valid;
    logic start_compute;

    assign start_compute = (state == WORKING_ARR) && read_valid && compute_ready && write_ready && !(start_write);

    wire signed [15:0] tf_out_arr[N];
    wire [15:0] compute_job_id;
    identity_32 iden (
        .out_array(tf_out_arr),
        .job_id_out(compute_job_id),
        .valid(compute_valid),
        .ready(compute_ready),
        .job_id_in(arr_read_counter),
        .in_array(arr),
        .start_compute(start_compute),
        .clk(clk),
        .rst(rst || (state == START_JOB))
    );

    localparam ROWSHIFT = 2;
    localparam COLSHIFT = 4;

    wire signed [15:0] arr_to_write[N];
    genvar i;
    generate
        for (i = 0; i < N; i++) begin : write_assign
            assign arr_to_write[i] = done_rows ? round2(
                tf_out_arr[i], COLSHIFT
            ) : round2(
                tf_out_arr[i], ROWSHIFT
            );
        end
    endgenerate

    // inv_dct_32 inv_dct (
    // .out(tf_out_arr),
    // .valid(compute_valid), //TODO
    // .ready(compute_ready), //TODO
    // .job_id_out(compute_job_id),
    // .in_array(arr),
    // .job_id_in(arr_read_counter),
    // .start_compute(start_compute),
    // .clk(clk),
    // .rst(rst || (state == START_JOB))

    // );

    logic [15:0] job_id_prev;

    always_ff @(posedge clk) begin
        if (rst) job_id_prev <= 111;  //some dummy id
        else job_id_prev <= start_write ? compute_job_id : job_id_prev;
    end



    assign start_write = (state == WORKING_ARR) && compute_valid &&
                         (job_id_prev != compute_job_id) && write_ready;
                         //read_valid;

    arr_writer #(
        .N(N)
    ) writer (
        .mem_write_addr(mem_write_addr),
        .mem_write_data(mem_write_data),
        .ready(write_ready),
        .we(we),
        .mem_lock_request(write_request),
        .mem_lock(write_lock),
        .arr(arr_to_write),
        .start_addr(done_rows ? arr_write_counter : arr_write_counter * N),
        .start_write(start_write),
        .is_column(done_rows),
        .clk(clk),
        .rst(rst || (state == START_JOB))
    );

    always_ff @(posedge clk) begin
        if (rst) arr_write_counter <= 0;
        else begin
            if (state == (INIT) || state == (START_JOB)) begin
                arr_write_counter <= 0;
            end else if (write_ready_pos_edge) begin // TODO: i have no idea if this will actually work ngl
                arr_write_counter <= arr_write_counter + 1;
            end
        end
    end

    always_ff @(posedge clk) begin
        if (rst) write_ready_prev <= 0;
        else write_ready_prev <= write_ready;
    end

endmodule
`endif
