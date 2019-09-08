while True:
    a,b,c=input().split()
    a=int(a)
    c=int(c)
    if b=='W' and a==0 and c==0:
        break
    if b == 'W':
        if a-c <-200:
            print("Not allowed")
        else:
            print(a-c)
    else:
        if a+c <-200:
            print("Not allowed")
        else:
            print(a+c)
