T = int(input())
cnt = 0
L = sorted([int(input()) for i in range(int(input()))])
for i in L:
    if T - i >=0:
        T-=i
        cnt+=1
print(cnt)
