import sys
n = int(sys.stdin.readline())
L = [int(sys.stdin.readline()) for i in range(n)]

D = [0]*30

for i in L:
    k = i
    cnt = 0
    while k > 0:
        D[cnt] += k%2
        k//=2
        cnt+=1
ans = 0
c = 1
for i in D:
    ans += c*(i*(n-i))
    c*=2
print(ans)