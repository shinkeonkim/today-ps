n=int(input())
a=list(map(int,input().split()))
b=list(input().split())
L=[]
k=-1
for i in range(n):
    L.append([a[i],b[i]])

for j in range(n):
    for i in range(n):
        L[i][0]=a[i]
    L.sort(key = lambda t : t[0])
    if [i[1] for i in L] == b and j >2:
        k=j

for i in range(n):
    L[i][0]=a[i]
    L[i][1]=b[i]

for j in range(k-2):
    for i in range(n):
        L[i][0]=a[i]
    L.sort(key = lambda t : t[0])

for i in L:
    print(i[1])