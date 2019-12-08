N,M=map(int,input().split())
L = []
for i in range(N):
    L.append(input())
a = [0]*N
b = [0]*M
for i in range(N):
    for j in range(M):
        if L[i][j] == 'X':
            a[i] = 1
            b[j] = 1
print(max(a.count(0),b.count(0)))