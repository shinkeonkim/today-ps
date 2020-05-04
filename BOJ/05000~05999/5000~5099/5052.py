for t in range(int(input())):
    d= dict()
    n = int(input())
    L = []
    for i in range(n):
        s = input()
        L.append(s)
        k = ""
        for i in range(len(s)):
            k+=s[i]
            try:
                d[k] +=1
            except:
                d[k] = 1
    for i in L:
        if d[i] > 1:
            print("NO")
            break
    else:
        print("YES")