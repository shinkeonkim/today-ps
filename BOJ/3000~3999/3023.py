a,b=list(map(int,input().split()))
L = []
K = []
for i in range(a):
    L.append(input())
c,d=list(map(int,input().split()))

for i in range(a):
    for j in range(b-1,-1,-1):
        L[i]+=L[i][j]

for i in range(a-1,-1,-1):
    L.append(L[i])

for i in range(len(L)):
    K.append(list(L[i]))

if K[c-1][d-1] == '.':
    K[c-1][d-1] = '#'
else:
    K[c-1][d-1]='.'

for i in range(a*2):
    for j in range(b*2):
        print(K[i][j],end="")
    print()