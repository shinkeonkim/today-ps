A,B,N=list(map(int,input().split()))
K = A//B
A = A%B
A*=10
for i in range(N):
    K = A//B  
    A = A%B 
    A*=10
print(K)   