for t in range(int(input())):
    n=int(input())
    L = list(map(int,input().split()))
    L.sort()
    for i in range(0,len(L),2):
        if i+1 < len(L) and L[i] == L[i+1]:
            continue
        print("Case #{}: {}".format(t+1,L[i]))
        break
