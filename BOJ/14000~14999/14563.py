def f(a):
    s = 0
    for i in range(1,a):
        if a%i == 0:
            s+=i
    return "Perfect" if s==a else ("Abundant" if s > a else "Deficient")

T = int(input())
L = list(map(int,input().split()))

for i in L:
    print(f(i))