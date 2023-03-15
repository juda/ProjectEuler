ans=21
d=[i for i in range(1,21)]+[25]

score=[]
for i in range(1,21):
	score.append(i)
	score.append(i*2)
	score.append(i*3)

score.append(25)
score.append(50)

for i in score:
	for j in d:
		if i+j*2<100:
			ans+=1

for i in range(len(score)):
	for j in range(i,len(score)):
		for k in d:
			if score[i]+score[j]+k*2<100:
				ans+=1

print ans