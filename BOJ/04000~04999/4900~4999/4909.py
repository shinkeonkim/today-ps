while True:
    L = list(map(int,input().split()))
    if sum(L) == 0:
        break
    L.sort()
    L = L[1:-1]
    if sum(L) % len(L) == 0:
        print(sum(L)//len(L))
    else:
        print(sum(L)/len(L))