add:{x,sum -2#x}
/
`n add/ 1 1` means executing add function n times to get the fibonacci
\
x:(1;1)
while[4e6 > last x;x:add x]
fibonacci:1_-1_x
iseven:{$[(x mod 2)=0;x;0]}
answer:sum iseven each fibonacci