n=int(input())
L=input().split()
k=dict()
for i in range(len(L)):
    k[L[i]]=i
L2=input().split()
ans = 0
for i in range(n):
    for j in range(i+1,n):
        if k[L2[i]] < k[L2[j]]:
            ans+=1
print("{}/{}".format(ans,n*(n-1)//2))
