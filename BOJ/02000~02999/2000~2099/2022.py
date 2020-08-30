from math import sqrt

x,y,c = map(float,input().split())
s = 0.000001
e = max(x,y)
ans = e
real = e

while s<=e:
    mid = (s+e)/2
    if x**2 - mid**2 < 0 or y**2 - mid**2 < 0:
        e = mid-1
        continue
    a = sqrt(x**2 - mid**2)
    b = sqrt(y**2 - mid**2)

    k = (a*b)/(a+b)

    if abs(k-c) < abs(ans-c):
        ans = k
        real = mid
    
    if k >= c:
        s = mid+0.000001
    else:
        e = mid-0.000001
print(real)