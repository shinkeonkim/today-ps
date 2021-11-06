x, y = map(int, input().split())
r = int(input())
dx = [-1, 1, 1, -1]
dy = [1, 1, -1, -1]

for d in range(4):
    print(x + dx[d] * r, y + dy[d] * r)
