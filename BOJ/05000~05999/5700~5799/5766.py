while True:
    n,m = map(int,input().split())
    if n + m == 0:
        break
    L = []
    for i in range(n):
        L.append(list(map(int,input().split())))
    d = {}
    for i in L:
        for j in i:
            try:
                d[j]+=1
            except:
                d[j] = 1
    
    d = list(d.items())
    d.sort(key = lambda t : -t[1])
    ret = [i[0] for i in d if i[1] == d[1][1]]
    
    print(" ".join(list(map(str, sorted(ret)))))