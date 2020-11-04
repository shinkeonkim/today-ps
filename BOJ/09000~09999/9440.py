while True:
    L = list(map(int,input().split()))
    if len(L) == 1:
        break
    L = sorted(L[1:])
    L2 = []
    cnt = 0
    for i in L:
        if i == 0:
            cnt+=1
        else:
            L2.append(i)
    L = L2
    a,b = [L[0]],[L[1]]
    
    while cnt > 0:
        if len(a) < len(b):
            a = a[0:1] + [0] + a[1:]
        elif len(b) < len(a):
            b = b[0:1] + [0] + b[1:]
        else:
            if int("".join(map(str,a)))<=int("".join(map(str,b))):
                a = a[0:1] + [0] + a[1:]
            else:
                b = b[0:1] + [0] + b[1:]
        cnt-=1
    
    for i in L[2:]:
        if int("".join(map(str,a))) <= int("".join(map(str,b))):
            a.append(i)
        else:
            b.append(i)
    
    a = int("".join(map(str,a)))
    b = int("".join(map(str,b)))
    print(a+b)