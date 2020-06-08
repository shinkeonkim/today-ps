def dfs(Y, X, count, num, l, answer):
    dx = [0,0,1,-1]
    dy = [1,-1,0,0]

    if(count == 6):
        answer.add(num)
    else:
        for i in range(4):
            nextX = X + dx[i]
            nextY = Y + dy[i]
            if nextX < 0 or nextY < 0 or nextX >=5 or nextY >=5:
                continue
            dfs(nextY,nextX, count +1, num*10 + l[nextY][nextX], l, answer)
ans = set()
L = [list(map(int,input().split())) for i in range(5)]
for i in range(5):
    for j in range(5):
        dfs(i,j,1,L[i][j],L, ans)
print(len(ans))
