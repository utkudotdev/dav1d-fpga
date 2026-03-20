#!/bin/bash
set -e

yt-dlp $1 -f 399 -o test_video.mkv
ffmpeg -i test_video.mkv -c copy -r 25 test_video.ivf
build/tools/dav1d --input test_video.ivf --output test_video_decoded.yuv
ffmpeg -f rawvideo -pix_fmt yuv420p -s:v 1920x1080 -r 25 -i test_video_decoded.yuv -c copy test_video_decoded.mkv
rm test_video.ivf
rm test_video_decoded.yuv
