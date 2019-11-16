n,k = map(int,input().split())
L = [input() for i in range(n)]
D = [dict() for i in range(k)]
for i in range(k):
    for j in range(n):
        if L[j][i] in D[i]:
            D[i][L[j][i]] +=1
        else:
            D[i][L[j][i]] = 1
for i in range(k):
    D[i] = list(D[i].items())
    D[i].sort(key = lambda t: (n - t[1],t[0]))

cnt = 0
for i in range(k):
    print(D[i][0][0],end="")
    cnt += n - D[i][0][1]
print()
print(cnt)