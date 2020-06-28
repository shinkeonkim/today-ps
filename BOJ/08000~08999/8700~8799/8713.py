def f(a,b,k,M):
    if a < 0:
        a = "({})".format(a)
    if b<0:
        b = "({})".format(b)
    if M <0:
        M = "({})".format(M)
    print("{}{}{}={}".format(a,k,b,M))
a,b = map(int,input().split())
L = [a+b,a-b,a*b]
if L.count(max(L)) > 1:
    print("NIE")
else:
    M = max(L)
    k = ["+","-","*"]
    f(a,b,k[L.index(M)],M)