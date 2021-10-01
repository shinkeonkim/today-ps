def get_s(a, b, c):
  return a[0]*b[1]+b[0]*c[1]+c[0]*a[1]-b[0]*a[1]-c[0]*b[1]-a[0]*c[1]

L = []
n = int(input())
ans = 0

for i in range(n):
  L.append(list(map(int,input().split())))

for i in range(n):
  for j in range(i+1, n):
    for k in range(j+1, n):
      ans = max(ans,abs(get_s(L[i], L[j], L[k])))

print(ans / 2)
