L = list(map(int,list(input())))
i = 0
k = 1
while i < len(L):
    L2 = list(map(int,list(str(k))))
    j = 0
    while i<len(L) and j <len(L2):
        if L[i] == L2[j]:
            i+=1
        j+=1
    k+=1
print(k-1)