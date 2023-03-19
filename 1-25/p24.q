f:enlist 1
n:floor 1e6-1
while[9>count f;f:((1+count f)*first f),f]
m: til 10
del:{((y-count x)_x),(1+y)_x}
ret:()
while[1<count m;tmp:n div (first f);ret:ret,m[tmp];m:del[m;tmp];n:n-(tmp*first f);f:1_f]
ret,m