from os import umask


def solution():
  n = int(input())
  M = [input() for _ in range(n)]
  O = [input() for _ in range(n)]
  dx = [-1,-1,-1,0,0,1,1,1]
  dy = [1,0,-1,1,-1,1,0,-1]

  fxck = False

  for i in range(n*n):
    if M[i//n][i%n] == "*" and O[i//n][i%n] == "x":
      fxck = True

  if fxck:
    print(("*"*n+"\n")*n)
    return

  for y in range(n):
    for x in range(n):
      if O[y][x] == 'x':
        cnt = 0
        for d in range(8):
          s_y = y + dy[d]
          s_x = x + dx[d]
          
          if s_y < 0 or s_x < 0 or s_y >= n or s_x >= n or M[s_y][s_x] != '*':
            continue
          cnt += 1
        O[y] = O[y][0:x] + str(cnt) + O[y][x+1:]
  
  for i in range(n):
    print(O[i])

solution()



