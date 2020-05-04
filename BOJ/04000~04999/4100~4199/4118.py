while True:
    n=int(input())
    if n==0:
        break
    
    S = set()
    for i in range(n):
        a=list(map(int,input().split()))
        S.update(a)
    
    if len(S) == 49:
        print("Yes")
    else:
        print("No")