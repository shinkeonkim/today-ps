for t in range(int(input())):
    S = 0
    a,b=input().split()
    a=list(a)
    b=list(b)
    a.reverse()
    b.reverse()
    a=int("".join(a))
    b=int("".join(b))
    r = list(str(a+b))
    r.reverse()
    print(int("".join(r)))
