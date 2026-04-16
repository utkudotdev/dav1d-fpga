import csv
import matplotlib.pyplot as plt
import matplotlib.ticker as ticker
import numpy as np
from pathlib import Path


TX_SIZES = [4, 8, 16, 32, 64]
TX_TYPES = ["DCT", "ADST", "FLIPADST", "IDENTITY"]

data = {size: {tx_type: (0, 0) for tx_type in TX_TYPES} for size in TX_SIZES}

script_dir = Path(__file__).parent
with open(script_dir / "data.csv") as f:
    for row in csv.reader(f):
        if len(row) != 4:
            continue
        size, tx_type, count, time_weight = int(row[0].strip()), row[1].strip(), int(row[2].strip()), int(row[3].strip())
        if size in data and tx_type in data[size]:
            data[size][tx_type] = (count, time_weight) 

x = np.arange(len(TX_SIZES))
width = 0.18
colors = ["#4C72B0", "#DD8452", "#55A868", "#C44E52"]

SUPTITLE = "1D Transform Usage in dav1d\nDCT DC-only fast path weighted *zero time*"
XLABELS = [f"{s} elems" for s in TX_SIZES]
XTICKS = x + width * (len(TX_TYPES) - 1) / 2


def plot_all(ax1, ax2, ax3):
    # --- Raw counts ---
    for i, tx_type in enumerate(TX_TYPES):
        counts = [data[size][tx_type][0] for size in TX_SIZES]
        ax1.bar(x + i * width, counts, width, label=tx_type, color=colors[i])

    ax1.set_title("Raw invocation counts")
    ax1.set_xlabel("Transform size (1D slice length)")
    ax1.set_ylabel("Count")
    ax1.set_xticks(XTICKS)
    ax1.set_xticklabels(XLABELS)
    ax1.yaxis.set_major_formatter(ticker.FuncFormatter(
        lambda v, _: f"{v/1e6:.1f}M" if v >= 1e6 else f"{int(v):,}"))
    ax1.legend()
    ax1.grid(axis="y", alpha=0.3)

    # --- Element-weighted counts ---
    for i, tx_type in enumerate(TX_TYPES):
        weighted = [data[size][tx_type][0] * size for size in TX_SIZES]
        ax2.bar(x + i * width, weighted, width, label=tx_type, color=colors[i])

    ax2.set_title("Counts weighted by number of elements processed")
    ax2.set_xlabel("Transform size (1D slice length)")
    ax2.set_ylabel("Total elements transformed")
    ax2.set_xticks(XTICKS)
    ax2.set_xticklabels(XLABELS)
    ax2.yaxis.set_major_formatter(ticker.FuncFormatter(
        lambda v, _: f"{v/1e9:.1f}B" if v >= 1e9 else f"{v/1e6:.1f}M" if v >= 1e6 else f"{int(v):,}"))
    ax2.legend()
    ax2.grid(axis="y", alpha=0.3)

    # --- Time-weighted counts ---
    for i, tx_type in enumerate(TX_TYPES):
        time_weighted = [data[size][tx_type][0] * data[size][tx_type][1] for size in TX_SIZES]
        ax3.bar(x + i * width, time_weighted, width, label=tx_type, color=colors[i])

    ax3.set_title("Counts weighted by rough time")
    ax3.set_xlabel("Transform size (1D slice length)")
    ax3.set_ylabel("Arbitrary time-weighted invocations")
    ax3.set_xticks(XTICKS)
    ax3.set_xticklabels(XLABELS)
    ax3.yaxis.set_major_formatter(ticker.FuncFormatter(
        lambda v, _: f"{v/1e9:.1f}B" if v >= 1e9 else f"{v/1e6:.1f}M" if v >= 1e6 else f"{int(v):,}"))
    ax3.legend()
    ax3.grid(axis="y", alpha=0.3)


# Linear scale
fig1, (ax1, ax2, ax3) = plt.subplots(1, 3, figsize=(16, 6))
fig1.suptitle(SUPTITLE, fontsize=13)
plot_all(ax1, ax2, ax3)
fig1.tight_layout()
out1 = script_dir / "transform_frequencies.png"
fig1.savefig(out1, dpi=150, bbox_inches="tight")
print(f"Saved to {out1}")

plt.show()
