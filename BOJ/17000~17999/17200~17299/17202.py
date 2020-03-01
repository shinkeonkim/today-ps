a = list(map(int,list(input())))
b = list(map(int,list(input())))
L = []
L2 = []
for i in range(8):
    L.extend([a[i],b[i]])

while len(L) >2:
    L2 = []
    for i in range(1,len(L)):
        L2.append((L[i-1]+L[i])%10)
    L = L2[:]
print("{}{}".format(L[0],L[1]))

