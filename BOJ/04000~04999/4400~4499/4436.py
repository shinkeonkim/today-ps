while True:
    try:
        a=int(input())
    except:
        break
    d = {}
    for i in range(10):
        d[i] =0
    k = 1
    while sum(list(d.values())) != 10:
        a2 = a*k
        while a2>0:
            d[a2%10]=1
            a2//=10
        k+=1
    print(k-1)