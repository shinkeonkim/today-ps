ans = 0
n,k = map(int,input().split())
L = [list(map(int,input().split())) for i in range(n)]
for x in range(1,101):
    for y in range(1,101):
        cnt = 0
        for x1,y1,x2,y2 in L:
            if x1<=x<=x2 and y1<=y<=y2:
                cnt+=1
        if cnt > k:
            ans+=1
print(ans)