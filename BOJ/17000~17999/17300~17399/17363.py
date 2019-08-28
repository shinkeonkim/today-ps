D = {".":".","O":"O","-":"|","|":"-","/":"\\","\\":"/","^":"<","<":"v","v":">",">":"^"}
N,M=map(int,input().split())
L = []
for i in range(N):
    L.append(input())
for x in range(M-1,-1,-1):
    for y in range(N):
        print(D[L[y][x]],end="")
    print()
