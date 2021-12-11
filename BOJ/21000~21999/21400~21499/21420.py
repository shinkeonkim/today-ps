(
    n,
    *s,
) = map(int, open(0).read().split())
print(min(s.count(0), s.count(1)))
