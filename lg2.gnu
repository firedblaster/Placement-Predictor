set terminal png
set output 'lineplot2.png'

set title "Line graph of"
set xlabel "Months of Internship"
set ylabel "CTC"
set xrange [0:12]

plot 'datafinal.csv' using 11:9 w p 