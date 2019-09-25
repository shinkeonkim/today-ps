while True:
    n = input()
    if n == '0':
        break
    L = list(map(int,list(n)))
    S = len(L) + 1
    for i in L:
        S+=3
        if i == 0:
            S+=1
        if i == 1:
            S-=1
    print(S)


