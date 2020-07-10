for _ in range(int(input())):
    s = input()
    n = int(input())
    try:
        L = list(map(int,input()[1:-1].split(",")))
    except:
        L = []
    
    front = 0

    for i in s:
        if i == "R":
            front = -front -1
        elif i == "D":
            if len(L) == 0:
                print("error")
                break
            else:
                L.pop(front)
    else:
        print(end = "[")
        if front == 0:
            for j in range(len(L)):
                if j != len(L)-1:
                    print(L[j], end = ",")
                else:
                    print(L[j], end = "")
        else:
            for j in range(len(L)-1, -1,-1):
                if j != 0:
                    print(L[j], end = ",")
                else:
                    print(L[j], end = "")
        print("]")