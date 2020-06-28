n = int(input())
A = []
B = []
C = []
D = []

S = 0
L = []
dt = dict()

for i in range(n):
    a,b,c,d = map(int,input().split())
    A.append(a)
    B.append(b)
    C.append(c)
    D.append(d)

for i in A:
    for j in B:
        L.append(i+j)

for i in C:
    for j in D:
        try:
            dt[i+j] +=1
        except:
            dt[i+j] = 1

for i in L:
    try:
        S += dt[-i]
    except:
        continue
print(S)