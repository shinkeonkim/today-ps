import sys

def g():
    global ans,n,m,check,L
    s = 0
    for i in range(m):
        if check[i] == 1:
            s+=L[i]
    if s >= n and ans > s:
        ans = s


def dfs(current):
    global ans,n,m,check
    if current == m-1:
        for i in range(2):
            check[current] = i
            g()
    else:
        for i in range(2):
            check[current] = i
            dfs(current+1)

n,m = map(int,input().split())
L = sorted([int(input()) for i in range(m)])
ans = sum(L)
check = [0]*(m)

if ans < n:
    print("IMPOSSIBLE")
    sys.exit()

dfs(0)
print(ans)
