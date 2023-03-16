/ sieve of Eratosthenes
limit:10001
n: 2_til floor limit * ((log log limit)+ (log limit))
filter:{x[where (x mod y) <>0]}
m:1
while[m<limit;m:m+1;n:filter[n;first n]]
/ answer is (first n)
