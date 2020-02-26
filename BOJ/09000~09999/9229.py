for t in range(int(input())):
    L = list(map(int,input().split()))
    n,L = L[0],L[1:]
    print("Case {}: {}".format(t+1,n-1),end = " ")
    for i in range(len(L)-1):
        print((n-i)*L[i],end=" ")
    print()
