L=[1,0,0]
for i in input():
    if i == 'A':
        L[0],L[1]=L[1],L[0]
    if i == 'B':
        L[1],L[2]=L[2],L[1]
    if i == 'C':
        L[0],L[2]=L[2],L[0]
print(L.index(1)+1)