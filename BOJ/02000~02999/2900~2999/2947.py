L=list(map(int,input().split()))
for i in range(len(L)):
    for j in range(len(L)-1):
        if L[j] > L[j+1]:
            L[j],L[j+1]=L[j+1],L[j]
            for x in L:
                print(x,end=" ")
            print()