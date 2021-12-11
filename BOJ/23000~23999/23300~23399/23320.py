n, *s, x, y = map(int, open(0).read().split())
print(x * n // 100, sum(i >= y for i in s))
