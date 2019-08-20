P,K=map(int,input().split())
L=[i for i in range(K)]
k=[]
L[0]=-1
L[1]=-1
for i in range(K):
    if L[i] == i:
        k.append(i)
        for j in range(i+i,K,i):
            L[j]=-1
for i in k:
    if P%i == 0:
        print("BAD",i)
        break
else:
    print("GOOD")
