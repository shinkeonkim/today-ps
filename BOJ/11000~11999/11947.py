def f(c):
    c = str(c)
    s = ""
    for i in c:
        s += str(9 - (ord(i) -48))
    return int(s)

for _ in range(int(input())):
    n = input()
    s = len(n)-1
    k = (10**s)//2
    ans = 0
    n = int(n)
    if n >= k:
        print(k*f(k))
    else:
        print(n*f(n))