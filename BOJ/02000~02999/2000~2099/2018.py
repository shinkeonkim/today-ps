import math
n = int(input())
s = 0
ans = 0
for i in range(1,n//2+1):
    s+=i
    if (n-s) >= 0 and (n-s)%i ==0:
        ans+=1
print(ans)