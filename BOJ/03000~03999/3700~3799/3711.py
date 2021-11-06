for _ in range(int(input())):
  n = int(input())
  l = [int(input()) for _ in range(n)]

  z = n
  while z < 5000000:
    s = set()
    for i in l:
      s.add(i % z)

    if len(s) == n:
      print(z)
      break
    z+=1