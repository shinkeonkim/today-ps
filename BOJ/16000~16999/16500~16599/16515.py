import math
s = 0.0
k = 1
n = int(input())
for i in range(n+1):
    k*=max(1,i)
    s += 1/k
print(s)