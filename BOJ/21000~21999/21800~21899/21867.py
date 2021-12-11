input()
c=1
for i in input():
  if i not in "JAVA":
    print(i, end="")
    c=0

if c:
  print("nojava")
