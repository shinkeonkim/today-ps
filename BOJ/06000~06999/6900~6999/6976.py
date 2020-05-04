for t in range(int(input())):
    a = int(input())
    a2 = a
    print(a)
    while a >99:
        k = a%10
        a //= 10
        k2 = a%10
        if a >= k:
            a-=k
        else:
            a-=k2
            a*=10
            a+=(k-k2)
        print(a)
    if a == 11 or a == 0:
        print("The number {} is divisible by 11.".format(a2))
    else:
        print("The number {} is not divisible by 11.".format(a2))
    print()