import sys
N,K = map(int,sys.stdin.readline().split())
D = [[0]*N for _ in range(N)]
L = []
for y in range(N):
    L.append(list(map(int,sys.stdin.readline().split())))
for y in range(N):
    D[y][0] = L[y][0]
    for x in range(1,N):
        D[y][x] = L[y][x] + D[y][x-1]

for x in range(N):
    for y in range(1,N):
        D[y][x] += D[y-1][x]

for i in range(K):
    a,b,c,d = map(int,sys.stdin.readline().split())
    a-=1;b-=1;c-=1;d-=1
    A1 = D[a-1][b-1] if a>0 and b>0 else 0
    A2 = D[c][b-1] if b>0 else 0
    A3 = D[a-1][d] if a>0 else 0
    A4 = D[c][d]
    print(A4-A2-A3+A1)

