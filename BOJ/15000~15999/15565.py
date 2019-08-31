N,K=map(int,input().split())
L = list(map(int,input().split()))
D = []
for i in range(N):
    if L[i] == 1:
        D.append(i)
if len(D) < K:
    print(-1)
else:
    print(min([D[i+K-1]-D[i]+1 for i in range(0,len(D)-K+1)]))