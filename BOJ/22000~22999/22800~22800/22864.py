
A, B, C, M = map(int,input().split())
t = 0
w = 0

for _ in range(24):
  if t + A > M:
    t = max(t-C, 0)
  else:
    t += A
    w += B
print(w)