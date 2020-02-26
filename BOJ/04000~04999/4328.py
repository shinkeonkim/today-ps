while True:
    try:
        b,p,m = input().split()
    except:
        break
    else:
        b = int(b)
        m = int(m,b)
        p = str(int(p,b))
        k = int(p[0])
        for i in range(1,len(p)):
            k*=10
            k+=int(p[i])
            k%=m
        
        if k == 0:
            print(0)
        else:
            L = []
            while k>0:
                L.append(k%b)
                k//=b
            for i in L[::-1]:
                print(end=str(i))
            print()