n = int(input())
L = [int(input()) for i in range(n)]
cnt = 0
while True:
    M = max(L)
    if L.count(M) == 1 and L[0] == M:
        print(cnt)
        break
    cnt+=1
    L[L.index(M,1,len(L))]-=1
    L[0]+=1
