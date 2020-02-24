for t in range(int(input())):
    D = dict()
    cnt = dict()
    n,m = map(int,input().split())
    s=input()
    L = list(map(int,input().split()))
    
    L.sort()
    if L[-1] != n:
        L.append(n)
    for i in range(L[0]):
        try:
            cnt[ord(s[i])-ord('a')]+=1
        except:
            cnt[ord(s[i])-ord('a')]=1
    
    for i in cnt:
        try:
            D[i] += cnt[i]
        except:
            D[i] = cnt[i]
    # print(cnt)
    last = L[0]
    
    for j in range(1,len(L)):
        if last < L[j]:
            for i in range(last,L[j]):
                try:
                    cnt[ord(s[i])-ord('a')] +=1
                except:
                    cnt[ord(s[i])-ord('a')] = 1
        
        for i in cnt:
            try:
                D[i] += cnt[i]
            except:
                D[i] = cnt[i]
        last = L[j]
    for i in range(26):
        try:
            print(D[i],end=" ")
        except:
            print(0,end=" ")
    print()