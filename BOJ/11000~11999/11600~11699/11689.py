from math import sqrt

a=int(input())
k=a
L=[]
D=dict()
ans = 1
for i in range(2,int(sqrt(a))+1):
    while k>0 and k%i==0:
        L.append(i)
        if(a//i != i):
            L.append(a//i)
        k//=i
    if k ==0:
        break


for i in L:
    for j in L:
        if i!=j and i > j and i%j ==0 and j !=1:
            break
    else:
        if i in D:
            D[i]+=1
        else:
            D[i]=1

for i in D.items():
    print(i[0],i[1])
    ans = ans * (i[0]**i[1] - i[0]**(i[1]-1))
print(ans)
