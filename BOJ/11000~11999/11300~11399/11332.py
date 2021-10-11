from math import factorial

for i in range(int(input())):
  s, n, t, l = input().split()
  n,t,l = map(int, [n,t,l])

  max_cnt = 10**8 * l

  if s == "O(N)":
    cnt = n
  elif s == "O(N^2)":
    cnt = n*n
  elif s == "O(N^3)":
    cnt = n**3
  elif s == "O(2^N)":
    cnt = 2**n
  else:
    cnt = factorial(n)
  
  cnt *= t

  print("May Pass." if max_cnt >= cnt else "TLE!")
