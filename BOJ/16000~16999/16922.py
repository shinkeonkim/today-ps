S = set()
n =int(input())
for a in range(n+1):
  for b in range(n+1):
    for c in range(n+1):
      for d in range(n+1):
        if a+b+c+d == n:
          S.add(a+b*5+c*10+d*50)
print(len(S))