L = [(i,j) for i in range(1,300) for j in range(i+1,300)]
L.sort(key = lambda t:(t[0]**2 + t[1]**2 , t[0]))
d = {}
for i in range(len(L)):
    d[L[i]] = i

while True:
    a,b = map(int,input().split())
    if a == b == 0:
        break
    print(L[d[(a,b)]+1][0],L[d[(a,b)]+1][1])