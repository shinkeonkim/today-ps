n, b = map(int, input().split())
l, ans = [], 0
for i in range(n):
    l.append([*map(int, input().split())])

l.sort(key=lambda t: t[0] + t[1])

for i in range(n):
    bb = b - (l[i][0] / 2 + l[i][1])

    cnt = 1 if bb >= 0 else 0

    for j in range(n):
        if j == i:
            continue
        if b < 0:
            break

        bb -= sum(l[j])
        if bb >= 0:
            cnt += 1
    ans = max(ans, cnt)

print(ans)
