tc = int(input())
for _ in range(tc):
    L = [list(map(int,list(input()))) for i in range(9)]
    D = [[0,0],[3,1],[6,2],[1,3],[4,4],[7,5],[2,6],[5,7],[8,8]]

    for i in D:
        Y = i[0]
        X = i[1]
        L[Y][X] = L[Y][X] +1
        if L[Y][X] == 10:
            L[Y][X] = 1
    
    for s in L:
        for x in s:
            print(x,end="")
        print()