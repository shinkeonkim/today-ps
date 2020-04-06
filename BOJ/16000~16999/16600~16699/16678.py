from sys import stdin
n = int(stdin.readline())
L = [int(stdin.readline()) for i in range(n)]
ans = 0
threshhold = 1
L.sort()
for i in range(len(L)):
    if threshhold < L[i]:
        ans += L[i] - threshhold
        threshhold +=1
    elif threshhold == L[i]:
        threshhold +=1
print(ans)