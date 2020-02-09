import math
case = 1
while True:
    a,b,c = map(float,input().split())
    if b<=0:
        break
    dis = math.pi * a * b /63360
    mph = dis*3600/c
    print("Trip #%d: %.2f %.2f" %(case,dis,mph))
    case+=1