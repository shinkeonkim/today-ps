n = int(input())
L = list(map(int,input().split()))
L = [[i,L[i],i] for i in range(n)]
L.sort(key = lambda t:(t[1],t[0]))
for i in range(n):
    L[i][2] = i
L.sort(key = lambda t:t[0])
for i in L:
    print(i[2],end= " ")