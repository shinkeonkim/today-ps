from math import sqrt

g = int(input())
cnt = 0

for i in range(1, 11000000):
  if i*i - (i-1)*(i-1) > g:
    break
  k = i*i + g
  q = int(sqrt(k))
  if k == q*q:
    print(q)
    cnt += 1

if cnt == 0:
  print(-1)