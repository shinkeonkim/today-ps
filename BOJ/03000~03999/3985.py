N=int(input())
L_m = [0] *(N+1)
L = [0] *(N+1)
K=int(input())
m1=-1
ans1=-1
m2=-1
ans2=-1
for i in range(1,K+1):
    a,b=list(map(int,input().split()))
    for j in range(a,b+1):
        if L[j] == 0:
            L[j]=i
    if b-a+1 > m2:
        m2 = b-a+1
        ans2 = i
for i in range(1,K+1):
    k = L.count(i)
    if k > m1:
        m1 = k
        ans1 = i


print(ans2)
print(ans1)