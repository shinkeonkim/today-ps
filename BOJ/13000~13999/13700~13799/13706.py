n = int(input())
s,e = 0,n
ans = 0
while s <= e:
    mid = (s+e)//2

    if mid*mid <= n:
        if mid >ans:
            ans = mid
        s = mid+1
    else:
        e = mid-1
print(ans)