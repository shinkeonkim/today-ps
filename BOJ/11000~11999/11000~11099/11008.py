for i in range(int(input())):
    cnt = 0
    s,p = input().split()
    k,n = 0,len(s)
    while k < n:
        if k+len(p)-1 < n:
            for i in range(k,k+len(p)):
                if s[i] != p[i-k]:
                    k+=1
                    break
            else:
                k+=len(p)
        else:
            k+=1
        cnt+=1
    print(cnt)