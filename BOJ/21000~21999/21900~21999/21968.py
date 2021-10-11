for i in range(int(input())):
  n = int(input())
  l = []
  ans = 0
  z = 1
  while n > 0:
    ans += z * (n % 2)
    z *= 3 
    n //= 2
  print(ans)
