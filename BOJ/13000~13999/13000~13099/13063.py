while True:
    a,b,c=map(int,input().split())
    if a==0 and b==0 and c==0:
        break

    for i in range(a-(b+c)+1):
        A = b+i
        B = c+(a-(b+c)+1-i)
        if A > a//2:
            print(i)
            break
    else:
        print(-1)