a = sorted([*map(int, input().split())])
b = sorted([*map(int, input().split())])

print("YES" if a == b and a[0] * a[0] + a[1] * a[1] == a[2] * a[2] else "NO")
