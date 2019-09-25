for _ in range(int(input())):
    a = input()
    b = list(str((int(a))**2))
    b.reverse()
    b = "".join(b)
    a = list(a)
    a.reverse()
    a = "".join(a)
    if a == b[:len(a)]:
        print("YES")
    else:
        print("NO")