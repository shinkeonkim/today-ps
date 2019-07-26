n=int(input())
L=[]
D = [0] * 1100
M = 0
S = 0

for i in range(n):
    L.append(list(map(int,input().split())))

for i in L:
    for j in range(i[0],i[1]):
        D[j]+=1

for i in L:
    S = 0
    for j in range(0,1001):
        if i[0] <= j < i[1]:
            if D[j]-1>0:
                S+=1
        else:
            if D[j]>0:
                S+=1
    if S>M:
        M=S
print(M)