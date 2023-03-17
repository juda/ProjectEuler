/ brute force
maxm:floor 1e6
n:1_til maxm
f:{$[0=x mod 2;x div 2;1+3*x]}
chains:{$[x=1;1;1+chains[f[x]]]}
m:chains each n
1+m?(max m)