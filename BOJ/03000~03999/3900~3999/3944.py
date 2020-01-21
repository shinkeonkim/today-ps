for _ in range(int(input())):
    a,b=input().split()
    a=int(a)
    S = 0
    for i in b:
        S += int(i)
    print(S%(a-1))