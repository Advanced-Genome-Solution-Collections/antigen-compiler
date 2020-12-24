# gp
Programming, but for organisms.

Only runs on linux at the minute, but it doesn't work yet.  
Go to the directory that the project is in and run "make" in the terminal to compile.

To execute, do "./a.out"

How to Gource: gource --hide dirnames,filenames --seconds-per-day 0.1 --auto-skip-seconds 1 -1280x720 -o - | ffmpeg -y -r 60 -f image2pipe -vcodec ppm -i - -vcodec libx264 -preset slow -pix_fmt yuv420p -crf 18 -threads 0 -bf 0 gource.mp4
