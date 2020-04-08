import sys
f = open(sys.path[0] + "\\11.txt","r")
L = [list(map(int,f.readline().split())) for i in range(20)]
f.close()

ans = 0
# 수평
for i in range(20):
    for j in range(17):
        k = L[i][j] * L[i][j+1] * L[i][j+2] * L[i][j+3]
        ans = max(ans,k)
# 수직
for j in range(20):
    for i in range(17):
        k = L[i][j] * L[i+1][j] * L[i+2][j] * L[i+3][j]
        ans = max(ans,k)

# 대각선 1 \ 방향
for i in range(17):
    for j in range(17):
        k = L[i][j] * L[i+1][j+1] * L[i+2][j+2] * L[i+3][j+3]
        ans = max(ans,k)

# 대각선 2 / 방향
for i in range(17):
    for j in range(3,20):
        k = L[i][j] * L[i+1][j-1] * L[i+2][j-2] * L[i+3][j-3]
        ans = max(ans,k)

print(ans)