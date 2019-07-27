a=int(input())
for i in range(a):
    b = list(set(list(input())))
    S = 0
    for i in b:
        S += ord(i)
    print(2015-S)
