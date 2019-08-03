from math import gcd

a = int(input())
if a == 1:
    print(1)
else:
    c = 2
    for i in range(2,a+1):
        if c % i != 0:
            c = c*i // gcd(c,i)
    print(c%987654321)