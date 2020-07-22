N = int(input())
L = list(map(int,input().split()))

D = [99999999]*(N+200)
D[0] = 0
for i in range(N):
    for j in range(1,L[i]+1):
        if D[i+j] > D[i] + 1:
            D[i+j] = D[i]+1
if D[N-1] == 99999999:
    print(-1)
else:
    print(D[N-1])