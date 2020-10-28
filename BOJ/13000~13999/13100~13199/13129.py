A,B,N=map(int,input().split())
L = [A+B]
for i in range(2,N+1):
    L2 = set()
    for i in L:
        L2.add(i+A+B)
        L2.add(i+A)
    L = list(L2)[:]
L.sort()
for i in L:
    print(i,end=" ")