n = int(input())
L = [*map(int,input().split())]
d = {}
d2 = {}
ans = 0

for i in L:
  try:
    d[i] += 1
    d2[i] += 1
  except:
    d[i] = 1
    d2[i] = 1

for i in range(n):
  for j in range(i+1, n):
    s = L[i] + L[j]

    try:
      if (s == L[i] and d2[L[i]] == 1) or (s == L[j] and d2[L[j]] == 1) or (s == L[i] == L[j] and d2[L[i]] == 2):
        continue

      ans += d[s]
      d[s] = 0
    except:
      continue

print(ans)
