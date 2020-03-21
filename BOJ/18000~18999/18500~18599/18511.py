N,K = map(int,input().split())
L = list(map(int,input().split()))
ans = 0
Q = L[:]
while len(Q) > 0:
    k = Q[0]
    Q.pop(0)
    if k > N:
        continue
    if k > ans:
        ans = k

    for i in L:
        Q.append(k*10+i)

print(ans)