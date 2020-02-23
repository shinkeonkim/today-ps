N,K=map(int,input().split())
L = list(map(int,input().split()))
S = 0
for i in range(K):
    S += L[i]
ans = S
for i in range(0,N-K):
    S-=L[i]
    S+=L[i+K]
    if ans < S:
        ans = S
print(ans)