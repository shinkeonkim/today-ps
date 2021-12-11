while True:
    a, b = map(int, input().split())
    if a + b == 0:
        break

    c = a - b

    if c == 1:
        print(0, 0)
    elif c % 2 == 0:
        print(c // 2, 0)
    else:
        print(c // 2 - 1, 1)
