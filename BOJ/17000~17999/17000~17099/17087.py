def gcd(a,b):
    return gcd(b,a%b) if b>0 else a

N,S = map(int,input().split())
L = list(map(int,input().split()))
ans = abs(S-L[0])
for i in L:
    ans = gcd(ans,abs(i-S))
print(ans)