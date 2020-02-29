Mod = 100007
K,N=map(int,input().split())
L = list(map(int,input().split()))
S = sum(L)
for i in range(N-K):
    a = L[0]
    L.pop(0)
    L.append(S)
    S = (2*S-a+2*Mod)%Mod
print(L[-1]%Mod)
