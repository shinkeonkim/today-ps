n = int(input())
for i in range(0,n):
    if i%2==0:
        for j in range(i*n+1,(i+1)*n+1):
            print(j,end= " ")
    else:
        for j in range((i+1)*n,i*n,-1):
            print(j,end= " ")
    print()