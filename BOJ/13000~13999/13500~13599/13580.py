l = sorted([*map(int, input().split())])
print(
    "S"
    if l[0] == l[1] or l[1] == l[2] or sum(l[:2]) == l[2] or l[0] == sum(l[1:])
    else "N"
)
