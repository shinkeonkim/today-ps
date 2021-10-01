while True:
  L = [*map(int,input().split())]
  if sum(L) == 0: break
  idx = L.index(0)
  L[idx]=1
  L[idx] = L[0]*L[1]*L[2] if idx == 3 else L[3]//(L[0]*L[1]*L[2])
  print(*L)
