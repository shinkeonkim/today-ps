n = int(input())
L = list(map(int,input().split()))
ans = None
mn = 20000000000
for i in range(20000,0,-1):
    s = 0
    for j in L:
        s += abs(i-j)
    if s <= mn:
        mn = s
        ans = i
print(ans)