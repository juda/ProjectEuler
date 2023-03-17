raw_input: read0 `p13.txt
matrix:{50 1#x}each raw_input
matrix:{parse each x} each matrix
matrix:reverse each matrix
complement:{$[(count y)<(count x);complement[x;y,0];y]}
add_:{$[0=count y;$[z<>0;z;()];(((first y)+(first x)+z) mod 10),add_[1_x;1_y;(((first y)+(first x)+z) div 10)]]}
add:{add_[x;complement[x;y];0]}
result: 50#0
do[100;result:add[result;first matrix];matrix:1_matrix]
result:reverse result
/ answer is the fist 10 digits of result