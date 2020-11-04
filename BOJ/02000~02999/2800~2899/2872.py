n = int(input())
L = [int(input()) for i in range(n)]
crt = 0
ans = 0
for i in L:
    if crt > i:
        continue
    if crt+1 == i:
        crt = i
        continue
    crt = i
    ans = max(ans, crt-1)
print(ans)