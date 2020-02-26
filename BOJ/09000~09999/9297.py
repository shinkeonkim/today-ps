for t in range(int(input())):
    a,b=map(int,input().split())
    print(end="Case {}: ".format(t+1))
    if a%b==0:
        print(a//b)
    else:
        if a//b !=0:
            print(a//b,"{}/{}".format(a%b,b))
        else:
            print("{}/{}".format(a%b,b))