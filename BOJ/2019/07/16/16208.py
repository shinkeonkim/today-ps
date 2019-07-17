S=0
n=int(input())
L=list(map(int,input().split()))
a=sum(L)
L.sort(reverse=True)
for i in range(len(L)-1):
    S += L[i]*(a-L[i])
    a=a-L[i]
print(S)