from math import sqrt
import sys

n = int(input())

if n == 1:
    print("no")
    sys.exit()

for i in range(2,int(sqrt(n))+1):
    if n%i == 0:
        while n > 1 and n%i ==0:
            n //= i

        if n > 1:
            print("no")
            break
else:
    print("yes")