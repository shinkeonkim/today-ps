for i in range(int(input())):
    L = list(map(bin,list(map(int,input().split(":")))))
    for j in range(3):
        L[j] = "0"*max(0,8-len(L[j]))+L[j][2:]
    
    for k in range(6):
        for j in range(3):
            print(end=L[j][k])

    print(end= " ")
    
    for j in range(3):
        for k in range(6):
            print(end=L[j][k])
    print()