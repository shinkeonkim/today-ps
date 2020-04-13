n = int(input())
L = list(map(int,input().split()))
A = list(set(L[:]))
d = {}
A.sort()
for i in range(len(A)):
    d[A[i]] = i
for i in L:
    print(d[i],end = " ")