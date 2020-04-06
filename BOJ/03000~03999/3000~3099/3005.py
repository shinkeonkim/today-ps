n,m = map(int,input().split())
L = [input() for i in range(n)]

SS = set()
for i in range(n):
    s = ""
    for j in range(m):
        if L[i][j] == "#":
            if len(s) >=2:
                SS.add(s)
            s = ""
        else:
            s += L[i][j]
    if len(s) >=2:
        SS.add(s)

for j in range(m):
    s = ""
    for i in range(n):
        if L[i][j] == "#":
            if len(s) >=2:
                SS.add(s)
            s = ""
        else:
            s += L[i][j]
    if len(s) >=2:
        SS.add(s)

print(sorted(list(SS))[0])