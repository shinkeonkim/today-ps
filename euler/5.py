def gcd(a,b):
    return gcd(b,a%b) if b>0 else a

n = 20
s = 1
for i in range(2,n+1):
    s = s*i // gcd(s,i)

print(s)