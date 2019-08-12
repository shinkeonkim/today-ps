for t in range(int(input())):
    d=dict()
    V=int(input())
    for i in range(V):
        a = int(input())
        if a in d:
            d[a]=+1
        else:
            d[a]=1
    L=list(d.items())
    M=max(list(d.values()))
    L.sort(key=lambda t:t[0],reverse=True)
    ans=1
    for i in range(len(L)):
        if L[i][1] == M:
            ans=L[i][0]
    print(ans)