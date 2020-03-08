while True:
    try:
        N,M = map(int,input().split())
        L = [list(map(int,input().split())) for i in range(N)]
    except:
        break
    ans = 100
    pos = [0,0]
    ret = set()
    for i in range(N-M+1):
        for j in range(N-M+1):
            S = set()
            for ii in range(i,i+M):
                for jj in range(j,j+M):
                    S.add(L[ii][jj])

            if ans > len(S):
                ans = len(S)
                pos = [i,j]
                ret = S
            elif ans == len(S):
                r1 = sorted(list(ret))
                r2 = sorted(list(S))
                for k in range(ans):
                    if r1[k] > r2[k]:
                        break
                    elif r1[k] < r2[k]:
                        pos = [i,j]
                        ret = S
                        break
    
    print(pos[0]+1,pos[1]+1)