N = int(input())
L = list(map(int,input().split()))
d = {}
for i in L:
    try:
        d[i] += 1
    except:
        d[i] = 1

L = sorted(list(d.items()), key = lambda t : t[0])
ans = 0

for i in L:
    if N <= i[0]:
        ans = max(ans , N)
    N -= i[1]
print(ans)