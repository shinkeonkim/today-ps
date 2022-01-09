s = input()
n = len(s)
d = []
for i in range(n):
  if s[i] in 'qwertasdfgzxcvb':
    d.append(0)
  else:
    d.append(1)      

for i in range(n-1):
  if d[i] == d[i+1]:
    print("no")
    break
else:
  print("yes")
