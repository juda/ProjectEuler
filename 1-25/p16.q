add_:{$[0=count y;$[z<>0;z;()];(((first y)+(first x)+z) mod 10),add_[1_x;1_y;(((first y)+(first x)+z) div 10)]]}
add:{add_[x;y;0]}
result: enlist 1
do[1000;result:add[result;result]]
sum reverse result