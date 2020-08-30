N,S,R = map(int,input().split())
broken = list(map(int,input().split()))
plus = list(map(int,input().split()))

D = [1]*(N+1)

for i in broken:
    D[i]-=1

for i in plus:
    D[i]+=1

ans = 0
for i in range(1,N+1):
    j = D[i]
    if j >= 1:
        continue
    if D[i-1] >1:
        D[i-1]-=1
    elif i+1 < N + 1 and D[i+1] > 1:
        D[i+1]-=1
    else:
        ans+=1 
print(ans)