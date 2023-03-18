raw_input: read0 `p18.txt
matrix: parse each raw_input
n:enlist first matrix
m:count matrix
matrix: 1_matrix
f:{max ((y+x,0);(y+0,x))}
do[m-1;n:f[n;first matrix];matrix:1_matrix]
max n