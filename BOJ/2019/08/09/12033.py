for t in range(int(input())):
    n=int(input())
    L=list(map(int,input().split()))
    L.sort()
    print("Case #{}: ".format(t+1),end="")
    for i in L:
        print(i,end=" ")
        if i*4//3 in L:
            L.remove(i*4//3)
    print()