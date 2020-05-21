for _ in range(int(input())):
    n = int(input())
    z = 10
    k = 5
    while(n > z):
        n += k
        n //= z
        n *= z

        z*=10
        k*=10
    print(n)