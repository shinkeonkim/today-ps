a,b,c=map(int,input().split())
M = 0
for i in range(1,a+1):
    for j in range(1,b+1):
        for k in range(1,c+1):
            if max((i,j,k)) < sum((i,j,k)) - max((i,j,k)):
                if i+j+k > M:
                    M = i+j+k
print(M)