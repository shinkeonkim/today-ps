n,m=map(int,input().split())
l = [[*input()] for _ in range(n)]

for i in range(n):
  for j in range(m):
    if l[i][j] != '.':
      l[i][m-1-j] = l[i][j]
    if l[i][m-1-j] != '.':
      l[i][j] = l[i][m-1-j]

for i in l:
  print("".join(i))
