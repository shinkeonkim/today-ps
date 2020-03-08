L = [0]*4000
L[0] = 1
for i in range(1,2000):
    L2 = L[:]
    for j in range(0,2000):
        if L[j] > 0:
            L2[i+j] +=L[j]
    L = L2
for i in range(int(input())):
    print(L[int(input())]%100999)