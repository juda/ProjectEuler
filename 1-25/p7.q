/ sieve of Eratosthenes
limit:10001
n: 2_til floor limit * ((log log limit)+ (log limit))
modx:{$[0=y mod x;0;y]}
mod_vec:{modx[x;] each y}
filter:{x[where x<>0]}
m:1
while[m<limit;m:m+1;n:filter mod_vec[first n;n]]
/ answer is (first n)
/ Although the answer is right but a bit slow