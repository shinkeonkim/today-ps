for _ in range(int(input())):
    J,N = map(int,input().split())
    L = []
    for i in range(N):
        a,b=map(int,input().split())
        L.append(a*b)
    L.sort(reverse=True)
    cnt = 0
    for i in L:
        if J > 0:
            J-= i
            cnt+=1
    print(cnt)