T = int(input())
N = int(input())
L1 = list(map(int,input().split()))
M = int(input())
L2 = list(map(int,input().split()))

d1 = dict()
d2 = dict()
D1 = [0,L1[0]]
D2 = [0,L2[0]]

for i in range(1,N):
    D1.append(D1[-1]+L1[i])

for i in range(1,M):
    D2.append(D2[-1]+L2[i])

for i in range(N+1):
    for j in range(i+1,N+1):
        try:
            d1[D1[j]-D1[i]] +=1
        except:
            d1[D1[j]-D1[i]] = 1

for i in range(M+1):
    for j in range(i+1,M+1):
        try:
            d2[D2[j]-D2[i]] +=1
        except:
            d2[D2[j]-D2[i]] = 1

ret = sorted(list(d1.items()),key = lambda t:t[0])
cnt = 0
for i in ret:
    try:
        cnt += d2[T-i[0]] * i[1]
    except:
        continue
print(cnt) 