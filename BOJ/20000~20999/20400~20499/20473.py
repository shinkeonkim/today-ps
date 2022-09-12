n = int(input())

for i in range(n // 3, -1, -1):
  if (n - i*3) % 2 == 0:
    print((n - i*3) // 2, i)
    break
