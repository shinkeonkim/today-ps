S = 0
T = int(input())
for i in range(T):
    L = input().split()
    L2 = []
    for j in L:
        L2.append(list(map(int,j.split("."))))
    for j in range(4):
        L[j] = L2[j][0]*100+L2[j][1]
    if ((L[0] <= 5600 and L[1] <= 4500 and L[2] <= 2500) or sum(L)-L[-1] <= 12500) and L[-1] <=700:
        print(1)
        S+=1
    else:
        print(0)
print(S)