D = [[0] * 2 for i in range(110000)]

D[1][1] = 1
D[2][1] = 1
D[2][0] = 1
D[3][1] = 2
D[3][0] = 2
for i in range(4, 110000):
    for j in range(2):
        for k in range(1,4):
            D[i][j] += D[i-k][(j+1)%2]
        D[i][j] %= 1000000009

for _ in range(int(input())):
    N = int(input())
    ans = 0
    print(D[N][1], D[N][0])