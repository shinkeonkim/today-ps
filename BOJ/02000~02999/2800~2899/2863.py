def gcd(x,y):
    return gcd(y,x%y) if y else x

def lcm(x,y):
    return x*y//gcd(x,y)

Mx_a = 1
Mx_b = 10000000
P = 0
a,b=map(int,input().split())
c,d=map(int,input().split())

for i in range(4):
    M_b =  lcm(c,d)
    A = a*(M_b//c)
    B = b*(M_b//d)
    M_a = A+B

    if M_a * Mx_b > M_b * Mx_a:
        P = i
        Mx_a = M_a
        Mx_b = M_b
    
    a,b,c,d = c,a,d,b

print(P)    