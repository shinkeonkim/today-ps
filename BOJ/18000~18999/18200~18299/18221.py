N = int(input())
s = [-1,-1]
p = [-1,-1]
L = []
for i in range(N):
    L.append(list(map(int,input().split())))

for i in range(N):
    for j in range(N):
        if L[i][j] == 2:
            s[0] = i
            s[1] = j
        if L[i][j] == 5:
            p[0] = i
            p[1] = j
cnt = 0
for i in range(min(s[0],p[0]),max(s[0],p[0])+1):
    for j in range(min(s[1],p[1]),max(s[1],p[1])+1):
        if L[i][j] == 1:
            cnt+=1

if abs(s[0]-p[0])**2 + abs(s[1]-p[1])**2 >=25 and cnt >=3:
    print(1)
else:
    print(0)