while True:
    a,b,x,y = map(int,input().split())
    if a+b+x+y == 0:
        break

    for i in range(1,101):
        a0 = a * i / 100
        b0 = b * i / 100

        if not ((a0 <= x and b0 <= y) or (a0 <= y and b0 <= x)):
            print("{}%".format(i-1))
            break
    else:
        print("100%")

