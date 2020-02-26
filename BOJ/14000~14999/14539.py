for t in range(int(input())):
    row,col,X,Y = map(int,input().split())
    print("Case #{}:".format(t+1))
    print("+"+("-"*X+"+")*col)
    for y in range(row):
        for yy in range(Y):
            print("|"+("*"*X+"|")*col)
        print("+"+("-"*X+"+")*col)