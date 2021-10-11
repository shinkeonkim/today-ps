n, m = map(int,input().split())
l = [*map(int,input().split())]
query = [*map(int,input().split())]

crt = 0
for i in range(n):
  crt += l[i] * l[(i+1)%n] * l[(i+2)%n] * l[(i+3)%n]

for i in range(m):
  q = query[i] - 1
  f = 0
  for j in range(q-3, q+1):
    f += l[(j+n)%n] * l[(j+1+n)%n] * l[(j+2+n)%n] * l[(j+3+n)%n]
  l[q]*=-1

  crt -= 2*f

  print(crt)
