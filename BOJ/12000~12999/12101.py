def dfs(L, crt, remain):
    if remain == 0:
        L.append(crt[:])
    else:
        for i in range(1, 4):
            crt.append(i)
            if(remain - i >= 0):
                dfs(L, crt, remain - i)
            crt.pop()


N,K = map(int ,input().split())
L = []
crt = []
dfs(L, crt, N)
if K > len(L):
    print(-1)
else:
    print("+".join(list(map(str,L[K-1]))))