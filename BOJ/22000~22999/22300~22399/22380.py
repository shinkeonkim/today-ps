while 1:
  n,m=map(int,input().split())
  if n+m==0: break
  print(sum([min(m//n,i) for i in map(int,input().split())]))
