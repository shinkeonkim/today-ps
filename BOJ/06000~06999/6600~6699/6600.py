from math import sqrt

def dis(l):
    return sqrt(((l[0] - l[2])**2) + ((l[1] -l[3])**2))

def getR(a,b,c):
    s = (a + b + c)/2
    R = (a*b*c)/(4*((s*(s-a)*(s-b)*(s-c))**(1/2)))
    return R
while True:
    try:
        L = list(map(float,input().split()))
    except:
        break
    a,b,c = sorted([dis(L[0:4]), dis(L[2:]), dis(L[4:]+L[:2])])
    print("%.2f" % (getR(a,b,c)*2*3.141592653589793))
    
