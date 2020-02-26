import sys
n = int(sys.stdin.readline())
L = [int(sys.stdin.readline()) for i in range(n)]

m = L[-1]
cnt = 1
for i in range(len(L)-2,-1,-1):
    if m < L[i]:
        cnt+=1
        m = L[i]
print(cnt)