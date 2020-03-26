import itertools
Mn = 9999999999
Mx = -Mn
n = int(input())
L = list(map(int,input().split()))
cnt = list(map(int,input().split()))
p = []
for i in range(4):
    for j in range(cnt[i]):
        p.append(i)

p.sort()
for i in itertools.permutations(p):
    s = L[0]
    for j in range(1,len(L)):
        if i[j-1] == 0:
            s += L[j]
        elif i[j-1] == 1:
            s -= L[j]
        elif i[j-1] == 2:
            s *= L[j]
        else:
            if s > 0:
                s //= L[j]
            else:
                s = -((-s) //L[j])
    Mn = min(Mn,s)
    Mx = max(Mx,s)
print(Mx)
print(Mn)