prev = ""
while 1:
    s = input()
    if s == "99999":
        break

    d = sum([*map(int, list(s[:2]))])

    cur = "left" if d % 2 else ("right" if d > 0 else prev)
    print(cur, s[2:])
    prev = cur
