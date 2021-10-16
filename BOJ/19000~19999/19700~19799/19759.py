n = int(input())
a = 100
for i in range(n):
  print(a)
  a *= 2
  k = (len(str(a))+1) // 2
  z = int("4"+"9"*(k-1))
  a = round(a+z, -k)
