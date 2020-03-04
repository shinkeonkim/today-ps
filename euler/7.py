Mx = 150000
result = [0]

L = [i for i in range(Mx)]
L[0]=L[1] = -1


for i in range(2,Mx):
    if L[i] == i:
        result.append(i)
        for j in range(i+i,Mx,i):
            L[j] = -1

print(result[10001])