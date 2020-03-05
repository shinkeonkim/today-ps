H,W = map(int,input().split())
L = [input() for i in range(H)]
D = [[H*W]*W for i in range(H)]

for i in range(H):
    for j in range(W):
        if L[i][j] =='c':
            D[i][j] = 0
            for k in range(j+1,W,1):
                D[i][k] = k-j

for i in range(H):
    for j in range(W):
        if D[i][j] == H*W:
            print(-1,end= " ")
        else:
            print(D[i][j],end=" ")
    print()