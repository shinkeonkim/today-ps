for i in range(int(input())):
    a ,b = map(int,input().split())
    print("y = {}x + {}".format(a, b))
    for y in range(a*10+b, -1,-1):
        for x in range(0, 11):
            if x == 0:
                print(end = "*")
            elif y == 0:
                print(end = "*")
            elif y == a * x + b:
                print(end  ="*")
            else:
                print(end = " ")
        print()