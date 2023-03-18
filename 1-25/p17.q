/ from 1 to 9
ones: 3 3 5 4 4 3 5 5 4
/ from 10 to 19
teens: 3 6 6 8 8 7 7 9 8 8
/ 20, 30, ... 90
tens: 6 6 5 5 5 7 6 6

/ matrix to list
flat:{$[0=count x;();(first x),flat[1_x]]}

/ 1 - 99
less100: ones, teens, tens, flat tens +/: ones

(sum less100) + 11 + (sum 7 + ones) + sum sum (10 + ones) +/: less100