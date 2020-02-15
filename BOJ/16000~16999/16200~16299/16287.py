import sys
k,n=map(int,input().split())
L = list(map(int,input().split()))
l = n//2-1
d = {}
ans = 0
for i in range(l+1):
    for j in range(i+1,l+1):
        try:
            d[L[i]+L[j]] +=1
        except:
            d[L[i]+L[j]] = 1

for i in range(l+1,len(L)):
    for j in range(i+1,len(L)):
        try:
            ans += d[k-(L[i] + L[j])] 
        except:
            continue
        else:
            print("YES")
            sys.exit() 
print("NO")