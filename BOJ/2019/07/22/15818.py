N,M=list(map(int,input().split()))
L=list(map(int,input().split()))
K = 1
for i in L:
    K *= i
    K %= M
print(K) 