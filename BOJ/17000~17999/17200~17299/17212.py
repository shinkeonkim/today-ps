L=[9999999]*220000
N=int(input())
d=[1,2,5,7]
for i in d:
    L[i]=1
for i in range(3,N+1):
    for j in d:
        if i-j>=0 and L[i] > L[i-j]+1:
            L[i]=L[i-j]+1
print(L[N])
