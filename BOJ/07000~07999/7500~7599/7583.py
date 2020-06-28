while True:
    a = input()
    if a== '#':
        break

    L = a.split(" ")

    for i in L:
        if len(i) == 1:
            print(i,end=" ")
        else:
            print(i[0] + i[-2:0:-1] + i[-1],end=" ")
    print()