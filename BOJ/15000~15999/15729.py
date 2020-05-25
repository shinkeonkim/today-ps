n = int(input())
L = list(map(int,input().split()))
D = [0]*n
cnt = 0
for i in range(n):
    if L[i] != D[i]:
        cnt+=1
        for j in range(3):
            if i+j < n:
                D[i+j] = 1-D[i+j]
print(cnt)