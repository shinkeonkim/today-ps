N,M=list(map(int,input().split()))
L = [i for i in range(N+1)]
for i in range(M):
    s,e,m=list(map(int,input().split()))
    L[s:e+1] = L[m:e+1]+L[s:m]
for i in range(1,len(L)):
    print(L[i],end=" ")