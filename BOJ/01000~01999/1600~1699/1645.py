n = int(input())
L = [int(input()) for i in range(n)]
L.sort()
ans = 0
for i in range(n):
    if L[i]+1 <=i+1:
        print(i+1)
        break
else:
    print(0)