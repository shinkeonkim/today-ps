def dfs(Y,X,N,L):
    s = 0
    for i in range(Y,Y+N):
        for j in range(X,X+N):
            s+=L[i][j]
    if s == 0:
        print(end = "0")
    elif s == N*N:
        print(end = "1")
    else:
        print(end="(")
        dfs(Y,X,N//2,L)
        dfs(Y,X+(N//2),N//2,L)
        dfs(Y+(N//2),X,N//2,L)
        dfs(Y+(N//2),X+(N//2),N//2,L)
        print(end=")")

n = int(input())
L = []
for i in range(n):
    L.append(list(map(int,list(input()))))

dfs(0,0,n,L)
