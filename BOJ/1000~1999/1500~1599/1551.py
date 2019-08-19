n,k=list(map(int,input().split()))
L=list(map(int,input().split(",")))
for _ in range(k):
    s=[]
    for i in range(len(L)-1):
        s.append(L[i+1]-L[i])
    L=s[:]
for i in range(len(L)-1):
    print(L[i],end=",")
print(L[-1])