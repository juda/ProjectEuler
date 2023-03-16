n:1_til 21;
gcd:{$[0=x mod y;y;gcd[y;x mod y]]}
lcm:{(x*y) div (gcd[x;y])}
reduce:{lcm[x@0;x@1],2_x}
while[1 < count n;n:reduce n]
/ the answer is (first n)