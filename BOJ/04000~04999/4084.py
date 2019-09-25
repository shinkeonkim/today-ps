while True:
    a,b,c,d = map(int,input().split())
    if a == b == c == d == 0:
        break
    else:
        cnt = 0
        while True:
            if a == b == c == d:
                break
            a,b,c,d = abs(a-b),abs(b-c),abs(c-d),abs(d-a)
            cnt+=1
        print(cnt)