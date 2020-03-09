n = int(input())
L = []
for i in range(n):
    L.append(input())

S = [[0]*(n+2) for i in range(n+2)]
D = [[0]*(n+2) for i in range(n+2)]
for i in range(n):
    for j in range(n):
        if L[i][j] !=".":
            S[i+1][j+1] = int(L[i][j])

for i in range(1,n+1):
    for j in range(1,n+1):
        if S[i][j] == 0:
            for x in range(-1,2):
                for y in range(-1,2):
                    D[i][j] += S[i+x][j+y]

for i in range(1,n+1):
    for j in range(1,n+1):
        if S[i][j] > 0:
            print(end="*")
        elif D[i][j] >= 10:
            print(end = "M")
        else:
            print(D[i][j],end="")
    print()