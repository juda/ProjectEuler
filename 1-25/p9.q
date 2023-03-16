max_n:1000
n:1_til max_n
sqr:{x*x}
f:{$[(max_n>x+y) & (((sqr x) + (sqr y)) = sqr (max_n - x+y));x*y*max_n - x+y;0]}
/ I actually simulate a 2-level nested loop
answer: max max {f[x;] each n} each n