f=open("p107_network.txt")

d=[]
for i in f.xreadlines():
	d.append(map(int,i.replace('-','-1').split(',')))

n=40
ans=0
for i in range(n):
	for j in range(n):
		if d[i][j]!=-1:
			ans+=d[i][j]
visit=[0 for i in range(n)]
big=[12345678 for i in range(n)]
visit[0]=1
big[0]=0
p=0
ans/=2
for i in range(n-1):
	for j in range(n):
		if d[p][j]!=-1:
			big[j]=min(big[j],d[p][j])
	now=12345678
	print big
	for j in range(n):
		if visit[j]==0 and big[j]<now:
			now=big[j]
			ij=j
	print now
	ans-=now
	p=ij
	visit[p]=1

print ans