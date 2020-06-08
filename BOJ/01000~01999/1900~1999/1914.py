import sys
sys.setrecursionlimit(3000)

def dfs(n, start, mid, end):
    if n > 0:
        dfs(n-1, start, end, mid)
        print(start, end)
        dfs(n-1, mid, start, end)


n = int(input())
print(2**n -1)
if n > 20:
    sys.exit()

dfs(n,1,2,3)