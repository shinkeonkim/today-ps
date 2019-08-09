a,b=1,0
for i in range(int(input())):
    x,y,z=list(map(int,input().split()))
    a=a*y//x
    if z:
        b=1-b
print(b,a)