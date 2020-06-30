c = 1
while True:
    try:
        n,b = input().split()
    except:
        break
    n = int(n)
    L = []
    
    for i in range(n):
        L.append([input()])
    d = {}
    for i in range(65,91):
        d[b[i-65]] = chr(i)

    for i in range(n):
        s = ""
        for j in L[i][0]:
            s+= d[j]
        L[i].append(s)
    L.sort(key = lambda t : t[1])

    print("year",c)
    for i in L:
        print(i[0])
    
    c+=1