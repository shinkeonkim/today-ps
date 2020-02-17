n,m=map(int,input().split())
L = [list(map(int,input().split())) for i in range(m)]
ans = 0
L.sort(key = lambda t:t[0],reverse = True)
for i in L[:-1]:
    ans += max(0,n-i[0])
print(ans)