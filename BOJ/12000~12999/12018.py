n,m = map(int,input().split())
Mx = []
L = []
Q = []
for i in range(n):
    _,M = map(int,input().split())
    Mx.append(M)
    L.append(sorted(list(map(int,input().split())),reverse= True))

for i in range(n):
    if len(L[i]) +1 <= Mx[i]:
        Q.append(1)
    else:
        Q.append(L[i][Mx[i]-1])
Q.sort()
ans = 0
S = 0
for i in Q:
    if S+i <=m:
        ans+=1
        S+=i
print(ans)