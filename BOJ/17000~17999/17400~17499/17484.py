MX = 999999999999
N,M = map(int,input().split())
L = [list(map(int,input().split())) for i in range(N)]
D = [[[MX]*4 for j in range(M)] for i in range(N)]

for i in range(M):
    D[0][i][3] = L[0][i]

for i in range(1,N):
    for j in range(0,M):
        if j !=0:
            D[i][j][0] = L[i][j] + min([D[i-1][j-1][1], D[i-1][j-1][2], D[i-1][j-1][3]])
        if j != M-1:
            D[i][j][2] = L[i][j] + min([D[i-1][j+1][0], D[i-1][j+1][1], D[i-1][j+1][3]])
        D[i][j][1] = L[i][j] + min([D[i-1][j][0], D[i-1][j][2], D[i-1][j][3]])

ans = MX
for j in range(M):
    ans = min([ans]+D[-1][j])
print(ans)