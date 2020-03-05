while True:
    a = int(input())
    if a == 0:
        break

    while a > 9:
        k,a = a,0
        while k > 0:
            a+=k%10
            k//=10
    print(a)