import copy

T = int(input())
for t in range(T):
    L = list(input())
    W = int(input())
    Q = [input() for i in range(W)]

    d = {}
    for i in L:
        try:
            d[i] += 1
        except:
            d[i] = 1

    for i in Q:
        chk = True
        d2 = {}
        for j in i:
            try:
                d2[j]+=1
            except:
                d2[j] = 1
        
        for j in d2:
            try:
                if d[j] < d2[j]:
                    chk= False
            except:
                chk = False
        if chk:
            print("YES")
        else:
            print("NO")