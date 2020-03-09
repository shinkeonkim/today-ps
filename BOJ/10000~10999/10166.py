def gcd(a,b):
    return gcd(b,a%b) if b>0 else a

S = set()
d1,d2 = map(int,input().split())
for i in range(d1,d2+1):
    for j in range(1,i+1):
        k = gcd(j,i)
        a,b = j//k,i//k
        S.add(a*2000+b)
print(len(S))
