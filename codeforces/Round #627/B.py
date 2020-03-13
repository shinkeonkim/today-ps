from sys import stdin
n = int(stdin.readline())
for i in range(n):
    k = int(stdin.readline())
    L = [[-1] for i in range(5001)]
    I = list(map(int,stdin.readline().split()))

    for i,j in enumerate(I):
        L[j].append(i)
    check = False
    for i in range(1,5001):
        if len(L[i]) > 2:
            if L[i][-1] - L[i][1] >=2:
                check = True
    if check:
        print("YES")
    else:
        print("NO")