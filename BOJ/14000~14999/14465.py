N,K,B = map(int,input().split())
D = [0]*(N+1)
for i in range(B):
    D[int(input())] = 1
ans = N+1
S = 0
for i in range(1,K+1):
    S += D[i]

if S < ans:
    ans = S

for i in range(1,N-K+1):
    S -= D[i]
    S += D[i+K]
    if S < ans:
        ans = S

print(ans)