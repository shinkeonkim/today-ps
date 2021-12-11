n = int(input())
ans = 1, n
for i in range(1, 100):
    for j in range(1, 100):
        if i * j >= n and ans[0] + ans[1] > i + j:
            ans = i, j
print(*ans)
