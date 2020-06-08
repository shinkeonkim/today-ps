import sys
input = sys.stdin.readline
n,p = map(int,input().split())
D = [[]*(p+1) for i in range(n+1)]
ans = 0
for i in range(n):
    a,b = map(int,input().split())
    if len(D[a]) == 0:
        D[a].append(b)
        ans +=1
    else:
        while len(D[a]) > 0 and D[a][-1] > b:
            ans+=1
            D[a].pop()
        while len(D[a]) > 0 and D[a][-1] == b:
            D[a].pop()
            ans -=1
        D[a].append(b)
        ans+=1
print(ans)