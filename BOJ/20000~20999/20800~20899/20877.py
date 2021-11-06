n = int(input())
l = [*map(int,input().split())]
ans = 0

for i in range(n):
  l[i] = min(l[i], 7)
  if i % 2 == 0:
    ans += l[i] - 2
  else:
    ans += l[i] - 3

print(ans)
