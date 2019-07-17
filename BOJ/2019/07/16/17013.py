L=[[1,2],[3,4]]
a=input()
for i in list(a):
    if i == 'V':
        for j in range(2):
            L[j][0],L[j][1] = L[j][1],L[j][0]
    else:
        for j in range(2):
            L[0][j],L[1][j] = L[1][j],L[0][j]
for i in range(2):
    print(L[i][0],L[i][1])