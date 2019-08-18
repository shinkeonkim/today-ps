a=int(input())
L=[0,0,0]
k=[300,60,10]
for i in range(3):
    L[i]+=a//k[i]
    a=a%k[i]
if a>0:
    print(-1)
else:
    for i in range(3):
        print(L[i],end=" ")