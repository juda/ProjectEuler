def isPrime(x):
	i=1
	while True:
		i+=1
		if i*i>x:
			return True
		if x%i==0:
			return False

n=0
i=1
while True:
	i+=1
	if isPrime(i):
		n+=1
		if n%2==1 and 2*n*i>=10000000000:
			print n
			break
