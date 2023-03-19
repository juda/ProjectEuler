/ a simple addition: x is always bigger than y
complement:{$[(count y)<(count x);complement[x;y,0];y]}
add_:{$[0=count y;$[z<>0;z;()];(((first y)+(first x)+z) mod 10),add_[1_x;1_y;(((first y)+(first x)+z) div 10)]]}
add:{add_[x;complement[x;y];0]}

n: ((enlist 1);(enlist 1))
while[1000 > count first n;n:(enlist add[n[0];n[1]]),n]
count n