ans = False
def dfs(N, idx, L):
    global ans
    if N == 0:
        ans = True
    elif idx == 22:
        if N == 0 or N - L[idx] == 0:
            ans = True
    else:
        dfs(N - L[idx], idx+1, L)
        dfs(N, idx+1, L)

L = [1,1]
for i in range(2, 25):
    L.append(L[-1]*i)

N = int(input())
if N == 0:
    print("NO")
else:
    dfs(N, 0, L)
    if ans:
        print("YES")
    else:
        print("NO")