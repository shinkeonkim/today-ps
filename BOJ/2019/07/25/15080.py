a=list(map(int,input().split(" : ")))
b=list(map(int,input().split(" : ")))
T = (b[0]-a[0])*3600+(b[1]-a[1])*60+b[2]-a[2]
if T<0:
    T+=3600*24
print(T)