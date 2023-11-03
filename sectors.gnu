set terminal png
set output "histsectors.png"
set title "Sectors"
set style data histogram
set style fill solid
set xtics rotate by -45

plot for [COL=2:2] "sectors.dat" using COL:xtic(1) title "sectors"
