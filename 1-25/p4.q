digit:3
n:floor 10 xexp digit - 1 
numbers:n _ (til 10*n)
/ candidates are all the numbers from the product of two `digit numbers 
candidates:numbers */: numbers;
base:10 xexp til 2 * digit;
get_digits_:{(x div base) mod 10};
/ get all digits from the number
get_digits:{$[0 = last get_digits_ x;-1_get_digits_ x;get_digits_ x]}
is_palindromic_single:{prd (reverse get_digits x) = get_digits x};
is_palindromic_line:{is_palindromic_single each x}
/ get the result that if it is palindromic from a matrix
is_palindromic:{is_palindromic_line each x}
selection: is_palindromic candidates
answer: max max selection * candidates