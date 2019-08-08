for _ in range(int(input())):
    n=input()
    a=list(map(int,input().split()))
    print((max(a)-min(a))*2)