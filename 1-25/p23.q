filter:{x[where (y mod x) =0]}
divisors:{sum filter[1 + til x-1;x]}

n:28123
m: 1+ til n
abundants: {x < divisors x} each m
is_abundant: {abundants[x-1]}
abundant_numbers: abundants * m
abundant_numbers: abundant_numbers[where abundant_numbers <> 0]

is_sum_abundant_: {$[x>y;is_abundant[x-y];0b]}
is_sum_abundant: {any is_sum_abundant_[x;] each abundant_numbers}

sum_abundants: (is_sum_abundant each m) * m
sum (0=sum_abundants) * m