from math import sqrt
n = int(input())
L = [i*i for i in range(1,int(sqrt(n))+1)]
D = [500000]*100000

for i in L:
    D[i] = 1

for i in range(1, n+1):
    for j in L:
        if D[i+j] > D[i] +1:
            D[i+j] = D[i]+1
print(D[n])