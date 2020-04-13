def f(a,b,c,d):
    D = [a,b,c,d]
    if a*d == b*c and (d-a == c+b or d+a == c-b):
        return True
    return False
t = int(input())
for _ in range(t):
    n = int(input())
    L = []
    for i in range(1,n+1):
        if n%i == 0:
            L.append(i)
    
    chk = False
    ll = len(L)
    for i in range(0,ll):
        for j in range(i+1,ll):
            for k in range(j+1,ll):
                for l in range(k+1,ll):
                    ret = f(L[i],L[j],L[k],L[l])
                    if ret:
                        chk = True
                        break
                if chk:
                    break
            if chk:
                break
        if chk:
            break
    if chk:
        print("{} is nasty".format(n))
    else:
        print("{} is not nasty".format(n))