def f(a):
    return a[0].upper() + a[1:]
L = input().split()
L[0] = f(L[0])
L[1] = L[1].lower()
L[2] = f(L[2])

print(str(eval(" ".join(L))).lower())
