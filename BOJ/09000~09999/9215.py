def gcd(a, b):
    return gcd(b, a % b) if b > 0 else a


def lcm(a, b):
    return a * b // gcd(a, b)


def cut(a, b):
    g = gcd(a, b)
    return a // g, b // g


def to_num(s):
    if "," in s:
        x, a = s.split(",")
        a, b = map(int, a.split("/"))
        a = int(x) * b + a
    elif "/" in s:
        a, b = map(int, s.split("/"))
    else:
        a = int(s)
        b = 1

    return cut(a, b)


tc = 1
while 1:
    n = int(input())
    if n == 0:
        break

    s = input()
    t, b = to_num(s)

    for i in range(n - 1):
        s = input()
        tt, bb = to_num(s)
        t, b = cut(t * bb + tt * b, b * bb)

    if t % b == 0:
        print(f"Test {tc}: {t//b}")
    elif t > b:
        print(f"Test {tc}: {t//b},{t%b}/{b}")
    else:
        print(f"Test {tc}: {t}/{b}")
    tc += 1
