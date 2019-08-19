while True:
    n=int(input())
    if not n:
        break
    
    L=[]
    for i in range(n):
        L.append(input())
    for i in range((n+1)//2):
        print(L[i])
        if (n+1)//2+i < n:
            print(L[(n+1)//2+i])