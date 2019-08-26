n=input()
L = list(map(int,input().split()))
S = sum(L)
k = -1
for i,j in enumerate(L):
    if S == 2*j:
        k = i
        break

for i in range(len(L)):
    if i !=k:
        print(L[i],end=" ")
print(L[k],end=" ")