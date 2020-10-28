for t in range(int(input())):
    s = 0
    for i in range(int(input())):
        s += max([0]+list(map(int,input().split())))
    print(s)