a = int(input()) * int(input()) *int(input())

L = [0] * 10

while a > 0:
  L[a%10] += 1
  a //= 10

for i in L:
  print(i)