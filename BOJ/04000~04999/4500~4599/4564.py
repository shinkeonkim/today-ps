while True:
    a=int(input())
    if a==0:
        break
    print(a,end=" ")
    while a>9:
        S=1
        while(a>0):
            S*=a%10
            a//=10
        print(S,end=" ")
        a=S
    print()
