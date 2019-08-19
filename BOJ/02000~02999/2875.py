N,M,K = list(map(int,input().split()))
ans = 0
for j in range(1,min(N//2,M)+1):
    if N-j*2>=0 and M-j>=0 and N+M-3*j>=K:
        ans = j
print(ans)