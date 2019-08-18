for i in range(int(input())):
    a=int(input())
    S=0
    for i in range(1,a+1):
        if a%i==0:
            S+=1
    print(a,S)