L = []
for i in range(16):
    Z = list(map(int,input().split()))
    if sum(Z) == -3:
        break
    else:
        L.append(Z)

L2 = []
while True:
    Z = list(map(int,input().split()))
    if sum(Z) == -3:
        break
    else:
        L2.append(Z)

for i in L2:
    ans = (255**2)*4
    pos = L[0]
    for j in L:
        S = sum([(i[idx]-j[idx])**2 for idx in range(3)])
        if S < ans:
            ans = S
            pos = j
    print("({},{},{})".format(i[0],i[1],i[2]), "maps to", "({},{},{})".format(pos[0],pos[1],pos[2]))
