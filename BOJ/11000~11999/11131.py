for t in range(int(input())):
    n = input()
    S = sum(list(map(int,input().split())))
    if S == 0:
        print("Equilibrium")
    elif S > 0:
        print("Right")
    else:
        print("Left")