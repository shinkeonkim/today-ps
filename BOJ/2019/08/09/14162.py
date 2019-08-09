a,b=list(map(int,input().split()))
L = [0]*(b+1)
for i in range(1,b+1):
    for j in range(i,b+1,i):
        L[j]+=i
print(sum(L[a:b+1]))