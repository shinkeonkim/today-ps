L = [0,1,0,0]
for i in range(int(input())):
    a,b=map(int,input().split())
    L[a],L[b] = L[b],L[a]
print(L.index(1))