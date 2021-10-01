N, S = map(int,input().split())
if S > 0:
  l = [*map(int,input().split())]
else:
  l = []

L = [i for i in range(1,1005) if i not in l]

ans = 9876543210

for i in L:
  if i in l or i - N > ans:
    continue
  for j in L:
    if j in l or i*j - N > ans:
      continue
    for k in L:
      if k in l:
        continue
      ans = min(ans, abs(N - i*j*k))
      if N < i*j*k:
        break

print(ans)