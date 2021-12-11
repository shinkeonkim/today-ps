import sys

for i in range(int(sys.stdin.readline())):
  a,b = map(int,sys.stdin.readline().split())
  c = 0
  while a < b:
    a *= 2
    c += 1
  sys.stdout.write(str(c)+"\n")