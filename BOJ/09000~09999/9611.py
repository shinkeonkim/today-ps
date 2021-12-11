def dis(a, b):
  return (a[0]-b[0])**2 + (a[1]-b[1])**2

l = [[*map(int,input().split())] for i in range(int(input()))]

for i in range(int(input())):
  i,d = map(int,input().split())
  ans = -1
  
  for p in l:
    if dis(l[i-1], p) <= d*d:
        ans += 1
    
  print(ans)
