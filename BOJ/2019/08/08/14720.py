n=int(input())
L=list(map(int,input().split()))
k=0
ans=0
for i in L:
    if i == k%3:
        ans+=1
        k+=1
print(ans)