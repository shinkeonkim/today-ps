n,m = map(int,input().split())
s = [input() for i in range(n)]
L = []
for i in range(n):
    k = ""
    for j in range(m):
        if s[i][j] == "#":
            if k !="" and len(k) >1:
                L.append(k)
            k = ""
        else:
            k+=s[i][j]
    if k!="" and len(k) >1:
        L.append(k)

for j in range(m):
    k = ""
    for i in range(n):
        if s[i][j] == "#":
            if k !="" and len(k) >1:
                L.append(k)
            k = ""
        else:
            k+=s[i][j]
    if k!="" and len(k) >1:
        L.append(k)

L.sort()
print(L[0])