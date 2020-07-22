for _ in range(int(input())):
    b,a=map(int,input().split())
    n = b//a
    print(n*(n+1)//2 + n*(n-1)//2)