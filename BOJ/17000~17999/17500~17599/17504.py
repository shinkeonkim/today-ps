def gcd(a,b):
    return gcd(b,a%b) if b>0 else a

n=int(input())
L = list(map(int,input().split()))

U,D = 1,L[-1]
for i in range(n-2,-1,-1):
    U += D*L[i]
    D,U = U,D

U = D-U

print(U//gcd(U,D),D//gcd(U,D))