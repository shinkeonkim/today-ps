def f(k):
    if k ==0:
        return 1
    elif k == 1:
        return 2
    elif k % 2==0:
        A = f(k//2)
        return (A*A)%10
    else:
        A = f(k//2)
        return (A*A*2) %10

n = int(input())
print(f(n))