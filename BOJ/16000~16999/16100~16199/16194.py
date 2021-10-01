INF = 123456789

n = int(input())
l = [0, *map(int,input().split())]

d = [INF for i in range(n + 1)]

for i in range(n+1):
  d[i] = l[i]

  for j in range(i):
    d[i] = min(d[i], d[i-j] + d[j])

print(d[n])
