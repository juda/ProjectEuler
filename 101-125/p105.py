f=open('p105_sets.txt')

def noConflict(a):
    n=len(a)
    d={}
    for i in range(1<<n):
        temp=0
        for j in range(n):
            if ((i>>j)&1)==1:
                temp+=a[j]
        if temp in d:
            return False
        d[temp]=True
    return True

ans=0
for ii in f.xreadlines():
    a=map(int,ii.split(','))
    a.sort()
    n=len(a)
    t1=a[0]
    t2=0
    flag=1
    for i in range(0,(n-1)/2):
        t1+=a[i+1]
        t2+=a[n-i-1]
        if t1<=t2:
            flag=0
            break
    if flag==0:
        continue
    if noConflict(a):
        print a
        ans+=reduce(lambda x,y:x+y,a)

print ans
