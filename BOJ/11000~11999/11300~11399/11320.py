for i in range(int(input())):
    a,b=list(map(int,input().split()))
    n=a//b
    print(n*(n+1)//2 + n*(n-1)//2)