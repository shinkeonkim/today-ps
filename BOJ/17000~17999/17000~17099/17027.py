n = int(input())
Q = [list(map(int,input().split())) for i in range(n)]
ans = 0
for i in range(3):
    L = [0,0,0]
    L[i] = 1
    cnt = 0
    for j in Q:
        L[j[0]-1],L[j[1]-1] = L[j[1]-1],L[j[0]-1]
        if L[j[2]-1] == 1:
            cnt+=1
    if cnt > ans:
        ans = cnt
print(ans)