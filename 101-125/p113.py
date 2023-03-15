def C(a,b):
	res=1
	for i in range(b+1,a+1):
		res*=i
	for i in range(1,a-b+1):
		res/=i
	return res

print C(100+10,10)+C(100+9,9)-1000-2