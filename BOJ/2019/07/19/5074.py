while True:
    a,b=input().split()
    S_L=list(map(int,a.split(":")))
    D_L=list(map(int,b.split(":")))

    if sum(S_L+D_L) == 0:
        break

    S = S_L[0]*60 +S_L[1]
    D = D_L[0]*60 +D_L[1]

    T= S+D
    check = 0

    check = T // 1440

    print("%02d:%02d" %((T//60)%24,T%60),end="")

    if check > 0:
        print(" +{}".format(check),end="")
    print()