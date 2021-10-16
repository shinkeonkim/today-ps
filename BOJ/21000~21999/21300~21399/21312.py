def solution():
  a, b, c = sorted([*map(int,input().split())])
  L = sorted([a, b, c, a * b, b * c, a * c, a * b * c])

  for i in L[::-1]:
    if i % 2 == 1:
      return i
  
  return max(L)

print(solution())