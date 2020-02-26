    n,m = map(int,input().split())

    D = [0]*(n+1)
    L = []
    cnt = [0]*(n+1)

    for i in range(n):
        L.append(sorted(list(map(int,input().split())),reverse = True))

    for i in range(m):
        s = [0]+[j[i] for j in L]
        mx = max(s)
        for k in range(len(s)):
            if s[k] == mx:
                cnt[k]+=1

    mx = max(cnt)
    for i,j in enumerate(cnt):
        if j == mx:
            print(i,end=" ")
