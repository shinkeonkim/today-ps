n,x,k = map(int,input().split())
d = [0] * n
d[x-1] = 1

for i in range(k):
  a,b = map(int,input().split())
  a-=1
  b-=1
  d[a],d[b] = d[b],d[a]

print(d.index(1)+1)