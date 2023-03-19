/ addition
complement:{$[(count y)<(count x);complement[x;y,0];y]}
add_:{$[0=count y;$[z<>0;z;()];(((first y)+(first x)+z) mod 10),add_[1_x;1_y;(((first y)+(first x)+z) div 10)]]}
add:{$[(count x)>(count y);add_[x;complement[x;y];0];add_[complement[y;x];y;0]]}

/ multiplication
mul_single:{$[0=count x;$[z<>0;z;()];((z+(first x)*y) mod 10),mul_single[1_x;y;((z+(first x)*y) div 10)]]}
prefix_zero:{(y # 0), x}
mul_:{prefix_zero[mul_single[x;y[z];0];z]}
sumup:{$[1=count x;first x;add[first x;sumup[1_x]]]}
mul:{sumup mul_[x;y;] each til count y}

/ number to list
parse_num:{$[x<10;enlist x; (x mod 10),parse_num[x div 10]]}

n:100
prdup:{$[1=count x;first x;mul[first x;prdup[1_x]]]}
num_list:parse_num each 1_til 1+n
sum prdup num_list