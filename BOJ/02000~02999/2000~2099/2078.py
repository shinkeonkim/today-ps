cnt = [0,0]
a,b=map(int,input().split())
while a+b > 2:
    if a ==1:
        cnt[1] += b-1
        b = 1
    elif b == 1:
        cnt[0] += a-1
        a = 1
    else:
        if a > b:
            a-=b
            cnt[0]+=1
        else:
            b-=a
            cnt[1]+=1
print(cnt[0], cnt[1])