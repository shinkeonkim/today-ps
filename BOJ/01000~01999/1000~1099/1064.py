from math import sqrt
import sys

def dis(a,b):
    return (a[0]-b[0])**2 + (a[1]-b[1])**2

L = list(map(int,input().split()))
ans = []
L = [[L[i],L[i+1]] for i in range(0,6,2)]

if (L[1][1]-L[0][1]) * (L[2][0]-L[0][0]) == (L[1][0]-L[0][0]) * (L[2][1]-L[0][1]):
    print(-1)
    sys.exit()
    
for i in range(3):
    ans.append(2*(sqrt(dis(L[i],L[(i+1)%3]))+ sqrt(dis(L[i],L[(i+2)%3]))))

print(max(ans) - min(ans))