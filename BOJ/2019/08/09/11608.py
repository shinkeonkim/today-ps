a=list(input())
D=dict()
for i in a:
    if i in D:
        D[i]+=1
    else:
        D[i]=1
L=[]
for i in D.items():
    L.append([i[0],i[1]])
L.sort(key=lambda t: t[1])
ans=0
if len(L)>2:
    for i in L[:-2]:
        ans+=i[1]
print(ans)