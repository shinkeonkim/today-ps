a,b,p = map(int,input().split())
ans = 0
for i in range(1,a+1):
    for j in range(1,b+1):
        if i*2 + j*2 >=p:
            ans += (a-i+1) * (b-j+1)
print(ans)