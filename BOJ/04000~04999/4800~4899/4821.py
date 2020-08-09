while True:
    n = int(input())
    if n == 0:
        break
    L = [0]*(n+1)
    s = input().split(",")
    for i in s:
        if "-" in i:
            l,r = map(int,i.split("-"))
            if l <= r:
                for j in range(l,min(r+1,n+1)):
                    L[j] = 1
        else:
            if int(i) <= n:
                L[int(i)] = 1
    print(sum(L))
        