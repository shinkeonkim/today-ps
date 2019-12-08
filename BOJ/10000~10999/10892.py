n = int(input())
L = [list(map(int,input().split()))+[i+1] for i in range(n*3)]
L.sort(key = lambda t:(t[0],t[1]))
for i in range(0,len(L),3):
    print(L[i][2],L[i+1][2],L[i+2][2])
