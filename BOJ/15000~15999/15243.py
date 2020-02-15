def f(k,d):
    if k %2==1:
        return 0
    if k == 2:
        d[2] = 3
        return 3
    try:
        return d[k] % 1000000007
    except:
        Mod = 1000000007
        d[k] = f(k-2,d)*3
        for i in range(0,k-2):
            d[k] += f(i,d)*2
            d[k] %= Mod
        return d[k] % Mod

d = dict()
d[0] = 1
n = int(input())
print(f(n,d))