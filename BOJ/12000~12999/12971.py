def solution():
  l=[*map(int,input().split())]
  for i in range(1, 40000000):
    if i % l[0] == l[3] and i % l[1] == l[4] and i % l[2] == l[5]:
      return i
  return -1

print(solution())