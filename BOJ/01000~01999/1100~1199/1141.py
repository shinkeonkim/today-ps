L = []
n = int(input())
for i in range(n):
    L.append(input())
L.sort(key = lambda t: (-len(t), t))

S = []
for i in L:
    chk = True
    for j in S:
        if len(j) < len(i):
            if j[:len(j)] == i[:len(j)]:
                chk = False
                break
        else:
            if j[:len(i)] == i[:len(i)]:
                chk = False
                break
    if chk:
        S.append(i)
print(len(S))
