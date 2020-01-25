a,b=map(int,input().split())
chk = True
s = 0
while b>0:
    b-=1
    if chk:
        if s == 2*a:
            s-=1
            chk = False
        else:
            s+=1
    else:
        if s == 1:
            s+=1
            chk = True
        else:
            s-=1
print(s)
