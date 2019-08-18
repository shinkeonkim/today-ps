while True:
    a,b,c=list(map(int,input().split()))
    if (a | b) | c == 0:
        break
    T = ((a*3600)*(c-b)*10)//(b*c)
    k=False
    if T%10 >4:
        k = True
    T//=10
    if k:
        T+=1
    print("%d:%02d:%02d" % (T//3600,(T%3600)//60,T%60))