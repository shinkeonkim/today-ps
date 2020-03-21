while True:
    n = int(input())
    if n == 0:
        break

    L = list(map(int,input().split()))
    A = sum(L)

    cnt = 0
    for i in L:
        if i*n <= A:
            cnt+=1
    print(cnt)