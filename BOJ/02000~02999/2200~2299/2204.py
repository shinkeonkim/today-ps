while True:
    n = int(input())
    if n == 0:
        break
    L = []
    for i in range(n):
        a = input()
        L.append([a,a.upper()])
    L.sort(key = lambda t : t[1])
    print(L[0][0])