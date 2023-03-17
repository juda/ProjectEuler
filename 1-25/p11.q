raw_input: read0 `p11.txt
matrix:parse each raw_input
f_row:{ (y@x)*(y@1+x)*(y@2+x)*(y@3+x) each x}
row:max max f_row[til 20;] each matrix
column:max max f_row[til 20;] each flip matrix
n:til 20
f_diagonal: {((z@x)@y) * ((z@1+x)@1+y) * ((z@2+x)@2+y) * ((z@3+x)@3+y)}
diagonal:max max {f_diagonal[x;;matrix] each n}each n
f_back_diagonal: {((z@x)@y) * ((z@1+x)@(y-1)) * ((z@2+x)@(y-2)) * ((z@3+x)@(y-3))}
back_diagonal:max max {f_back_diagonal[x;;matrix] each n}each n
max (row;column;diagonal;back_diagonal)