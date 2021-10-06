n = int(input())
l = [*map(int,input().split())]

chk = True
ans = True

if len(l) <= 1:
  ans = True

for i in range(1, len(l)):
  if l[i-1] == l[i]:
    ans = False
  elif l[i-1] < l[i]:
    if not chk:
      ans = False
  else:
    chk = False

print("YES" if ans else "NO")