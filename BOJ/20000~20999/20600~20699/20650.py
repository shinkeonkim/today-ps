l = sorted([*map(int, input().split())])
print(l[0], l[1], l[2] if l[0] + l[1] != l[2] else l[3])
