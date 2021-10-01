for _ in range(int(input())):
  n, m = map(int,input().split())
  x = int(''.join(input().split()))
  y = int(''.join(input().split()))
  L = input().split()
  ans = 0
  
  for i in range(n):
    e = i + m
    s = L[i:]+L[:(e%n)] if e > n else L[i:e]
    
    if x <= int(''.join(s)) <= y:
      ans += 1

  print(ans)
