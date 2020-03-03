import sys
answer = 0
ret = []
for t in range(int(sys.stdin.readline())):
    n = int(sys.stdin.readline())
    L = list(map(int,sys.stdin.readline().split()))
    Mx = max(L)
    s,e = L.index(Mx)+1,L.index(Mx)+1
    L = [0] + L
    D = [0] * (n+1)
    D[1] = L[1]
    for i in range(2,n+1):
        D[i] = D[i-1]+L[i]
    
    for i in range(1,n+1):
        for j in range(i,n+1):
            k = D[j]-D[i-1]
            if k > Mx:
                Mx = k
                s = i
                e = j
            elif k == Mx:
                if e-s > j-i:
                    e = j
                    s = i
    answer += Mx
    ret.append([s,e])
print(answer)
for i in ret:
    print(i[0],i[1])