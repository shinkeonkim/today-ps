while True:
    k,e=0,0
    try:
        e,k = map(int,input().split())
    except:
        break
    s=1
    while s<e:
        L = [s,s+1,e-1,e]
        if k in L:
            for i in L:
                if i !=k:
                    print(i, end = " ")
            print()
            break
        s+=2
        e-=2