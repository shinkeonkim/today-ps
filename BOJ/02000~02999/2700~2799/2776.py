for t in range(int(input())):
    d = {}
    input()
    for i in list(map(int,input().split())):
        d[i] = 1
    input()
    for i in list(map(int,input().split())):
        try:
            d[i] +=1
        except:
            print(0)
        else:
            print(1)