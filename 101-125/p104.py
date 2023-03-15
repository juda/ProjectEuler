import math

def check(s):
	s=str(s)
	for i in range(1,10):
		if s.find(str(i))==-1:
			return False
	return True

f1=1
f2=1
n=2
s1=math.log10((1+math.sqrt(5))/2)
s2=math.log10(math.sqrt(5))
while True:
	n+=1
	f=(f1+f2)%1000000000
	f1,f2=f2,f

	if n%1000==0:
		print '>',n
	if check(f):
		temp=n*s1-s2
		if(check(int(pow(10,temp-int(temp)+8)))):
			print n
			break


