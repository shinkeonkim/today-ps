def main():
  m,s,x1,x2=map(int,input().split())
  for a in range(0, m):
    for c in range(0, m):
      if x1 == (a*s+c)%m and x2 == (a*x1+c)%m:
        print(a, c)
        return
main()
