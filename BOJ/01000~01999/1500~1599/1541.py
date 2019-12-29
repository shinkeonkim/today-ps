S = []
L = input().split("-")
for i in L:
    L2 = i.split("+")
    a = 0
    for j in L2:
        a += int(j)
    S.append(a)
ans = S[0]
for i in S[1:]:
    ans -= i
print(ans)