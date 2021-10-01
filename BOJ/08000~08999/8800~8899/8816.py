for i in range(int(input())):
  a = int(input())
  ans = 1
  for i in range(a-1, 0, -2):
    ans *= i
    ans %= 1000
  print(ans % 1000)
