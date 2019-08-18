L=[]
for i in range(int(input())):
    L.append([i+1]+list(map(int,input().split())))

L.sort(key = lambda t : t[3])
L.sort(key = lambda t : t[2])
L.sort(key = lambda t: 700-t[1])

print(L[0][0])