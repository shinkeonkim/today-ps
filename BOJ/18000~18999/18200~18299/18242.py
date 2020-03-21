import sys
n,m = map(int,input().split())
L = [input() for i in range(n)]
S,E =[],[]
chk = False
for i in range(n):
    for j in range(m):
        if L[i][j] == '#':
            S =[i,j]
            chk = True
            break
    if chk:
        break
chk = False
for i in range(n-1,-1,-1):
    for j in range(m-1,-1,-1):
        if L[i][j] == '#':
            E =[i,j]
            chk = True
            break
    if chk:
        break

for i in range(S[1],E[1]+1):
    if L[S[0]][i] != '#':
        print("UP")
        sys.exit()

for i in range(S[0],E[0]+1):
    if L[i][S[1]] != '#':
        print("LEFT")
        sys.exit()

for i in range(S[0],E[0]+1):
    if L[i][E[1]] != '#':
        print("RIGHT")
        sys.exit()

for i in range(S[1],E[1]+1):
    if L[E[0]][i] != '#':
        print("DOWN")
        sys.exit()
