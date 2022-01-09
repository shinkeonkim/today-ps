l = [int(input()) for i in range(3)]
cnt = 0
while not l[0] == l[1] == l[2]:
  l.sort()
  diff = l[2] - l[1] if l[2] - l[1] else l[1] - l[0]
  l[0] += diff
  l[1] += diff
  cnt += diff

print(cnt)