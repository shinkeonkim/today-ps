a,d=map(int,input().split())
s = 0
c = 0
while s <= d:
    s += a
    c+=1
    a*=2
print(c-1)