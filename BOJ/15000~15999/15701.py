from math import *
a=int(input())
ans = 0
for i in range(1,int(sqrt(a))+1):
    if a%i == 0:
        if i*i == a:
            ans+=1
            break
        else:
            ans+=2

print(ans)