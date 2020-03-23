def f(D):
    return sum([sum(i) for i in D])
total = 0
ans = []
n,m = map(int,input().split())
D = [[0]*(n+1) for i in range(n+1)]
for i in range(m):
    a,b = map(int,input().split())
    D[a][b] = 1
    D[b][a] = 1

for i in range(1,n+1):
    D[i][i] = 1


while f(D) < n*n:
    cnt = 0
    for i in range(1,n+1):
        for j in range(1,n+1):
            for k in range(1,n+1):
                if D[i][j] == 1 and D[j][k] == 1 and D[i][k] == 0 and D[k][i] == 0:
                    # print(i,k)
                    D[i][k] = 2
                    D[k][i] = 2
                    cnt+=1
    for i in range(1,n+1):
        for j in range(1,n+1):
            if D[i][j] == 2:
                D[i][j] = 1
    ans.append(cnt)
    total+=1
print(total)
for i in ans:
    print(i)