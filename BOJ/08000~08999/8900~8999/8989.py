for i in range(int(input())):
  L = input().split()

  D = []

  for i in L:
    h,m = map(int, i.split(':'))
    a = ((h % 12) * 30 + m / 2) % 360
    b = m * 6

    deg = max(a,b) - min(a,b)

    D.append([min(deg, 360-deg), i])

  D.sort()
  print(D[2][1])
