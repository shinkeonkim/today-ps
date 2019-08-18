Mod = 987654321
N=int(input())
N //=2
D = [0,1,2]
K = 1

for i in range(3,N+1):
    K *= D[i-1]
    K %= Mod
    A = 2*D[i-1]
    for j in range(1, i-1):
        A += (D[j]*D[i-j-1])%Mod
    
    D.append( A % Mod)

print(D[N])