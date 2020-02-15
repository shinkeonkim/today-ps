def gcd(a,b):
    return gcd(b,a%b) if b>0 else a

a,b,c=map(int,input().split())
if a*b//gcd(a,b) <=c:
    print("yes")
else:
    print("no")