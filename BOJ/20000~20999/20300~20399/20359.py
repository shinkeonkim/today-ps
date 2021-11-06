n = int(input())
c = 0
while n % 2 == 0:
  n //= 2
  c += 1
print(n, c)