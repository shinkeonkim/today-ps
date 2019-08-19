d = dict()
n = int(input())
for t in range(n):
    a = input()
    if a in d:
        d[a] += 1
    else:
        d[a] = 1
L = list(d.items())
L.sort(key=lambda t: t[0])
L.sort(key=lambda t: n-t[1])
print(L[0][0])
