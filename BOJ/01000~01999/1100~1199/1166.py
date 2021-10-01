s = 0
e = 1000000000
ans = 0
n, l, w, h = map(int, input().split())

for i in range(100000):
  mid = (s + e) / 2

  cnt = ((l / mid) // 1) * ((w / mid) // 1) * ((h / mid) // 1)

  if cnt >= n:
    ans = max(ans, mid)
    s = mid + 0.000000001
  else:
    e = mid - 0.000000001

print(ans)