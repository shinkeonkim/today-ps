a=list(map(int,input().split()))
a.sort()
if 2*a[1] == a[0]+a[2]:
    print(a[2] + (a[2]-a[1]))
elif (a[2]-a[1])*2 == (a[1]-a[0]):
    print(a[0] + (a[2]-a[1]))
elif (a[2]-a[1]) == (a[1]-a[0])*2:
    print(a[1] + (a[1]-a[0]))