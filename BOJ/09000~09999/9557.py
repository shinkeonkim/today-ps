for t in range(int(input())):
    input()
    L = input().split()
    C = -1
    for i in range(len(L)):
        for k in L[i]:
            if ord('a') <= ord(k) <= ord('z'):
                C = i
                break
    if C == -1:
        for i in L:
            print(i,end=" ")
    else:
        for i in range(C+1,len(L)):
            print(L[i],end=" ")
        print(L[C],end=" ")
        for i in range(0,C):
            print(L[i],end=" ")
    print()