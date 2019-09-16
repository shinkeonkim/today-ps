L = [1,2,7]
S = [1,3,10]
Mod = 1000000007
n = int(input())
if n <=2:
    print(L[n])
else:
    for i in range(3,n+1):
        L.append((2*L[i-1] + 3*L[i-2] + S[i-3]*2) % Mod)
        S.append(S[-1]+L[-1])
    print(L[-1])