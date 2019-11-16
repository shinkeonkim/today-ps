while True:
    a = input()
    if a == "*":
        break

    L = a.lower().split()
    for i in range(1,len(L)):
        if L[i][0] != L[0][0]:
            print("N")
            break
    else:
        print("Y")