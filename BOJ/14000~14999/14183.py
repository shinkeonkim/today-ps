while True:
    a,b =  map(int,input().split())
    if a == b == 0:
        break
    cnt = 0
    L = list(map(int,input().split()))
    for i in range(b):
        L2 = list(map(int,input().split()))
        for j in range(a):
            if L[j] < L2[j]:
                break
        else:
            cnt+=1
    print(cnt)