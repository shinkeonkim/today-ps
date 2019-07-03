from math import *

for it in range(int(input())):
    h,theta = tuple(map(float,input().split(" ")))
    theta = (theta*pi)/180.0
    k = (h*(1.0-tan(theta)))/tan(theta)
    if k < 0.0: 
        k = -1.0*k
    print("Case %d: %.5f"%(it+1,k))