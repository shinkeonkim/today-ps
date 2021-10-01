s="EISNTFJP"
for i in input():
  k=s.index(i)
  print(s[2*(k//2)+1-k%2],end="")