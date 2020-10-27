s = input()
n = int(input())
D = list(map(int,input().split()))
ans = "".join([i[0] for i in s.upper().split()])
s+=ans
chk = True
for i in s:
    if i == " ":
        n-=1
    else:
        k = i.lower()
        k = ord(k) - ord('a')
        D[k]-=1
    
    if n < 0 or D[k] < 0:
        chk = False

if chk:
    print(ans)
else:
    print(-1)