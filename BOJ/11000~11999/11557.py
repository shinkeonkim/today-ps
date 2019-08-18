for i in range(int(input())):
    N=int(input())
    L = []
    for j in range(N):
        a=input().split()
        a[1]=int(a[1])
        L.append(a)
    L.sort(reverse = True,key = lambda t: t[1])
    print(L[0][0])