for tc in range(int(input())):
  l = [input() for i in range(int(input()))]
  k = input()

  print(f"Data Set {tc + 1}:")
  for i in l:
    c = 0
    for j in i:
      if c == len(k):
        break
      if j.lower() == k[c].lower():
        c += 1
    if c == len(k):
      print(i)
