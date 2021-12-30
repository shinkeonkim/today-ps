n = int(input())
l = [*map(int,input().split())]

i = 0
while i < n:
  print(l[i], end=" ")
  i += l[i]
