N, R = list(map(int, input().split()))
M =1000000007
U = 1
D = 1
for i in range(N-R+1, N+1):
    U *= i
for i in range(1, R+1):
    D *= i
print((U//D)%M)
