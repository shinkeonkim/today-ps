for t in range(int(input())):
    n = int(input())
    L = list(map(int,input().split()))
    L.sort()
    d = dict()

    for i in L:
        d[i] = 1

    cnt = 0
    for i in range(n):
        for j in range(i+1,n):
            try:
                if d[L[i] - (L[j]-L[i])] == 1:
                    cnt+=1
            except:
                ""
            try:
                if d[L[j] + (L[j]-L[i])] == 1:
                    cnt+=1
            except:
                ""
    print(cnt // 2)
