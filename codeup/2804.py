import sys
import math

n,p = input().split()
n = int(n)
if n != len(p) or p == '1':
    print("POK*8")
    sys.exit()

p = int(p)
for i in range(2,int(math.sqrt(p))+1):
    if p %i == 0:
        print("POK*8")
        break
else:
    print("GOD")