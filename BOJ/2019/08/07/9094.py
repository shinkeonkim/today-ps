for _ in range(int(input())):
    n,m=list(map(int,input().split()))
    cnt = 0
    for a in range(1,n):
        for b in range(a+1,n):
            if (a*a+b*b+m) % (a*b) == 0:
                cnt+=1
    print(cnt)