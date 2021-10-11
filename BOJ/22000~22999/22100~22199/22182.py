from math import pi
n, r = map(int,input().split())
l = [*map(int,input().split())]
s = sum(l)

for i in l:
  print(i * (r*r*pi) / s)
