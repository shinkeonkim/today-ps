def gcd(a,b):
    return gcd(b,a%b) if b>0 else a
for t in range(int(input())):
    L = list(map(int,input().split()))
    ans = 1
    for i in range(len(L)):
        for j in range(i+1,len(L)):
            k = gcd(L[i],L[j])
            ans = max(ans,k)
    print(ans)