set terminal png
set output 'lineplot3.png'

set title "Line Graph of"
set xlabel "Months of Internship"
set ylabel "CGPA"
set xrange [0:12]
set yrange [6:10]

plot 'datafinal.csv' using 11:6 w p 