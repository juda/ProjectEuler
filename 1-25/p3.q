n:(600851475143;2);
divy:{0=(first x) mod (last x)};
isless:{(last x)<first x};
upd_first:{((first x)%(last x);last x)};
upd_second:{(first x;1+last x)};
while[isless n;n:$[divy n;upd_first n;upd_second n]]
/ the answer is n