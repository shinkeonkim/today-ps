D = [[0] * 1100 for i in range(1100)]

D[1][1] = 1
D[2][1] = 1
D[2][2] = 1
D[3][1] = 1
D[3][2] = 2
D[3][3] = 1
for i in range(4, 1001):
    for j in range(1, i+1):
        for k in range(1,4):
            D[i][j] += D[i-k][j-1]
        D[i][j] %= 1000000009

for _ in range(int(input())):
    N, M = map(int,input().split())
    ans = 0
    print(D[N][M])