set terminal png
set output "histcompanies.png"
set title "Jobs"
set style data histogram
set style fill solid
set xtics rotate by -80
set yrange [0:40]
set xtics font ", 8"

plot for [COL=2:2] "probhisto.txt" using COL:xtic(1) title "companiess"
