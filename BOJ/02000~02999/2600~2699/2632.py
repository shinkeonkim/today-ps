T = int(input())
N,M = map(int,input().split())
L1 = [int(input()) for i in range(N)]
L2 = [int(input()) for i in range(M)]
S1 = sum(L1)
S2 = sum(L2)

d1 = dict()
d2 = dict()
D1 = [0,L1[0]]
D2 = [0,L2[0]]

for i in range(1,N):
    D1.append(D1[-1]+L1[i])

for i in range(1,M):
    D2.append(D2[-1]+L2[i])

for i in range(len(D1)):
    for j in range(i+1,len(D1)):
        try:
            d1[D1[j]-D1[i]] +=1
        except:
            d1[D1[j]-D1[i]] = 1

        if S1 - (D1[j]-D1[i]) > 0 and (i!=0 and j != len(D1)-1):
            try:
                d1[S1 - (D1[j]-D1[i])] +=1
            except:
                d1[S1 - (D1[j]-D1[i])] = 1

for i in range(len(D2)):
    for j in range(i+1,len(D2)):
        try:
            d2[D2[j]-D2[i]] +=1
        except:
            d2[D2[j]-D2[i]] = 1

        if S2 - (D2[j]-D2[i]) > 0 and (i!=0 and j != len(D2)-1):
            try:
                d2[S2 - (D2[j]-D2[i])] +=1
            except:
                d2[S2 - (D2[j]-D2[i])] = 1

d1[0] = 1
d2[0] = 1

ret = sorted(list(d1.items()),key = lambda t:t[0])
cnt = 0

for i in ret:
    try:
        cnt += d2[T-i[0]] * i[1]
    except:
        continue
print(cnt) 