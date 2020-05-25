N = int(input())
L = [list(map(int,input().split())) for i in range(N)]
S = 0
for i in L:
    for j in i:
        S+=j

s = 0
e = 20000000
ans = 20000000000000
while s<=e:
    mid = (s+e)//2
    cnt = 0
    for i in L:
        for j in i:
            cnt += min(j,mid)
    
    if cnt >= (S+1)//2:
        if ans > mid:
            ans = mid
        e = mid - 1
    else:
        s = mid + 1
print(ans)