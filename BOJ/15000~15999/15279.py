for t in range(int(input())):
    b,p = map(float,input().split())
    k = 60*b/p
    print("%.4f %.4f %.4f" % (k*(1-1/b),k,k*(1+1/b)))