MOD = 1000000007
n = int(input())
k = 1
L = []
for i in range(2,n+1):
    k *= i
    k %= MOD
    L.append(k)
k2 = 1
for i in range(n-1):
    k2 *= 2
    k2%= MOD
print((k - k2 + MOD*MOD)%MOD)