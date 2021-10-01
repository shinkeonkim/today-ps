n,k,l = map(int,input().split())
cnt = 0
ans = []

for _ in range(n):
  d = [*map(int,input().split())]

  if d[0] + d[1] + d[2] >= k and d[0] >= l and d[1] >= l and d[2] >= l:
    cnt += 1
    ans.extend(d)

print(cnt)
print(*ans)