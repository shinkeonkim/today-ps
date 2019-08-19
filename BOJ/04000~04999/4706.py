from math import sqrt
while True:
    a,b=map(float,input().split())
    if a== 0 and b== 0:
        break
    print("%.3f"%(sqrt(1-(b**2/a**2))))