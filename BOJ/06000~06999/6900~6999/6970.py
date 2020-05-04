for _ in range(int(input())):
    a = int(input())
    b = int(input())
    c = int(input())
    A = [input() for i in range(a)]
    B = [input() for i in range(b)]
    C = [input() for i in range(c)]

    for i in A:
        for j in B:
            for k in C:
                print(i,j,k+".")
    print()