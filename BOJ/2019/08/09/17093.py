L1=[]
L2=[]
Mx=0
N,M=list(map(int,input().split()))
for i in range(N):
    L1.append(list(map(int,input().split())))
for i in range(M):
    L2.append(list(map(int,input().split())))

for i in range(N):
    k = 0
    for j in range(M):
        D = (L1[i][0]-L2[j][0])**2 + (L1[i][1]-L2[j][1])**2
        if D>k:
            k=D
    if k > Mx:
        Mx= k
print(Mx)