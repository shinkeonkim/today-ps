x,y,z=map(int,input().split())
a = (x + y - z) /2
b = x - a
c = y - a

if a <= 0 or b <= 0 or c <= 0:
  print(-1)
else:
  print(1)
  print(a, b, c)