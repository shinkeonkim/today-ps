for i in range(int(input())):
    A,n=list(map(int,input().split()))
    k=[]
    while(A>0):
        k.append(A%n)
        A//=n
    for i in range(len(k)):
        if k[i] != k[len(k)-i-1]:
            print(0)
            break
    else:
        print(1)
