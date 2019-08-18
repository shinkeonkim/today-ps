n=int(input())
L=list(map(int,input().split()))
S=sum(L)
ans=0
for i in L:
    S-=i
    ans += i*S
print(ans)