for t in range(int(input())):
    L = []

    for i in range(int(input())):
        L.append(input())
    
    k = int(input())
    print("Scenario #{}:".format(t+1))
    for i in range(k):
        M = list(map(int,input().split()))[1:]
        for i in M:
            print(L[i],end="")
        print()
    print()