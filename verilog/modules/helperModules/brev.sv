// from page 296 of https://aomediacodec.github.io/av1-spec/av1-spec.pdf

/*
brev( numBits, x ) {
t = 0
for ( i = 0; i < numBits; i++ ) {
bit = (x >> i) & 1
t += bit << (numBits - 1 - i)
}
return t
}
*/

module brev #(parameter int N)) (
    output logic [N-1:0] out,
    input logic [N-1:0] in,
);
    integer i;

    always_comb begin
        out = 0;
        for (i = 0; i < N; i++) begin
            out += ((in >> i) & 1) << (N - 1 - i);
        end
    end

endmodule