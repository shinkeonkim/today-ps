tc = int(input())
for _ in range(tc):
    n = int(input())
    L = list(map(int,input().split()))
    d = {}
    for i in L:
        try:
            d[i] +=1
        except:
            d[i] = 1
    cnt = len(d.items())
    L2 = list(d.items())
    ans = 0
    for i in L2:
        current = min(i[1], cnt-1)
        ans = max(ans,current)
        current = min(i[1]-1, cnt)
        ans = max(ans,current)
    print(ans)