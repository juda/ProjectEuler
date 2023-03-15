primes=[2,3,5,7,11,13,17,19,23,29,31,37,41,43]

m=4000000*2-1

def dfs(nth,times,now,limits):
	global ans
	if now>ans or nth==13:
		return
	for i in xrange(1,limits+1):
		if times*(2*i+1)>m:
			temp=now*pow(primes[nth],i)
			if temp<ans:
				ans=temp
				print ans
		else:
			dfs(nth+1,times*(2*i+1),now*pow(primes[nth],i),i)
	dfs(nth+1,times,now,limits)

ans=pow(10,20)
dfs(0,1,1,200)
print ans 
