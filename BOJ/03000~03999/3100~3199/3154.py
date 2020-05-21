def f(a, b):
    L = [[3,1],[0,0],[0,1],[0,2],[1,0],[1,1],[1,2],[2,0],[2,1],[2,2]]
    return abs(L[a][0] - L[b][0]) + abs(L[a][1] - L[b][1])

M = list(map(int,input().split(":")))
C = 111111
ans = ""
for i in range(-3,10):
    for j in range(-3,10):
        h = (M[0] + 24*i)
        m = (M[1] + 60*j)
        
        if h > 99 or m > 99 or h < 0 or m < 0:
            continue
        s = list(map(int,list("%02d%02d" % (h,m))))
        cnt = 0
        for k in range(3):
            cnt += f(s[k+1],s[k])
        k = "%02d:%02d" % (h,m)
        if cnt < C:
            C = cnt
            ans = "%02d:%02d" % (h,m)

        if cnt == C and k < ans:
            ans = k            
print(ans)
