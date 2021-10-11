MOD = 1_000_000_007
L = [0, 2, 8]
n = int(input())
for i in range(3, n+1):
  L.append((L[-1]*3 + 2)%MOD)

print(L[n]%MOD)
