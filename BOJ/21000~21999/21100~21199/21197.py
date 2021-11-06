n = int(input())
if n % 2 == 1:
  print("still running")
else:
  l = [int(input()) for i in range(n)]
  ans = 0
  for i in range(0, n, 2):
    ans += l[i+1]-l[i]
  print(ans)
