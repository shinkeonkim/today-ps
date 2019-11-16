n =int(input())
L = [0,0,1]
for i in range(3,n+1):
    L.append(L[-2]*2 + L[-1])
print(L[n])