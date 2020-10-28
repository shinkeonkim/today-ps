from decimal import Decimal as D
from decimal import getcontext

# def pi():
#     getcontext().prec+=2
#     three = D('3')
#     lasts, t, s, n, na, d, da = D('0'), three, D('3'), D('1'), D('0'), D('0'), D('24')
#     while s != lasts:
#         lasts = s
#         n, na = n+na, na+D('8')
#         d, da = d+da, da+D('32')
#         t = (t * n) / d
#         s += t
#     getcontext().prec-= 2
#     return +s

def cos(x):
    getcontext().prec+=2
    i, lasts, s, fact, num, sign = D('0'), D('0'), D('1'), D('1'), D('1'), D('1')
    while s != lasts:
        lasts = s
        i += D('2')
        fact *= i * (i-D('1'))
        num *= x * x
        sign *= D('-1')
        s += num / fact * sign
    getcontext().prec-=2
    return +s

def sin(x):
    getcontext().prec+=2
    i, lasts, s, fact, num, sign = D('1'), D('0'), x, D('1'), x, D('1')
    while s != lasts:
        lasts = s
        i += D('2')
        fact *= i * (i-D('1'))
        num *= x * x
        sign *= D('-1')
        s += num / fact * sign
    getcontext().prec-=2
    return +s


if __name__ == "__main__":
    getcontext().prec=500
    p = D('3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679821480865132823066470938446095505822317253594081284811174502841027019385211055596446229489549303819644288109756659334461284756482337867831652712019091456485669234603486104543266482133936072602491412737245870066063155881748815209209628292540917153643678925903600113305305488204665213841469519415116094330572703657595919530921861173819326117931051185480744623799627495673518857527248912279381830119491298336733624406566430860213949463952247371907021798609437027705392171762')
    a,b,c = map(D,input().split())
    ans = D('0')
    for i in range(500):
        z = D(str(ans % (D('2') * p)))
        f_prime_x = D(str(a+b*D(cos(z))))
        f_x = D(str(a*ans + b*D(sin(z)) -c))
        ans = D(str((f_prime_x * ans - f_x) / f_prime_x))
    print(round(ans,6))