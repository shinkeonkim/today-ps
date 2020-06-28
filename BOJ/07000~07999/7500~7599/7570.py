n = int(input())
L = list(map(int,input().split()))

L = [(L[i],i) for i in range(n)]

L.sort(key = lambda t: t[0])

M = 1
C = 1
for i in range(1,n):
    if L[i-1][1] < L[i][1]:
        C+=1
        if C > M:
            M = C
    else:
        C=1
print(n-M)