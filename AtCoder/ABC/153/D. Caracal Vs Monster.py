def f(x):
    if x == 1:
        return 1
    else:
        k = f(x//2)
        return 1+2*k
H = int(input())
print(f(H))