k = int(input())
Z = 2
cnt = 1
MX = 2**64
while(Z <= MX):
    c = Z
    c-=1
    for i in range(64-cnt):
        c*=2
    if c == k:
        print(cnt)
        break
    Z*=2
    cnt+=1