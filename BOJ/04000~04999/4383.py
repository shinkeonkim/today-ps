while True:
    try:
        L = list(map(int,input().split()))
    except:
        break
    n,L = L[0],L[1:]
    s = set()
    if n ==1:
        print("Jolly")
        continue
    for i in range(n-1):
        k = abs(L[i]-L[i+1])
        if 1<=k<=n-1:
            s.add(k)
    if len(s) == n-1:
        print("Jolly")
    else:
        print("Not jolly")
