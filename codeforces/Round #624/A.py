for t in range(int(input())):
    a,b=map(int,input().split())
    if a==b:
        print(0)
    elif a>b:
        k = a-b
        if k%2==0:
            print(1)
        else:
            print(2)
    else:
        k = b-a
        if k%2==0:
            print(2)
        else:
            print(1)