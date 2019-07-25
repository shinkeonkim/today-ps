for i in range(int(input())):
    d,n,s,p=list(map(int,input().split()))
    T = d + n*p
    s = s*n
    if T==s:
        print("does not matter")
    elif T > s:
        print("do not parallelize")
    else:
        print("parallelize")