n = input()
if int(n) == 0:
    print(1)
else:
    m = len(n) - 1
    tmp = int("1"*(len(n)))
    n = int(n)
    if n >= tmp:
        m += 1
    print(m)