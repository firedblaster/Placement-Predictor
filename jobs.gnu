set terminal png
set output "histjobs.png"
set title "Jobs"
set style data histogram
set style fill solid
set xtics rotate by -45
set yrange [0:20]
set xtics font ", 8"

plot for [COL=2:2] "jobs.dat" using COL:xtic(1) title "jobs"
