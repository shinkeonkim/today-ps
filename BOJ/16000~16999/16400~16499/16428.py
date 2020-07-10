a,b=list(map(int,input().split()))
if b>0:
    print(a//b)
else:
    print(-(a//-b))
print(a%abs(b))