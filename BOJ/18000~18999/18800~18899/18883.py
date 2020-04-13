N,M=map(int,input().split())
for i in range(N):
    for j in range(M):
        if(j != M-1):
            print(i*M+j+1,end=" ")
        else:
            print(i*M+j+1,end="")
    print()