L = list(map(int,input().split()))
N = len(L)+1
Mx = 987654321
D = [[Mx]*N for i in range(N)]

for i in range(N-1):
    D[i][i+1] = D[i+1][i] = L[i]
for i in range(N):
    D[i][i] = 0

for z in range(N):
    for x in range(N):
        for y in range(N):
            if D[x][y] > D[x][z] + D[z][y]:
                D[x][y] =  D[x][z] + D[z][y]
for i in range(N):
    for j in range(N):
        print(D[i][j], end = " ")
    print()