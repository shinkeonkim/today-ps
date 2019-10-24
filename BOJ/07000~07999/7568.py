n=int(input())
L=[]
k=[1]*n
for i in range(n):
    L.append(list(map(int,input().split())))

for i in range(n):
    for j in range(n):
        if i !=j and L[i][0] > L[j][0] and L[i][1] > L[j][1]:
            k[j]+=1
for i in range(len(k)):
    print(k[i],end=" ")