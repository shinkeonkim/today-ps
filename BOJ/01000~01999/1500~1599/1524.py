T = int(input())
for i in range(T):
    input()
    a,b=map(int,input().split())
    A = sorted(list(map(int,input().split())))
    B = sorted(list(map(int,input().split())))
    
    while a > 0 and b>0:
        if A[0] < B[0]:
            A.pop(0)
            a-=1
        else:
            B.pop(0)
            b-=1

    if a>0:
        print("S")
    elif b>0:
        print("B")