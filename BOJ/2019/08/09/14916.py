L=[987654321]*(220000)
n=int(input())
L[2]=1
L[5]=1
for i in range(4,n+1):
    if L[i] > L[i-2] + 1:
        L[i] = L[i-2] +1
    if i-5>=0 and L[i] > L[i-5] + 1:
        L[i] = L[i-5] +1
if L[n] == 987654321:
    print(-1)
else:
    print(L[n])