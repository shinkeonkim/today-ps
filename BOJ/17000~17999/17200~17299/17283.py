N = int(input())
P = int(input())
N = N*P//100
S = 0
k = 1
while N>5:
    k*=2
    S += N*k
    N = N*P//100
print(S)