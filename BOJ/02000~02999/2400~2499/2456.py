L = [[0]*5 for i in range(3)]

n = int(input())
for i in range(n):
    I = list(map(int,input().split()))
    for j in range(3):
        L[j][I[j]]+=1
for i in range(3):
    L[i][0] = L[i][1]*1 + L[i][2]*2 + L[i][3]*3
    L[i][4] = i+1
L.sort(key = lambda t: (-t[0], -t[3], -t[2], -t[1]))

if len(L) > 1 and L[0][:-1] == L[1][:-1]:
    print(0, L[0][0])
else:
    print(L[0][4], L[0][0])