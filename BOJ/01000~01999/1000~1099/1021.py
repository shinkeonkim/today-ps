n,m = map(int,input().split())
op = list(map(int,input().split()))
L = [i for i in range(1, n+1)]

ans = 0
for i in op:
    idx = L.index(i)
    l = idx
    r = len(L) - idx

    if l <= r:
        for i in range(l):
            L.append(L.pop(0))
        L.pop(0)
        ans += l
    else:
        for i in range(r):
            L = [L[-1]] + L[:-1]
        L.pop(0)
        ans += r
print(ans)