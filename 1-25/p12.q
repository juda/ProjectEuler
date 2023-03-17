/ borrow code from P7. get all prime numbers
limit:10001
n: 2_til floor limit * ((log log limit)+ (log limit))
filter:{x[where (x mod y) <>0]}
primes:()
do[limit;primes:(first n),primes;n:filter[n;first n]]
primes: reverse primes

/ code for P12
n:1_sums til 20000
num_factors:{$[((x<>0) & (0 = x mod y));1+num_factors[x div y;y];0]}
factors:{num_factors[x;] each primes} each n
num_divisors:{prd 1+x[where x <> 0]} each factors

/ the answer is (first n). Not very slow, but you need to wait for some minutes
while[500 > first num_divisors;num_divisors:1_num_divisors;n:1_n]