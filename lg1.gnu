set terminal png
set output 'lineplot1.png'

set title "Line Graph of"		
set xlabel "CGPA"
set ylabel "CTC"
set xrange [7:10]

plot 'datafinal.csv' using 6:9 w p 