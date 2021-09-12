while True:
  a = input()
  if a == '0':
    break

  n = len(a)

  cnt = 0
  while True:
    if a == a[::-1]:
      break
    else:
      cnt += 1
      a = str(int(a) + 1)
      a = '0' * (n - len(a)) + a
  print(cnt)