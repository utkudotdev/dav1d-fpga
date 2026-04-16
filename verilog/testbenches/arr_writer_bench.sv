`timescale 1ns / 1ns
`include "arr_writer.sv"
`include "M10K_16_1024.sv"

module arr_writer_bench ();
    localparam N = 32;
    localparam ADDR_WIDTH = $clog2(N * N);
    localparam STOP = 1000;

    logic clk, rst; 
    logic [15:0] count

    logic [ADDR_WIDTH-1:0] start_addr; 

    logic start_write; 

    always begin
        #10 clk = !clk; 
    end 

    initial begin
        clk = 1'b0; 
        rst = 1'b0; 
        #10 rst = 1'b1; 
        #30 rst = 1'b0; 
    end 

    always @(posedge clk) begin
        if (rst) begin
            count <= 0; 
            start_addr <= 0;
            start_write <= 1;
        end

        else count <= count + 1; 
    end

    // Initialize clocks and index
    initial begin
        $dumpfile("arr_writer_dump.vcd");
        $dumpvars(0, arr_writer_bench);
    end

    always_comb begin
        if (count == STOP) begin
            $finish;
        end
    end

    logic signed [15:0] arr [N]; 
    logic is_column; 
    
    wire [ADDR_WIDTH-1:0] mem_write_addr; 
    wire signed [15:0] mem_write_data; 
    wire valid; 
    wire ready; 
    wire we; 

    genvar i;

    generate
        for (i = 0; i < N; i++) begin : gen_test_data
            assign arr[i] = i * 4;
        end
    endgenerate

    wire [15:0] mem_read_q; 

    M10K_16_1024 test_mem (
        .q(mem_read_q), 
        .d(mem_write_data), 
        .write_address(mem_write_addr), 
        .read_address(10'b0), 
        .we(we), 
        .clk(clk) 
    );

    arr_writer #(.N(N)) uut (
        .mem_write_addr(mem_write_addr), 
        .mem_write_data(mem_write_data), 
        .valid(valid), 
        .ready(ready),
        .we(we), 
        .arr(arr), 
        .start_addr(start_addr), 
        .start_write(start_write), 
        .is_column(is_column), 
        .clk(clk), 
        .rst(rst) 
    );

 
    always @(posedge clk) begin
            if (valid) begin
                start_addr += 1; 
            end
            
            if (ready) begin
                start_write <= 1;
            end
            else begin
                start_write <= 0;
            end
    end



endmodule