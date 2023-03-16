limit:floor 2e6
n: 2_til limit
filter:{x[where (x mod y) <>0]}
m:0
/ a bit slow actually
while[0<>count n;m:m+first n;n:filter[n;first n]]