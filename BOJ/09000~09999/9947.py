while True:
    a,b=input().split()
    if a == b == '#':
        break

    n = int(input())
    A,B=0,0
    for i in range(n):
        x,y = input().split()
        if x==y:
            A+=1
        else:
            B+=1
    print(a,A,b,B)