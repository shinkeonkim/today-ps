while True:
    n = int(input())
    if n == 0:
        break
    L = []
    for i in range(n):
        l = []
        a,b=input().split()
        l.append(a)
        k = list(map(int,b.split(".")))
        l.extend(k)
        L.append(l)
    L.sort(key = lambda t: -(t[1]*100+t[2]))
    for i in range(n):
        if L[0][1]*100 + L[0][2] == L[i][1]*100 + L[i][2]:
            print(L[i][0],end=" ")
        else:
            break
    print()