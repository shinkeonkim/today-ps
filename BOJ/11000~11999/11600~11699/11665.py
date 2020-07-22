import sys
n = int(input())
result = []
for t in range(n):
    I = list(map(int,input().split()))
    if t == 0:
        result = I
        continue
    L = [0]*6
    for i in range(3):
        L[i] = max(I[i],result[i])
    for i in range(3,6):
        L[i] = min(I[i],result[i])
    result = L
ans = 1
for i in range(3):
    ans *= result[i+3]-result[i]
print(max(ans,0))