from math import sqrt

n = int(input())
x,y= map(float,input().split())
for i in range(n-1):
    a,b =input().split()
    b= float(b)
    if len(a) == 1:
        if a == "N":
            y+=b
        if a == "S":
            y-=b
        if a == "W":
            x-=b
        if a == "E":
            x+=b
    else:
        b = sqrt(b*b/2)
        for i in a:
            if i == "N":
                y+=b
            if i == "S":
                y-=b
            if i == "W":
                x-=b
            if i == "E":
                x+=b
print(x,y)