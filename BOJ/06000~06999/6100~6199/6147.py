N,K=list(map(int,input().split()))
L=[]
for i in range(N):
    L.append(int(input()))
L.sort(reverse=True)
cnt=1
S=L[0]
while S < K:
    S+=L[cnt]
    cnt+=1
print(cnt)