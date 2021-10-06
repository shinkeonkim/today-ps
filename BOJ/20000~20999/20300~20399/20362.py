n, p = input().split()
l = [input().split() for i in range(int(n))]
s = []
for name, ans in l:
  if name == p:
    k = ans
    break
  s.append(ans)

print(s.count(k))
