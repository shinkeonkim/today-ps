import copy
N = int(input())

L = [input().split() for i in range(N)]

for i in range(len(L)):
    for j in range(len(L[i])):
        L[i][j] = L[i][j].split("-")
        L[i][j][1] = int(L[i][j][1])

L2 = []
for i in range(len(L)):
    for j in range(len(L[i])):
        L2.append(L[i][j][:])

L2.sort(key = lambda t:(t[0],t[1]))

current = 0

stk = []
for i in range(len(L)):
    for j in range(len(L[i])):
        while current < len(L2) and len(stk) > 0 and L2[current] == stk[-1]:
            stk.pop()
            current+=1

        if current < len(L2):
            if L[i][j] == L2[current]:
                current+=1
            else:
                stk.append(L[i][j])
while current < len(L2) and len(stk) > 0 and L2[current] == stk[-1]:
    stk.pop()
    current+=1

if current == len(L2):
    print("GOOD")
else:
    print("BAD")