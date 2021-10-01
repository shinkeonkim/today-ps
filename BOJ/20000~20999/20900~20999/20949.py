L = []

for i in range(int(input())):
  w,h = map(int, input().split())
  L.append([w*w+h*h, i])

for i in sorted(L, key = lambda t : (-t[0], t[1])):
  print(i[1] + 1)
