n, k, x, y = map(int, input().split())
print(
    sum(
        [
            (x - a) ** 2 + (y - b) ** 2 > k * k
            for a, b in [[*map(int, input().split())] for _ in range(n)]
        ]
    )
)
