while True:
    a,b = map(int,input().split())
    if a== b == 0:
        break
    k = 1

    if b >= a-b:
        k1 = b
        k2 = a-b
    else:
        k1 = a-b
        k2 = b
    
    for i in range(k1+1,a+1):
        k*=i
    for i in range(2,k2+1):
        k//=i
    print(k)