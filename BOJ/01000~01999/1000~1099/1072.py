import sys
X,Y = map(int,input().split())
Z = (Y*100//X)
s,e = 0,100000000000
ans = e
# if X == Y:
#     print(-1)
#     sys.exit()

while s<=e:
    mid = (s+e)//2
    Z2 = ((Y+mid)*100//(X+mid))
    # print(s,e,Z,Z2)
    if Z2 > Z:
        if ans > mid:
            ans = mid
        e = mid-1
    else:
        s = mid+1
if ans ==  100000000000:
    print(-1)
else:
    print(ans)