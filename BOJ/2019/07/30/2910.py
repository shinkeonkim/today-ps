N,C=list(map(int,input().split()))
L = list(map(int,input().split()))
K = dict()
C = dict()
for i,j in enumerate(L):
    if j not in K:
        K[j] = i 
    if j not in C:
        C[j] = 1
    else:
        C[j]+=1

L.sort(key=lambda t : K[t])

L.sort(key=lambda t: N-C[t])

for i in L:
    print(i,end=" ")