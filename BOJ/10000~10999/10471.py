w,p = map(int,input().split())
l = sorted([*map(int,input().split())]+[0, w])
s = [l[i+1] - l[i] for i in range(len(l)-1)]

ans = set()
for i in range(len(s)+1):
  for j in range(i, len(s)+1):
    ans.add(sum(s[i:j]))

print(*sorted([*filter(lambda t: t > 0,[*ans])]))