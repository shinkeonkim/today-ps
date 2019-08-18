N,M=list(map(int,input().split()))
S = set()
ans = 0
for i in range(N):
    S.add(input())
for i in range(M):
    if input() in S:
        ans+=1
print(ans) 