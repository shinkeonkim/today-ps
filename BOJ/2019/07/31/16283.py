a,b,n,w=list(map(int,input().split()))
L = []
for i in range(1,n):
    if a*i + b*(n-i) == w:
        L.append(i)

if len(L) == 1:
    print(L[0],n-L[0])
else:
    print(-1)