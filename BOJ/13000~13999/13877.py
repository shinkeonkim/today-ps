for case in range(int(input())):
    a,b = input().split()
    k = False
    try:
        print(a,int(b,8),int(b),int(b,16))
    except:
        print(a,0,int(b),int(b,16))