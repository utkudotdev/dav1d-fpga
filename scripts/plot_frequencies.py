import csv
import matplotlib.pyplot as plt
import matplotlib.ticker as ticker
import numpy as np
from pathlib import Path

# TX size -> number of elements (1D slice length, not 2D block)
TX_ELEMENTS = {
    "TX_4X4": 4,
    "TX_8X8": 8,
    "TX_16X16": 16,
    "TX_32X32": 32,
    "TX_64X64": 64,
}

TX_SIZES = list(TX_ELEMENTS.keys())
TX_TYPES = ["DCT", "ADST", "FLIPADST", "IDENTITY"]

data = {size: {tx_type: 0 for tx_type in TX_TYPES} for size in TX_SIZES}

script_dir = Path(__file__).parent
with open(script_dir / "data.csv") as f:
    for row in csv.reader(f):
        if len(row) != 3:
            continue
        size, tx_type, count = row[0].strip(), row[1].strip(), int(row[2].strip())
        if size in data and tx_type in data[size]:
            data[size][tx_type] = count

x = np.arange(len(TX_SIZES))
width = 0.18
colors = ["#4C72B0", "#DD8452", "#55A868", "#C44E52"]

SUPTITLE = ("1D Transform Usage in dav1d\n"
            "(TX_NXN denotes a 1D slice of N elements, not an N×N block)")
XLABELS = [f"{s}\n({TX_ELEMENTS[s]} elements)" for s in TX_SIZES]
XTICKS = x + width * (len(TX_TYPES) - 1) / 2


def plot_pair(ax1, ax2, log=False):
    # --- Raw counts ---
    for i, tx_type in enumerate(TX_TYPES):
        counts = [data[size][tx_type] for size in TX_SIZES]
        ax1.bar(x + i * width, counts, width, label=tx_type, color=colors[i])

    ax1.set_title("Raw invocation counts")
    ax1.set_xlabel("Transform size (1D slice length)")
    ax1.set_ylabel("Count")
    ax1.set_xticks(XTICKS)
    ax1.set_xticklabels(XLABELS)
    if log:
        ax1.set_yscale("log")
    else:
        ax1.yaxis.set_major_formatter(ticker.FuncFormatter(
            lambda v, _: f"{v/1e6:.1f}M" if v >= 1e6 else f"{int(v):,}"))
    ax1.legend()
    ax1.grid(axis="y", alpha=0.3)

    # --- Element-weighted counts ---
    for i, tx_type in enumerate(TX_TYPES):
        weighted = [data[size][tx_type] * TX_ELEMENTS[size] for size in TX_SIZES]
        ax2.bar(x + i * width, weighted, width, label=tx_type, color=colors[i])

    ax2.set_title("Counts weighted by number of elements processed")
    ax2.set_xlabel("Transform size (1D slice length)")
    ax2.set_ylabel("Total elements transformed")
    ax2.set_xticks(XTICKS)
    ax2.set_xticklabels(XLABELS)
    if log:
        ax2.set_yscale("log")
    else:
        ax2.yaxis.set_major_formatter(ticker.FuncFormatter(
            lambda v, _: f"{v/1e9:.1f}B" if v >= 1e9 else f"{v/1e6:.1f}M" if v >= 1e6 else f"{int(v):,}"))
    ax2.legend()
    ax2.grid(axis="y", alpha=0.3)


# Linear scale
fig1, (ax1, ax2) = plt.subplots(1, 2, figsize=(16, 6))
fig1.suptitle(SUPTITLE, fontsize=13)
plot_pair(ax1, ax2, log=False)
fig1.tight_layout()
out1 = script_dir / "transform_frequencies.png"
fig1.savefig(out1, dpi=150, bbox_inches="tight")
print(f"Saved to {out1}")

# Log scale
fig2, (ax3, ax4) = plt.subplots(1, 2, figsize=(16, 6))
fig2.suptitle(SUPTITLE + " — log scale", fontsize=13)
plot_pair(ax3, ax4, log=True)
fig2.tight_layout()
out2 = script_dir / "transform_frequencies_log.png"
fig2.savefig(out2, dpi=150, bbox_inches="tight")
print(f"Saved to {out2}")

plt.show()
