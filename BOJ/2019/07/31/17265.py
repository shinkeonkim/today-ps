def f(a,b,cc):
    if cc == '+':
        return a+b
    if cc == '-':
        return a-b
    if cc == '*':
        return a*b

n=int(input())
L=[]
for i in range(n):
    a=input()
    L.append(a.split())

D = [[-987654321]*(n) for i in range(n)]
D2 = [[987654321]*(n) for i in range(n)]



for i in range(n):
    if i%2 == 0:
        for j in range(0,n,2):
            L[i][j] = int(L[i][j])
    else:
        for j in range(1,n,2):
            L[i][j] = int(L[i][j])

D[0][0]=L[0][0]

for i in range(2,n,2):
    D[0][i] = f(D[0][i-2],L[0][i],L[0][i-1])
    D[i][0] = f(D[i-2][0],L[i][0],L[i-1][0])

for i in range(1,n):
    if i%2 == 0:
        for j in range(2,n,2):
            if i > 1:
                D[i][j] = max(D[i][j],f(D[i-2][j],L[i][j],L[i-1][j]))
            D[i][j] = max(D[i][j],f(D[i][j-2],L[i][j],L[i][j-1]),f(D[i-1][j-1],L[i][j],L[i-1][j]),f(D[i-1][j-1],L[i][j],L[i][j-1]))
    else:
        for j in range(1,n,2):
            if i > 1:
                D[i][j] = max(D[i][j],f(D[i-2][j],L[i][j],L[i-1][j]))
            if j > 1:
                D[i][j] = max(D[i][j],f(D[i][j-2],L[i][j],L[i][j-1]))
            D[i][j] = max(D[i][j],f(D[i-1][j-1],L[i][j],L[i-1][j]),f(D[i-1][j-1],L[i][j],L[i][j-1]))



D2[0][0]=L[0][0]

for i in range(2,n,2):
    D2[0][i] = f(D2[0][i-2],L[0][i],L[0][i-1])
    D2[i][0] = f(D2[i-2][0],L[i][0],L[i-1][0])

for i in range(1,n):
    if i%2 == 0:
        for j in range(2,n,2):
            if i > 1:
                D2[i][j] = min(D2[i][j],f(D2[i-2][j],L[i][j],L[i-1][j]))
            D2[i][j] = min(D2[i][j],f(D2[i][j-2],L[i][j],L[i][j-1]),f(D2[i-1][j-1],L[i][j],L[i-1][j]),f(D2[i-1][j-1],L[i][j],L[i][j-1]))
    else:
        for j in range(1,n,2):
            if i > 1:
                D2[i][j] = min(D2[i][j],f(D2[i-2][j],L[i][j],L[i-1][j]))
            if j > 1:
                D2[i][j] = min(D2[i][j],f(D2[i][j-2],L[i][j],L[i][j-1]))
            D2[i][j] = min(D2[i][j],f(D2[i-1][j-1],L[i][j],L[i-1][j]),f(D2[i-1][j-1],L[i][j],L[i][j-1]))


print(D[n-1][n-1],D2[n-1][n-1])