while True:
    a,b=map(int,input().split())
    if a== b== 0:
        break
    ans = 0
    A,B = 1,2
    if a <= A <=b:
        ans+=1
    if a<= B <=b:
        ans+=1
    while A+B <= b:
        C = A+B
        if C >= a:
            ans+=1
        A,B = B,C
    print(ans)