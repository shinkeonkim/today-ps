N,K=map(int,input().split())
L = [input().split() for i in range(N)]
for i in range(N):
    L[i][2],L[i][3] = int(L[i][2]),int(L[i][3])
L.sort(key = lambda t:t[3])
L.sort(key = lambda t:(-t[2]))
cnt = 0
i = 0
d = {}
while cnt <K:
    try:
        d[L[i][0]]+=1
    except:
        d[L[i][0]]=1
        cnt+=1
        print(L[i][1])
    i+=1