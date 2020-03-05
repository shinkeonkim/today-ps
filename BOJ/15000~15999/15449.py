L = list(map(int,input().split()))
L.sort()
cnt = 0
for i in range(5):
    for j in range(i+1,5):
        for k in range(j+1,5):
            if L[k] < L[i] + L[j]:
                cnt+=1
print(cnt)