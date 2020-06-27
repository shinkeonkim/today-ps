n = int(input())
L = [list(map(int,input().split())) for i in range(n-1)]
D = [0] * (n+1)
r = [0] * (n+1)

for i in L:
    D[i[0]] = i[1]
    r[i[0]] = i[2]

z = 0
c = 1
for i in range(n-1):
    if r[c] == 1:
        z = 1 - z
    c = D[c]
print(z)