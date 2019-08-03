L=[1]
n=int(input())
for i in range(1,n+1):
    L.append(0)
    for j in range(i):
        L[i] += L[j]*L[i-j-1]
print(L[n])