for _ in range(int(input())):
  a,b=map(int,input().split())
  print("Yes" if a <= 2 and b <= 2 and a+b < 4 else "No")
