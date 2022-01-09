a = sorted([*map(int,input().split())])
b = sorted([*map(int,input().split())])

cnt = 0
for i in range(5):
  if a[i] > b[i]:
    cnt += 1

print(cnt)
