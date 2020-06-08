n = int(input())
L = list(map(int,input().split()))
ans = 1
c = L[0]
cnt = 1
for i in L[1:]:
    if c <= i:
        cnt+=1
        c = i
        ans = max(ans,cnt)
    else:
        cnt = 1
        c = i
c = L[0]
cnt = 1
for i in L[1:]:
    if c >= i:
        cnt+=1
        c = i
        ans = max(ans,cnt)
    else:
        cnt = 1
        c = i
print(ans)