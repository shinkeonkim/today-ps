S = 0
T = 0
L = []
for i in range(11):
    L.append(list(map(int,input().split())))

L.sort(key = lambda t:(t[0],t[1]))

for i in L:
    T+=i[0]
    S += T + i[1]*20
print(S)