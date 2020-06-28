x,k = map(int,input().split())
x*=1000
k*=1000
ans = 0
L = [[k//4,k//2,k],[k//2,k,k*2],[k,k*2,k*4]]
for i in L:
    if sum(i) <=x:
        ans = sum(i)
print(ans)