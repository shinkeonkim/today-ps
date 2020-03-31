import sys


def cons(L1):
    for i in range(1,len(L1)):
        if L1[i] - L1[i-1] != 1:
            return False
    return True  

L = [input().split() for i in range(5)]

for i in range(5):
    L[i][1] = int(L[i][1])

L.sort(key = lambda t : t[1])


L0 = [i[0] for i in L]
L1 = [i[1] for i in L]
ret = []
# 1
if len(set(L0)) == 1 and cons(L1):
    ret.append(900 + L1[-1])
# 2
if L1[0] == L1[1] == L1[2] == L1[3] or L1[4] == L1[1] == L1[2] == L1[3]:
    ret.append(800 + L1[2])
# 3-1
if L1[0] == L1[1] and L1[2] == L1[3] == L1[4]:
    ret.append(700 + L1[2]*10 + L1[0])
# 3-2
if L1[0] == L1[1] == L1[2] and L1[3] == L1[4]:
    ret.append(700 + L1[2]*10 + L1[3])
# 4
if len(set(L0)) == 1:
    ret.append(600 + max(L1))
# 5
if cons(L1):
    ret.append(500 + max(L1))

# 6
for i in range(3):
    if L1[i] == L1[i+1] == L1[i+2]:
        ret.append(400 + max(L1[i:i+3]))

# 7
for i in range(4):
    for j in range(i+2,4):
        if L1[i] == L1[i+1] and L1[j] == L1[j+1]:
            ret.append(300 + L1[j]*10 + L1[i])
for i in range(4):
    if L1[i] == L1[i+1]:
        ret.append(200 + L1[i])
ret.append(100 + max(L1))

print(max(ret))