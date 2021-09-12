from math import sqrt
n = int(input())
w = int(sqrt(n))
h = n // w if n % w == 0 else n // w + 1

if w != 1:
  w -= 1
if h != 1:
  h -= 1
print(2*(w+h))
