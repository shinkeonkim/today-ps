n,m=map(int,input().split())
L = [0]*(n+1)
for i in range(m):
    a,b=map(int,input().split())
    L[a]+=1
    L[b]+=1
for i in range(1,n+1):
    print(L[i])