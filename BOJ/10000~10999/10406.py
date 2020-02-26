W,N,P =map(int,input().split())
cnt = 0
L = list(map(int,input().split()))
for i in L:
    if W <= i <= N:
        cnt+=1
print(cnt)