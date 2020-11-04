n = int(input())
L = list(map(int,input().split()))
s = 0
t = max(L[0],L[2])
for i in range(1, len(L)-2):
    tmp = max(L[i], L[i+2])
    if t > tmp:
        t = tmp
        s = i
print(s+1, t)