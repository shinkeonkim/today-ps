c = [[0,0] for i in range(3)]
N,K = map(int,input().split())
for i in range(N):
    a,b = map(int,input().split())
    c[(b-1)//2][a]+=1
ans = 0
z = sum(c[0])

if z % K != 0:
    ans += 1
ans += z//K

for i in range(1,3):
    for j in range(2):
        if c[i][j] == 0:
            continue
        if c[i][j] % K != 0:
            ans += 1
        ans += c[i][j] // K
print(ans)