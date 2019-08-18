a,b=list(map(int,input().split()))
cnt = 0
while (not a == b) and b > 0:
    if b %10 ==1:
        b//=10
        cnt+=1
    elif b % 2 ==0:
        b//=2
        cnt+=1
    else:
        print(-1)
        break
else:
    if b <= 0:
        print(-1) 
    else:
        print(cnt+1)
