f=open('p102_triangles.txt')

def cross(a,b,c):
    t1=b[0]-a[0]
    t2=b[1]-a[1]
    t3=c[0]-a[0]
    t4=c[1]-a[1]
    return t1*t4-t2*t3

x=[0,0]
y=[0,0]
z=[0,0]
origin=(0,0)
ans=0
for i in f.xreadlines():
    x[0],x[1],y[0],y[1],z[0],z[1]=map(int,i.split(','))
    area1=abs(cross(x,y,z))
    area2=abs(cross(x,y,origin))+abs(cross(y,z,origin))+abs(cross(z,x,origin))
    if area1==area2:
        ans+=1

print ans
