D = [i for i in range(1100)]
L = []
for i in range(2,1001):
    if D[i] == i:
        L.append(i)
        for j in range(i+i,1001,i):
            D[j]=-1

input_list =[]
for i in range(int(input())):
    input_list.append(int(input()))

for i in input_list:
    check = False
    for x in range(len(L)):
        for y in range(len(L)):
            for z in range(len(L)):
                if(L[x]+L[y]+L[z] == i):
                    print(L[x],L[y],L[z])
                    check=True
                if check: break
            if check: break
        if check: break