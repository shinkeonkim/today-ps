a,b = sorted([*map(int,input().split())])

for i in range(200, 0, -1):
  s = i * i
  if (i % 2 == 0 and s//2 <= a) or (i%2 and s//2 <= a and s//2 + 1 <=b):
    print(i)
    break
else:
  print("Impossible")
