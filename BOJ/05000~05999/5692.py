from math import factorial as f
import sys
while True:
    a = sys.stdin.readline()
    a = a[:-1]
    if a == '0':
        break
    L = len(a)
    S = 0
    for i in range(len(a)):       
        S+= f(len(a)-i)*int(a[i])
    print(S)