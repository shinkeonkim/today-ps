t = 0
for _ in range(int(input())):
    a,b=input().split()
    b = int(b)
    k = int(a.split(":")[0])*60 + int(a.split(":")[1])
    for i in range(k,k+b):
        if 420<=i<1140:
            t+=10
        else:
            t+=5
print(t)