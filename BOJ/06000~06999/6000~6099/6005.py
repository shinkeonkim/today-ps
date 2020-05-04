n = int(input())
L = []
for i in range(n):
    k = list(map(int,input().split()))
    k = k + [0]*(n-len(k))
    L.append(k)
D = [[0]*n for i in range(n)]
D[0] = L[0]
for i in range(1,n):
    for j in range(n):
        D[i][j] = L[i][j] + max(D[i-1][j],D[i-1][max(0,j-1)])
print(max(D[n-1]))