from math import *
i = 0
while True:
    i += 1
    a, b, c = list(map(int, input().split()))
    if a == 0 and b == 0 and c == 0:
        break
    print("Triangle #{}".format(i))

    if a == -1:
        if c**2-b**2 <= 0:
            print("Impossible.")
        else:
            print("a = %.3f" % sqrt(c**2-b**2))
    if b == -1:
        if c**2-a**2 <= 0:
            print("Impossible.")
        else:
            print("b = %.3f" % sqrt(c**2-a**2))
    if c == -1:
        print("c = %.3f" % sqrt(a**2+b**2))
    print()