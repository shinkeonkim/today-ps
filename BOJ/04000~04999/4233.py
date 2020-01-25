import math

def f(A,P,cnt):
    if cnt == 1:
        return A%P
    elif cnt%2==0:
        a = f(A,P,cnt//2)
        return (a*a)%P
    else:
        a = f(A,P,cnt//2)
        return (a*a*A)%P

def g(P):
    for i in range(2,int(math.sqrt(P))+1):
        if P%i == 0:
            return True
    return False

while True:
    p,a = map(int,input().split())
    if a == 0 and p == 0:
        break

    k = f(a,p,p)%p
    r = g(p)

    # print(k,r)
    if r and k == a%p:
        print("yes")
    else:
        print("no")