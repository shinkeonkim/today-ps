n,m=list(map(int,input().split()))
L=list(map(int,input().split()))
S=0
for i in range(1,n+1):
    for j in L:
        if i % j ==0:
            S+=i
            break
print(S)