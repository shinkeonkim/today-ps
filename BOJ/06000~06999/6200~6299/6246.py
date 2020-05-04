N,Q = map(int,input().split())
L = []
for i in range(Q):
    L.append(list(map(int,input().split())))

cnt = 0
for i in range(1,N+1):
    for j in L:
        if (i-j[0]) % j[1] ==0 and i-j[0] >=0:
            break
    else:
        cnt+=1
print(cnt)