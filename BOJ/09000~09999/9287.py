def f(t):
    print("Case {}: Fallen".format(t))


t = int(input())
for _ in range(1,t+1):
    n = int(input())
    L = [input() for i in range(n)]

    for i in range(n):
        if L[i] == "000":
            f(_)
            break
        if L[i] == "100" or L[i] == "001":
            f(_)
            break
    else:
        print("Case {}: Standing".format(_))
    