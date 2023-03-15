s=[(1, 1), (2, 683), (3, 44287), (4, 838861), (5, 8138021), (6, 51828151), \
   (7, 247165843), (8, 954437177), (9, 3138105961L), (10, 9090909091L),(11,23775972551L)]


def calc(n):
    res=0
    for j in range(0,n):
        temp1=1
        temp2=1
        for i in range(0,n):
            if i!=j:
                #print (n+1-s[i][0]),(s[j][0]-s[i][0])
                temp1*=(n+1-s[i][0])
                temp2*=(s[j][0]-s[i][0])
        #print temp
        res+=s[j][1]*temp1/temp2
    #print '----'
    return res

t=[]
for i in range(1,11):
    t.append(calc(i))

print t
print reduce(lambda x,y:x+int(y),t,0)
