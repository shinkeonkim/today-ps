n,s = map(int,input().split())
M = max(list(map(int,input().split())))
K = s*M
ans = (s*M)//1000
if (s*M)%1000 >0:
    ans+=1
print(ans)