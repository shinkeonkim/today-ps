a, b, c = map(int, input().split())
ans = 0
for i in range(int(input())):
    s = 0
    for _ in range(3):
        x, y, z = map(int, input().split())
        s += a * x + b * y + c * z
    ans = max(ans, s)
print(ans)
