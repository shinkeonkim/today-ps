def gcd(a,b):
    return gcd(b,a%b) if b>0 else a
t = int(input())
D = [0]*1100
S = set()
for i in range(1,1001):
    for j in range(1,i+1):
        a = i
        b = j
        k = gcd(i,j)
        S.add((a//k)*1000 + (b//k))
        if(a!=b):
            S.add((b//k)*1000 + (a//k))
    D[i] = len(S)

for i in range(t):
    print(D[int(input())]+2) 