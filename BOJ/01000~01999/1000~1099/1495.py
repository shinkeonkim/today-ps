N,S,M = map(int,input().split())
L = list(map(int,input().split()))
D = [[0]*(M+1) for _ in range(N)]

if S + L[0] <= M:
    D[0][S + L[0]] = 1
if S - L[0] >= 0:
    D[0][S - L[0]] = 1

for i in range(1,N):
    for j in range(0,M+1):
        if D[i-1][j] == 1:
            if j + L[i] <= M:
                D[i][j + L[i]] = 1
            if j - L[i] >= 0:
                D[i][j - L[i]] = 1

Max = -1
for i in range(0, M+1):
    if D[N-1][i] == 1:
        Max = i

print(Max)