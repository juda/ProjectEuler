n:til 1000
divy:{0=x mod y}
div3:divy[;3]
div5:divy[;5]
numbers:max each flip ((div3 n);(div5 n))
answer:sum n * numbers