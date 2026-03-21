import cv2
import numpy as np

with open("block.txt") as f:
    lines = f.readlines()

    arr = []
    for line in lines:
        line = line.strip()
        values = line.split(",")
        values = values[:-1]
        values = list(map(int, values))
        arr.append(values)

    arr = np.array(arr, dtype=np.uint8)
    print(arr.shape)

    cv2.imshow("cooked", arr)
    cv2.waitKey(0)

