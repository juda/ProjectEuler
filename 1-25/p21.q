filter:{x[where (y mod x) =0]}
divisors:{sum filter[1 + til x-1;x]}
n:10000
d:divisors each 1+til n
is_amicable:{(d[x-1]<>x) & (d[d[x-1]-1]=x)}
sum (1+til n)*(is_amicable each 1+til n)