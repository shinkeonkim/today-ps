s = input().upper()

for i in range(65, 91):
  print(f"{chr(i)} | {'*'*s.count(chr(i))}")