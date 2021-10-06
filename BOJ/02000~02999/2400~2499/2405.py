n = int(input())
L = sorted([int(input()) for i in range(n)])
ans = 0

for i in range(n-1):
  if i != n-2:
    ans = max(ans, abs(L[i] + L[-1] - 2*L[i+1]))
  if i != 0:
    ans = max(ans, abs(L[0] + L[i+1] - 2*L[i]))

print(ans)
