set terminal png
set output "histcompanies.png"

set ylabel "Probability"
set xlabel "Companies"
set style data histogram
set style fill solid
set xtics rotate by -30
set yrange [0:70]
set xtics font ", 8"

plot for [COL=2:2] "probhisto.txt" using COL:xticlabels(1) title " "


