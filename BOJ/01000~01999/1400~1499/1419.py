n = int(input())
k = int(input())

primes = []
d = [0]*110
d[0] = d[1] = 1
for i in range(2, k+1):
  if d[i] == 0:
    primes.append(i)
    for j in range(i+i, k+1, i):
      d[j] = 1

dp = [i for i in range(n+1)]

ans = 0

for i in range(1, n+1):
  for prime in primes:
    while dp[i] % prime == 0:
      dp[i] //= prime
  if dp[i] == 1:
    ans += 1

print(ans)
